`timescale 1ns/1ps

module tb_sd_init;

reg sd_clk;
reg reset;
reg start;

wire init_done;
wire init_error;

wire [5:0] cmd_index;
wire [31:0] cmd_arg;
wire [6:0] cmd_crc7;
wire cmd_start;
wire response_start;

wire cmd_busy;
wire cmd_done;

wire response_busy;
wire response_done;
wire response_valid;
wire [5:0] response_cmd;
wire [31:0] response_status;
wire [6:0] response_crc;

wire sd_cmd;

wire [2:0] response_type;

reg card_cmd_oe;
reg card_cmd_out;

reg [47:0] received_command;
reg [47:0] response_data;

integer acmd41_count;

wire [119:0] response_long;
wire [119:0] card_cid;
wire [15:0] card_rca;
wire [119:0] card_csd;

assign sd_cmd = card_cmd_oe ? card_cmd_out : 1'bz;

SD_init init_inst (
    .sd_clk(sd_clk),
    .reset(reset),
    .start(start),

    .init_done(init_done),
    .init_error(init_error),

    .cmd_index(cmd_index),
    .cmd_arg(cmd_arg),
    .cmd_crc7(cmd_crc7),
    .cmd_start(cmd_start),
    .response_start(response_start),

    .response_type(response_type),
    .card_cid(card_cid),
    .card_rca(card_rca),
    .card_csd(card_csd),

    .cmd_busy(cmd_busy),
    .cmd_done(cmd_done),

    .response_busy(response_busy),
    .response_done(response_done),
    .response_valid(response_valid),
    .response_cmd(response_cmd),
    .response_status(response_status),
    .response_crc(response_crc),
    .response_long(response_long)
);
SD_cmd uut_cmd (
    .sd_clk(sd_clk),
    .reset(reset),
    .crc7(cmd_crc7),
    .cmd_start(cmd_start),
    .cmd_arg(cmd_arg),
    .cmd_index(cmd_index),
    .cmd_busy(cmd_busy),
    .cmd_done(cmd_done),
    .cmd(sd_cmd)
);
sd_response response_inst (
    .sd_clk(sd_clk),
    .reset(reset),
    .response_start(response_start),
    .cmd(sd_cmd),
    .response_type(response_type),

    .response_busy(response_busy),
    .response_done(response_done),
    .response_valid(response_valid),

    .response_cmd(response_cmd),
    .response_status(response_status),
    .response_crc(response_crc),

    .response_long(response_long)
);
always #1250 sd_clk = ~sd_clk;

task receive_command;

    integer j;

    begin

        wait (cmd_busy == 1'b1);

        @(negedge sd_clk);

        for (j = 47; j >= 0; j = j - 1) begin

            received_command[j] = sd_cmd;

            @(negedge sd_clk);

        end

        $display("");
        $display("CARD RECEIVED COMMAND = %h", received_command);

    end

endtask

task send_response;

    input [47:0] data;

    integer j;

    begin

        wait (response_start == 1'b1);

        wait (response_busy == 1'b1);

        response_data = data;

        @(negedge sd_clk);

        card_cmd_oe = 1'b1;

        for (j = 47; j >= 0; j = j - 1) begin

            card_cmd_out = response_data[j];

            @(negedge sd_clk);

        end

        card_cmd_oe = 1'b0;
        card_cmd_out = 1'b1;

    end

endtask

task send_r6_response;

    input [15:0] rca;

    begin

        send_response({
            1'b0,
            1'b1,
            6'd3,
            rca,
            16'd0,
            7'd0,
            1'b1
        });

    end

endtask

task send_r2_response;

    input [119:0] cid;

    reg [135:0] response_data_r2;

    integer j;

    begin

        wait (response_start == 1'b1);
        wait (response_busy == 1'b1);

        response_data_r2 = {
            1'b0,
            1'b0,
            6'b000000,
            cid,
            7'b1010101,
            1'b1
        };

        @(negedge sd_clk);

        card_cmd_oe = 1'b1;

        for (j = 135; j >= 0; j = j - 1) begin

            card_cmd_out = response_data_r2[j];

            @(negedge sd_clk);

        end

        card_cmd_oe = 1'b0;
        card_cmd_out = 1'b1;

    end

endtask

initial begin

    sd_clk = 1'b0;
    reset = 1'b1;
    start = 1'b0;

    card_cmd_oe = 1'b0;
    card_cmd_out = 1'b1;

    received_command = 48'd0;
    response_data = 48'd0;

    acmd41_count = 0;

    #10000;

    reset = 1'b0;

    #5000;

    start = 1'b1;

    #2500;

    start = 1'b0;

end

initial begin

    forever begin

        receive_command;

        case (received_command[45:40])

            6'd0: begin

                $display("CARD: CMD0");

            end

            6'd2: begin

                $display("CARD: CMD2");

                send_r2_response(
                    120'h123456789ABCDEF001122334455667
                );

            end

            6'd3: begin

                $display("CARD: CMD3");

                send_r6_response(16'h1234);

            end

            6'd7: begin

                $display("CARD: CMD7");

                send_response(48'h470000000065);

            end

            6'd9: begin

                $display("CARD: CMD9");

                send_r2_response(
                    120'h112233445566778899AABBCCDDEEFF
                );

            end

            6'd8: begin

                $display("CARD: CMD8");

                send_response(48'h48000001AA87);

            end

            6'd55: begin

                $display("CARD: CMD55");

                send_response(48'h770000000065);

            end

            6'd41: begin

                acmd41_count = acmd41_count + 1;

                $display("CARD: ACMD41 attempt %0d", acmd41_count);

                if (acmd41_count == 1) begin

                    send_response(48'h690000000001);

                end

                else begin

                    send_response(48'h69C000000001);

                end

            end

            default: begin

                $display("CARD: UNKNOWN COMMAND %0d",
                         received_command[45:40]);

            end

        endcase

    end

end

initial begin

    wait (init_done || init_error);

    #5000;

$display("");
$display("========================================");
$display("         SD INITIALIZATION RESULT");
$display("========================================");

$display("ACMD41 Attempts = %0d", acmd41_count);

$display("Response CMD    = %d", response_cmd);
$display("Response Status = %h", response_status);
$display("Response CRC    = %h", response_crc);
$display("Response Valid  = %b", response_valid);
$display("CID             = %030h", card_cid);
$display("RCA             = %04h", card_rca);
$display("CSD             = %030h", card_csd);

if (init_done) begin

    $display("");
    $display("SD CARD READY");
    $display("SD INIT PASSED");

end

else begin

    $display("");
    $display("SD INIT FAILED");

end

$display("========================================");
$display("");

    #10000;

    $finish;

end

initial begin

    #10000000;

    $display("");
    $display("TIMEOUT");
    $display("SD INIT FAILED");
    $display("");

    $finish;

end

endmodule

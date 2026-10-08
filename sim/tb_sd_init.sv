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
wire read_start;

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

wire read_done;
wire read_busy;
wire read_valid;
wire read_crc_valid;
wire [8:0] data_addr;
wire [7:0] data_byte;
wire data_write;
reg card_dat0;
wire sd_dat0;
integer read_byte_count;
integer read_data_errors;
reg [15:0] sent_data_crc;

assign sd_cmd = card_cmd_oe ? card_cmd_out : 1'bz;
assign sd_dat0 = card_dat0;

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
    .read_start(read_start),

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
    .response_long(response_long),

    .read_done(read_done),
    .read_valid(read_valid),
    .read_crc_valid(read_crc_valid)
);

sd_data_rx data_rx_inst (
    .sd_clk(sd_clk),
    .reset(reset),
    .start(read_start),
    .sd_dat0(sd_dat0),

    .busy(read_busy),
    .done(read_done),
    .valid(read_valid),

    .data_addr(data_addr),
    .data_byte(data_byte),
    .data_write(data_write),

    .crc_valid(read_crc_valid)
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

function [15:0] crc16_byte;
    input [15:0] crc_in;
    input [7:0] data_in;
    reg [15:0] crc;
    integer i;
    begin
        crc = crc_in;
        for (i = 7; i >= 0; i = i - 1) begin
            if (crc[15] ^ data_in[i])
                crc = {crc[14:0], 1'b0} ^ 16'h1021;
            else
                crc = {crc[14:0], 1'b0};
        end
        crc16_byte = crc;
    end
endfunction

task send_dat0_bit;
    input bit_value;
    begin
        @(negedge sd_clk);
        card_dat0 = bit_value;
    end
endtask

task send_dat0_byte_from_current_edge;
    input [7:0] byte_value;
    integer i;
    begin
        card_dat0 = byte_value[7];
        for (i = 6; i >= 0; i = i - 1)
            send_dat0_bit(byte_value[i]);
    end
endtask

task send_dat0_byte;
    input [7:0] byte_value;
    integer i;
    begin
        for (i = 7; i >= 0; i = i - 1)
            send_dat0_bit(byte_value[i]);
    end
endtask

task send_read_data;
    integer i;
    reg [7:0] data_value;
    reg [15:0] crc_value;
    begin
        wait (read_start || read_busy);
        @(posedge sd_clk);
        @(negedge sd_clk);
        crc_value = 16'd0;

        send_dat0_byte_from_current_edge(8'hFE);

        for (i = 0; i < 512; i = i + 1) begin
            data_value = i[7:0];
            crc_value = crc16_byte(crc_value, data_value);
            send_dat0_byte(data_value);
        end

        send_dat0_byte(crc_value[15:8]);
        send_dat0_byte(crc_value[7:0]);
        sent_data_crc = crc_value;
        @(negedge sd_clk);
        card_dat0 = 1'b1;
    end
endtask

initial begin

    sd_clk = 1'b0;
    reset = 1'b1;
    start = 1'b0;

    card_cmd_oe = 1'b0;
    card_cmd_out = 1'b1;
    card_dat0 = 1'b1;

    received_command = 48'd0;
    response_data = 48'd0;

    acmd41_count = 0;
    read_byte_count = 0;
    read_data_errors = 0;
    sent_data_crc = 16'd0;

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

            6'd17: begin

                $display("CARD: CMD17");

                send_response(48'h5100000000D1);
                send_read_data;

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

always @(negedge sd_clk) begin
    #1;
    if (!reset && data_write) begin
        if ((data_addr !== read_byte_count[8:0]) ||
            (data_byte !== read_byte_count[7:0])) begin
            $display("Read data mismatch at byte %0d: addr=%0d data=%02h expected=%02h",
                     read_byte_count, data_addr, data_byte,
                     read_byte_count[7:0]);
            read_data_errors = read_data_errors + 1;
        end
        read_byte_count = read_byte_count + 1;
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
$display("Read bytes      = %0d", read_byte_count);
$display("Read data errors= %0d", read_data_errors);
$display("Transmitted CRC = %04h", sent_data_crc);

if (init_done &&
    (read_byte_count == 512) &&
    (read_data_errors == 0)) begin

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

    #30000000;

    $display("");
    $display("TIMEOUT");
    $display("SD INIT FAILED");
    $display("");

    $finish;

end

endmodule

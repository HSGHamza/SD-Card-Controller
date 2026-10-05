
`timescale 1ns/1ps

module tb_sd_response;

reg sd_clk;
reg reset;
reg response_start;

wire cmd;

reg cmd_card_drive;
reg cmd_card_oe;

wire response_busy;
wire response_done;
wire response_valid;
wire [5:0] response_cmd;
wire [31:0] response_status;
wire [6:0] response_crc;

assign cmd = cmd_card_oe ? cmd_card_drive : 1'bz;

sd_response dut (
    .sd_clk(sd_clk),
    .reset(reset),
    .response_start(response_start),
    .cmd(cmd),
    .response_busy(response_busy),
    .response_done(response_done),
    .response_valid(response_valid),
    .response_cmd(response_cmd),
    .response_status(response_status),
    .response_crc(response_crc)
);

always #20 sd_clk = ~sd_clk;

task send_response(
    input [47:0] response
);

    integer i;

    begin

        @(negedge sd_clk);
        response_start = 1'b1;

        @(negedge sd_clk);
        response_start = 1'b0;

        cmd_card_oe = 1'b1;
        cmd_card_drive = response[47];

        @(posedge sd_clk);

        for (i = 46; i >= 0; i = i - 1) begin

            @(negedge sd_clk);
            cmd_card_drive = response[i];

            @(posedge sd_clk);

        end

        @(negedge sd_clk);
        cmd_card_oe = 1'b0;

        @(posedge sd_clk);

        $display("");
        $display("R7 RESPONSE");
        $display("Response CMD    = %0d", response_cmd);
        $display("Response Status = %08h", response_status);
        $display("Response CRC    = %02h", response_crc);
        $display("Response Valid  = %0d", response_valid);

        if (response_cmd == 6'd8 &&
            response_status == 32'h000001AA &&
            response_crc == 7'h43 &&
            response_valid == 1'b1)
            $display("R7 PASSED");
        else
            $display("R7 FAILED");

    end

endtask

initial begin

    sd_clk = 1'b0;
    reset = 1'b1;
    response_start = 1'b0;

    cmd_card_drive = 1'b1;
    cmd_card_oe = 1'b0;

    #100;

    reset = 1'b0;

    #100;

    send_response(
        48'h48000001AA87
    );

    #200;

    $finish;

end

endmodule



`timescale 1ns/1ps

module tb_sd_cmd;

reg sd_clk;
reg reset;
reg [6:0] crc7;
reg cmd_start;
reg [31:0] cmd_arg;
reg [5:0] cmd_index;

wire cmd_busy;
wire cmd_done;
wire cmd;

reg cmd_card_drive;
reg cmd_card_oe;

assign cmd = cmd_card_oe ? cmd_card_drive : 1'bz;

SD_cmd dut (
    .sd_clk(sd_clk),
    .reset(reset),
    .crc7(crc7),
    .cmd_start(cmd_start),
    .cmd_arg(cmd_arg),
    .cmd_index(cmd_index),
    .cmd_busy(cmd_busy),
    .cmd_done(cmd_done),
    .cmd(cmd)
);

always #20 sd_clk = ~sd_clk;

task send_command(
    input [5:0] index,
    input [31:0] arg,
    input [6:0] crc
);

    reg [47:0] received;
    integer i;

    begin

        received = 48'd0;

        cmd_index = index;
        cmd_arg = arg;
        crc7 = crc;

        @(negedge sd_clk);
        cmd_start = 1'b1;

        @(negedge sd_clk);
        cmd_start = 1'b0;

        @(posedge sd_clk);

        for (i = 47; i >= 0; i = i - 1) begin
            @(negedge sd_clk);
            received[i] = cmd;
        end

        $display("");
        $display("CMD%0d", index);
        $display("Received = %012h", received);

        if (index == 0) begin
            if (received == 48'h400000000095)
                $display("CMD0 PASSED");
            else begin
                $display("CMD0 FAILED");
                $display("Expected = 400000000095");
            end
        end

        if (index == 8) begin
            if (received == 48'h48000001AA87)
                $display("CMD8 PASSED");
            else begin
                $display("CMD8 FAILED");
                $display("Expected = 48000001AA87");
            end
        end

        wait(cmd_done == 1'b1);

    end

endtask

initial begin

    sd_clk = 1'b0;
    reset = 1'b1;

    crc7 = 7'd0;
    cmd_start = 1'b0;
    cmd_arg = 32'd0;
    cmd_index = 6'd0;

    cmd_card_drive = 1'b1;
    cmd_card_oe = 1'b0;

    #100;

    reset = 1'b0;

    #100;

    send_command(
        6'd0,
        32'h00000000,
        7'h4A
    );

    #200;

    send_command(
        6'd8,
        32'h000001AA,
        7'h43
    );

    #500;

    $finish;

end

endmodule

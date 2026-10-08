`timescale 1ns/1ps

module tb_sd_response_r2;

reg sd_clk;
reg reset;
reg response_start;
reg cmd;
reg [2:0] response_type;

wire response_busy;
wire response_done;
wire response_valid;
wire [5:0] response_cmd;
wire [31:0] response_status;
wire [6:0] response_crc;
wire [119:0] response_long;

localparam RESPONSE_R1 = 3'd0;
localparam RESPONSE_R2 = 3'd1;
localparam RESPONSE_R3 = 3'd2;
localparam RESPONSE_R6 = 3'd3;

reg [135:0] fake_response;
integer i;

sd_response dut (
    .sd_clk(sd_clk),
    .reset(reset),
    .response_start(response_start),
    .cmd(cmd),
    .response_type(response_type),

    .response_busy(response_busy),
    .response_done(response_done),
    .response_valid(response_valid),

    .response_cmd(response_cmd),
    .response_status(response_status),
    .response_crc(response_crc),

    .response_long(response_long)
);

always #5 sd_clk = ~sd_clk;

task send_r2;
    input [119:0] cid;
    begin
        fake_response = {
            1'b0,
            1'b0,
            6'b000000,
            cid,
            7'b1010101,
            1'b1
        };

        @(posedge sd_clk);
        response_type = RESPONSE_R2;
        response_start = 1'b1;

        @(posedge sd_clk);
        response_start = 1'b0;

        for (i = 135; i >= 0; i = i - 1) begin
            @(negedge sd_clk);
            cmd = fake_response[i];
        end

        @(posedge sd_clk);
        wait(response_done);

        #1;

        $display("");
        $display("========================================");
        $display("             R2 RESPONSE TEST");
        $display("========================================");
        $display("Expected CID = %030h", fake_response[127:8]);
        $display("Received CID = %030h", response_long);
        $display("CRC          = %02h", response_crc);
        $display("Valid        = %b", response_valid);

        if ((response_long == fake_response[127:8]) &&
            response_valid) begin
            $display("R2 TEST PASSED");
        end
        else begin
            $display("R2 TEST FAILED");
            $finish;
        end

        $display("========================================");
    end
endtask

initial begin

    sd_clk = 0;
    reset = 1;
    response_start = 0;
    cmd = 1;
    response_type = RESPONSE_R2;

    #20;

    @(posedge sd_clk);
    reset = 0;

    #20;

    send_r2(
        120'h123456789ABCDEF001122334455667
    );

    #20;

    $finish;

end

endmodule

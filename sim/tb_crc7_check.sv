`timescale 1ns/1ps

module tb_crc7_check;

reg [5:0] response_cmd;
reg [31:0] response_status;
reg [6:0] received_crc;

wire crc_valid;

crc7_check dut (
    .response_cmd(response_cmd),
    .response_status(response_status),
    .received_crc(received_crc),
    .crc_valid(crc_valid)
);

task test_crc(
    input [5:0] cmd,
    input [31:0] status,
    input [6:0] crc,
    input expected
);

    begin

        response_cmd = cmd;
        response_status = status;
        received_crc = crc;

        #10;

        $display("");
        $display("CMD     = %0d", response_cmd);
        $display("STATUS  = %08h", response_status);
        $display("CRC     = %02h", received_crc);
        $display("VALID   = %0d", crc_valid);

        if (crc_valid == expected)
            $display("CRC TEST PASSED");
        else
            $display("CRC TEST FAILED");

    end

endtask

initial begin

    response_cmd = 6'd0;
    response_status = 32'd0;
    received_crc = 7'd0;

    #10;

    test_crc(
        6'd8,
        32'h000001AA,
        7'h43,
        1'b1
    );

    test_crc(
        6'd8,
        32'h000001AA,
        7'h42,
        1'b0
    );

    test_crc(
        6'd0,
        32'h00000000,
        7'h4A,
        1'b1
    );

    test_crc(
        6'd0,
        32'h00000000,
        7'h00,
        1'b0
    );

    #10;

    $finish;

end

endmodule

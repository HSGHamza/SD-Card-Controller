module tb_crc7;

reg [5:0] cmd_index;
reg [31:0] cmd_arg;
wire [6:0] crc;

crc7 dut (
    .cmd_index(cmd_index),
    .cmd_arg(cmd_arg),
    .crc(crc)
);

initial begin

    cmd_index = 6'd0;
    cmd_arg = 32'h00000000;

    #1;

    $display("CMD0 CRC7 = 0x%02h", crc);

    if (crc != 7'h4A)
        $display("CMD0 FAILED");
    else
        $display("CMD0 PASSED");

    cmd_index = 6'd8;
    cmd_arg = 32'h000001AA;

    #1;

    $display("CMD8 CRC7 = 0x%02h", crc);

    if (crc != 7'h43)
        $display("CMD8 FAILED");
    else
        $display("CMD8 PASSED");

    $finish;

end

endmodule

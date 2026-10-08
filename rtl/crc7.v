`timescale 1ns/1ps

module crc7 (
    input [5:0] cmd_index,
    input [31:0] cmd_arg,
    output reg [6:0] crc
);

reg [39:0] data;
reg [6:0] crc_reg;
integer i;

always @(*) begin

    data = {2'b01, cmd_index, cmd_arg};
    crc_reg = 7'd0;

    for (i = 39; i >= 0; i = i - 1) begin
        if (data[i] ^ crc_reg[6])
            crc_reg = {crc_reg[5:0], 1'b0} ^ 7'b0001001;
        else
            crc_reg = {crc_reg[5:0], 1'b0};
    end

    crc = crc_reg;

end

endmodule

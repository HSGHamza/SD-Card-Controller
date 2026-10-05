`timescale 1ns/1ps

module crc7_check (
    input [5:0] response_cmd,
    input [31:0] response_status,
    input [6:0] received_crc,
    output reg crc_valid
);

reg [39:0] data;
reg [6:0] crc_reg;
reg feedback;
integer i;

always @(*) begin

    data = {2'b01, response_cmd, response_status};
    crc_reg = 7'd0;

    for (i = 39; i >= 0; i = i - 1) begin

        feedback = data[i] ^ crc_reg[6];

        crc_reg = {crc_reg[5:0], 1'b0};

        if (feedback)
            crc_reg = crc_reg ^ 7'b0001001;

    end

    if (crc_reg == received_crc)
        crc_valid = 1'b1;
    else
        crc_valid = 1'b0;

end

endmodule


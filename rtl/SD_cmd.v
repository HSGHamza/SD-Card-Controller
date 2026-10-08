`timescale 1ns/1ps

module SD_cmd (
    input sd_clk,
    input reset,
    input [6:0] crc7,
    input cmd_start,
    input [31:0] cmd_arg,
    input [5:0] cmd_index,
    output reg cmd_busy,
    output reg cmd_done,
    inout cmd
);

reg [47:0] cmd_shift_reg;
reg [5:0] counter;
reg cmd_out;
reg cmd_oe;

localparam IDLE    = 2'd0;
localparam SEND    = 2'd1;
localparam RELEASE = 2'd2;

reg [1:0] state;

assign cmd = cmd_oe ? cmd_out : 1'bz;

always @(posedge sd_clk) begin

    if (reset) begin
        cmd_shift_reg <= 48'd0;
        counter <= 6'd0;
        cmd_busy <= 1'b0;
        cmd_done <= 1'b0;
        cmd_out <= 1'b1;
        cmd_oe <= 1'b0;
        state <= IDLE;
    end

    else begin

        cmd_done <= 1'b0;

        case (state)

            IDLE: begin

                cmd_busy <= 1'b0;
                cmd_oe <= 1'b0;
                counter <= 6'd0;

                if (cmd_start) begin

                    cmd_shift_reg <= {
                        1'b0,
                        1'b1,
                        cmd_index,
                        cmd_arg,
                        crc7,
                        1'b1
                    };

                    cmd_out <= 1'b0;
                    cmd_oe <= 1'b1;
                    cmd_busy <= 1'b1;
                    counter <= 6'd0;
                    state <= SEND;

                end

            end

            SEND: begin

                if (counter == 6'd47) begin

                    cmd_busy <= 1'b0;
                    state <= RELEASE;

                end

                else begin

                    cmd_shift_reg <= {
                        cmd_shift_reg[46:0],
                        1'b0
                    };

                    cmd_out <= cmd_shift_reg[46];
                    counter <= counter + 1'b1;

                end

            end

            RELEASE: begin

                cmd_oe <= 1'b0;
                cmd_out <= 1'b1;
                cmd_done <= 1'b1;
                counter <= 6'd0;
                state <= IDLE;

            end

            default: begin

                cmd_shift_reg <= 48'd0;
                counter <= 6'd0;
                cmd_busy <= 1'b0;
                cmd_done <= 1'b0;
                cmd_out <= 1'b1;
                cmd_oe <= 1'b0;
                state <= IDLE;

            end

        endcase

    end

end

endmodule

`timescale 1ns/1ps

module sd_response (
    input sd_clk,
    input reset,
    input response_start,
    input cmd,
    input [2:0] response_type,

    output reg response_busy,
    output reg response_done,
    output reg response_valid,

    output reg [5:0] response_cmd,
    output reg [31:0] response_status,
    output reg [6:0] response_crc,

    output reg [119:0] response_long
);

localparam RESPONSE_R1  = 3'd0;
localparam RESPONSE_R2  = 3'd1;
localparam RESPONSE_R3  = 3'd2;
localparam RESPONSE_R6  = 3'd3;
localparam RESPONSE_R1B = 3'd4;

localparam IDLE        = 2'd0;
localparam WAIT_START  = 2'd1;
localparam RECEIVE     = 2'd2;

reg [1:0] state;

reg [135:0] response_shift_reg;
reg [7:0] counter;

reg [2:0] active_response_type;

wire [135:0] response_next = {
    response_shift_reg[134:0],
    cmd
};

always @(posedge sd_clk) begin

    if (reset) begin

        response_shift_reg <= 136'd0;
        counter <= 8'd0;

        response_busy <= 1'b0;
        response_done <= 1'b0;
        response_valid <= 1'b0;

        response_cmd <= 6'd0;
        response_status <= 32'd0;
        response_crc <= 7'd0;

        response_long <= 120'd0;

        active_response_type <= RESPONSE_R1;

        state <= IDLE;

    end

    else begin

        response_done <= 1'b0;

        case (state)

            IDLE: begin

                response_busy <= 1'b0;
                counter <= 8'd0;

                if (response_start) begin

                    response_busy <= 1'b1;
                    response_valid <= 1'b0;

                    active_response_type <= response_type;

                    state <= WAIT_START;

                end

            end

            WAIT_START: begin

                if (cmd == 1'b0) begin

                    response_shift_reg <= 136'd0;
                    response_shift_reg[0] <= 1'b0;

                    counter <= 8'd1;

                    state <= RECEIVE;

                end

            end

            RECEIVE: begin

                response_shift_reg <= response_next;

                if (active_response_type == RESPONSE_R2) begin

                    if (counter == 8'd135) begin

                        response_busy <= 1'b0;
                        response_done <= 1'b1;

                        response_long <= response_next[127:8];

                        if ((response_next[135] == 1'b0) &&
                            (response_next[134] == 1'b0) &&
                            (response_next[0] == 1'b1))
                            response_valid <= 1'b1;
                        else
                            response_valid <= 1'b0;

                        counter <= 8'd0;
                        state <= IDLE;

                    end

                    else begin

                        counter <= counter + 1'b1;

                    end

                end

                else begin

                    if (counter == 8'd47) begin

                        response_busy <= 1'b0;
                        response_done <= 1'b1;

                        response_cmd <= response_next[45:40];
                        response_status <= response_next[39:8];
                        response_crc <= response_next[7:1];

                        if ((response_next[47] == 1'b0) &&
                            (response_next[46] == 1'b0) &&
                            (response_next[0] == 1'b1))
                            response_valid <= 1'b1;
                        else
                            response_valid <= 1'b0;

                        counter <= 8'd0;
                        state <= IDLE;

                    end

                    else begin

                        counter <= counter + 1'b1;

                    end

                end

            end

            default: begin

                response_shift_reg <= 136'd0;
                counter <= 8'd0;

                response_busy <= 1'b0;
                response_done <= 1'b0;
                response_valid <= 1'b0;

                response_cmd <= 6'd0;
                response_status <= 32'd0;
                response_crc <= 7'd0;

                response_long <= 120'd0;

                active_response_type <= RESPONSE_R1;

                state <= IDLE;

            end

        endcase

    end

end

endmodule

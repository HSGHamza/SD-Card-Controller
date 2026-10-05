`timescale 1ns/1ps

module sd_response (
    input sd_clk,
    input reset,
    input response_start,
    input cmd,
    output reg response_busy,
    output reg response_done,
    output reg response_valid,
    output reg [5:0] response_cmd,
    output reg [31:0] response_status,
    output reg [6:0] response_crc
);

reg [47:0] response_shift_reg;
reg [5:0] counter;

localparam IDLE = 2'd0;
localparam WAIT_START = 2'd1;
localparam RECEIVE = 2'd2;

reg [1:0] state;

wire [47:0] response_next = {
    response_shift_reg[46:0],
    cmd
};

always @(posedge sd_clk) begin

    if (reset) begin
        response_shift_reg <= 48'd0;
        counter <= 6'd0;
        response_busy <= 1'b0;
        response_done <= 1'b0;
        response_valid <= 1'b0;
        response_cmd <= 6'd0;
        response_status <= 32'd0;
        response_crc <= 7'd0;
        state <= IDLE;
    end

    else begin

        response_done <= 1'b0;
        response_valid <= 1'b0;

        case (state)

            IDLE: begin

                response_busy <= 1'b0;
                counter <= 6'd0;

                if (response_start) begin
                    response_busy <= 1'b1;
                    state <= WAIT_START;
                end

            end

            WAIT_START: begin

                if (cmd == 1'b0) begin
                    response_shift_reg <= {47'd0, 1'b0};
                    counter <= 6'd1;
                    state <= RECEIVE;
                end

            end

            RECEIVE: begin

                response_shift_reg <= {
                    response_shift_reg[46:0],
                    cmd
                };

                if (counter == 6'd47) begin

                    response_busy <= 1'b0;
                    response_done <= 1'b1;

                    response_cmd <= response_next[45:40];
                    response_status <= response_next[39:8];
                    response_crc <= response_next[7:1];

		if ((response_next[47] == 1'b0) &&
		    (response_next[46] == 1'b1) &&
		    (response_next[0] == 1'b1))
		    response_valid <= 1'b1;

                    counter <= 6'd0;
                    state <= IDLE;

                end

                else begin
                    counter <= counter + 1'b1;
                end

            end

            default: begin

                response_shift_reg <= 48'd0;
                counter <= 6'd0;
                response_busy <= 1'b0;
                response_done <= 1'b0;
                response_valid <= 1'b0;
                response_cmd <= 6'd0;
                response_status <= 32'd0;
                response_crc <= 7'd0;
                state <= IDLE;

            end

        endcase

    end

end

endmodule

`timescale 1ns/1ps

module SD_init (
    input sd_clk,
    input reset,
    input start,

    output reg init_done,
    output reg init_error,

    output reg [5:0] cmd_index,
    output reg [31:0] cmd_arg,
    output [6:0] cmd_crc7,
    output reg cmd_start,
    output reg response_start,

    input cmd_busy,
    input cmd_done,

    input response_busy,
    input response_done,
    input response_valid,
    input [5:0] response_cmd,
    input [31:0] response_status,
    input [6:0] response_crc
);

wire [6:0] crc7_value;
wire crc_valid;

crc7 crc7_inst (
    .cmd_index(cmd_index),
    .cmd_arg(cmd_arg),
    .crc(crc7_value)
);

assign cmd_crc7 = crc7_value;

crc7_check crc7_check_inst (
    .response_cmd(response_cmd),
    .response_status(response_status),
    .received_crc(response_crc),
    .crc_valid(crc_valid)
);

localparam IDLE        = 4'd0;
localparam CMD0        = 4'd1;
localparam WAIT_CMD0   = 4'd2;
localparam CMD8        = 4'd3;
localparam WAIT_CMD8   = 4'd4;
localparam WAIT_RESP8  = 4'd5;
localparam CMD55       = 4'd6;
localparam WAIT_CMD55  = 4'd7;
localparam WAIT_RESP55 = 4'd8;
localparam ACMD41      = 4'd9;
localparam WAIT_ACMD41 = 4'd10;
localparam WAIT_RESP41 = 4'd11;
localparam DONE        = 4'd12;
localparam ERROR       = 4'd13;

reg [3:0] state;

always @(posedge sd_clk) begin

    if (reset) begin

        state <= IDLE;

        init_done <= 1'b0;
        init_error <= 1'b0;

        cmd_index <= 6'd0;
        cmd_arg <= 32'd0;

        cmd_start <= 1'b0;
        response_start <= 1'b0;

    end

    else begin

        cmd_start <= 1'b0;
        response_start <= 1'b0;

        case (state)

            IDLE: begin

                init_done <= 1'b0;
                init_error <= 1'b0;

                if (start) begin
                    state <= CMD0;
                end

            end

            CMD0: begin

                cmd_index <= 6'd0;
                cmd_arg <= 32'h00000000;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD0;

                end

            end

            WAIT_CMD0: begin

                if (cmd_done) begin
                    state <= CMD8;
                end

            end

            CMD8: begin

                cmd_index <= 6'd8;
                cmd_arg <= 32'h000001AA;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD8;

                end

            end

            WAIT_CMD8: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP8;

                end

            end

            WAIT_RESP8: begin

                if (response_done) begin

                    if (response_valid &&
                        crc_valid &&
                        response_cmd == 6'd8 &&
                        response_status == 32'h000001AA) begin

                        state <= CMD55;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            CMD55: begin

                cmd_index <= 6'd55;
                cmd_arg <= 32'h00000000;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD55;

                end

            end

            WAIT_CMD55: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP55;

                end

            end

            WAIT_RESP55: begin

                if (response_done) begin

                    if (response_valid &&
                        crc_valid &&
                        response_cmd == 6'd55) begin

                        state <= ACMD41;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            ACMD41: begin

                cmd_index <= 6'd41;
                cmd_arg <= 32'h40000000;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_ACMD41;

                end

            end

            WAIT_ACMD41: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP41;

                end

            end

            WAIT_RESP41: begin

                if (response_done) begin

                    if (response_valid &&
                        response_status[31]) begin

                        state <= DONE;

                    end

                    else if (response_valid) begin

                        state <= CMD55;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            DONE: begin

                init_done <= 1'b1;
                state <= DONE;
            end

            ERROR: begin

                init_error <= 1'b1;
                state <= ERROR;
            end

            default: begin

                state <= IDLE;

                init_done <= 1'b0;
                init_error <= 1'b0;

                cmd_start <= 1'b0;
                response_start <= 1'b0;

            end

        endcase

    end

end

endmodule

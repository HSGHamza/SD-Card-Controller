`timescale 1ns/1ps

module sd_block_read (
    input sd_clk,
    input reset,
    input start,
    input [31:0] block_address,

    output reg busy,
    output reg done,
    output reg read_error,
    output reg read_valid,

    output reg [5:0] cmd_index,
    output reg [31:0] cmd_arg,
    output [6:0] cmd_crc7,
    output reg cmd_start,
    input cmd_done,

    output reg response_start,
    output reg [2:0] response_type,
    input response_done,
    input response_valid,
    input [5:0] response_cmd,
    input [31:0] response_status,
    input [6:0] response_crc,

    output reg data_start,
    input data_done,
    input data_valid,
    input data_crc_valid,

    input [8:0] rx_data_addr,
    input [7:0] rx_data_byte,
    input rx_data_write,

    output [8:0] data_addr,
    output [7:0] data_byte,
    output data_write
);

localparam RESPONSE_R1 = 3'd0;

localparam IDLE          = 3'd0;
localparam SEND_CMD17    = 3'd1;
localparam WAIT_CMD17    = 3'd2;
localparam START_RESPONSE = 3'd3;
localparam WAIT_RESPONSE = 3'd4;
localparam START_DATA    = 3'd5;
localparam WAIT_DATA     = 3'd6;

reg [2:0] state;

wire [6:0] calculated_cmd_crc;
wire response_crc_valid;

crc7 crc7_inst (
    .cmd_index(cmd_index),
    .cmd_arg(cmd_arg),
    .crc(calculated_cmd_crc)
);

assign cmd_crc7 = calculated_cmd_crc;

crc7_check crc7_check_inst (
    .response_cmd(response_cmd),
    .response_status(response_status),
    .received_crc(response_crc),
    .crc_valid(response_crc_valid)
);

assign data_addr = rx_data_addr;
assign data_byte = rx_data_byte;
assign data_write = rx_data_write;

always @(posedge sd_clk) begin
    if (reset) begin
        state <= IDLE;

        busy <= 1'b0;
        done <= 1'b0;
        read_error <= 1'b0;
        read_valid <= 1'b0;

        cmd_index <= 6'd0;
        cmd_arg <= 32'd0;
        cmd_start <= 1'b0;

        response_start <= 1'b0;
        response_type <= RESPONSE_R1;

        data_start <= 1'b0;
    end else begin
        done <= 1'b0;
        cmd_start <= 1'b0;
        response_start <= 1'b0;
        data_start <= 1'b0;

        case (state)
            IDLE: begin
                busy <= 1'b0;
                read_error <= 1'b0;
                read_valid <= 1'b0;

                if (start) begin
                    busy <= 1'b1;
                    cmd_index <= 6'd17;
                    cmd_arg <= block_address;
                    response_type <= RESPONSE_R1;
                    state <= SEND_CMD17;
                end
            end

            SEND_CMD17: begin
                cmd_start <= 1'b1;
                state <= WAIT_CMD17;
            end

            WAIT_CMD17: begin
                if (cmd_done) begin
                    state <= START_RESPONSE;
                end
            end

            START_RESPONSE: begin
                response_start <= 1'b1;
                state <= WAIT_RESPONSE;
            end

            WAIT_RESPONSE: begin
                if (response_done) begin
                    if (response_valid &&
                        response_cmd == 6'd17 &&
                        response_crc_valid) begin
                        state <= START_DATA;
                    end else begin
                        read_error <= 1'b1;
                        busy <= 1'b0;
                        done <= 1'b1;
                        state <= IDLE;
                    end
                end
            end

            START_DATA: begin
                data_start <= 1'b1;
                state <= WAIT_DATA;
            end

            WAIT_DATA: begin
                if (data_done) begin
                    busy <= 1'b0;
                    done <= 1'b1;

                    if (data_valid && data_crc_valid) begin
                        read_valid <= 1'b1;
                        read_error <= 1'b0;
                    end else begin
                        read_valid <= 1'b0;
                        read_error <= 1'b1;
                    end

                    state <= IDLE;
                end
            end

            default: begin
                state <= IDLE;
                busy <= 1'b0;
                read_error <= 1'b1;
                done <= 1'b1;
            end
        endcase
    end
end

endmodule   

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
    output reg read_start,

    output reg [2:0] response_type,

    output reg [119:0] card_cid,
    output reg [15:0] card_rca,
    output reg [119:0] card_csd,

    input cmd_busy,
    input cmd_done,

    input response_busy,
    input response_done,
    input response_valid,
    input [5:0] response_cmd,
    input [31:0] response_status,
    input [6:0] response_crc,
    input [119:0] response_long,

    input read_done,
    input read_valid,
    input read_crc_valid
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

localparam RESPONSE_R1 = 3'd0;
localparam RESPONSE_R2 = 3'd1;
localparam RESPONSE_R3 = 3'd2;
localparam RESPONSE_R6 = 3'd3;
localparam RESPONSE_R1B = 3'd4;

localparam IDLE        = 5'd0;
localparam CMD0        = 5'd1;
localparam WAIT_CMD0   = 5'd2;
localparam CMD8        = 5'd3;
localparam WAIT_CMD8   = 5'd4;
localparam WAIT_RESP8  = 5'd5;
localparam CMD55       = 5'd6;
localparam WAIT_CMD55  = 5'd7;
localparam WAIT_RESP55 = 5'd8;
localparam ACMD41      = 5'd9;
localparam WAIT_ACMD41 = 5'd10;
localparam WAIT_RESP41 = 5'd11;
localparam CMD2        = 5'd12;
localparam WAIT_CMD2   = 5'd13;
localparam WAIT_RESP2  = 5'd14;
localparam CMD3        = 5'd15;
localparam WAIT_CMD3   = 5'd16;
localparam WAIT_RESP3  = 5'd17;
localparam CMD9        = 5'd18;
localparam WAIT_CMD9   = 5'd19;
localparam WAIT_RESP9  = 5'd20;
localparam CMD7        = 5'd21;
localparam WAIT_CMD7   = 5'd22;
localparam WAIT_RESP7  = 5'd23;
localparam CMD17       = 5'd26;
localparam WAIT_CMD17  = 5'd27;
localparam WAIT_RESP17 = 5'd28;
localparam WAIT_DATA17 = 5'd29;
localparam DONE        = 5'd30;
localparam ERROR       = 5'd31;

reg [4:0] state;

always @(posedge sd_clk) begin

    if (reset) begin

        state <= IDLE;

        init_done <= 1'b0;
        init_error <= 1'b0;

        cmd_index <= 6'd0;
        cmd_arg <= 32'd0;

        cmd_start <= 1'b0;
        response_start <= 1'b0;
        read_start <= 1'b0;
        response_type <= RESPONSE_R1;

        card_cid <= 120'd0;
        card_rca <= 16'd0;
        card_csd <= 120'd0;

    end

    else begin

        cmd_start <= 1'b0;
        response_start <= 1'b0;
        read_start <= 1'b0;

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
                response_type <= RESPONSE_R1;

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
                response_type <= RESPONSE_R1;

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
                response_type <= RESPONSE_R1;

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
                response_type <= RESPONSE_R3;

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

                    if ((response_cmd == 6'd41) &&
                        response_status[31]) begin

                        state <= CMD2;

                    end

                    else if ((response_cmd == 6'd41) &&
                             !response_status[31]) begin

                        state <= CMD55;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            CMD2: begin

                cmd_index <= 6'd2;
                cmd_arg <= 32'h00000000;
                response_type <= RESPONSE_R2;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD2;

                end

            end

            WAIT_CMD2: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP2;

                end

            end

            WAIT_RESP2: begin

                if (response_done) begin

                    if (response_valid) begin

                        card_cid <= response_long;
                        state <= CMD3;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            CMD3: begin

                cmd_index <= 6'd3;
                cmd_arg <= 32'h00000000;
                response_type <= RESPONSE_R6;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD3;

                end

            end

            WAIT_CMD3: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP3;

                end

            end

            WAIT_RESP3: begin

                if (response_done) begin

                    if (response_valid &&
                        response_cmd == 6'd3) begin

                        card_rca <= response_status[31:16];
                        state <= CMD9;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            CMD9: begin

                cmd_index <= 6'd9;
                cmd_arg <= {card_rca, 16'h0000};
                response_type <= RESPONSE_R2;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD9;

                end

            end

            WAIT_CMD9: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP9;

                end

            end

            WAIT_RESP9: begin

                if (response_done) begin

                    if (response_valid) begin

                        card_csd <= response_long;
                        state <= CMD7;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            CMD7: begin

                cmd_index <= 6'd7;
                cmd_arg <= {card_rca, 16'h0000};
                response_type <= RESPONSE_R1B;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD7;

                end

            end

            WAIT_CMD7: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP7;

                end

            end

            WAIT_RESP7: begin

                if (response_done) begin

                    if (response_valid &&
                        response_cmd == 6'd7) begin

                        state <= DONE;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            CMD17: begin

                cmd_index <= 6'd17;
                cmd_arg <= 32'h00000000;
                response_type <= RESPONSE_R1;

                if (!cmd_busy) begin

                    cmd_start <= 1'b1;
                    state <= WAIT_CMD17;

                end

            end

            WAIT_CMD17: begin

                if (cmd_done) begin

                    response_start <= 1'b1;
                    state <= WAIT_RESP17;

                end

            end

            WAIT_RESP17: begin

                if (response_done) begin

                    if (response_valid &&
                        response_cmd == 6'd17) begin

                        read_start <= 1'b1;
                        state <= WAIT_DATA17;

                    end

                    else begin

                        state <= ERROR;

                    end

                end

            end

            WAIT_DATA17: begin

                if (read_done) begin

                    if (read_valid &&
                        read_crc_valid) begin

                        state <= DONE;

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
                read_start <= 1'b0;
                response_type <= RESPONSE_R1;

                card_cid <= 120'd0;
                card_rca <= 16'd0;
                card_csd <= 120'd0;

            end

        endcase

    end

end

endmodule
`timescale 1ns/1ps

module sd_data_rx (
    input sd_clk,
    input reset,
    input start,
    input sd_dat0,

    output reg busy,
    output reg done,
    output reg valid,

    output reg [8:0] data_addr,
    output reg [7:0] data_byte,
    output reg data_write,

    output reg crc_valid
);

localparam IDLE       = 3'd0;
localparam WAIT_TOKEN = 3'd1;
localparam RECEIVE    = 3'd2;
localparam RECEIVE_CRC = 3'd3;
localparam DONE       = 3'd4;

reg [2:0] state;

reg [7:0] token_shift;
reg [7:0] byte_shift;
reg [15:0] crc_shift;
reg [15:0] received_crc;
reg [15:0] calculated_crc;

reg [2:0] bit_count;
reg [8:0] byte_count;
reg crc_byte_count;

wire [15:0] crc16_next_bit;

assign crc16_next_bit = {
    calculated_crc[14:0],
    1'b0
} ^ (
    {16{calculated_crc[15] ^ sd_dat0}} & 16'h1021
);

always @(posedge sd_clk) begin

    if (reset) begin

        state <= IDLE;

        busy <= 1'b0;
        done <= 1'b0;
        valid <= 1'b0;

        data_addr <= 9'd0;
        data_byte <= 8'd0;
        data_write <= 1'b0;

        crc_valid <= 1'b0;

        token_shift <= 8'd0;
        byte_shift <= 8'd0;
        crc_shift <= 16'd0;
        received_crc <= 16'd0;
        calculated_crc <= 16'd0;

        bit_count <= 3'd0;
        byte_count <= 9'd0;
        crc_byte_count <= 1'b0;

    end

    else begin

        done <= 1'b0;
        data_write <= 1'b0;

        case (state)

            IDLE: begin

                busy <= 1'b0;
                valid <= 1'b0;
                crc_valid <= 1'b0;

                if (start) begin

                    busy <= 1'b1;

                    token_shift <= 8'd0;
                    byte_shift <= 8'd0;
                    crc_shift <= 16'd0;
                    received_crc <= 16'd0;
                    calculated_crc <= 16'd0;

                    bit_count <= 3'd0;
                    byte_count <= 9'd0;
                    crc_byte_count <= 1'b0;

                    state <= WAIT_TOKEN;

                end

            end

            WAIT_TOKEN: begin

                token_shift <= {
                    token_shift[6:0],
                    sd_dat0
                };

                if (bit_count == 3'd7) begin

                    bit_count <= 3'd0;

                    if ({token_shift[6:0], sd_dat0} == 8'hFE) begin

                        byte_count <= 9'd0;
                        byte_shift <= 8'd0;
                        calculated_crc <= 16'd0;

                        state <= RECEIVE;

                    end

                end

                else begin

                    bit_count <= bit_count + 1'b1;

                end

            end

            RECEIVE: begin

                byte_shift <= {
                    byte_shift[6:0],
                    sd_dat0
                };

                calculated_crc <= crc16_next_bit;

                if (bit_count == 3'd7) begin

                    data_addr <= byte_count;
                    data_byte <= {
                        byte_shift[6:0],
                        sd_dat0
                    };

                    data_write <= 1'b1;

                    bit_count <= 3'd0;

                    if (byte_count == 9'd511) begin

                        crc_shift <= 16'd0;
                        crc_byte_count <= 1'b0;

                        state <= RECEIVE_CRC;

                    end

                    else begin

                        byte_count <= byte_count + 1'b1;

                    end

                end

                else begin

                    bit_count <= bit_count + 1'b1;

                end

            end

            RECEIVE_CRC: begin

                crc_shift <= {
                    crc_shift[14:0],
                    sd_dat0
                };

                if (bit_count == 3'd7) begin

                    bit_count <= 3'd0;

                    if (crc_byte_count) begin

                        received_crc <= {
                            crc_shift[14:0],
                            sd_dat0
                        };

                        if ({
                            crc_shift[14:0],
                            sd_dat0
                        } == calculated_crc) begin

                            crc_valid <= 1'b1;
                            valid <= 1'b1;

                        end

                        else begin

                            crc_valid <= 1'b0;
                            valid <= 1'b0;

                        end

                        busy <= 1'b0;
                        done <= 1'b1;

                        crc_byte_count <= 1'b0;
                        state <= DONE;

                    end

                    else begin

                        crc_byte_count <= 1'b1;

                    end

                end

                else begin

                    bit_count <= bit_count + 1'b1;

                end

            end

            DONE: begin

                state <= IDLE;

            end

            default: begin

                state <= IDLE;

                busy <= 1'b0;
                done <= 1'b0;
                valid <= 1'b0;
                crc_valid <= 1'b0;

            end

        endcase

    end

end

endmodule
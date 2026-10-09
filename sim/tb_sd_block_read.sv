`timescale 1ns/1ps

module tb_sd_block_read;

reg sd_clk;
reg reset;
reg start;
reg [31:0] block_address;

wire busy;
wire done;
wire read_error;
wire read_valid;

wire [5:0] cmd_index;
wire [31:0] cmd_arg;
wire [6:0] cmd_crc7;
wire cmd_start;
wire cmd_busy;
wire cmd_done;

wire response_start;
wire [2:0] response_type;
wire response_busy;
wire response_done;
wire response_valid;
wire [5:0] response_cmd;
wire [31:0] response_status;
wire [6:0] response_crc;
wire data_start;
wire data_busy;
wire data_done;
wire data_valid;
wire data_crc_valid;

wire [8:0] rx_data_addr;
wire [7:0] rx_data_byte;
wire rx_data_write;

wire [8:0] data_addr;
wire [7:0] data_byte;
wire data_write;

wire sd_cmd;
wire sd_dat0;

reg card_cmd_oe;
reg card_cmd_out;
reg card_dat0;

reg [47:0] received_command;
reg [47:0] response_data;
wire [119:0] response_long;

localparam TEST_VALID_READ = 0;
localparam TEST_BAD_RESPONSE_CRC = 1;
localparam TEST_MISSING_TOKEN = 2;
localparam TEST_BAD_DATA_CRC = 3;

integer read_byte_count;
integer read_data_errors;
integer cmd17_count;
integer test_mode;

assign sd_cmd = card_cmd_oe ? card_cmd_out : 1'bz;
assign sd_dat0 = card_dat0;

sd_block_read uut (
    .sd_clk(sd_clk),
    .reset(reset),
    .start(start),
    .block_address(block_address),

    .busy(busy),
    .done(done),
    .read_error(read_error),
    .read_valid(read_valid),

    .cmd_index(cmd_index),
    .cmd_arg(cmd_arg),
    .cmd_crc7(cmd_crc7),
    .cmd_start(cmd_start),
    .cmd_done(cmd_done),

    .response_start(response_start),
    .response_type(response_type),
    .response_done(response_done),
    .response_valid(response_valid),
    .response_cmd(response_cmd),
    .response_status(response_status),
    .response_crc(response_crc),

    .data_start(data_start),
    .data_done(data_done),
    .data_valid(data_valid),
    .data_crc_valid(data_crc_valid),

    .rx_data_addr(rx_data_addr),
    .rx_data_byte(rx_data_byte),
    .rx_data_write(rx_data_write),

    .data_addr(data_addr),
    .data_byte(data_byte),
    .data_write(data_write)
);

SD_cmd uut_cmd (
    .sd_clk(sd_clk),
    .reset(reset),
    .crc7(cmd_crc7),
    .cmd_start(cmd_start),
    .cmd_arg(cmd_arg),
    .cmd_index(cmd_index),
    .cmd_busy(cmd_busy),
    .cmd_done(cmd_done),
    .cmd(sd_cmd)
);

sd_response response_inst (
    .sd_clk(sd_clk),
    .reset(reset),
    .response_start(response_start),
    .cmd(sd_cmd),
    .response_type(response_type),

    .response_busy(response_busy),
    .response_done(response_done),
    .response_valid(response_valid),

    .response_cmd(response_cmd),
    .response_status(response_status),
    .response_crc(response_crc),
    .response_long(response_long)
);

sd_data_rx #(
    .TOKEN_TIMEOUT_CYCLES(32'd128)
) data_rx_inst (
    .sd_clk(sd_clk),
    .reset(reset),
    .start(data_start),
    .sd_dat0(sd_dat0),

    .busy(data_busy),
    .done(data_done),
    .valid(data_valid),

    .data_addr(rx_data_addr),
    .data_byte(rx_data_byte),
    .data_write(rx_data_write),

    .crc_valid(data_crc_valid)
);

always #1250 sd_clk <= ~sd_clk;

task receive_command;
    integer j;
    begin
        wait (cmd_busy == 1'b1);
        @(negedge sd_clk);

        for (j = 47; j >= 0; j = j - 1) begin
            received_command[j] = sd_cmd;
            @(negedge sd_clk);
        end

        $display("CARD RECEIVED COMMAND = %h", received_command);
    end
endtask

task send_response;
    input [37:0] response_payload;
    integer j;
    reg [39:0] crc_input;
    reg [6:0] crc_value;
    begin
        wait (response_start == 1'b1);
        wait (response_busy == 1'b1);

        crc_input = {2'b00, response_payload};
        crc_value = crc7_40(crc_input);
        if (test_mode == TEST_BAD_RESPONSE_CRC)
            crc_value = crc_value ^ 7'h01;
        response_data = {2'b00, response_payload, crc_value, 1'b1};

        @(negedge sd_clk);
        card_cmd_oe = 1'b1;

        for (j = 47; j >= 0; j = j - 1) begin
            card_cmd_out = response_data[j];
            @(negedge sd_clk);
        end

        card_cmd_oe = 1'b0;
        card_cmd_out = 1'b1;
    end
endtask

function [6:0] crc7_40;
    input [39:0] data;
    reg [6:0] crc;
    integer i;
    begin
        crc = 7'd0;
        for (i = 39; i >= 0; i = i - 1) begin
            if (data[i] ^ crc[6])
                crc = {crc[5:0], 1'b0} ^ 7'b0001001;
            else
                crc = {crc[5:0], 1'b0};
        end
        crc7_40 = crc;
    end
endfunction

function [15:0] crc16_byte;
    input [15:0] crc_in;
    input [7:0] data_in;
    reg [15:0] crc;
    integer i;
    begin
        crc = crc_in;

        for (i = 7; i >= 0; i = i - 1) begin
            if (crc[15] ^ data_in[i])
                crc = {crc[14:0], 1'b0} ^ 16'h1021;
            else
                crc = {crc[14:0], 1'b0};
        end

        crc16_byte = crc;
    end
endfunction

task send_dat0_bit;
    input bit_value;
    begin
        @(negedge sd_clk);
        card_dat0 = bit_value;
    end
endtask

task send_dat0_byte_from_current_edge;
    input [7:0] byte_value;
    integer i;
    begin
        card_dat0 = byte_value[7];

        for (i = 6; i >= 0; i = i - 1)
            send_dat0_bit(byte_value[i]);
    end
endtask

task send_dat0_byte;
    input [7:0] byte_value;
    integer i;
    begin
        for (i = 7; i >= 0; i = i - 1)
            send_dat0_bit(byte_value[i]);
    end
endtask

task send_read_data;
    integer i;
    reg [7:0] data_value;
    reg [15:0] crc_value;
    begin
        wait (data_start || data_busy);

        if (test_mode == TEST_MISSING_TOKEN) begin
            card_dat0 = 1'b1;
        end else begin

        @(posedge sd_clk);
        @(negedge sd_clk);

        crc_value = 16'd0;

        send_dat0_byte_from_current_edge(8'hFE);

        for (i = 0; i < 512; i = i + 1) begin
            data_value = i[7:0];
            crc_value = crc16_byte(crc_value, data_value);
            send_dat0_byte(data_value);
        end

        send_dat0_byte(crc_value[15:8]);
        if (test_mode == TEST_BAD_DATA_CRC)
            send_dat0_byte(crc_value[7:0] ^ 8'h01);
        else
            send_dat0_byte(crc_value[7:0]);

        @(negedge sd_clk);
        card_dat0 = 1'b1;

        end
    end
endtask

task run_transaction;
    input [31:0] address;
    input integer mode;
    begin
        @(negedge sd_clk);
        block_address = address;
        test_mode = mode;
        read_byte_count = 0;
        read_data_errors = 0;
        start = 1'b1;
        @(posedge sd_clk);
        #1;
        if (!busy)
            $fatal(1, "Block reader did not assert busy after start");
        @(negedge sd_clk);
        start = 1'b0;

        wait (done);
        #1;

        if (mode == TEST_BAD_RESPONSE_CRC) begin
            if (!read_error || read_valid || read_byte_count != 0)
                $fatal(1, "Response CRC failure was not reported correctly");
        end else if (mode == TEST_MISSING_TOKEN) begin
            if (!read_error || read_valid || read_byte_count != 0)
                $fatal(1, "Missing-token timeout was not reported correctly");
        end else if (mode == TEST_BAD_DATA_CRC) begin
            if (!read_error || read_valid || read_byte_count != 512)
                $fatal(1, "Data CRC failure was not reported correctly");
        end else begin
            if (read_error || !read_valid || read_byte_count != 512 ||
                read_data_errors != 0 || !data_crc_valid)
                $fatal(1, "Valid 512-byte block read failed");
        end

        if (read_data_errors != 0)
            $fatal(1, "Received data bytes did not match expected pattern");
        if (response_long !== 120'd0)
            $fatal(1, "R1 transaction unexpectedly modified long response data");

        $display("PASS transaction mode=%0d address=%08h bytes=%0d",
                 mode, address, read_byte_count);
    end
endtask

initial begin
    sd_clk = 1'b0;
    reset = 1'b1;
    start = 1'b0;
    block_address = 32'd0;

    card_cmd_oe = 1'b0;
    card_cmd_out = 1'b1;
    card_dat0 = 1'b1;

    received_command = 48'd0;
    response_data = 48'd0;

    read_byte_count = 0;
    read_data_errors = 0;
    cmd17_count = 0;
    test_mode = 0;

    #10000;
    reset = 1'b0;

    repeat (5) @(negedge sd_clk);

    run_transaction(32'h00001234, TEST_BAD_RESPONSE_CRC);
    run_transaction(32'h00005678, TEST_MISSING_TOKEN);
    run_transaction(32'h00009ABC, TEST_BAD_DATA_CRC);
    run_transaction(32'h0000DEF0, TEST_VALID_READ);

    if (cmd17_count != 4)
        $fatal(1, "Expected four physical CMD17 transactions, got %0d",
               cmd17_count);

    $display("PASS: integrated CMD17 protocol (CRC7, timeout, 512-byte CRC16)");
    $finish;
end

initial begin
    forever begin
        receive_command;

        case (received_command[45:40])
            6'd17: begin
                cmd17_count = cmd17_count + 1;

                $display("CARD: CMD17, argument = %08h",
                         received_command[39:8]);

                if (received_command[39:8] !== block_address)
                    $fatal(1, "Incorrect CMD17 block address");

                if (received_command !== {
                    2'b01,
                    6'd17,
                    block_address,
                    crc7_40({2'b01, 6'd17, block_address}),
                    1'b1
                })
                    $fatal(1, "Transmitted CMD17 frame/CRC7 mismatch");

                send_response({6'd17, 32'd0});
                if (test_mode != TEST_BAD_RESPONSE_CRC)
                    send_read_data;
            end

            default: begin
                $fatal(1, "Unexpected command %0d",
                       received_command[45:40]);
            end
        endcase
    end
end

always @(negedge sd_clk) begin
    #1;

    if (!reset && data_write) begin
        if ((data_addr !== read_byte_count[8:0]) ||
            (data_byte !== read_byte_count[7:0])) begin
            $display(
                "DATA MISMATCH byte=%0d addr=%0d data=%02h expected=%02h",
                read_byte_count,
                data_addr,
                data_byte,
                read_byte_count[7:0]
            );

            read_data_errors <= read_data_errors + 1;
        end

        read_byte_count <= read_byte_count + 1;
    end
end

initial begin
    #60000000;

    $fatal(1, "Integrated CMD17 test timed out");
end

endmodule

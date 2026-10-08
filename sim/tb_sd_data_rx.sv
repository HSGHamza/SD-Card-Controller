`timescale 1ns/1ps

module tb_sd_data_rx;

reg sd_clk;
reg reset;
reg start;
reg sd_dat0;

wire busy;
wire done;
wire valid;
wire [8:0] data_addr;
wire [7:0] data_byte;
wire data_write;
wire crc_valid;

integer write_count;
integer error_count;
integer byte_index;
reg done_seen;
reg [15:0] expected_crc;

sd_data_rx dut (
    .sd_clk(sd_clk),
    .reset(reset),
    .start(start),
    .sd_dat0(sd_dat0),
    .busy(busy),
    .done(done),
    .valid(valid),
    .data_addr(data_addr),
    .data_byte(data_byte),
    .data_write(data_write),
    .crc_valid(crc_valid)
);

always #5 sd_clk = ~sd_clk;

function [7:0] pattern_byte;
    input integer index;
    reg [31:0] value;
    begin
        value = index * 37 + 11;
        pattern_byte = value[7:0];
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

task send_bit;
    input bit_value;
    begin
        @(negedge sd_clk);
        sd_dat0 = bit_value;
    end
endtask

task send_byte_from_current_edge;
    input [7:0] byte_value;
    integer i;
    begin
        sd_dat0 = byte_value[7];
        for (i = 6; i >= 0; i = i - 1)
            send_bit(byte_value[i]);
    end
endtask

task send_byte;
    input [7:0] byte_value;
    integer i;
    begin
        for (i = 7; i >= 0; i = i - 1)
            send_bit(byte_value[i]);
    end
endtask

always @(negedge sd_clk) begin
    #1;
    if (!reset && data_write) begin
        if (data_addr !== write_count[8:0]) begin
            $display("Address mismatch at byte %0d: got %0d",
                     write_count, data_addr);
            error_count = error_count + 1;
        end

        if (data_byte !== pattern_byte(write_count)) begin
            $display("Data mismatch at byte %0d: got %02h expected %02h",
                     write_count, data_byte, pattern_byte(write_count));
            error_count = error_count + 1;
        end

        write_count = write_count + 1;
    end
end

always @(posedge done)
    done_seen = 1'b1;

initial begin
    sd_clk = 1'b0;
    reset = 1'b1;
    start = 1'b0;
    sd_dat0 = 1'b1;
    write_count = 0;
    error_count = 0;
    done_seen = 1'b0;
    expected_crc = 16'd0;

    repeat (4) @(negedge sd_clk);
    reset = 1'b0;

    @(negedge sd_clk);
    start = 1'b1;
    @(negedge sd_clk);
    start = 1'b0;

    send_byte_from_current_edge(8'hFE);

    for (byte_index = 0; byte_index < 512; byte_index = byte_index + 1) begin
        expected_crc = crc16_byte(expected_crc, pattern_byte(byte_index));
        send_byte(pattern_byte(byte_index));
    end

    send_byte(expected_crc[15:8]);
    send_byte(expected_crc[7:0]);

    wait (done_seen);
    #1;

    $display("");
    $display("========================================");
    $display("          SD DATA RX TEST");
    $display("========================================");
    $display("Bytes received = %0d", write_count);
    $display("Expected CRC   = %04h", expected_crc);
    $display("Received CRC   = %04h", dut.received_crc);
    $display("Calculated CRC = %04h", dut.calculated_crc);
    $display("CRC valid      = %b", crc_valid);
    $display("Data valid     = %b", valid);

    if ((write_count == 512) &&
        (error_count == 0) &&
        valid &&
        crc_valid) begin
        $display("SD DATA RX TEST PASSED");
    end
    else begin
        $display("SD DATA RX TEST FAILED (errors=%0d)", error_count);
        $fatal(1);
    end

    $display("========================================");
    $finish;
end

initial begin
    #1000000;
    $fatal(1, "SD data receiver test timed out");
end

endmodule

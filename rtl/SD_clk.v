module SD_clk #(
    parameter integer INIT_DIV = 32,
    parameter integer RUN_DIV  = 1
)(
    input  clk,
    input  reset,
    input  sd_initialized,
    output reg sd_clk
);

reg [5:0] sd_counter;

always @(posedge clk) begin
    if (reset) begin
        sd_counter <= 6'd0;
        sd_clk <= 1'b0;
    end
    else if (!sd_initialized) begin
        if (sd_counter == INIT_DIV-1) begin
            sd_counter <= 6'd0;
            sd_clk <= ~sd_clk;
        end
        else begin
            sd_counter <= sd_counter + 1'b1;
        end
    end
    else begin
        if (sd_counter == RUN_DIV-1) begin
            sd_counter <= 6'd0;
            sd_clk <= ~sd_clk;
        end
        else begin
            sd_counter <= sd_counter + 1'b1;
        end
    end
end

endmodule

`timescale 1ns/1ps
`include "vsrc/config.v"
module tb_top();
	parameter CLOCK_PERIOD = 10;
	reg clk;
	reg rst;
	reg [2:0] cnt;
	wire [63:0] out_act;
	wire [63:0] in_act;

	// 生成时钟信号
	always #10 clk = ~clk;
	// 生成复位信号
	initial begin
		clk = 0;
		rst = 1;
		#20;
		rst = 0;
	end
	initial #1000 $finish;


	reg [127:0] mem [3*`ARRAYHEIGHT-1:0];
	initial begin
		// $readmemh("../test/test_matrix_8_8.data", mem);
		$readmemh("test/example.data", mem);
		// $display("%h",mem[2]);
	end

	always @(posedge clk) begin
		if (rst) cnt <= 0;
		else cnt <= cnt + 1;
	end
	assign in_act = mem[cnt][63:0];
	
	top dut_top(
		.clk(clk),
		.rst(rst),
		.input_buffer_load_en(input_buffer_load_en),
		.input_buffer_out_en(input_buffer_out_en),
		.in_act(in_act),
		.out_act(out_act)
	);
	initial begin
		$dumpfile("test.vcd");
		$dumpvars(0, tb_top);
	end

endmodule

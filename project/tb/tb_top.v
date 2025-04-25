`timescale 1ns/1ns
`include "config.v"
module tb_top();
	parameter CLOCK_PERIOD = 10;
	reg clk;
	reg rst;

	//===========生成时钟和复位信号===============
	always #(CLOCK_PERIOD/2) clk = ~clk;
	initial begin
		clk = 0;
		rst = 1;
		#CLOCK_PERIOD;
		rst = 0;
	end
	//===========生成时钟和复位信号===============

	//=================测试行为===================
	
	reg enable;
	initial begin
		enable = 0;
		#CLOCK_PERIOD;
		enable = 1;
	end

	top u_top(
		.clk(clk),
		.rst(rst),
		.enable(enable)
	);


	//=================波形文件===================
	initial begin
		$fsdbDumpfile("tb_top.fsdb");
		$fsdbDumpvars("+all");
	end
	initial #3420000 $finish;

endmodule

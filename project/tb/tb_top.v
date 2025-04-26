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
	wire led_enable;
	wire led_finish;
	wire [2:0] tile_row_idx;
	wire [4:0] tile_col_idx;
	wire [4:0] inner_loop_idx;
	wire [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out_top;
	initial begin
		enable = 0;
		#CLOCK_PERIOD;
		enable = 1;
	end

	top u_top(
		.clk(clk),
		.rst(rst),
		.enable(enable),
		.led_enable(led_enable),
		.led_finish(led_finish),
		.tile_row_idx(tile_row_idx),
		.tile_col_idx(tile_col_idx),
		.inner_loop_idx(inner_loop_idx),
		.out(out_top)
	);


	//=================波形文件===================
	// initial begin
	// 	$fsdbDumpfile("tb_top.fsdb");
	// 	$fsdbDumpvars("+all");
	// end
	initial #3420100 $finish;

endmodule

`timescale 1ns/1ns
`include "config.v"
module tb_systolic_odd_even_sort();
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
    reg en;
    reg  [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] in;
    wire [`OUTPUT_BUF_DATASIZE-1:0] max_out;
	reg  [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] mem [0:0];
	reg  [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] mem_res[0:0];
	initial begin
		$readmemh("/home/hyyuan/systolic-array/test/sort_data", mem);
		$readmemh("/home/hyyuan/systolic-array/test/sort_data_res", mem_res);
		$display("%h",mem[0]);
		$display("%h",mem_res[0]);
	end

	initial begin
		#CLOCK_PERIOD;
		en = 1;
		in = mem[0];
		#CLOCK_PERIOD;
	end
	systolic_odd_even_sort u_systolic_odd_even_sort(
		.clk(clk),
		.rst(rst),
		.en(en),
		.in(in),
		.max_out(max_out) 
	);
 
    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_systolic_odd_even_sort.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial begin
		#1000;
		// if (max_out == mem_res[0][`OUTPUT_BUF_DATASIZE-1:0]) $display("pass");
		$display("%d",max_out);
		$finish;
	end
endmodule

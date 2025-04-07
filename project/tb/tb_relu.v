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
    reg  [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] in;
    wire [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out; 

    reg [`OUTPUT_BUF_DATASIZE-1:0] mem [`ARRAYWIDTH-1:0];
    reg [`OUTPUT_BUF_DATASIZE-1:0] mem_res [`ARRAYWIDTH-1:0];
    initial begin
		$readmemh("/home/hyyuan/systolic-array/test/relu_data",mem);
		$readmemh("/home/hyyuan/systolic-array/test/relu_data_res",mem_res);
	end
    initial begin
        #CLOCK_PERIOD;
        in = mem;
        #CLOCK_PERIOD;
    end
    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_top.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #100 $finish;

endmodule

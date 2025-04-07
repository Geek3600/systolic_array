`timescale 1ns/1ns
`include "config.v"
module tb_exp();
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
	reg  [`OUTPUT_BUF_DATASIZE-1:0] lnF; 
	reg  is_stage2;
    reg  is_stage4;
    reg  [`OUTPUT_BUF_DATASIZE-1:0] Xi;       // 32位整数
    wire  [`OUTPUT_BUF_DATASIZE-1:0] exp_out; // 32位定点数

    initial begin	
        #CLOCK_PERIOD;
		is_stage2 = 0;
		is_stage4 = 1;
		lnF = 32'b00000000000000000000101000000000;
		Xi = 5;
    end

	exp u_exp(
    	.clk(clk),
    	.rst(rst),
    	.is_stage2(is_stage2),
    	.is_stage4(is_stage4),
    	.lnF(lnF),		  // 32位定点数
    	.Xi(Xi), 		  // 32位整数
    	.exp_out(exp_out) // 32位定点数
	);
    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_exp.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #1000 $finish;

endmodule

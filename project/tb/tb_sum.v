`timescale 1ns/1ns
`include "config.v"
module tb_sum();
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
    reg  [4*3-1:0] in;  
    wire [2:0] out; 

    initial begin
        in = 12'b010010000010;
    end

    sum  u_sum(
        .inputs(in), // 输入数据
        .sum(out) // 累加结果
    );
 
    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_sum.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial begin
        #100 ;
        $display("%d", out);
        $finish;
    end

endmodule

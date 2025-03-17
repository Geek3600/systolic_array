`timescale 1ns/1ns
//`include "config.v"
module tb_sort_controller();
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
    wire even_L;
    wire even_R;
    wire odd_L;
    wire odd_R;
    wire odd_cmp_en;
    wire even_cmp_en;

    initial begin
        #CLOCK_PERIOD;
        en = 1;          
    end

    sort_controller u_sort_controller(
	    .clk(clk),
	    .rst(rst),
        .sort_en(sort_en),
        .sort_finish(sort_finish),
        .even_L(even_L),
        .even_R(even_R),
        .odd_L(odd_L),
        .odd_R(odd_R),
        .odd_cmp_en(odd_cmp_en),
        .even_cmp_en(even_cmp_en)
    );

    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_sort_controller.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #1000 $finish;

endmodule

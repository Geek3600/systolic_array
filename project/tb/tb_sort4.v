`timescale 1ns/1ns
//`include "config.v"
module tb_sort4();
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
	 reg [`OUTPUT_BUF_DATASIZE-1:0] in1;
    reg [`OUTPUT_BUF_DATASIZE-1:0] in2;
    reg [`OUTPUT_BUF_DATASIZE-1:0] in3;
    reg [`OUTPUT_BUF_DATASIZE-1:0] in4;
	reg en;
    wire  [`OUTPUT_BUF_DATASIZE-1:0] small1;
    wire  [`OUTPUT_BUF_DATASIZE-1:0] small2;
    wire  [`OUTPUT_BUF_DATASIZE-1:0] large1;
    wire  [`OUTPUT_BUF_DATASIZE-1:0] large2;
    initial begin
        #CLOCK_PERIOD;
		en = 1;
        in1 = 54;
		in2 = 70;
		in3 = 1;
		in4 = 0;
		#(6*CLOCK_PERIOD);
		en = 0;
		#CLOCK_PERIOD;
		$display("%d", small1);
		$display("%d", small2);
		$display("%d", large1);
		$display("%d", large2);
    end


   
	sort4 u_sort4(
    .clk(clk),
    .rst(rst),
	.en(en),
    .in1(in1),
    .in2(in2),
    .in3(in3),
    .in4(in4),
    .small1(small1),
    .small2(small2),
    .large1(large1),
    .large2(large2)
);
    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_sort4.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #200 $finish;

endmodule

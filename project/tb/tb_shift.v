`timescale 1ns/1ns
`include "config.v"
module tb_shift();
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
    reg  [`OUTPUT_BUF_DATASIZE-1:0] in;
    wire [5:0] out; 
    reg en;

    initial begin
        #CLOCK_PERIOD;
        in = 32'h00000002;
        #CLOCK_PERIOD;
        $display("%d",out);
    end
    shift u_shift(
    .shift_len, //w
    .in, //F
    .one_hot,
    output  [`OUTPUT_BUF_DATASIZE-1:0] out // m-1+w
    );

    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_shift.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #100 $finish;

endmodule

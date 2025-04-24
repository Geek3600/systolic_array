`timescale 1ns/1ns
//`include "config.v"
module tb_leading_one_detector();
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
    wire [`OUTPUT_BUF_DATASIZE-1:0] lod_out; 
    wire [`OUTPUT_BUF_DATASIZE-1:0] one_hot;
    wire [`OUTPUT_BUF_DATASIZE-1:0] shift_out;
    wire [`OUTPUT_BUF_DATASIZE-1:0] out;

    initial begin
        #CLOCK_PERIOD;
        in = 32'b00010000000100000110100000001000;
        #CLOCK_PERIOD;
        $display("%d",out);
    end
    leading_one_detector #(
        .IN_SIZE(`OUTPUT_BUF_DATASIZE), 
        .OUT_SIZE(`OUTPUT_BUF_DATASIZE)
    )u_leading_one_detector(
        .clk(clk),
        .rst(rst),
        .in(in),
        .out(lod_out), 
        .one_hot(one_hot)// 输出最高位1的one hot
    );

    shift u_shift(
        .clk(clk),
        .rst(rst),
        .leading_one_pos(lod_out), //w
        .in(in), //F
        .one_hot(one_hot),
        .out(shift_out) // m-1+w
    );
    constant_multipler u_constant_multipler( // 1.0111
        .in(shift_out),
        .out(out)
    );


    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_leading_one_detector.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #100 $finish;

endmodule

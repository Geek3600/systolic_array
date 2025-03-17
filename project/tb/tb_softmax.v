`timescale 1ns/1ns
//`include "config.v"
module tb_softmax();
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

    reg softmax_en;
    reg  [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] Xi;             // 每个元素都是32位整数
    wire [`ARRAYWIDTH*(`FIXPOINT_INT+`FIXPOINT_FRAC)-1:0] out;  // 每个元素都是32位定点数，22位整数，10位小数
    softmax u_softmax(
        .clk(clk),
        .rst(rst),
        .softmax_en(softmax_en),
        .Xi(Xi), // 每个元素都是32位整数
        .out(out) // 每个元素都是32位定点数，22位整数，10位小数
    );


    initial begin
        #CLOCK_PERIOD;
        softmax_en = 1;
        Xi = 128'h00000001000000020000000300000004;
    end
    //=================测试行为===================
	
	//================生成波形====================
	initial begin
		$fsdbDumpfile("tb_softmax.fsdb");
		$fsdbDumpvars("+all");
	end
    //================生成波形====================
	initial #1000 $finish;

endmodule

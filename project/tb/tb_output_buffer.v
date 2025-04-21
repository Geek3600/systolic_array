`timescale 1ns/1ns
`include "config.v"
module tb_output_buffer();
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

    reg load_en;
    reg load_clear;
    reg out_en;
    reg acc_enable;
    reg acc_clear;
    reg [4*32-1:0] in_res;
    reg [4*32-1:0] out_res;

    initial begin
        load_en = 0;
        out_en = 0;
        acc_enable = 0;
        acc_clear = 0;
        load_clear = 0;
        
        #CLOCK_PERIOD;
        load_en = 1;
        // #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000001;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000002;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000003;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000004;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000100000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000200000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000300000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000400000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000010000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000020000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000030000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000040000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000001000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000002000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000003000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000004000000000000000000000000;
        #CLOCK_PERIOD;
        #CLOCK_PERIOD;
        load_en = 0;
        acc_enable = 1;
        load_clear = 1;

        #CLOCK_PERIOD;
        acc_enable = 0;
        load_clear = 0;


        #CLOCK_PERIOD;
        load_en = 1;
        in_res = 128'h00000000000000000000000000000001;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000002;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000003;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000004;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000100000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000200000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000300000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000400000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000010000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000020000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000030000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000040000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000001000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000002000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000003000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000004000000000000000000000000;
        #CLOCK_PERIOD;
        #CLOCK_PERIOD;
        load_en = 0;
        acc_enable = 1;
        load_clear = 1;
        #CLOCK_PERIOD;
        acc_enable = 0;
        load_clear = 0;

        #CLOCK_PERIOD;
        load_en = 1;
        in_res = 128'h00000000000000000000000000000001;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000002;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000003;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000004;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000100000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000200000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000300000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000400000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000010000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000020000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000030000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000040000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000001000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000002000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000003000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000004000000000000000000000000;
        #CLOCK_PERIOD;
        #CLOCK_PERIOD;
        load_en = 0;
        acc_enable = 1;
        load_clear = 1;
        #CLOCK_PERIOD;
        acc_enable = 0;
        load_clear = 0;
        out_en = 1;
        #(CLOCK_PERIOD*4);
        out_en = 0;

        #CLOCK_PERIOD;
        load_en = 1;
        // #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000001;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000002;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000003;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000004;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000100000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000200000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000300000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000400000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000010000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000020000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000030000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000040000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000001000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000002000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000003000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000004000000000000000000000000;
        #CLOCK_PERIOD;
        #CLOCK_PERIOD;
        load_en = 0;
        acc_enable = 1;
        load_clear = 1;

        #CLOCK_PERIOD;
        acc_enable = 0;
        load_clear = 0;


        #CLOCK_PERIOD;
        load_en = 1;
        in_res = 128'h00000000000000000000000000000001;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000002;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000003;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000004;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000100000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000200000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000300000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000400000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000010000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000020000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000030000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000040000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000001000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000002000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000003000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000004000000000000000000000000;
        #CLOCK_PERIOD;
        #CLOCK_PERIOD;
        load_en = 0;
        acc_enable = 1;
        load_clear = 1;
        #CLOCK_PERIOD;
        acc_enable = 0;
        load_clear = 0;

        #CLOCK_PERIOD;
        load_en = 1;
        in_res = 128'h00000000000000000000000000000001;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000002;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000003;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000000000004;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000100000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000200000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000300000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000000000000400000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000010000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000020000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000030000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000000000000040000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000001000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000002000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000003000000000000000000000000;
        #CLOCK_PERIOD;
        in_res = 128'h00000004000000000000000000000000;
        #CLOCK_PERIOD;
        #CLOCK_PERIOD;
        load_en = 0;
        acc_enable = 1;
        load_clear = 1;
        #CLOCK_PERIOD;
        acc_enable = 0;
        load_clear = 0;
        out_en = 1;
        #(CLOCK_PERIOD*4);
        out_en = 0;
        //  #CLOCK_PERIOD;
        //  acc_clear = 0;
        // #CLOCK_PERIOD;
        // load_en = 1;
        // in_res = 128'h00000000000000000000000000000001;
        // #CLOCK_PERIOD;
        // in_res = 128'h00000000000000000000000100000002;
        // #CLOCK_PERIOD;
        // in_res = 128'h00000000000000010000000200000003;
        // #CLOCK_PERIOD;
        // in_res = 128'h00000001000000020000000300000004;
        // #CLOCK_PERIOD;
        // in_res = 128'h00000002000000030000000400000000;
        // #CLOCK_PERIOD;
        // in_res = 128'h00000003000000040000000000000000;
        // #CLOCK_PERIOD;
        // in_res = 128'h00000004000000000000000000000000;

        // #CLOCK_PERIOD;
        // load_en = 0;
        // acc_enable = 1;
        // load_clear = 1;
        // #CLOCK_PERIOD;
        // acc_enable = 0;
        // load_clear = 0;

        // #CLOCK_PERIOD;
        // out_en = 1;
        // #(CLOCK_PERIOD*4);
        // acc_clear = 1;

    end

    output_buffer u_output_buffer (	
        .clk(clk),
        .rst(rst),
        .load_en(load_en),
        .load_clear(load_clear),
        .out_en(out_en),
        .acc_enable(acc_enable),
        .acc_clear(acc_clear),
        .in_res(in_res),
        .out_res(out_res)
    );


	//=================测试行为===================

	// end
	initial begin
		$fsdbDumpfile("tb_output_buffer.fsdb");
		$fsdbDumpvars("+all");
	end
	initial #2000 $finish;

endmodule

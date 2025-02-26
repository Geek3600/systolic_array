`timescale 1ps/1ps
`include "vsrc/config.v"
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
	// reg [20:0] cnt;
	// wire input_buffer_load_en;
	// wire input_buffer_out_en;
	// wire weight_buffer_load_en;
	// wire weight_buffer_out_en;
	// wire output_buffer_load_en;
	// wire output_buffer_out_en;
	// wire write_weight_en;

	// wire [`DATASIZE*`ARRAYWIDTH-1:0] in_act;
	// wire [`DATASIZE*`ARRAYWIDTH-1:0] in_weight;
	// wire  [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out_res;
	// reg [`DATASIZE*`ARRAYWIDTH-1:0] mem [2*`ARRAYHEIGHT-1:0];
	// reg [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] ref_res [`ARRAYHEIGHT-1:0];
	// reg [7:0] res_idx;


	// always@(posedge clk) begin
		// if (output_buffer_out_en) begin
			// $display("%h",out_res);
			// // $display("%d",res_idx);
			// res_idx <= res_idx + 1;
			// if (out_res == ref_res[res_idx])
				// $display("pass");
			// else 
				// $display("fail");
		// end
	// end

	// always @(posedge clk) begin
		// if (rst) cnt <= 0;
		// else cnt <= cnt + 1; 
		// $display("%d",cnt);
	// end
	// assign in_act = (cnt >= `ARRAYHEIGHT && cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? mem[cnt][`DATASIZE*`ARRAYWIDTH-1:0] : 0;

	// assign input_buffer_load_en = (cnt >= `ARRAYHEIGHT && cnt < 2*`ARRAYHEIGHT) ? 1 : 0;
	// assign write_weight_en = (cnt >= `ARRAYHEIGHT && cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? 1 : 0;
	// assign weight_buffer_out_en = (cnt >= `ARRAYHEIGHT && cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? 1 : 0;

	// assign input_buffer_out_en = (cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? 0 : 1;
	
	// assign in_weight = (cnt < `ARRAYHEIGHT) ? mem[cnt][`DATASIZE*`ARRAYWIDTH-1:0] : 0;
	// assign weight_buffer_load_en = (cnt < `ARRAYHEIGHT) ? 1 : 0;

	// assign output_buffer_load_en = (cnt >= 2*`ARRAYHEIGHT + `ARRAYWIDTH - 1&& cnt < 4*`ARRAYHEIGHT + `ARRAYWIDTH -1) ? 1 : 0;
	// assign output_buffer_out_en = (cnt >= 4*`ARRAYHEIGHT + `ARRAYWIDTH - 1 && cnt < 4*`ARRAYHEIGHT + `ARRAYWIDTH - 1 + `ARRAYHEIGHT) ? 1 : 0; 
	
	
	// initial begin
		// $readmemh("test/dat4", mem);
		// $readmemh("test/dat4_res", ref_res);
		// res_idx = 0;
	// end

	// top dut_top(
		// .clk(clk),
		// .rst(rst),
		// .input_buffer_load_en(input_buffer_load_en),
		// .input_buffer_out_en(input_buffer_out_en),
		// .weight_buffer_load_en(weight_buffer_load_en),
		// .weight_buffer_out_en(weight_buffer_out_en),
		// .output_buffer_load_en(output_buffer_load_en),
		// .output_buffer_out_en(output_buffer_out_en),
		// .write_weight_en(write_weight_en),
		// .in_act(in_act),
        // .in_weight(in_weight),
        // .out_res(out_res)
    // );
	reg write_weight_en;
	reg [`DATASIZE*`ARRAYWIDTH-1:0] in_left_act;
	reg [`DATASIZE*`ARRAYWIDTH-1:0] in_up_weight;
	wire [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_sum;
	// reg [`DATASIZE*`ARRAYWIDTH-1:0] in_up_weight;
	// wire [`DATASIZE*`ARRAYWIDTH-1:0] out_down_weight;
	// reg [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] in_up_psum;
	// wire [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out_down_psum;
	// reg [`DATASIZE-1:0] in_left_act;
	// wire [`DATASIZE-1:0] out_down_weight;
	// reg [`DATASIZE-1:0] in_up_weight;
	// wire  [`DATASIZE-1:0] out_right_act;
	// reg [`DATASIZE-1:0] in_left_act;
	// wire [`OUTPUT_BUF_DATASIZE-1:0] out_down_psum;
	// reg [`OUTPUT_BUF_DATASIZE-1:0] in_up_psum
	// PE_row u_PW_EOW(
		// .clk(clk),
		// .rst(rst),
		// .write_weight_en(write_weight_en),
		// .in_up_weight(in_up_weight),
		// .out_down_weight(out_down_weight),
		// .in_up_psum(in_up_psum),
		// .out_down_psum(out_down_psum),
		// .in_left_act(in_left_act)
	// );	
	systolic_array u_systolic_array(
		.clk(clk),
		.rst(rst),
		.write_weight_en(write_weight_en),
		.in_up_weight(in_up_weight),
		.in_left_act(in_left_act),
		.out_sum(out_sum)
	);
	initial begin
		// #(2*CLOCK_PERIOD);
		// write_weight_en = 1;
		// in_up_weight = 'h04030201;

		// #CLOCK_PERIOD;
		// write_weight_en = 0;
		// in_left_act = 'd2;
		// in_up_psum = 'h00000001000000010000000100000001;
		// #(4*CLOCK_PERIOD);
		// in_left_act = 'd3;
		// #(4*CLOCK_PERIOD);
		#(2*CLOCK_PERIOD);
		write_weight_en = 1;
		#CLOCK_PERIOD;
		in_up_weight = 'h100f0e0d;
		#CLOCK_PERIOD;
		in_up_weight = 'h0c0b0a09;
		#CLOCK_PERIOD;
		in_up_weight = 'h08070605;
		#CLOCK_PERIOD;
		in_up_weight = 'h04030201;
		// 
// 
		#CLOCK_PERIOD;
		write_weight_en = 0;
		in_left_act = 'h00000001;
		#(4*CLOCK_PERIOD);
		in_left_act = 'h00000205;
		#(4*CLOCK_PERIOD);
		in_left_act = 'h00030609;
		#(4*CLOCK_PERIOD);
		in_left_act = 'h04070a0d;
		#(4*CLOCK_PERIOD);
		in_left_act = 'h080b0e00;
		#(4*CLOCK_PERIOD);
		in_left_act = 'h0c0f0000;
		#(4*CLOCK_PERIOD);
		in_left_act = 'h10000000;
	end
	//=================测试行为===================



	//================生成波形====================
	initial begin
		$dumpfile("test.vcd");
		$dumpvars(0, tb_top);
	end
	//================生成波形====================
	// always @(posedge clk) begin
		// if (res_idx == `ARRAYHEIGHT) $finish ;
	// end
	initial #1000 $finish;

endmodule

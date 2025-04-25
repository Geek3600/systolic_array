`timescale 1ns/1ns
`include "config.v"
module tb_accelerator_temp();
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
	reg  [20:0] cnt;
	wire input_buffer_load_en;
	wire input_buffer_out_en;
	wire weight_buffer_load_en;
	wire weight_buffer_out_en;
	wire output_buffer_load_en;
	wire output_buffer_out_en;
	wire write_weight_en;
    wire relu_en;
	wire softmax_en;

	wire [`DATASIZE*`ARRAYWIDTH-1:0] in_act;
	wire [`DATASIZE*`ARRAYWIDTH-1:0] in_weight;
	wire  [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out_top;


	reg [`DATASIZE*`ARRAYWIDTH-1:0] mem [2*`ARRAYHEIGHT-1:0];
	reg [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] mem_res [`ARRAYHEIGHT-1:0];
	reg [7:0] res_idx;

	initial begin
		res_idx = 0;
		$readmemh("/home/hyyuan/systolic-array/test/dat4",mem);
		$readmemh("/home/hyyuan/systolic-array/test/dat4_res",mem_res);
	end

	// always@(posedge clk) begin
	// 	if (cnt > 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT) begin
	// 		res_idx <= res_idx + 1;
	// 		if (out_top == mem_res[res_idx])
	// 			$display("pass");
	// 		else 
	// 			$display("fail");
	// 	end
	// end

	always @(posedge clk) begin
		if (rst) cnt <= 0;
		else cnt <= cnt + 1; 
		// $display("%d",cnt);
	end
	//第一步，加载权重到weight_buffer
	assign in_weight = (cnt < `ARRAYHEIGHT) ? mem[cnt][`DATASIZE*`ARRAYWIDTH-1:0] : 0;
	assign weight_buffer_load_en = (cnt < `ARRAYHEIGHT) ? 1 : 0;

	assign in_act = (cnt >= `ARRAYHEIGHT && cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? mem[cnt][`DATASIZE*`ARRAYWIDTH-1:0] : 0;

	// 第二步，加载输入，同时预加载权重到PE
	assign input_buffer_load_en = (cnt >= `ARRAYHEIGHT && cnt < 2*`ARRAYHEIGHT) ? 1 : 0;
	assign write_weight_en = (cnt >= `ARRAYHEIGHT && cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? 1 : 0;
	assign weight_buffer_out_en = (cnt >= `ARRAYHEIGHT && cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? 1 : 0;

	// 第三步，开始计算
	assign input_buffer_out_en = (cnt < `ARRAYHEIGHT + `ARRAYHEIGHT) ? 0 : 1;

	// 第四步，output_buffer开始接收输出
	assign output_buffer_load_en = (cnt >= 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH && cnt < 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT) ? 1 : 0;
	
	// 第五步，output_buffer输出结果
	// assign output_buffer_out_en = (cnt >= 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT && cnt < 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT +`ARRAYHEIGHT) ? 1 : 0;
	assign output_buffer_out_en = (cnt >= 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT && cnt < 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT +1) ? 1 : 0;
	
    // 第六步 激活
    assign softmax_en = (cnt >= 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT) ? 1 : 0;
    assign relu_en = 0;

	accelerator u_accelerator(
		.clk(clk),
		.rst(rst),
		.input_buffer_load_en(input_buffer_load_en),
		.input_buffer_out_en(input_buffer_out_en),
		.weight_buffer_load_en(weight_buffer_load_en),
		.weight_buffer_out_en(weight_buffer_out_en),
		.output_buffer_load_en(output_buffer_load_en),
		.output_buffer_out_en(output_buffer_out_en),
		.write_weight_en(write_weight_en),
        .softmax_en(softmax_en),
        .relu_en(relu_en),
		.in_act(in_act),
		.in_weight(in_weight),
		.out_top(out_top)
	);

	//================生成波形====================
	// always @(posedge clk) begin
	// 	if (res_idx == `ARRAYHEIGHT-1) $finish ;
	// end
	initial begin
		$fsdbDumpfile("tb_accelerator_temp.fsdb");
		$fsdbDumpvars("+all");
	end
	initial #680 $finish;

endmodule

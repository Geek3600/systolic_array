`timescale 1ns/1ns
`include "config.v"
module accelerator(
	input  clk,
	input  rst,
    input  input_buffer_load_en,
	input  input_buffer_out_en,
	input  weight_buffer_load_en,
	input  weight_buffer_out_en,
	input  output_buffer_load_en,
	input  output_buffer_out_en,
	input  write_weight_en,
	input  relu_en,
	input  softmax_en,
	input  [`ARRAYWIDTH*`DATASIZE-1:0] in_act,
	input  [`ARRAYWIDTH*`DATASIZE-1:0] in_weight,
	output [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_top
);
	wire [`ARRAYWIDTH*`DATASIZE-1:0] out_act;
	wire [`ARRAYWIDTH*`DATASIZE-1:0] out_weight;
	wire [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_sum;
	wire [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_res;
	wire [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_relu;
	wire [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] out_softmax;


	input_buffer u_input_buffer(
		.clk(clk),
		.rst(rst),
		.load_en(input_buffer_load_en),    // 载入使能
		.out_en(input_buffer_out_en),      // 输出使能
		.in_act(in_act),                   // 输入的activation数据
		.out_act(out_act)                  // 输出的activation数据
	);

	systolic_array u_systolic_array(
		.clk(clk),
		.rst(rst),
		.write_weight_en(write_weight_en), // 预存权重使能
		.in_up_weight(out_weight),         // 从上面流入的权重数据
		.in_left_act(out_act),             // 从左边流入的输入数据
		.out_sum(out_sum)                  // 矩阵计算输出结果
	);
    
	weight_buffer u_weight_buffer(
		.clk(clk),
		.rst(rst),
		.load_en(weight_buffer_load_en),  // 载入使能
		.out_en(weight_buffer_out_en),    // 输出使能
		.in_weight(in_weight),            // 载入权重
		.out_weight(out_weight)           // 输出权重 
	);

	output_buffer u_output_buffer(
		.clk(clk),
		.rst(rst),
		.load_en(output_buffer_load_en),  // 载入使能
		.out_en(output_buffer_out_en),    // 输出使能
		.in_res(out_sum),                 // 载入数据
		.out_res(out_res)                 // 输出数据
	);

	relu u_relu(
		.clk(clk),
		.rst(rst),
        .relu_en(relu_en),          // relu使能信号
		.in(out_res),               // 每个元素都是32位整数
		.out(out_relu)              // 每个元素都是32位整数
	);

    softmax u_softmax(
	    .clk(clk),
	    .rst(rst),
        .softmax_en(softmax_en),   // softmax使能信号
        .Xi(out_res),              // 每个元素都是32位整数
        .out(out_softmax)          // 每个元素都是32位定点数，22位整数，10位小数
    );

	assign out_top = (softmax_en) ? out_softmax :
					 (relu_en)    ? out_softmax : out_res;

endmodule

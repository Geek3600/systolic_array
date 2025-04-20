`timescale 1ns/1ns
`include "config.v"
module tb_conv();
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

    // 输入数据分块
    reg act_enable;
	reg [16*15-1:0] act_addrs;
	reg [15:0] act_addr_valid;
	wire [16*8-1:0] output_activate;
	reg [147*25*8-1:0] activate [0:0];

    // 权重数据分块
    reg  weight_enable;
	reg  [16*17-1:0] weight_addrs;
	reg  [15:0] weight_addr_valid;
	wire [16*8-1:0] output_weight;
	reg  [147*8*64-1:0] weight [0:0];


	initial begin
		res_idx = 0;
		$readmemh("/home/hyyuan/systolic-array/test/conv1_kernel.dat",weight);
		$readmemh("/home/hyyuan/systolic-array/test/im2col_input.dat",activate);
        // $readmemh("/home/hyyuan/systolic-array/test/im2col_input.dat", activate);
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
    // assign softmax_en = (cnt >= 2*`ARRAYHEIGHT + `DSP_DELAY*`ARRAYWIDTH+`DSP_DELAY*(`ARRAYHEIGHT-1)+`ARRAYHEIGHT) ? 1 : 0;
    assign softmax_en = 0;
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

	AutoTilingInput u_autotilinginput(
		.clock(clk),
		.reset(rst),
		.io_enable(enable),
		.io_rdAddr_0( act_addrs[14:0]    ),
		.io_rdAddr_1( act_addrs[29:15]   ),
		.io_rdAddr_2( act_addrs[44:30]   ),
		.io_rdAddr_3( act_addrs[59:45]   ),
		.io_rdAddr_4( act_addrs[74:60]   ),
		.io_rdAddr_5( act_addrs[89:75]  ),
		.io_rdAddr_6( act_addrs[104:90] ),
		.io_rdAddr_7( act_addrs[119:105] ),
		.io_rdAddr_8( act_addrs[134:120] ),
		.io_rdAddr_9( act_addrs[149:135] ),	
		.io_rdAddr_10(act_addrs[164:150]),
		.io_rdAddr_11(act_addrs[179:165]),
		.io_rdAddr_12(act_addrs[194:180]),
		.io_rdAddr_13(act_addrs[209:195]),
		.io_rdAddr_14(act_addrs[224:210]),
		.io_rdAddr_15(act_addrs[239:225]),
		.io_addrValid_0( act_addr_valid[0]),
		.io_addrValid_1( act_addr_valid[1]),
		.io_addrValid_2( act_addr_valid[2]),
		.io_addrValid_3( act_addr_valid[3]),
		.io_addrValid_4( act_addr_valid[4]),
		.io_addrValid_5( act_addr_valid[5]),
		.io_addrValid_6( act_addr_valid[6]),
		.io_addrValid_7( act_addr_valid[7]),
		.io_addrValid_8( act_addr_valid[8]),
		.io_addrValid_9( act_addr_valid[9]),
		.io_addrValid_10(act_addr_valid[10]),
		.io_addrValid_11(act_addr_valid[11]),
		.io_addrValid_12(act_addr_valid[12]),
		.io_addrValid_13(act_addr_valid[13]),
		.io_addrValid_14(act_addr_valid[14]),
		.io_addrValid_15(act_addr_valid[15])
	);
	assign output_activate[7:0]     = (act_addr_valid[0])  ? activate[0][(act_addrs[14:0]   )*8  +: 8]: 8'b0;
	assign output_activate[15:8]    = (act_addr_valid[1])  ? activate[0][(act_addrs[29:15]  )*8  +: 8]: 8'b0;
	assign output_activate[23:16]   = (act_addr_valid[2])  ? activate[0][(act_addrs[44:30]  )*8  +: 8]: 8'b0;
	assign output_activate[31:24]   = (act_addr_valid[3])  ? activate[0][(act_addrs[59:45]  )*8  +: 8]: 8'b0;
	assign output_activate[39:32]   = (act_addr_valid[4])  ? activate[0][(act_addrs[74:60]  )*8  +: 8]: 8'b0;
	assign output_activate[47:40]   = (act_addr_valid[5])  ? activate[0][(act_addrs[89:75]  )*8  +: 8]: 8'b0;
	assign output_activate[55:48]   = (act_addr_valid[6])  ? activate[0][(act_addrs[104:90] )*8  +: 8]: 8'b0;
	assign output_activate[63:56]   = (act_addr_valid[7])  ? activate[0][(act_addrs[119:105])*8  +: 8]: 8'b0;
	assign output_activate[71:64]   = (act_addr_valid[8])  ? activate[0][(act_addrs[134:120])*8  +: 8]: 8'b0;
	assign output_activate[79:72]   = (act_addr_valid[9])  ? activate[0][(act_addrs[149:135])*8 +: 8]: 8'b0;
	assign output_activate[87:80]   = (act_addr_valid[10]) ? activate[0][(act_addrs[164:150])*8 +: 8]: 8'b0;
	assign output_activate[95:88]   = (act_addr_valid[11]) ? activate[0][(act_addrs[179:165])*8 +: 8]: 8'b0;
	assign output_activate[103:96]  = (act_addr_valid[12]) ? activate[0][(act_addrs[194:180])*8 +: 8]: 8'b0;
	assign output_activate[111:104] = (act_addr_valid[13]) ? activate[0][(act_addrs[209:195])*8 +: 8]: 8'b0;
	assign output_activate[119:112] = (act_addr_valid[14]) ? activate[0][(act_addrs[224:210])*8 +: 8]: 8'b0;
	assign output_activate[127:120] = (act_addr_valid[15]) ? activate[0][(act_addrs[239:225])*8 +: 8]: 8'b0;


    AutoTilingWeight u_autotilingweight(
		.clock(clk),
		.reset(rst),
		.io_enable(enable),
		.io_rdAddr_0( weight_addrs[16:0]),
		.io_rdAddr_1( weight_addrs[33:17]),
		.io_rdAddr_2( weight_addrs[50:34]),
		.io_rdAddr_3( weight_addrs[67:51]),
		.io_rdAddr_4( weight_addrs[84:68]),
		.io_rdAddr_5( weight_addrs[101:85]),
		.io_rdAddr_6( weight_addrs[118:102]),
		.io_rdAddr_7( weight_addrs[135:119]),
		.io_rdAddr_8( weight_addrs[152:136]),
		.io_rdAddr_9( weight_addrs[169:153]),
		.io_rdAddr_10(weight_addrs[186:170]),
		.io_rdAddr_11(weight_addrs[203:187]),
		.io_rdAddr_12(weight_addrs[220:204]),
		.io_rdAddr_13(weight_addrs[237:221]),
		.io_rdAddr_14(weight_addrs[254:238]),
		.io_rdAddr_15(weight_addrs[271:255]),
		.io_addrValid_0( weight_addr_valid[0]),
		.io_addrValid_1( weight_addr_valid[1]),
		.io_addrValid_2( weight_addr_valid[2]),
		.io_addrValid_3( weight_addr_valid[3]),
		.io_addrValid_4( weight_addr_valid[4]),
		.io_addrValid_5( weight_addr_valid[5]),
		.io_addrValid_6( weight_addr_valid[6]),
		.io_addrValid_7( weight_addr_valid[7]),
		.io_addrValid_8( weight_addr_valid[8]),
		.io_addrValid_9( weight_addr_valid[9]),
		.io_addrValid_10(weight_addr_valid[10]),
		.io_addrValid_11(weight_addr_valid[11]),
		.io_addrValid_12(weight_addr_valid[12]),
		.io_addrValid_13(weight_addr_valid[13]),
		.io_addrValid_14(weight_addr_valid[14]),
		.io_addrValid_15(weight_addr_valid[15])
	);
	assign output_weight[7:0]     = (weight_addr_valid[0])  ? weight[0][(weight_addrs[16:0]   )*8 +: 8]: 8'b0;
	assign output_weight[15:8]    = (weight_addr_valid[1])  ? weight[0][(weight_addrs[33:17]  )*8 +: 8]: 8'b0;
	assign output_weight[23:16]   = (weight_addr_valid[2])  ? weight[0][(weight_addrs[50:34]  )*8 +: 8]: 8'b0;
	assign output_weight[31:24]   = (weight_addr_valid[3])  ? weight[0][(weight_addrs[67:51]  )*8 +: 8]: 8'b0;
	assign output_weight[39:32]   = (weight_addr_valid[4])  ? weight[0][(weight_addrs[84:68]  )*8 +: 8]: 8'b0;
	assign output_weight[47:40]   = (weight_addr_valid[5])  ? weight[0][(weight_addrs[101:85] )*8 +: 8]: 8'b0;
	assign output_weight[55:48]   = (weight_addr_valid[6])  ? weight[0][(weight_addrs[118:102])*8 +: 8]: 8'b0;
	assign output_weight[63:56]   = (weight_addr_valid[7])  ? weight[0][(weight_addrs[135:119])*8 +: 8]: 8'b0;
	assign output_weight[71:64]   = (weight_addr_valid[8])  ? weight[0][(weight_addrs[152:136])*8 +: 8]: 8'b0;
	assign output_weight[79:72]   = (weight_addr_valid[9])  ? weight[0][(weight_addrs[169:153])*8 +: 8]: 8'b0;
	assign output_weight[87:80]   = (weight_addr_valid[10]) ? weight[0][(weight_addrs[186:170])*8 +: 8]: 8'b0;
	assign output_weight[95:88]   = (weight_addr_valid[11]) ? weight[0][(weight_addrs[203:187])*8 +: 8]: 8'b0;
	assign output_weight[103:96]  = (weight_addr_valid[12]) ? weight[0][(weight_addrs[220:204])*8 +: 8]: 8'b0;
	assign output_weight[111:104] = (weight_addr_valid[13]) ? weight[0][(weight_addrs[237:221])*8 +: 8]: 8'b0;
	assign output_weight[119:112] = (weight_addr_valid[14]) ? weight[0][(weight_addrs[254:238])*8 +: 8]: 8'b0;
	assign output_weight[127:120] = (weight_addr_valid[15]) ? weight[0][(weight_addrs[271:255])*8 +: 8]: 8'b0;
	//================生成波形====================
	// always @(posedge clk) begin
	// 	if (res_idx == `ARRAYHEIGHT-1) $finish ;
	// end
	initial begin
		$fsdbDumpfile("tb_conv.fsdb");
		$fsdbDumpvars("+all");
	end
	initial #680 $finish;

endmodule

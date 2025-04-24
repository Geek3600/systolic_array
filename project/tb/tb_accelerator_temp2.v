`timescale 1ns/1ns
`include "config.v"
module tb_accelerator();
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
	reg input_buffer_load_en;
	reg input_buffer_out_en;
	reg weight_buffer_load_en;
	reg weight_buffer_out_en;
	reg write_weight_en;

	reg output_buffer_load_en;
	reg output_buffer_out_en;
    reg relu_en;
	reg softmax_en;
	reg output_buffer_load_clear;
	reg output_buffer_acc_enable;
	reg output_buffer_acc_clear;
	reg input_buffer_delay_clear;
	reg tiling_input_nextcol_en ;
	reg tiling_weight_nextrow_en;
	reg tiling_input_next_iteration_en;

	reg [`DATASIZE*`ARRAYWIDTH-1:0] in_act;
	reg [`DATASIZE*`ARRAYWIDTH-1:0] in_weight;
	wire  [`OUTPUT_BUF_DATASIZE*`ARRAYWIDTH-1:0] out_top;

    // =========== 输入数据分块
    reg [20:0] act_cnt;
    reg act_enable;
	reg [8*24-1:0] act_addrs;
	reg [7:0] act_addr_valid;
	wire [8*8-1:0] output_activate;
	reg [147*112*112*8-1:0] activate [0:0];

    // =========== 权重数据分块
	reg [20:0] weight_cnt;
    reg  weight_enable;
	reg  [8*17-1:0] weight_addrs;
	reg  [7:0] weight_addr_valid;
	wire [8*8-1:0] output_weight;
	reg  [147*8*64-1:0] weight [0:0];

	// =========== 矩阵乘法开始，同时也是输出缓冲区开始输出
	reg [20:0] matmul_cnt;
	reg matmul_enable;

	initial begin
		$readmemh("/home/hyyuan/systolic-array/test/conv1_kernel.dat",weight);
		$readmemh("/home/hyyuan/systolic-array/test/im2col_input_224_224.dat",activate);
	end

	// 输入固定，不再是权重固定
    initial begin
        weight_enable = 0;
		act_enable = 0;
		matmul_enable = 0;

		output_buffer_load_en = 0;
		output_buffer_out_en = 0;
		output_buffer_load_clear = 0;
		output_buffer_acc_enable = 0;
		output_buffer_acc_clear  = 0;

		input_buffer_delay_clear = 0;

		// 是否跨行，跨列分块
		tiling_input_nextcol_en  = 0;
		tiling_weight_nextrow_en = 0;
		tiling_input_next_iteration_en = 0;

//===================== weight第0行第0列，input第0行第0列 1
        #CLOCK_PERIOD; 

        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);

		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);

		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //8 * 4 + 1
	
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // ((16 - 1) * 4 + 16)

		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出	
		#CLOCK_PERIOD;
		
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		input_buffer_delay_clear = 1;// 输入缓冲区延迟计数值清空
		#CLOCK_PERIOD;

		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

//===================== weight第0行第1列，input第1行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空


// //===================== weight第0行第2列，input第2行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

// //===================== weight第0行第3列，input第3行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

	
// //===================== weight第0行第4列，input第4行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空


// //===================== weight第0行第5列，input第5行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

	
// //===================== weight第0行第6列，input第6行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空


// //===================== weight第0行第7列，input第7行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空


// //===================== weight第0行第8列，input第8行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空




// 		tiling_input_nextcol_en = 1; // 提前告诉分块模块，input矩阵要换列了
// //===================== weight第0行第9列，input第9行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

// //===================== weight第0行第10列，input第10行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

// //===================== weight第0行第11列，input第11行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

// //===================== weight第0行第12列，input第12行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空


// //===================== weight第0行第13列，input第13行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

// //===================== weight第0行第14列，input第14行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空


// //===================== weight第0行第15列，input第15行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空


// //===================== weight第0行第16列，input第16行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

// //===================== weight第0行第17列，input第17行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空

		tiling_input_nextcol_en = 1; // 提前告诉input分块模块，input矩阵要换列了
// //===================== weight第0行第18列，input第18行第0列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空
//=====================跨列的处理	
		#CLOCK_PERIOD;
		tiling_input_nextcol_en = 0; // 关闭换列
		output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
		#CLOCK_PERIOD;
		output_buffer_acc_clear = 0; // 停止清空

// //===================== weight第0行第0列，input第0行第1列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空
// //===================== weight第0行第1列，input第1行第1列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空
// //===================== weight第0行第2列，input第2行第1列 
        #CLOCK_PERIOD; 
        weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
		#(CLOCK_PERIOD * 8);
		weight_enable = 0;        // 权重缓冲区载入结束
		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
		#(CLOCK_PERIOD * 8);
		act_enable = 0;           // 输入和权重都已到位
		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
		#(CLOCK_PERIOD * 33);       //64
		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
		#(CLOCK_PERIOD * 36); // （15 * 4 + 16）
		output_buffer_load_en = 0;// 输出缓冲区接收结束
		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
		output_buffer_acc_enable = 1;// 输出缓冲区累加
		matmul_enable = 0;     // 输出缓冲区停止输出
		#CLOCK_PERIOD;
		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
		#CLOCK_PERIOD;
		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空空


// // 下一个分块了
// //===================== weight第0行第0列，input第0行第1列 2
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空
// //===================== weight第0行第1列，input第1行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第0行第2列，input第2行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第0行第3列，input第3行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第0行第4列，input第4行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第0行第5列，input第5行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第0行第6列，input第6行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第0行第7列，input第7行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第0行第8列，input第8行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空


// 		tiling_input_next_iteration_en = 1; // 输入矩阵的列需要从头开始了
// 		tiling_weight_nextrow_en = 1;


// //===================== weight第0行第9列，input第9行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// 		tiling_input_next_iteration_en = 0;
// 		tiling_weight_nextrow_en = 0;
// 		// =====================跨列的处理	
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 0; // 停止清空

// //===================== weight第1行第0列，input第0行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第1列，input第1行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第2列，input第2行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第3列，input第3行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第4列，input第4行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第5列，input第5行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第6列，input第6行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第7列，input第7行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第8列，input第8行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空
		
		
// 		tiling_input_nextcol_en = 1; // 提前告诉分块模块，input矩阵要换列了
// //===================== weight第1行第9列，input第9行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //=====================跨列的处理	
// 		#CLOCK_PERIOD;
// 		tiling_input_nextcol_en = 0; // 关闭换列
// 		output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 0; // 停止清空

// //===================== weight第1行第0列，input第0行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第1行第1列，input第1行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第2列，input第2行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空		

// //===================== weight第1行第3列，input第3行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第1行第4列，input第4行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第1行第5列，input第5行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第1行第6列，input第6行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空		

// //===================== weight第1行第7列，input第7行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	
	
// //===================== weight第1行第8列，input第8行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	


// 		tiling_input_next_iteration_en = 1; // 输入矩阵的列需要从头开始了
// 		tiling_weight_nextrow_en = 1;

// //===================== weight第1行第9列，input第9行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// 		tiling_input_next_iteration_en = 0;
// 		tiling_weight_nextrow_en = 0;
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 0; // 停止清空

// //===================== weight第2行第0列，input第0行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第1列，input第1行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第2列，input第2行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第3列，input第3行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第4列，input第4行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第5列，input第5行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第6列，input第6行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第7列，input第7行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第8列，input第8行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空
		
		
// 		tiling_input_nextcol_en = 1; // 提前告诉分块模块，input矩阵要换列了
// //===================== weight第2行第9列，input第9行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //=====================跨列的处理	
// 		#CLOCK_PERIOD;
// 		tiling_input_nextcol_en = 0; // 关闭换列
// 		output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 0; // 停止清空

// //===================== weight第2行第0列，input第0行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第2行第1列，input第1行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第2列，input第2行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空		

// //===================== weight第2行第3列，input第3行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第2行第4列，input第4行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第2行第5列，input第5行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第2行第6列，input第6行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空		

// //===================== weight第2行第7列，input第7行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	
	
// //===================== weight第2行第8列，input第8行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	


// 		tiling_input_next_iteration_en = 1; // 输入矩阵的列需要从头开始了
// 		tiling_weight_nextrow_en = 1;

// //===================== weight第2行第9列，input第9行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// 		tiling_input_next_iteration_en = 0;
// 		tiling_weight_nextrow_en = 0;
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 0; // 停止清空

// //===================== weight第3行第0列，input第0行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第1列，input第1行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第2列，input第2行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第3列，input第3行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第4列，input第4行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第5列，input第5行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第6列，input第6行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第7列，input第7行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第8列，input第8行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空
		

// 		tiling_input_nextcol_en = 1; // 提前告诉分块模块，input矩阵要换列了
// //===================== weight第3行第9列，input第9行第0列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== 跨列的处理	
// 		#CLOCK_PERIOD;
// 		tiling_input_nextcol_en = 0; // 关闭换列
// 		output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_clear = 0; // 停止清空

// //===================== weight第3行第0列，input第0行第1列 
// 		#CLOCK_PERIOD; // 开始对输入数据进行分块，将其输入权重缓冲区
//         weight_enable = 1;
// 		#(CLOCK_PERIOD*16);
// 		weight_enable = 0; // 权重缓冲区载入结束
// 		act_enable = 1;    // 开始对权重数据进行分块，将其载入输入缓冲区，同时将输入数据载入脉动阵列
// 		#(CLOCK_PERIOD*16);
// 		act_enable = 0; // 输入和权重数据都已到位
// 		matmul_enable = 1; // 输出缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD*65);//64
// 		output_buffer_load_en = 1;
// 		#(CLOCK_PERIOD*76);
// 		output_buffer_load_en = 0;
// 		output_buffer_load_clear = 1;
// 		output_buffer_acc_enable = 1;
// 		#CLOCK_PERIOD;
// 		output_buffer_load_clear = 0;
// 		output_buffer_acc_enable = 0;
// 		matmul_enable = 0;
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第3行第1列，input第1行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第2列，input第2行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空		

// //===================== weight第3行第3列，input第3行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第3行第4列，input第4行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// //===================== weight第3行第5列，input第5行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空

// //===================== weight第3行第6列，input第6行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空		

// //===================== weight第3行第7列，input第7行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	
	
// //===================== weight第3行第8列，input第8行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	


// 		tiling_input_next_iteration_en = 1; // 输入矩阵的列需要从头开始了
// 		tiling_weight_nextrow_en = 1;

// //===================== weight第3行第9列，input第9行第1列 
//         #CLOCK_PERIOD; 
//         weight_enable = 1;        // 对输入数据进行分块，载入权重缓冲区
// 		#(CLOCK_PERIOD * 16);
// 		weight_enable = 0;        // 权重缓冲区载入结束
// 		act_enable = 1;           // 对权重数据进行分块，载入输入缓冲区，同时将输入数据载入脉动阵列	
// 		#(CLOCK_PERIOD * 16);
// 		act_enable = 0;           // 输入和权重都已到位
// 		matmul_enable = 1;  	  // 输入缓冲区开始输出，矩阵乘法开始
// 		#(CLOCK_PERIOD * 65);       //64
// 		output_buffer_load_en = 1;// 输出缓冲区开始接收输出
// 		#(CLOCK_PERIOD * 76); // （15 * 4 + 16）
// 		output_buffer_load_en = 0;// 输出缓冲区接收结束
// 		output_buffer_load_clear = 1;// 输出缓冲区延迟计数值清空
// 		output_buffer_acc_enable = 1;// 输出缓冲区累加
// 		matmul_enable = 0;     // 输出缓冲区停止输出
// 		#CLOCK_PERIOD;
// 		output_buffer_acc_enable = 0;// 输出缓冲区停止累加
// 		output_buffer_load_clear = 0;// 输出缓冲区延迟计数值停止清空
// 		input_buffer_delay_clear = 1;// 输入缓冲区的延迟计数进行清空
// 		#CLOCK_PERIOD;
// 		input_buffer_delay_clear = 0;// 输入缓冲区的延迟计数停止清空	

// 		tiling_input_next_iteration_en = 0;
// 		tiling_weight_nextrow_en = 0;
		// #CLOCK_PERIOD;
		// output_buffer_acc_clear = 1; // 清空累加寄存器，因为要计算新的分块
		// #CLOCK_PERIOD;
		// output_buffer_acc_clear = 0; // 停止清空
    end

	// 对权重数据自动分块的行计数, 调试用
	always @(posedge clk) begin
		if (rst) weight_cnt <= 0;
		else if (weight_enable == 1) weight_cnt <= weight_cnt + 1; 
        else weight_cnt <= 0;
	end

	// 对输入数据自动分块的行计数， 调试用
	always @(posedge clk) begin
		if (rst) act_cnt <= 0;
		else if (act_enable == 1) act_cnt <= act_cnt + 1; 
        else act_cnt <= 0;
	end

	// 对输入数据自动分块的行计数， 调试用
	always @(posedge clk) begin
		if (rst) matmul_cnt <= 0;
		else if (matmul_enable == 1) matmul_cnt <= matmul_cnt + 1; 
        else matmul_cnt <= 0;
	end

	// 第一步，加载权重到weight_buffer
	// 因为我im2col是对输入数据做的，所以变成了输入固定
	always @(posedge clk) begin
		if (rst) begin
			in_weight <= 0;
			weight_buffer_load_en <= 0;
		end
		else if (weight_enable) begin
			in_weight <= output_activate; // 将输入进行固定
			weight_buffer_load_en <= 1;
		end
		else begin
			in_weight <= 0;
			weight_buffer_load_en <= 0;
		end
	end

	// 第二步，权重数据载入输入缓冲区
	always @(posedge clk) begin
		if (rst) begin
			in_act <= 0;
			input_buffer_load_en <= 0;
		end
		else if (act_enable) begin
			in_act <= output_weight;
			input_buffer_load_en <= 1;
		end
		else begin
			in_act <= 0;
			input_buffer_load_en <= 0;
		end
	end

	// always @(posedge clk) begin
	// 	if (act_enable) begin
	// 		$display("%h %h %h %h %h %h %h %h %h %h %h %h %h %h %h %h \n" , output_weight[7:0]    ,
	// 																		output_weight[15:8]   ,
	// 																		output_weight[23:16]  ,
	// 																		output_weight[31:24]  ,
	// 																		output_weight[39:32]  ,
	// 																		output_weight[47:40]  ,
	// 																		output_weight[55:48]  ,
	// 																		output_weight[63:56]  ,
	// 																		output_weight[71:64]  ,
	// 																		output_weight[79:72]  ,
	// 																		output_weight[87:80]  ,
	// 																		output_weight[95:88]  ,
	// 																		output_weight[103:96] ,
	// 																		output_weight[111:104],
	// 																		output_weight[119:112],
	// 																		output_weight[127:120]);
	// 		// $display("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n" , weight_addrs[16:0]   ,
	// 		// 																weight_addrs[33:17]  ,
	// 		// 																weight_addrs[50:34]  ,
	// 		// 																weight_addrs[67:51]  ,
	// 		// 																weight_addrs[84:68]  ,
	// 		// 																weight_addrs[101:85] ,
	// 		// 																weight_addrs[118:102],
	// 		// 																weight_addrs[135:119],
	// 		// 																weight_addrs[152:136],
	// 		// 																weight_addrs[169:153],
	// 		// 																weight_addrs[186:170],
	// 		// 																weight_addrs[203:187],
	// 		// 																weight_addrs[220:204],
	// 		// 																weight_addrs[237:221],
	// 		// 																weight_addrs[254:238],
	// 		// 																weight_addrs[271:255]);
	// 	end
	// end
	// 输入载入脉动阵列
	// 权重载入输入缓冲区
	always @(posedge clk) begin
		if (rst) begin
			write_weight_en <= 0;
			weight_buffer_out_en <= 0;
		end
		else if (act_enable) begin // 将输入固定到脉动阵列中与权重载入输入缓冲区两个操作重叠
			write_weight_en <= 1;
			weight_buffer_out_en <= 1;
		end
		else begin
			write_weight_en <= 0;
			weight_buffer_out_en <= 0;
		end
	end

	// 全部数据都已经准备好，输入缓冲区开始输出，矩阵乘法开始
	always @(posedge clk) begin
		if (rst) input_buffer_out_en <= 0;
		else if (matmul_enable) input_buffer_out_en <= 1;
		else input_buffer_out_en <= 0;
	end



	accelerator u_accelerator(
		.clk(clk),
		.rst(rst),
		.input_buffer_load_en(input_buffer_load_en),
		.input_buffer_out_en(input_buffer_out_en),
		.input_buffer_delay_clear(input_buffer_delay_clear),
		.weight_buffer_load_en(weight_buffer_load_en),
		.weight_buffer_out_en(weight_buffer_out_en),
		.output_buffer_load_en(output_buffer_load_en),
		.output_buffer_out_en(output_buffer_out_en),
		.output_buffer_load_clear(output_buffer_load_clear),
		.output_buffer_acc_enable(output_buffer_acc_enable),
		.output_buffer_acc_clear(output_buffer_acc_clear),
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
		.io_enable(weight_enable),
		.io_nextColEnable(tiling_input_nextcol_en),
		.io_nextIteration(tiling_input_next_iteration_en),
		.io_rdAddr_0( act_addrs[23:0]    ),
		.io_rdAddr_1( act_addrs[47:24]   ),
		.io_rdAddr_2( act_addrs[71:48]   ),
		.io_rdAddr_3( act_addrs[95:72]   ),
		.io_rdAddr_4( act_addrs[119:96]   ),
		.io_rdAddr_5( act_addrs[143:120]   ),
		.io_rdAddr_6( act_addrs[167:144]  ),
		.io_rdAddr_7( act_addrs[191:168] ),
		.io_addrValid_0( act_addr_valid[0]),
		.io_addrValid_1( act_addr_valid[1]),
		.io_addrValid_2( act_addr_valid[2]),
		.io_addrValid_3( act_addr_valid[3]),
		.io_addrValid_4( act_addr_valid[4]),
		.io_addrValid_5( act_addr_valid[5]),
		.io_addrValid_6( act_addr_valid[6]),
		.io_addrValid_7( act_addr_valid[7])
	);
	assign output_activate[7:0]     = (act_addr_valid[0])  ? activate[0][(act_addrs[23:0]   )*8 +: 8]: 8'b0;
	assign output_activate[15:8]    = (act_addr_valid[1])  ? activate[0][(act_addrs[47:24]  )*8 +: 8]: 8'b0;
	assign output_activate[23:16]   = (act_addr_valid[2])  ? activate[0][(act_addrs[71:48]  )*8 +: 8]: 8'b0;
	assign output_activate[31:24]   = (act_addr_valid[3])  ? activate[0][(act_addrs[95:72]  )*8 +: 8]: 8'b0;
	assign output_activate[39:32]   = (act_addr_valid[4])  ? activate[0][(act_addrs[119:96] )*8 +: 8]: 8'b0;
	assign output_activate[47:40]   = (act_addr_valid[5])  ? activate[0][(act_addrs[143:120])*8 +: 8]: 8'b0;
	assign output_activate[55:48]   = (act_addr_valid[6])  ? activate[0][(act_addrs[167:144])*8 +: 8]: 8'b0;
	assign output_activate[63:56]   = (act_addr_valid[7])  ? activate[0][(act_addrs[191:168])*8 +: 8]: 8'b0;



    AutoTilingWeight u_autotilingweight(
		.clock(clk),
		.reset(rst),
		.io_enable(act_enable), // 因为我给input做的im2col所以，得反过来
		.io_nextRowEnable(tiling_weight_nextrow_en),
		.io_rdAddr_0( weight_addrs[16:0]),
		.io_rdAddr_1( weight_addrs[33:17]),
		.io_rdAddr_2( weight_addrs[50:34]),
		.io_rdAddr_3( weight_addrs[67:51]),
		.io_rdAddr_4( weight_addrs[84:68]),
		.io_rdAddr_5( weight_addrs[101:85]),
		.io_rdAddr_6( weight_addrs[118:102]),
		.io_rdAddr_7( weight_addrs[135:119]),
		.io_addrValid_0( weight_addr_valid[0]),
		.io_addrValid_1( weight_addr_valid[1]),
		.io_addrValid_2( weight_addr_valid[2]),
		.io_addrValid_3( weight_addr_valid[3]),
		.io_addrValid_4( weight_addr_valid[4]),
		.io_addrValid_5( weight_addr_valid[5]),
		.io_addrValid_6( weight_addr_valid[6]),
		.io_addrValid_7( weight_addr_valid[7])
	);
	assign output_weight[7:0]     = (weight_addr_valid[0])  ? weight[0][(weight_addrs[16:0]   )*8 +: 8]: 8'b0;
	assign output_weight[15:8]    = (weight_addr_valid[1])  ? weight[0][(weight_addrs[33:17]  )*8 +: 8]: 8'b0;
	assign output_weight[23:16]   = (weight_addr_valid[2])  ? weight[0][(weight_addrs[50:34]  )*8 +: 8]: 8'b0;
	assign output_weight[31:24]   = (weight_addr_valid[3])  ? weight[0][(weight_addrs[67:51]  )*8 +: 8]: 8'b0;
	assign output_weight[39:32]   = (weight_addr_valid[4])  ? weight[0][(weight_addrs[84:68]  )*8 +: 8]: 8'b0;
	assign output_weight[47:40]   = (weight_addr_valid[5])  ? weight[0][(weight_addrs[101:85] )*8 +: 8]: 8'b0;
	assign output_weight[55:48]   = (weight_addr_valid[6])  ? weight[0][(weight_addrs[118:102])*8 +: 8]: 8'b0;
	assign output_weight[63:56]   = (weight_addr_valid[7])  ? weight[0][(weight_addrs[135:119])*8 +: 8]: 8'b0;


	initial begin
		$fsdbDumpfile("tb_accelerator.fsdb");
		$fsdbDumpvars("+all");
	end
	initial #20000 $finish;

endmodule


module tb_bram();
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

    reg ena;
    reg [11:0] input_addr;
    reg [10:0] weight_addr;
    wire [63:0] input_douta;
    wire [63:0] weight_douta;

    initial begin
        ena = 0;
        #CLOCK_PERIOD;
        ena = 1;
        #CLOCK_PERIOD;
    end

    always @(posedge clk) begin
        if (rst) input_addr <= 0;
        else if (ena) input_addr <= input_addr + 1;
        else input_addr <= 0;
    end

    always @(posedge clk) begin
        if (rst) weight_addr <= 0;
        else if (ena) weight_addr <= weight_addr + 1;
        else weight_addr <= 0;
    end

    bram_im2col_input im2col_input_2828 (
        .clka(clk),    // input wire clka
        .ena(ena),      // input wire ena
        .addra(input_addr),  // input wire [14 : 0] addra
        .douta(input_douta)  // output wire [7 : 0] input_douta
    );

    bram_conv1_weight weight_bram (
        .clka(clk),    // input wire clka
        .ena(ena),      // input wire ena
        .addra(weight_addr),  // input wire [10 : 0] addra
        .douta(weight_douta)  // output wire [63 : 0] douta
    );
    //=================测试行为===================
	
	//================生成波形====================
	// initial begin
	// 	$fsdbDumpfile("tb_shift.fsdb");
	// 	$fsdbDumpvars("+all");
	// end
    //================生成波形====================
	initial #100000 $finish;

endmodule

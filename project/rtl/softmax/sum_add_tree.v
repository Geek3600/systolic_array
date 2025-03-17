module sum_add_tree #(
    parameter NUM_INPUTS = `OUTPUT_BUF_DATASIZE, // 输入数据的个数（可配置）
    parameter DATA_WIDTH = `OUTPUT_BUF_DATASIZE  // 数据的位宽（可配置）
) (
    input wire [NUM_INPUTS*DATA_WIDTH-1:0] inputs, // 输入数据
    output wire [DATA_WIDTH-1:0] F // 累加结果
);

    // 计算加法树的层数
    localparam NUM_STAGES = $clog2(NUM_INPUTS); // 2

    // 定义中间信号
    wire [NUM_INPUTS*DATA_WIDTH-1:0] stage [NUM_STAGES:0]; // 3层
    wire [DATA_WIDTH-1:0] sum;
    wire [NUM_INPUTS*DATA_WIDTH-1:0] inputs_q;

    // 初始化第一层
    register #(NUM_INPUTS*DATA_WIDTH) u_register1(clk, rst, inputs, inputs_q);
    generate
        genvar i;
        for (i = 0; i < NUM_INPUTS; i = i + 1) begin : INIT_STAGE
            assign stage[0][(i+1)*DATA_WIDTH-1:i*DATA_WIDTH] = inputs_q[(i+1)*DATA_WIDTH-1:i*DATA_WIDTH];
        end
    endgenerate


    // 生成加法树的每一层
    genvar s;
    generate
        for (s = 0; s < NUM_STAGES; s = s + 1) begin : ADDER_STAGE
            for (genvar j = 0; j < (NUM_INPUTS >> (s + 1)); j = j + 1) begin : ADDER_PAIR
                assign stage[s+1][(j+1)*DATA_WIDTH-1:j*DATA_WIDTH] = stage[s][(2*j+1)*DATA_WIDTH-1:2*j*DATA_WIDTH] + stage[s][(2*j+2)*DATA_WIDTH-1:(2*j+1)*DATA_WIDTH];
            end
        end
    endgenerate

    register #(NUM_INPUTS*DATA_WIDTH) u_register2(clk, rst, stage[NUM_STAGES][DATA_WIDTH-1:0], sum);
    // 输出F
    // F >= 1, 不能小于1
    // assign sum = stage[NUM_STAGES][DATA_WIDTH-1:0];
    assign F = (stage[NUM_STAGES][DATA_WIDTH-1:`FIXPOINT_FRAC] == 0) ? {{(`FIXPOINT_INT-1){1'b0}},1'b1,{`FIXPOINT_FRAC{1'b0}}} : sum;

endmodule
`timescale 1ns/1ns
//`include "config.v"
module softmax (
	input clk,
	input rst,
    input softmax_en,
    input [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] Xi, // 每个元素都是32位整数
    output  [`ARRAYWIDTH*(`FIXPOINT_INT+`FIXPOINT_FRAC)-1:0] out  // 每个元素都是32位定点数，22位整数，10位小数
);

    wire is_stage1;
    wire is_stage2;
    wire is_stage3;
    wire is_stage4;
    wire sort_en;
    reg [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] Xi_q;
    
    always @(posedge clk) begin
        if (rst) Xi_q <= 0;
        else if ((!is_stage1) && (!is_stage2) && (!is_stage3) && (!is_stage4)) Xi_q <= Xi;
        else Xi_q <= Xi_q;
    end

    softmax_controller u_softmax_controller(
        .clk(clk),  
        .rst(rst),
        .softmax_en(softmax_en),
        .is_stage1(is_stage1), // sort
        .is_stage2(is_stage2), // exp F
        .is_stage3(is_stage3), // lnF
        .is_stage4(is_stage4), // res
        .sort_en(sort_en)
    );

    wire [`OUTPUT_BUF_DATASIZE-1:0] Xmax; 
    systolic_odd_even_sort u_systolic_odd_even_sort(
        .clk(clk),
        .rst(rst),
        .en(sort_en),
        .in(Xi_q),
        .max_out(Xmax) 
    );


    wire [`ARRAYWIDTH*`OUTPUT_BUF_DATASIZE-1:0] sum_in;
    wire [`OUTPUT_BUF_DATASIZE-1:0] F;             
    sum_add_tree #(
        .NUM_INPUTS(`ARRAYWIDTH),         
        .DATA_WIDTH(`OUTPUT_BUF_DATASIZE)  
    ) u_sum_add_tree(
        .clk(clk),
        .rst(rst),
        .inputs(sum_in),                         
        .F(F)                          
    );

    wire [`OUTPUT_BUF_DATASIZE-1:0] lnF;
    ln u_ln(
        .clk(clk),
        .rst(rst),
        .F(F),
        .lnF(lnF) 
    );

    assign out = (is_stage4) ? sum_in : 0;
    genvar i;
    generate
        for (i = 0; i < `ARRAYWIDTH; i = i + 1) begin: exp_array
            exp u_exp(
                .clk(clk),
                .rst(rst),
                .is_stage2(is_stage2),
                .is_stage4(is_stage4),
                .lnF(lnF), // 32位定点数
                .Xi(Xi_q[(i+1)*(`FIXPOINT_FRAC+`FIXPOINT_INT)-1:i*(`FIXPOINT_FRAC+`FIXPOINT_INT)]),     // 32位整数
                .Xmax(Xmax),
                .exp_out(sum_in[(i+1)*(`FIXPOINT_FRAC+`FIXPOINT_INT)-1:i*(`FIXPOINT_FRAC+`FIXPOINT_INT)]) // 32位定点数
            );
        end
    endgenerate

endmodule


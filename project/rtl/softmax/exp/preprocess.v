`timescale 1ns/1ns
//`include "config.v"
module preprocess ( // 1.0111
    input  [`OUTPUT_BUF_DATASIZE-1:0] lnF, //32位定点数 lnf 22位整数 10位小数
    input  [`OUTPUT_BUF_DATASIZE-1:0] Xi, //32位整数数
    input  is_stage2,
    input  is_stage4,
    output [`OUTPUT_BUF_DATASIZE-1:0] u, // 32位整数部分 
    output [`FIXPOINT_FRAC-1:0] v// 10位小数部分
);
    // A * 1.0111 = A * (1 + 0.1 - 0.0001) = A + A>>1 + (~(A>>4)) + 1

    //mux 
    wire [`OUTPUT_BUF_DATASIZE-1:0] mux1;
    assign mux1 = (is_stage4) ? lnF : 0;

    
    //integer extend 32 fix point -> 42 fix point
    wire [`OUTPUT_BUF_DATASIZE+`FIXPOINT_FRAC-1:0] mux1_ext;
    assign mux1_ext = {{`FIXPOINT_FRAC{1'b0}}, mux1};

    //fraction extend 32 integer -> 42 fix point
    wire [`OUTPUT_BUF_DATASIZE+`FIXPOINT_FRAC-1:0] Xi_ext; 
    assign Xi_ext = {Xi, {`FIXPOINT_FRAC{1'b0}}};

    wire [`OUTPUT_BUF_DATASIZE+`FIXPOINT_FRAC-1:0] add; 
    assign add = Xi_ext + mux1_ext;

    wire [`OUTPUT_BUF_DATASIZE+`FIXPOINT_FRAC-1:0] const_multiple;
    assign const_multiple = add + (add >> 1) + (~(add >> 4)) + 1; // x * log2e 常数乘法
    assign u = const_multiple[`OUTPUT_BUF_DATASIZE+`FIXPOINT_FRAC-1:`FIXPOINT_FRAC]; // 下取整，整数部分
    assign v = const_multiple[`FIXPOINT_FRAC-1:0];               // 小数部分

endmodule

// 0011 3
// 001 10 1.5
// 01001 4.5

// 001100 + 000110  
// 000110
// 010010
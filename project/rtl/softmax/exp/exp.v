`timescale 1ns/1ns
//`include "config.v"
module exp (
    input clk,
    input rst,
    input is_stage2,
    input is_stage4,
    input [`OUTPUT_BUF_DATASIZE-1:0] lnF,  // 32位定点数
    input [`OUTPUT_BUF_DATASIZE-1:0] Xi,   // 32位整数
    input [`OUTPUT_BUF_DATASIZE-1:0] Xmax, // 32位整数
    output [`OUTPUT_BUF_DATASIZE-1:0] exp_out // 32位定点数
);
    
    wire [`OUTPUT_BUF_DATASIZE-1:0] lnF_q; // 32位整数部分 
    wire [`OUTPUT_BUF_DATASIZE-1:0] Xi_q;  // 32位整数部分 
    wire [`OUTPUT_BUF_DATASIZE-1:0] Xmax_sub_Xi;  // 32位整数部分 
    wire [`OUTPUT_BUF_DATASIZE-1:0] Xmax_sub_Xi_q;  // 32位整数部分 
    assign Xmax_sub_Xi = Xmax - Xi;
    register #(`OUTPUT_BUF_DATASIZE) u_register1(clk, rst, lnF, lnF_q);
    register #(`OUTPUT_BUF_DATASIZE) u_register2(clk, rst, Xmax_sub_Xi, Xmax_sub_Xi_q);


    wire [`OUTPUT_BUF_DATASIZE-1:0] u;   // 32位整数部分 
    wire [`OUTPUT_BUF_DATASIZE-1:0] u_q; // 32位整数部分 
    wire [`FIXPOINT_FRAC-1:0] v;         // 10位小数部分
    wire [`FIXPOINT_FRAC-1:0] v_q;       // 10位小数部分
    preprocess u_preprocess(
        .lnF(lnF_q),             //32位定点数 lnF 22位整数 10位小数
        .Xi(Xmax_sub_Xi_q),               //32位整数
        .is_stage2(is_stage2),
        .is_stage4(is_stage4),
        .u(u), // 32位整数部分 
        .v(v)  // 10位小数部分
    );
    register #(`OUTPUT_BUF_DATASIZE) u_register3(clk, rst, u, u_q);
    register #(`FIXPOINT_FRAC) u_register4(clk, rst, v, v_q);


    wire [17:0] k; // 8位整数，10位小数
    wire [17:0] b; 
    kb_lut u_kb_lut(
        .v(v_q),//10位
        .k(k), // 8位整数，10位小数
        .b(b)
    );

    wire [17:0] vi_int_ext;
    assign vi_int_ext = {{8{1'b0}}, v_q};

    // dsp
    wire [35:0] vi_mul_k;
    assign vi_mul_k = vi_int_ext * k;

    wire [17:0] vi_approximate; // 定点数相乘，小数位扩展到20位
    assign vi_approximate = b - vi_mul_k[27:10];
    
    // 
    assign exp_out = vi_approximate >> u_q;

endmodule


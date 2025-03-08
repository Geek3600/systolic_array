`timescale 1ns/1ns
`include "config.v"
module shift ( // 移位，然后直接-1，再进行拼接
    input clk,
    input rst,
    input [`OUTPUT_BUF_DATASIZE-1:0] leading_one_pos, //w
    input [`OUTPUT_BUF_DATASIZE-1:0] in, // F (10位整数，22位小数)
    input [`OUTPUT_BUF_DATASIZE-1:0] one_hot,
    output  [`OUTPUT_BUF_DATASIZE-1:0] out // m-1+w
);
    wire [`OUTPUT_BUF_DATASIZE-1:0] in_sub_one;
    wire [`OUTPUT_BUF_DATASIZE-1:0] in_sub_one_q;

    wire [`OUTPUT_BUF_DATASIZE-1:0] shift_len;
    wire [`OUTPUT_BUF_DATASIZE-1:0] shift_len_q;

    wire [`OUTPUT_BUF_DATASIZE-1:0] shift_res;
    wire [`OUTPUT_BUF_DATASIZE-1:0] shift_res_q;
    wire [`OUTPUT_BUF_DATASIZE-1:0] out_d;

    assign in_sub_one = in & (~one_hot);//m-1
    register #(`OUTPUT_BUF_DATASIZE) u_register1(clk, rst, in_sub_one, in_sub_one_q);

    assign shift_len = leading_one_pos - `FIXPOINT_FRAC;
    register #(`OUTPUT_BUF_DATASIZE) u_register2(clk, rst, shift_len, shift_len_q);

    assign shift_res = (in_sub_one_q >> (shift_len_q-1));
    register #(`OUTPUT_BUF_DATASIZE) u_register3(clk, rst, shift_res, shift_res_q);

    assign out_d = {shift_len[`FIXPOINT_INT-1:0], shift_res_q[`FIXPOINT_FRAC-1:0]}; //m-1+w
    register #(`OUTPUT_BUF_DATASIZE) u_register4(clk, rst, out_d, out);


endmodule


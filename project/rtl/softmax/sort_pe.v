`timescale 1ns/1ns
`include "config.v"
module sort_pe (
	input clk,
	input rst,
    input write_enable,   // 排序前存储待排序数据
    input [1:0] control,  // 控制信号 SL 00, SR 01, RR 10, RL 00   
    input [`OUTPUT_BUF_DATASIZE-1:0] write_data1,
    input [`OUTPUT_BUF_DATASIZE-1:0] write_data2,

    input [`OUTPUT_BUF_DATASIZE-1:0] in_right1,
    input [`OUTPUT_BUF_DATASIZE-1:0] in_right2,
    output [`OUTPUT_BUF_DATASIZE-1:0] out_right1,
    output [`OUTPUT_BUF_DATASIZE-1:0] out_right2,

    input [`OUTPUT_BUF_DATASIZE-1:0] in_left1,
    input [`OUTPUT_BUF_DATASIZE-1:0] in_left2,

    output [`OUTPUT_BUF_DATASIZE-1:0] out_left1,
    output [`OUTPUT_BUF_DATASIZE-1:0] out_left2
);

    reg [`OUTPUT_BUF_DATASIZE-1:0] num1;
    reg [`OUTPUT_BUF_DATASIZE-1:0] num2;
    wire [`OUTPUT_BUF_DATASIZE-1:0] small1;
    wire [`OUTPUT_BUF_DATASIZE-1:0] small2;

    always @(posedge clk) begin
        if (rst) begin
            num1 <= 0;
            num2 <= 0;
        end
        else if (write_enable) begin  // 排序前存储待排序数据
            num1 <= write_data1;
            num2 <= write_data2;
        end
        else if (control == `RECEIVE_LEFT) begin  
            num1 <= in_left1;
            num2 <= in_left2;
        end
        else if (control == `RECEIVE_RIGHT) begin
            num1 <= small1;
            num2 <= small2;
        end
        else begin
            num1 <= num1;
            num2 <= num2;
        end
    end

    sort4 u_sort4(
        .clk(clk),
        .rst(rst),
        .en(en),
        .in1(num1),
        .in2(num2),
        .in3(in_right1),
        .in4(in_right2),
        .small1(small1),
        .small2(small2),
        .large1(out_right1),
        .large2(out_right2)
    );

endmodule


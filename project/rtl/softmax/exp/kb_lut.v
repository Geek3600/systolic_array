`timescale 1ns/1ns
//`include "config.v"
module kb_lut (
    input [`FIXPOINT_FRAC-1:0] v,//10位
    output reg [17:0] k, // 8位整数，10位小数
    output reg [17:0] b
);  

    always @(*) begin
        if (`P == 0) begin
            b = 0;
            k = 18'b000000001000000000;    
        end
        else if (`P == 1) begin
            b = {{8{1'b0}}, 10'b1111111111};
            k = {{8{1'b0}}, 10'b1000000000};
        end
        else if (`P == 2) begin
            k = (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 0) ? 10'b1001010111 : 10'b0110101000 ;
            b = (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 0) ? 10'b1111111111 : 10'b1110101000 ;
        end
        else if (`P == 3) begin
            k = (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 0) ? 10'b1010001011 :
                (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 1) ? 10'b1000100100 :
                (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 2) ? 10'b0111001100 : 10'b0110000011;

            b = (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 0) ? 10'b1111111111 :
                (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 1) ? 10'b1111100110 :
                (v[`FIXPOINT_FRAC-1:`FIXPOINT_FRAC-`P+1] == 2) ? 10'b1110111010 : 10'b1110000011;


                
        end
    end
endmodule


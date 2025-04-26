`timescale 1ns/1ns
`include "config.v"
module softmax_controller (
	input clk,
	input rst,
    input softmax_en,
    output reg is_stage1,
    output reg is_stage2,
    output reg is_stage3,
    output reg is_stage4,
    output reg sort_en
);

    reg [4:0] current_state;
    reg [4:0] next_state;
    parameter IDLE   = 5'b00001; // 1
    parameter STAGE1 = 5'b00010; // 2 sort max
    parameter STAGE2 = 5'b00100; // 4 exp(Xmax - Xi) -> F
    parameter STAGE3 = 5'b01000; // 8 lnF
    parameter STAGE4 = 5'b10000; // 10 exp(Xmax - Xi - lnF)

    reg [7:0] cnt;
    always @(posedge clk) begin
        if (rst) cnt <= 0;
        else if (softmax_en) cnt <= cnt + 1;
        else cnt <= 0;
    end

    always @(posedge clk) begin
        if (rst) current_state <= 0;
        else current_state <= next_state;
    end

    always @(*) begin
        case(current_state)
            IDLE: begin
                if (softmax_en)
                    next_state = STAGE1; // 2 sort
                else 
                    next_state = IDLE;
            end
            STAGE1:begin
                if (cnt == 'd12)
                    next_state = STAGE2; // 4 exp(Xmax - Xi) and F
                else    
                    next_state = STAGE1;   
            end
            STAGE2:begin
                if (cnt == 'd14) 
                    next_state = STAGE3; // 8 lnF
                else 
                    next_state = STAGE2;
            end
            STAGE3:begin
                if (cnt == 'd18)
                    next_state = STAGE4; // 10 exp(Xmax - Xi - lnF)
                else 
                    next_state = STAGE3;
            end
            STAGE4:begin
                if (cnt == 'd25)
                    next_state = IDLE;
                else 
                    next_state = STAGE4;
            end
            default
                    next_state = IDLE;
        endcase
    end

    always @(posedge clk) begin
        if (rst) begin
            is_stage1 <= 0;
            is_stage2 <= 0;
            is_stage3 <= 0;
            is_stage4 <= 0;
            sort_en <= 0;
        end
        else if (next_state == STAGE1) begin
            is_stage1 <= 1;
            is_stage2 <= 0;
            is_stage3 <= 0;
            is_stage4 <= 0;
            sort_en <= 1;
        end
        else if (next_state == STAGE2) begin
            is_stage1 <= 0;
            is_stage2 <= 1;
            is_stage3 <= 0;
            is_stage4 <= 0;
            sort_en <= 0;
        end
        else if (next_state == STAGE3) begin
            is_stage1 <= 0;
            is_stage2 <= 0;
            is_stage3 <= 1;
            is_stage4 <= 0;
            sort_en <= 0;
        end
        else if (next_state == STAGE4) begin
            is_stage1 <= 0;
            is_stage2 <= 0;
            is_stage3 <= 0;
            is_stage4 <= 1;
            sort_en <= 0;
        end
        else begin
            is_stage1 <= 0;
            is_stage2 <= 0;
            is_stage3 <= 0;
            is_stage4 <= 0;
            sort_en <= 0;
        end
    end

endmodule


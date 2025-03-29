//      // verilator_coverage annotation
        module pc(
 000022 	input clk,
        //input rst
%000001 	input [31:0]imm,
%000000 	input [1:0]cond, //cond[0] 0 normal cond[0] 1 jal and Branch_ture cond[1] 1 jalr
%000001 	input [31:0]alu_out, 
%000000 	output [31:0]normal_pc, // pc + 4
%000000 	output [31:0]jal_branch_pc, // pc + imm
%000001 	output [31:0]pc
        );
        	assign normal_pc = pc + 32'd4;
        	assign jal_branch_pc = pc + imm;
%000001 	reg [31:0]next_pc;
 000010 	always @(posedge clk)begin
%000001 	if(cond==2'b00) next_pc <= normal_pc;
%000001 	if(cond==2'b01) next_pc <= jal_branch_pc;
 000010 	if(cond==2'b11) next_pc <= alu_out;
        end
        	assign pc = next_pc;
        endmodule
        

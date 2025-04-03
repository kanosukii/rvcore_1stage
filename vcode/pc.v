module pc(
	input clk,
//input rst
	input [31:0]imm,
	input [1:0]cond, //cond[0] 0 normal cond[0] 1 jal and Branch_ture cond[1] 1 jalr
	input [31:0]alu_out, 
	output [31:0]normal_pc, // pc + 4
	output [31:0]jal_branch_pc, // pc + imm
	output [31:0]pc
);
	assign normal_pc = pc + 32'd4;
	assign jal_branch_pc = pc + imm;
	reg [31:0]next_pc;
	always @(posedge clk)begin
	if(cond==2'b00) next_pc <= normal_pc;
	if(cond==2'b01) next_pc <= jal_branch_pc;
	if(cond==2'b10) next_pc <= alu_out;
	if(cond==2'b11) next_pc <= alu_out;

end
	assign pc = next_pc;
endmodule

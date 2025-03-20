module pc(
	input clk,
	input [31:0]pc,
	input [31:0]imm,
	input [1:0]cond, //cond[0] 0 normal cond[0] 1 jal and Branch_ture cond[1] 1 jalr
	input [31:0]data_out, 
	output [31:0]next_pc
);
	wire [31:0]first_pc; // choose normal or branch jal
	wire [31:0] adder;
	assign adder = (cond[0]) ? imm : 32'd4;
	assign first_pc = pc + adder;
	reg [31:0]next_pc_temp;
	always @(posedge clk)begin
	if(cond[1]) next_pc_temp = data_out;
	else next_pc_temp = first_pc;	
end
	assign next_pc = next_pc_temp;
endmodule

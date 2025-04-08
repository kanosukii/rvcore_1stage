module ctr(
	input [31:0]instr, //instruction
	output [31:0]imm,  //immediate number
	output [3:0]alu_ctr, //alu_ctr code
	output alu_b_ctr,  //1'b0 rs2 1'b1 imm 
	output [3:0]bxx, //branch
	output jal,
	output jalr,
	output reg_we,
	output mem_we,
	output [2:0]mem2reg,
	output [2:0]data_mem_opr,
	output [3:0]data_mem_opw
);
	wire [6:0]op;
//	wire [4:0]rs1,rs2,rd;
	wire [2:0]fun3;
	wire [6:0]fun7;
	wire [31:0]immI,immU,immS,immB,immJ;
	reg [31:0]out_imm;

	assign  op  = instr[6:0];
/*
	assign  rs1 = instr[19:15];
	assign  rs2 = instr[24:20];
	assign  rd  = instr[11:7];
*/
	assign  fun3  = instr[14:12];
	assign  fun7  = instr[31:25];

	assign immI = {{20{instr[31]}}, instr[31:20]};
	assign immU = {instr[31:12], 12'b0};
	assign immS = {{20{instr[31]}}, instr[31:25], instr[11:7]};
	assign immB = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
	assign immJ = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};

	wire type_J,type_U,type_S,type_B,type_I,type_R;
	wire op_0110_111 = (op == 7'b0110_111) ? 1'b1 : 1'b0;
	wire op_0010_111 = (op == 7'b0010_111) ? 1'b1 : 1'b0;
	wire op_1101_111 = (op == 7'b1101_111) ? 1'b1 : 1'b0;
	wire op_1100_111 = (op == 7'b1100_111) ? 1'b1 : 1'b0;
	wire op_1100_011 = (op == 7'b1100_011) ? 1'b1 : 1'b0;
	wire op_0000_011 = (op == 7'b0000_011) ? 1'b1 : 1'b0;
	wire op_0100_011 = (op == 7'b0100_011) ? 1'b1 : 1'b0;
	wire op_0010_011 = (op == 7'b0010_011) ? 1'b1 : 1'b0;
	wire op_0110_011 = (op == 7'b0110_011) ? 1'b1 : 1'b0;

	assign type_J = op_1101_111 ;
	assign type_U = op_0110_111 | op_0010_111;
	assign type_S = op_0100_011 ;
	assign type_B = op_1100_011 ;
	assign type_I = op_0010_011 | op_1100_111 | op_0000_011 ;
	assign type_R = op_0110_011 ;

	always @(*)begin
	out_imm = 32'b0;
	if(type_J) out_imm = immJ;
	if(type_U) out_imm = immU;
	if(type_S) out_imm = immS;
	if(type_B) out_imm = immB;
	if(type_I) out_imm = immI;
end
	assign imm = out_imm;

	assign alu_b_ctr = (type_R | type_B) ? 1'b0 : 1'b1;

	wire fun3_000 = (fun3 == 3'b000) ? 1'b1 : 1'b0;
	wire fun3_001 = (fun3 == 3'b001) ? 1'b1 : 1'b0;
	wire fun3_010 = (fun3 == 3'b010) ? 1'b1 : 1'b0;
	wire fun3_011 = (fun3 == 3'b011) ? 1'b1 : 1'b0;
	wire fun3_100 = (fun3 == 3'b100) ? 1'b1 : 1'b0;
	wire fun3_101 = (fun3 == 3'b101) ? 1'b1 : 1'b0;
	wire fun3_110 = (fun3 == 3'b110) ? 1'b1 : 1'b0;
	wire fun3_111 = (fun3 == 3'b111) ? 1'b1 : 1'b0;
	
	// alu_ctr encode
	reg [3:0]alu_ctr_temp;
	always @(*)begin
	alu_ctr_temp = 4'b0000;
	if((type_R && fun3_000 && !fun7[5]) || op_1100_111 || (op_0010_011 && fun3_000) || op_0100_011 || op_0000_011) alu_ctr_temp = 4'b0000; //add 4'b0000  add jalr addi sb sh sw lb lh lw lbu lhu num=11
	if((type_R && fun3_000 && fun7[5]) || (type_B && (fun3_000 || fun3_001))) alu_ctr_temp = 4'b1000; //sub 4'b1000 sub beq bne
	if((type_R ||  op_0010_011) && fun3_001) alu_ctr_temp = 4'b0001; //shift_l 4'b0001 sll slli
	if((type_R || op_0010_011) && fun3_011 || (type_B && (fun3_110 || fun3_111))) alu_ctr_temp = 4'b0011; //set_ltu 4'b0011 sltu sltiu bltu bgeu 
	if(((type_R || op_0010_011) && fun3_010) || (type_B && (fun3_100 || fun3_101))) alu_ctr_temp = 4'b0010; // set_lt 4'b0010 slt slti blt bge
	if((type_R || op_0010_011) && fun3_100) alu_ctr_temp = 4'b0100; //xor 4'b0100 xor xori 
	if((type_R || op_0010_011) && (fun3_101 && !fun7[5])) alu_ctr_temp = 4'b0101; //shift_r 4'b0101 srl srli
	if((type_R || op_0010_011) && fun3_101 && fun7[5]) alu_ctr_temp = 4'b1101; //shift_ra 4'b1101 sra srai
	if((type_R || op_0010_011) && fun3_110) alu_ctr_temp = 4'b0110; //or 4'b0110 or ori  
	if((type_R || op_0010_011) && fun3_111) alu_ctr_temp = 4'b0111; //and 4'b0111 and andi
end
	assign alu_ctr = alu_ctr_temp;

	assign bxx[2:0] = fun3;
	assign bxx[3] = type_B;	
	assign jal = type_J;
	assign jalr = op_1100_111;	
	assign reg_we = (type_B || type_S) ? 1'b1 : 1'b0;
	assign mem_we = type_S ? 1'b1 : 1'b0;
	assign data_mem_opr = fun3;

	reg [3:0]data_mem_opw_temp;
	always @(*)begin
	data_mem_opw_temp = 4'b0000;
	if(fun3[1:0] == 2'b00) data_mem_opw_temp = 4'b0001;
	if(fun3[1:0] == 2'b01) data_mem_opw_temp = 4'b0011;
	if(fun3[1:0] == 2'b10) data_mem_opw_temp = 4'b1111;
end
	assign data_mem_opw = data_mem_opw_temp;

	reg [2:0]mem2reg_temp;
	always @(*)begin
	mem2reg_temp = 3'b000;
	if(type_R || op_0010_011) mem2reg_temp = 3'b000;	//result out
	if(op_0000_011) mem2reg_temp = 3'b001; //data_mem out
	if(type_J || op_1100_111) mem2reg_temp = 3'b010; //normal_pc out
	if(op_0110_111) mem2reg_temp = 3'b011; //immediate_number out
	if(op_0010_111) mem2reg_temp = 3'b100; //pc + immediate_number out
end
	assign mem2reg = mem2reg_temp;
endmodule

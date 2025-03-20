module cpu(
	input clk
);
	wire [31:0]pc,instr,rs1_data,rs2_data,imm,alu_b,alu_out,data_mem_rdata,normal_pc;
	wire [31:0]jal_branch_pc,data2reg_wire;
	wire [3:0]alu_ctr,bxx,data_mem_opw;
	wire [2:0]mem2reg,data_mem_opr;
	wire [1:0]pc_cond;
	wire alu_b_ctr,jal,jalr,reg_we,mem_we,alu_less,alu_zero,branch_ture;
	reg [31:0]data2reg;
	instr_memory instr_memory_item(
		.clk(clk),
		.addr(pc),
		.instr(instr)
);
	regfile regfile_item(
		.clk(clk),
		.we(reg_we),
		.rs1(instr[19:15]),
		.rs2(instr[24:20]),
		.rd(instr[11:7]),
		.wd(data2reg_wire),
		.rs1_data(rs1_data),
		.rs2_data(rs2_data)
);
		assign alu_b = alu_b_ctr ? imm : rs2_data;
		alu alu_temp(
		.a(rs1_data),
		.b(alu_b),
		.ctr(alu_ctr),
		.out(alu_out),
		.is_less(alu_less),
		.is_zero(alu_zero)
);
		ctr ctr_item(
		.instr(instr),
		.imm(imm),
		.alu_ctr(alu_ctr),
		.alu_b_ctr(alu_b_ctr),
		.bxx(bxx),
		.jal(jal),
		.jalr(jalr),
		.reg_we(reg_we),
		.mem_we(mem_we),
		.mem2reg(mem2reg),
		.data_mem_opr(data_mem_opr),
		.data_mem_opw(data_mem_opw)
);
		data_memory data_memory_item(
		.clk(clk),
		.we(mem_we),
		.be(data_mem_opw),
		.op_read(data_mem_opr),
		.addr(alu_out),
		.wdata(rs2_data),
		.rdata(data_mem_rdata)
);
		assign pc_cond[0] = jal | branch_ture;
		assign pc_cond[1] = jalr; 
		pc pc_item(
		.clk(clk),
		.imm(imm),
		.cond(pc_cond),
		.alu_out(alu_out),
		.normal_pc(branch_pc),
		.jal_branch_pc(jal_branch_pc),
		.pc(pc)
);
		pc_branch pc_branch_item(
		.branch(bxx),
		.less(alu_less),
		.zero(alu_zero),
		.branch_ture(branch_ture)
);
		always @(*)begin
		data2reg = alu_out;
		if(mem2reg == 3'b000) data2reg = alu_out;
		if(mem2reg == 3'b001) data2reg = data_mem_rdata;
		if(mem2reg == 3'b010) data2reg = normal_pc;
		if(mem2reg == 3'b011) data2reg = imm;
		if(mem2reg == 3'b100) data2reg = jal_branch_pc;
end	
		assign data2reg_wire = data2reg;
endmodule

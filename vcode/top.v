module top(
	 input clk
);
cpu cpu_item(
	 .clk(clk)
); 
//	$readme();
	 initial begin
	 cpu_item.instr_memory_item.mem[0] =32'h0050_0093;   //addi x1 x0 5
	 cpu_item.instr_memory_item.mem[1] =32'h0030_0113;   //addi x2 x0 3
	 cpu_item.instr_memory_item.mem[2] =32'h0000_0193;   //addi x3 x0 0
	 cpu_item.instr_memory_item.mem[3] =32'h0011_01b3;   //add x3 x2 x1
	 cpu_item.instr_memory_item.mem[4] =32'h0080_0213;   //addi x4 x0 8
	 cpu_item.instr_memory_item.mem[5] =32'h0041_8663;   //beq x3 x4 12:test 
	 cpu_item.instr_memory_item.mem[6] =32'h0010_0513;   //addi x10 x0 1 :wrong
	 cpu_item.instr_memory_item.mem[8] =32'h0000_0513;   //addi x10 x0 0 :pass
				

	 cpu_item.pc_item.next_pc = 32'b0;
 end
	 initial begin
		 if ($test$plusargs("trace") != 0) begin
				 $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
				 $dumpfile("logs/vlt_dump.vcd");
				 $dumpvars(); end
		 $display("[%0t] Model running...\n", $time);
 end
endmodule

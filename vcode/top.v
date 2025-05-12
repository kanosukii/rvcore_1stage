module top(
	 input clk
);
(* verilator public *) cpu cpu_item(
	 .clk(clk)
); 
//	$readme();
	 initial begin
		$readmemh("./tcode/mytest/test.hex", cpu_item.instr_memory_item.mem,0);	
//    $display("mem[0] = %h", cpu_item.instr_memory_item.mem[0]);

/*
		cpu_item.instr_memory_item.mem[0] = 32'h00a00093;
		cpu_item.instr_memory_item.mem[1] = 32'h01400113;
		cpu_item.instr_memory_item.mem[2] = 32'hffb00193;
*/
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

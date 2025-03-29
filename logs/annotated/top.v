//      // verilator_coverage annotation
        module top(
 000022 	 input clk
        );
        cpu cpu_item(
        	 .clk(clk)
        ); 
        //	$readme();
%000001 	 initial begin
%000001 	 cpu_item.instr_memory_item.mem[0] =32'h0050_0093;   //addi x1 x0 5
%000001 	 cpu_item.instr_memory_item.mem[1] =32'h0030_0113;   //addi x2 x0 3
%000001 	 cpu_item.instr_memory_item.mem[2] =32'h0000_0193;   //addi x3 x0 0
%000001 	 cpu_item.instr_memory_item.mem[3] =32'h0011_01b3;   //add x3 x2 x1
%000001 	 cpu_item.instr_memory_item.mem[4] =32'h0080_0213;   //addi x4 x0 8
%000001 	 cpu_item.instr_memory_item.mem[5] =32'h0041_8663;   //beq x3 x4 12:test 
%000001 	 cpu_item.instr_memory_item.mem[6] =32'h0010_0513;   //addi x10 x0 1 :wrong
%000001 	 cpu_item.instr_memory_item.mem[8] =32'h0000_0513;   //addi x10 x0 0 :pass
        				
        
%000001 	 cpu_item.pc_item.next_pc = 32'b0;
         end
%000001 	 initial begin
%000000 		 if ($test$plusargs("trace") != 0) begin
%000001 				 $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001 				 $dumpfile("logs/vlt_dump.vcd");
%000001 				 $dumpvars(); end
%000001 		 $display("[%0t] Model running...\n", $time);
         end
        endmodule
        

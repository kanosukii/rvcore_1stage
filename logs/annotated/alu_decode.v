//      // verilator_coverage annotation
        module alu_decode(
%000007   input [3:0]alu_ctr,
 000016   output is_add,
%000006 	output is_sub,
%000004   output is_shift_l,
%000008   output is_set_lt,
%000008   output is_set_ltu,
%000005   output is_xor,
%000004   output is_shift_r,
%000004 	output is_shift_ra,
%000005   output is_or,
%000004   output is_and
        );
          assign is_add       = (alu_ctr==4'b0000)? 1'b1:1'b0; 
        	assign is_sub				= (alu_ctr==4'b1000)? 1'b1:1'b0;
          assign is_shift_l   = (alu_ctr==4'b0001)? 1'b1:1'b0; 
          assign is_set_ltu   = (alu_ctr==4'b0011)? 1'b1:1'b0;  
          assign is_set_lt    = (alu_ctr==4'b0010)? 1'b1:1'b0;
          assign is_xor       = (alu_ctr==4'b0100)? 1'b1:1'b0;  
          assign is_shift_r   = (alu_ctr==4'b0101)? 1'b1:1'b0;  
        	assign is_shift_ra  = (alu_ctr==4'b1101)? 1'b1:1'b0;
          assign is_or        = (alu_ctr==4'b0110)? 1'b1:1'b0;  
          assign is_and       = (alu_ctr==4'b0111)? 1'b1:1'b0;  
        endmodule
        

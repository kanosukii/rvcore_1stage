//      // verilator_coverage annotation
        module pc_branch(
 000013 	input [3:0]branch,
 000014 	input less,
 000030 	input zero,
%000005 	output branch_ture
        );
 000027 	reg branch_ture_temp;
%000001 	always @(*)begin
%000001 	branch_ture_temp = 1'b0;
 000016 	if((branch[2:0]==3'b000) && zero)    branch_ture_temp = 1'b1;
%000005 	if((branch[2:0]==3'b001) && (!zero)) branch_ture_temp = 1'b1;
%000001 	if((branch[2:0]==3'b100) && less)    branch_ture_temp = 1'b1;
%000004 	if((branch[2:0]==3'b101) && (!less)) branch_ture_temp = 1'b1;
 000070 	if((branch[2:0]==3'b110) && less) 	 branch_ture_temp = 1'b1;
 000013 	if((branch[2:0]==3'b111) && (!less)) branch_ture_temp = 1'b1;
        end
        	assign branch_ture = branch_ture_temp && branch[3];
        endmodule
        

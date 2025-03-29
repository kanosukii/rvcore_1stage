//      // verilator_coverage annotation
        module pc_branch(
%000002 	input [3:0]branch,
%000000 	input less,
%000005 	input zero,
%000003 	output branch_ture
        );
%000007 	reg branch_ture_temp;
%000001 	always @(*)begin
%000001 	branch_ture_temp = 1'b0;
%000003 	if((branch[2:0]==3'b000) && zero)    branch_ture_temp = 1'b1;
%000001 	if((branch[2:0]==3'b001) && (!zero)) branch_ture_temp = 1'b1;
 000011 	if((branch[2:0]==3'b100) && less)    branch_ture_temp = 1'b1;
 000011 	if((branch[2:0]==3'b101) && (!less)) branch_ture_temp = 1'b1;
 000011 	if((branch[2:0]==3'b110) && less) 	 branch_ture_temp = 1'b1;
 000011 	if((branch[2:0]==3'b111) && (!less)) branch_ture_temp = 1'b1;
        end
        	assign branch_ture = branch_ture_temp && branch[3];
        endmodule
        

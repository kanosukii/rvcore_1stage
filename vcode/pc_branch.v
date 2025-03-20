module pc_branch(
	input [3:0]branch,
	input less,
	input zero,
	output branch_ture
);
	reg branch_ture_temp;
	always @(*)begin
	branch_ture_temp = 1'b0;
	if((branch[2:0]==3'b000) && zero)    branch_ture_temp = 1'b1;
	if((branch[2:0]==3'b001) && (!zero)) branch_ture_temp = 1'b1;
	if((branch[2:0]==3'b100) && less)    branch_ture_temp = 1'b1;
	if((branch[2:0]==3'b101) && (!less)) branch_ture_temp = 1'b1;
	if((branch[2:0]==3'b110) && less) 	 branch_ture_temp = 1'b1;
	if((branch[2:0]==3'b111) && (!less)) branch_ture_temp = 1'b1;
end
	assign branch_ture = branch_ture_temp && branch[3];
endmodule

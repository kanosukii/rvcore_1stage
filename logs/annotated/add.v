//      // verilator_coverage annotation
        module add(
%000001 	input [31:0]a,
 000020 	input [31:0]b,
 000019 	input cin,
%000007 	output [31:0]sum,
 000027 	output carry,
 000030 	output zero,
%000001 	output overflow
        );
        //	wire temp[30:0];
        //	rippleadd i0(.a(a[0]), .b(b[0]),.c(cin),.sum(sum[0]),.carry(temp[0]));
        	assign {carry , sum} = {1'b0, a} +{1'b0, b} +{{31{1'b0}}, cin};
        	assign zero = &(~sum);
        	assign overflow = (a[31] == b[31])&&(a[31] != sum[31]);
        endmodule
        

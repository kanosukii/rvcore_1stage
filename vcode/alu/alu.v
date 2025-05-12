module alu(
	input [31:0]a,
	input [31:0]b,
	input [3:0]ctr,
	output [31:0]out,
	output is_less,
	output is_zero
);
  wire is_add,is_shift_l,is_set_lt,is_set_ltu,is_xor,is_shift_r,is_or,is_and,is_sub;
  wire is_shift_ra;
  alu_decode item_alu_decode(
	.alu_ctr(ctr),
	.is_add(is_add),
	.is_sub(is_sub),
	.is_shift_l(is_shift_l),
	.is_set_lt(is_set_lt),
	.is_set_ltu(is_set_ltu),
	.is_xor(is_xor),
	.is_shift_r(is_shift_r),
	.is_shift_ra(is_shift_ra),
	.is_or(is_or),
	.is_and(is_and)
 );
  
  wire [31:0]out_add,out_shift,out_xor,out_or,out_and;
  wire out_zero,out_less;
  wire out_carry,out_overflow;
  wire add_cin;
  reg [1:0]shift_type;
  always @(*)begin
    shift_type = 2'b00;
    if(is_shift_l)     shift_type = 2'b00;
    if(is_shift_r)     shift_type = 2'b01;
    if(is_shift_ra)    shift_type = 2'b11;
end   
  barrel_shifter item0(
	.data_in(a),
	.shift_amt(b[4:0]),
	.shift_type(shift_type),
	.data_out(out_shift)
);

  assign add_cin = is_sub | is_set_lt | is_set_ltu; 
  add item_add(
	.a(a),
	.b(b^{32{add_cin}}),
	.cin(add_cin),
	.sum(out_add),
	.carry(out_carry),
	.zero(out_zero),
	.overflow(out_overflow)
);	


  assign out_and= a & b;
  assign out_or = a | b;
  assign out_xor= a ^ b;
  
  assign out_less= is_set_ltu ? (~out_carry) : (out_add[31] ^ out_overflow);
	wire add_sub = is_add | is_sub; // common add sub
  wire shift_lr= is_shift_l | is_shift_r | is_shift_ra; //shift left right logic and else
	wire set_l  = is_set_lt | is_set_ltu; // set less than or unsign
  reg [31:0]out_temp;
  always @(*)begin
  out_temp = 32'b0;
  if(add_sub)           out_temp = out_add;
  if(shift_lr) 				  out_temp = out_shift;
  if(set_l)             out_temp = {{31'b0},out_less}; 
  if(is_xor)            out_temp = out_xor;
  if(is_or)             out_temp = out_or;
  if(is_and)            out_temp = out_and;
end

  assign is_less = out_less;
  assign is_zero = out_zero;
  assign out = out_temp;
endmodule;

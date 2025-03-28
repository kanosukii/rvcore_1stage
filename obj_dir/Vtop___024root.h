// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*3:0*/ top__DOT__cpu_item__DOT__bxx;
        CData/*1:0*/ top__DOT__cpu_item__DOT__pc_cond;
        CData/*0:0*/ top__DOT__cpu_item__DOT__reg_we;
        CData/*0:0*/ top__DOT__cpu_item__DOT__branch_ture;
        CData/*3:0*/ top__DOT__cpu_item__DOT____Vtogcov__alu_ctr;
        CData/*3:0*/ top__DOT__cpu_item__DOT____Vtogcov__bxx;
        CData/*3:0*/ top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw;
        CData/*2:0*/ top__DOT__cpu_item__DOT____Vtogcov__mem2reg;
        CData/*1:0*/ top__DOT__cpu_item__DOT____Vtogcov__pc_cond;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__alu_b_ctr;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__jal;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__jalr;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__reg_we;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__mem_we;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__alu_less;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__alu_zero;
        CData/*0:0*/ top__DOT__cpu_item__DOT____Vtogcov__branch_ture;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_less;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin;
        CData/*1:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__set_l;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_add;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_l;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_lt;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_ltu;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_xor;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_r;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_or;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_and;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_sub;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_ra;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_carry;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_overflow;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_cin;
        CData/*1:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_sub;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_lr;
        CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__set_l;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__type_U;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__type_I;
        CData/*3:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp;
        CData/*3:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp;
        CData/*2:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_U;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_B;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_I;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_R;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0110_111;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_111;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0000_011;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_011;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_000;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_001;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_010;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_011;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_100;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_101;
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_110;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_111;
        CData/*0:0*/ top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp;
        CData/*0:0*/ top__DOT__cpu_item__DOT__pc_branch_item__DOT____Vtogcov__branch_ture_temp;
        CData/*0:0*/ __VdfgTmp_hf91909b2__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__cpu_item__DOT__instr;
        IData/*31:0*/ top__DOT__cpu_item__DOT__rs1_data;
        IData/*31:0*/ top__DOT__cpu_item__DOT__rs2_data;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_b;
        IData/*31:0*/ top__DOT__cpu_item__DOT__normal_pc;
        IData/*31:0*/ top__DOT__cpu_item__DOT__jal_branch_pc;
        IData/*31:0*/ top__DOT__cpu_item__DOT__data2reg;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__pc;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__instr;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__rs1_data;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__rs2_data;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__imm;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__alu_b;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__alu_out;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__normal_pc;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc;
        IData/*31:0*/ top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_add;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_or;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_and;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4;
        IData/*31:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__immI;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__immS;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__immB;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__immJ;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immU;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB;
        IData/*31:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ;
        IData/*31:0*/ top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp;
        IData/*31:0*/ top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg;
        IData/*31:0*/ top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg;
        IData/*31:0*/ top__DOT__cpu_item__DOT__pc_item__DOT__next_pc;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 65536> top__DOT__cpu_item__DOT__instr_memory_item__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu_item__DOT__regfile_item__DOT__register;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32768> top__DOT__cpu_item__DOT__data_memory_item__DOT__mem;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

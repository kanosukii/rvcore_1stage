// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0;
    top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0 = 0;
    CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0;
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0 = 0;
    CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0;
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0 = 0;
    CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_ha4d81d37__0;
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_ha4d81d37__0 = 0;
    IData/*31:0*/ __VdfgTmp_h996430c4__0;
    __VdfgTmp_h996430c4__0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0;
    __Vdlyvdim0__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0;
    __Vdlyvval__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0;
    __Vdlyvset__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0 = 0;
    SData/*14:0*/ __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0;
    __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 = 0;
    SData/*14:0*/ __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1;
    __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1;
    __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1;
    __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1;
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 = 0;
    SData/*14:0*/ __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2;
    __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2;
    __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2;
    __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2;
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 = 0;
    SData/*14:0*/ __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3;
    __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3;
    __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3;
    __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3;
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 = 0;
    // Body
    vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
    if ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
            = vlSelf->top__DOT__cpu_item__DOT__normal_pc;
    }
    if ((0U != (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
            = vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc;
    }
    if ((1U != (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
    }
    if ((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp;
    }
    if ((3U != (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__cpu_item__DOT__reg_we)) 
                  & (0U != (0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                     >> 7U))))))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
    }
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 = 0U;
    __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 = 0U;
    __Vdlyvset__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0 = 0U;
    if (((~ (IData)(vlSelf->top__DOT__cpu_item__DOT__reg_we)) 
         & (0U != (0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 7U))))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        __Vdlyvval__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0 
            = vlSelf->top__DOT__cpu_item__DOT__data2reg;
        __Vdlyvset__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0 
            = (0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                        >> 7U));
    }
    if ((0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        if ((8U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp))) {
            vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
            __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 
                = (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                   >> 0x18U);
            __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 = 1U;
            __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3 
                = (0x7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp) 
                      >> 2U)))) {
            vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp) 
                      >> 1U)))) {
            vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp)))) {
            vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp))) {
            vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
            __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 
                = (0xffU & vlSelf->top__DOT__cpu_item__DOT__rs2_data);
            __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 = 1U;
            __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 = 0U;
            __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0 
                = (0x7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp);
        }
        if ((4U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp))) {
            vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
            __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 
                = (0xffU & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                            >> 0x10U));
            __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 = 1U;
            __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2 
                = (0x7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp);
        }
        if ((2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp))) {
            vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
            __Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 
                = (0xffU & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                            >> 8U));
            __Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 = 1U;
            __Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 = 8U;
            __Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1 
                = (0x7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp) 
                      >> 3U)))) {
            vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (__Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem[__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0))) 
                & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem
                [__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v0))));
    }
    if (__Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem[__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1))) 
                & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem
                [__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v1))));
    }
    if (__Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem[__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2))) 
                & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem
                [__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v2))));
    }
    if (__Vdlyvset__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem[__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3))) 
                & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem
                [__Vdlyvdim0__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__cpu_item__DOT__data_memory_item__DOT__mem__v3))));
    }
    if (__Vdlyvset__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0) {
        vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register[__Vdlyvdim0__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0] 
            = __Vdlyvval__top__DOT__cpu_item__DOT__regfile_item__DOT__register__v0;
    }
    vlSelf->top__DOT__cpu_item__DOT__normal_pc = ((IData)(4U) 
                                                  + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc);
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc) 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__normal_pc) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc)));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc));
    }
    if ((0x23U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__cpu_item__DOT__instr = vlSelf->top__DOT__cpu_item__DOT__instr_memory_item__DOT__mem
        [(0xffffU & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                     >> 2U))];
    if ((0x23U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x63U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x6fU != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (3U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (3U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
    }
    if ((2U != (3U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x37U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((0x6fU == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                  | (0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)))))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
    }
    if ((3U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x17U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
    }
    if ((2U != (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
    }
    if ((4U != (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
    }
    if (((0x6fU == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal 
            = (0x6fU == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jalr))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jalr 
            = (0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem_we))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem_we 
            = (0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_B))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_B 
            = (0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0x33U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_R))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_R 
            = (0x33U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0x37U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0110_111))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0110_111 
            = (0x37U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0x17U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_111))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_111 
            = (0x17U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0000_011))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0000_011 
            = (3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0x13U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_011))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__op_0010_011 
            = (0x13U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_000))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_000 
            = (0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    if (((1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_001))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_001 
            = (1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    if (((2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_010))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_010 
            = (2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    if (((3U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_011))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_011 
            = (3U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    if (((4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_100))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_100 
            = (4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    if (((5U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_101))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_101 
            = (5U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    if (((6U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_110))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_110 
            = (6U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    if (((7U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0xcU))) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_111))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__fun3_111 
            = (7U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xcU)));
    }
    vlSelf->top__DOT__cpu_item__DOT__reg_we = ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                                               | (0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__cpu_item__DOT__instr)));
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp = 0U;
    if ((0U == (3U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp = 1U;
    }
    if ((1U == (3U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp = 3U;
    }
    if ((2U == (3U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp = 0xfU;
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__instr 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__instr 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__instr 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__instr 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__instr ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__instr) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__instr));
    }
    vlSelf->top__DOT__cpu_item__DOT__bxx = (((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                >> 0xcU)));
    __VdfgTmp_h996430c4__0 = vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register
        [(0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                   >> 0xfU))];
    vlSelf->__VdfgTmp_hf91909b2__0 = ((0x33U == (0x7fU 
                                                 & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                                      | (0x63U == (0x7fU 
                                                   & vlSelf->top__DOT__cpu_item__DOT__instr)));
    vlSelf->top__DOT__cpu_item__DOT__rs2_data = ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                      >> 0x14U)))
                                                  ? 0U
                                                  : 
                                                 vlSelf->top__DOT__cpu_item__DOT__regfile_item__DOT__register
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                      >> 0x14U))]);
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U 
        = ((0x37U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
           | (0x17U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)));
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I 
        = ((0x13U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
           | ((0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
              | (3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))));
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
        = (((- (IData)((vlSelf->top__DOT__cpu_item__DOT__instr 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__cpu_item__DOT__instr) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                          >> 0x14U)))));
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
        = (((- (IData)((vlSelf->top__DOT__cpu_item__DOT__instr 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                      >> 7U))));
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
        = (((- (IData)((vlSelf->top__DOT__cpu_item__DOT__instr 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                         >> 7U)))));
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
        = (((- (IData)((vlSelf->top__DOT__cpu_item__DOT__instr 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                >> 0x14U));
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0 
        = (IData)((0x33U == (0x707fU & vlSelf->top__DOT__cpu_item__DOT__instr)));
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
           | (0x13U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)));
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__reg_we) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__reg_we))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__reg_we 
            = vlSelf->top__DOT__cpu_item__DOT__reg_we;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw 
            = ((0xeU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw 
            = ((0xdU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw 
            = ((0xbU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw 
            = ((7U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_opw)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__data_mem_opw_temp)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__bxx) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx 
            = ((0xeU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__bxx) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx 
            = ((0xdU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__bxx) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx 
            = ((0xbU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__bxx) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx 
            = ((7U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__bxx)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx)));
    }
    top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0 
        = ((0U != (0x1fU & (vlSelf->top__DOT__cpu_item__DOT__instr 
                            >> 0xfU))) & (__VdfgTmp_h996430c4__0 
                                          >> 0x1fU));
    vlSelf->top__DOT__cpu_item__DOT__rs1_data = ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                      >> 0xfU)))
                                                  ? 0U
                                                  : __VdfgTmp_h996430c4__0);
    if ((1U ^ ((IData)(vlSelf->__VdfgTmp_hf91909b2__0) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b_ctr)))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b_ctr 
            = (1U & (~ (IData)(vlSelf->__VdfgTmp_hf91909b2__0)));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__rs2_data 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__rs2_data 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs2_data) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__rs2_data));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U)))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_U))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_U 
            = vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I)))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_I))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__type_I 
            = vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I;
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ 
          ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immJ) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS 
          ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immS) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB 
          ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immB) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
               ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                  ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                   ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                    ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                     ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                      ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                       ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
                        ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI 
          ^ vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immI) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI));
    }
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm = 0U;
    if ((0x6fU == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
            = vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immJ;
    }
    if (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_U) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
            = (0xfffff000U & vlSelf->top__DOT__cpu_item__DOT__instr);
    }
    if ((0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
            = vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immS;
    }
    if ((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
            = vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immB;
    }
    if (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__type_I) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
            = vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__immI;
    }
    if ((1U & (~ (((~ (vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0x1eU)) & (IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0)) 
                  | ((0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                     | ((IData)((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__cpu_item__DOT__instr))) 
                        | ((0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                           | (3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))))))))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0) 
                  & (((vlSelf->top__DOT__cpu_item__DOT__instr 
                       >> 0x1eU) | (0x63U == (0x7fU 
                                              & vlSelf->top__DOT__cpu_item__DOT__instr))) 
                     & ((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                      >> 0xcU))) | 
                        (1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                      >> 0xcU))))))))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0)))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (((2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                    >> 0xcU))) | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__cpu_item__DOT__instr))) 
                     & ((4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                      >> 0xcU))) | 
                        (5U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                      >> 0xcU))))))))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (0x4000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (0x1000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (0x6000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (((3U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                    >> 0xcU))) | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__cpu_item__DOT__instr))) 
                     & ((6U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                      >> 0xcU))) | 
                        (7U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                      >> 0xcU))))))))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (0x7000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp = 0U;
    if (top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp = 0U;
    }
    if ((3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp = 1U;
    }
    if (((0x6fU == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
         | (0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp = 2U;
    }
    if ((0x37U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp = 3U;
    }
    if ((0x17U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp = 4U;
    }
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_ha4d81d37__0 
        = ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
           & (0x5000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__rs1_data 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__rs1_data) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__rs1_data));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__imm) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm));
    }
    vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
        = (vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm 
           + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc);
    vlSelf->top__DOT__cpu_item__DOT__alu_b = ((IData)(vlSelf->__VdfgTmp_hf91909b2__0)
                                               ? vlSelf->top__DOT__cpu_item__DOT__rs2_data
                                               : vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm);
    if ((3U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
    }
    if ((2U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
    }
    if ((4U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg)))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg 
            = ((6U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg)))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg 
            = ((5U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg)))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg 
            = ((3U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__mem2reg)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp)));
    }
    if ((1U & (~ ((~ (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0x1eU)) & (IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_ha4d81d37__0))))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_ha4d81d37__0) 
                  & (vlSelf->top__DOT__cpu_item__DOT__instr 
                     >> 0x1eU))))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 0U;
    if ((((~ (vlSelf->top__DOT__cpu_item__DOT__instr 
              >> 0x1eU)) & (IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0)) 
         | ((0x67U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
            | ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__cpu_item__DOT__instr))) 
               | ((0x23U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                  | (3U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))))))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 0U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0) 
         & (((vlSelf->top__DOT__cpu_item__DOT__instr 
              >> 0x1eU) | (0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) 
            & ((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                             >> 0xcU))) | (1U == (7U 
                                                  & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                     >> 0xcU))))))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 8U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (0x1000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 1U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (((3U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                           >> 0xcU))) | (0x63U == (0x7fU 
                                                   & vlSelf->top__DOT__cpu_item__DOT__instr))) 
            & ((6U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                             >> 0xcU))) | (7U == (7U 
                                                  & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                     >> 0xcU))))))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 3U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (((2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                           >> 0xcU))) | (0x63U == (0x7fU 
                                                   & vlSelf->top__DOT__cpu_item__DOT__instr))) 
            & ((4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                             >> 0xcU))) | (5U == (7U 
                                                  & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                     >> 0xcU))))))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 2U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (0x4000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 4U;
    }
    if (((~ (vlSelf->top__DOT__cpu_item__DOT__instr 
             >> 0x1eU)) & (IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_ha4d81d37__0))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 5U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_ha4d81d37__0) 
         & (vlSelf->top__DOT__cpu_item__DOT__instr 
            >> 0x1eU))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 0xdU;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (0x6000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 6U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (0x7000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 7U;
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__jal_branch_pc) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_b 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_b ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_b) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_b));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
        = (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
           ^ vlSelf->top__DOT__cpu_item__DOT__alu_b);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
        = (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
           | vlSelf->top__DOT__cpu_item__DOT__alu_b);
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
        = (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
           & vlSelf->top__DOT__cpu_item__DOT__alu_b);
    if ((1U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
    }
    if ((5U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0xdU != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
    }
    if ((4U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
    }
    if ((7U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
    }
    if ((6U != (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
    }
    if (((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_add))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_add 
            = (0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_l))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_l 
            = (1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((2U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_lt))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_lt 
            = (2U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_ltu))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_set_ltu 
            = (3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((4U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_xor))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_xor 
            = (4U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((5U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_r))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_r 
            = (5U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((6U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_or))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_or 
            = (6U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((7U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_and))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_and 
            = (7U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((8U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_sub))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_sub 
            = (8U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if (((0xdU == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_ra))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__is_shift_ra 
            = (0xdU == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr 
            = ((0xeU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr 
            = ((0xdU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr 
            = ((0xbU & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)) 
               | (4U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr 
            = ((7U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_ctr)) 
               | (8U & (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub 
        = ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
           | (8U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)));
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr 
        = ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
           | ((5U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
              | (0xdU == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))));
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type = 0U;
    }
    if ((5U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type = 1U;
    }
    if ((0xdU == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type = 3U;
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l 
        = ((2U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
           | (3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_or) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_and) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub)))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_sub))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_sub 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr)))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_lr))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_lr 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type)))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type 
            = ((2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type)))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type 
            = ((1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__shift_type)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type)));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
        = ((0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_b)
            ? ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                ? (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                   << 0x10U) : ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                                 ? (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
                                    >> 0x10U) : (((- (IData)((IData)(top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0))) 
                                                  << 0x10U) 
                                                 | ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                         >> 0xfU)))
                                                     ? 0U
                                                     : 
                                                    (__VdfgTmp_h996430c4__0 
                                                     >> 0x10U)))))
            : vlSelf->top__DOT__cpu_item__DOT__rs1_data);
    if ((1U & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l)))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__set_l))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__set_l 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l;
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin 
        = ((8U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp)) 
           | (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage1) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
        = ((8U & vlSelf->top__DOT__cpu_item__DOT__alu_b)
            ? ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                   << 8U) : ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                              ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                                 >> 8U) : (((- (IData)(
                                                       (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                                                        >> 0x1fU))) 
                                            << 0x18U) 
                                           | (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1 
                                              >> 8U))))
            : vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage1);
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_cin))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__add_cin 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin;
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
        = (vlSelf->top__DOT__cpu_item__DOT__alu_b ^ 
           (- (IData)((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin))));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage2) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
        = ((4U & vlSelf->top__DOT__cpu_item__DOT__alu_b)
            ? ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                   << 4U) : ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                              ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                                 >> 4U) : (((- (IData)(
                                                       (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                                                        >> 0x1fU))) 
                                            << 0x1cU) 
                                           | (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2 
                                              >> 4U))))
            : vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage2);
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____Vtogcov__b) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__cpu_item__DOT__rs1_data)) 
                                  + ((QData)((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b)) 
                                     + (QData)((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin)))) 
                                 >> 0x20U))));
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
        = (vlSelf->top__DOT__cpu_item__DOT__rs1_data 
           + (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
              + (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_cin)));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage3) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
        = ((2U & vlSelf->top__DOT__cpu_item__DOT__alu_b)
            ? ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                   << 2U) : ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                              ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                                 >> 2U) : (((- (IData)(
                                                       (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                                                        >> 0x1fU))) 
                                            << 0x1eU) 
                                           | (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3 
                                              >> 2U))))
            : vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage3);
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_carry))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_carry 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry;
    }
    if ((1U & (~ ((1U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (~ (IData)((0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add)))))))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((0U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add)))))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
    }
    if (((0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add)) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_zero))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_zero 
            = (0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_add) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow 
        = (((IData)(top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0) 
            == (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vcellinp__item_add__b 
                >> 0x1fU)) & ((IData)(top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0) 
                              != (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                                  >> 0x1fU)));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT____Vtogcov__stage4) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4));
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
        = ((1U & vlSelf->top__DOT__cpu_item__DOT__alu_b)
            ? ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                   << 1U) : ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_type))
                              ? (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                                 >> 1U) : ((0x80000000U 
                                            & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4) 
                                           | (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4 
                                              >> 1U))))
            : vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage4);
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_overflow))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_overflow 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow;
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less 
        = (1U & ((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))
                  ? (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_carry)
                  : ((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add 
                      >> 0x1fU) ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_overflow))));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
               ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                  ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                   ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                    ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                      ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                       ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
                        ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5 
          ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_shift) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5));
    }
    if ((1U & (~ ((4U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less))))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((5U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((6U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less))))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((7U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_less))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_less 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less;
    }
    vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 0U;
    if (((0U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add)))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((1U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (~ (IData)((0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add)))))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((4U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((5U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((6U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((7U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp = 0U;
    if (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__add_sub) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add;
    }
    if (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__shift_lr) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__item0__DOT__stage5;
    }
    if ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
    }
    if ((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l) {
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less;
    }
    if ((4U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
    }
    if ((2U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
    }
    if ((4U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor;
    }
    if ((6U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_or;
    }
    if ((7U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_and;
    }
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT____Vtogcov__branch_ture_temp))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT____Vtogcov__branch_ture_temp 
            = vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp;
    }
    vlSelf->top__DOT__cpu_item__DOT__branch_ture = 
        ((IData)(vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp) 
         & (0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
        = vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__mem
        [(0x7fffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp)];
    if (((IData)(vlSelf->top__DOT__cpu_item__DOT__branch_ture) 
         ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__branch_ture))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__branch_ture 
            = vlSelf->top__DOT__cpu_item__DOT__branch_ture;
    }
    vlSelf->top__DOT__cpu_item__DOT__pc_cond = (((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                                                 << 1U) 
                                                | ((IData)(vlSelf->top__DOT__cpu_item__DOT__branch_ture) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__cpu_item__DOT__instr))));
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
               ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
               ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
               ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
               ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                        ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                        ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                        ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
          ^ vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT____Vtogcov__rdata_reg) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
        = vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg;
    if ((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
            = (((- (IData)((1U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
            = (((- (IData)((1U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg));
    }
    if ((2U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
            = vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg;
    }
    if ((4U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
            = (0xffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg);
    }
    if ((1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0xcU)))) {
        vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
            = (0xffffU & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_reg);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc_cond)))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc_cond 
            = ((2U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc_cond)) 
               | (1U & (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond) 
               ^ (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc_cond)))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc_cond 
            = ((1U & (IData)(vlSelf->top__DOT__cpu_item__DOT____Vtogcov__pc_cond)) 
               | (2U & (IData)(vlSelf->top__DOT__cpu_item__DOT__pc_cond)));
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data_mem_rdata) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp));
    }
    vlSelf->top__DOT__cpu_item__DOT__data2reg = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp;
    if ((0U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSelf->top__DOT__cpu_item__DOT__data2reg = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp;
    }
    if ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSelf->top__DOT__cpu_item__DOT__data2reg = vlSelf->top__DOT__cpu_item__DOT__data_memory_item__DOT__rdata_temp;
    }
    if ((2U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSelf->top__DOT__cpu_item__DOT__data2reg = 
            ((IData)(4U) + vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc);
    }
    if ((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSelf->top__DOT__cpu_item__DOT__data2reg = vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__out_imm;
    }
    if ((4U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSelf->top__DOT__cpu_item__DOT__data2reg = vlSelf->top__DOT__cpu_item__DOT__jal_branch_pc;
    }
    if ((1U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (1U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((2U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffffffdU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (2U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((4U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffffffbU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (4U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((8U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
               ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (8U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x10U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffffffefU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x10U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x20U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffffffdfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x20U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x40U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffffffbfU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x40U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x80U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                  ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x80U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x100U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffffeffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x100U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x200U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffffdffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x200U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x400U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffffbffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x400U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x800U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                   ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffff7ffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x800U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffffefffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x1000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffffdfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x2000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffffbfffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x4000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                    ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffff7fffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x8000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffefffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x100000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffdfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x200000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xffbfffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x400000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                      ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xff7fffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x800000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfeffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x1000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfdffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x2000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xfbffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x4000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                       ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xf7ffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x8000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xefffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x10000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xdfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x20000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cpu_item__DOT__data2reg 
                        ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0xbfffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x40000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
    if (((vlSelf->top__DOT__cpu_item__DOT__data2reg 
          ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire 
            = ((0x7fffffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__data2reg_wire) 
               | (0x80000000U & vlSelf->top__DOT__cpu_item__DOT__data2reg));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h8efb634d__0;
    VlWide<5>/*159:0*/ __Vtemp_hfa101174__0;
    // Body
    vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
    if ((1U & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immU)) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immU 
            = (0xfffffffeU & vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT____Vtogcov__immU);
    }
    vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
    __Vtemp_h8efb634d__0[0U] = 0x2e686578U;
    __Vtemp_h8efb634d__0[1U] = 0x74657374U;
    __Vtemp_h8efb634d__0[2U] = 0x6573742fU;
    __Vtemp_h8efb634d__0[3U] = 0x2f6d7974U;
    __Vtemp_h8efb634d__0[4U] = 0x636f6465U;
    __Vtemp_h8efb634d__0[5U] = 0x2e2f74U;
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h8efb634d__0)
                 ,  &(vlSelf->top__DOT__cpu_item__DOT__instr_memory_item__DOT__mem)
                 , 0U, ~0ULL);
    VL_WRITEF("mem[0] = %x\n",32,vlSelf->top__DOT__cpu_item__DOT__instr_memory_item__DOT__mem
              [0U]);
    vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc = 0U;
    vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I(std::string{"trace"})))) {
        __Vtemp_hfa101174__0[0U] = 0x2e766364U;
        __Vtemp_hfa101174__0[1U] = 0x64756d70U;
        __Vtemp_hfa101174__0[2U] = 0x766c745fU;
        __Vtemp_hfa101174__0[3U] = 0x6f67732fU;
        __Vtemp_hfa101174__0[4U] = 0x6cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hfa101174__0));
        vlSymsp->_traceDumpOpen();
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
                  64,VL_TIME_UNITED_Q(1),-12);
    } else {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0;
    top__DOT__cpu_item__DOT__alu_temp__DOT__item_add__DOT____VdfgTmp_hbb782aa7__0 = 0;
    CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0;
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0 = 0;
    CData/*0:0*/ top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0;
    top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0 = 0;
    IData/*31:0*/ __VdfgTmp_h996430c4__0;
    __VdfgTmp_h996430c4__0 = 0;
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
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
    vlSelf->top__DOT__cpu_item__DOT__instr = vlSelf->top__DOT__cpu_item__DOT__instr_memory_item__DOT__mem
        [(0xffffU & (vlSelf->top__DOT__cpu_item__DOT__pc_item__DOT__next_pc 
                     >> 2U))];
    if ((0x63U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x6fU != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x23U != (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (~ (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0) 
                   & (vlSelf->top__DOT__cpu_item__DOT__instr 
                      >> 0x1eU)) | ((0x63U == (0x7fU 
                                               & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                                    & ((0U == (7U & 
                                               (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                >> 0xcU))) 
                                       | (1U == (7U 
                                                 & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                    >> 0xcU))))))))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0)))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                   & (0x2000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr))) 
                  | ((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
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
                  & (IData)((0x5000U == (0x40007000U 
                                         & vlSelf->top__DOT__cpu_item__DOT__instr))))))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (IData)((0x40005000U == (0x40007000U 
                                             & vlSelf->top__DOT__cpu_item__DOT__instr))))))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (0x1000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                  & (0x6000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
                   & (0x3000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr))) 
                  | ((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
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
    if ((((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgTmp_hf3a06314__0) 
          & (vlSelf->top__DOT__cpu_item__DOT__instr 
             >> 0x1eU)) | ((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
                           & ((0U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                            >> 0xcU))) 
                              | (1U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                              >> 0xcU))))))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 8U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (0x1000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr)))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 1U;
    }
    if ((((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
          & (0x3000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr))) 
         | ((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
            & ((6U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
                             >> 0xcU))) | (7U == (7U 
                                                  & (vlSelf->top__DOT__cpu_item__DOT__instr 
                                                     >> 0xcU))))))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 3U;
    }
    if ((((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
          & (0x2000U == (0x7000U & vlSelf->top__DOT__cpu_item__DOT__instr))) 
         | ((0x63U == (0x7fU & vlSelf->top__DOT__cpu_item__DOT__instr)) 
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
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (IData)((0x5000U == (0x40007000U & vlSelf->top__DOT__cpu_item__DOT__instr))))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__alu_ctr_temp = 5U;
    }
    if (((IData)(top__DOT__cpu_item__DOT__ctr_item__DOT____VdfgExtracted_h8d22c367__0) 
         & (IData)((0x40005000U == (0x40007000U & vlSelf->top__DOT__cpu_item__DOT__instr))))) {
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
    if ((0x40000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfffbffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x40000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
    }
    if ((0x80000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor 
                     ^ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor 
            = ((0xfff7ffffU & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT____Vtogcov__out_xor) 
               | (0x80000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_xor));
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
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((0U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add)))))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((5U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((6U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less))))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((7U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
                  & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((1U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (~ (IData)((0xffffffffU == (~ vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_add)))))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((4U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((5U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((6U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__pc_branch_item__DOT__branch_ture_temp = 1U;
    }
    if (((7U == (7U & (IData)(vlSelf->top__DOT__cpu_item__DOT__bxx))) 
         & (~ (IData)(vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less)))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
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
    if (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__set_l) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
            = vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_less;
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
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x10000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffeffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x10000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
    }
    if ((3U == (IData)(vlSelf->top__DOT__cpu_item__DOT__ctr_item__DOT__mem2reg_temp))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x20000U & (vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp 
                     ^ vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out 
            = ((0xfffdffffU & vlSelf->top__DOT__cpu_item__DOT____Vtogcov__alu_out) 
               | (0x20000U & vlSelf->top__DOT__cpu_item__DOT__alu_temp__DOT__out_temp));
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
    if ((5U == (7U & (vlSelf->top__DOT__cpu_item__DOT__instr 
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

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/top.v", 2, 9, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/top.v", 8, 3, ".top", "v_line/top", "block", "8-10,17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/top.v", 20, 4, ".top", "v_branch/top", "if", "20-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/top.v", 20, 5, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/top.v", 19, 3, ".top", "v_line/top", "block", "19,24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 2, 8, ".top.cpu_item", "v_toggle/cpu", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 13, ".top.cpu_item", "v_toggle/cpu", "pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 16, ".top.cpu_item", "v_toggle/cpu", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 22, ".top.cpu_item", "v_toggle/cpu", "rs1_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 31, ".top.cpu_item", "v_toggle/cpu", "rs2_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 40, ".top.cpu_item", "v_toggle/cpu", "imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 44, ".top.cpu_item", "v_toggle/cpu", "alu_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 50, ".top.cpu_item", "v_toggle/cpu", "alu_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 58, ".top.cpu_item", "v_toggle/cpu", "data_mem_rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 4, 73, ".top.cpu_item", "v_toggle/cpu", "normal_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 13, ".top.cpu_item", "v_toggle/cpu", "jal_branch_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 5, 27, ".top.cpu_item", "v_toggle/cpu", "data2reg_wire[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 12, ".top.cpu_item", "v_toggle/cpu", "alu_ctr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 12, ".top.cpu_item", "v_toggle/cpu", "alu_ctr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 12, ".top.cpu_item", "v_toggle/cpu", "alu_ctr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 12, ".top.cpu_item", "v_toggle/cpu", "alu_ctr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 20, ".top.cpu_item", "v_toggle/cpu", "bxx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 20, ".top.cpu_item", "v_toggle/cpu", "bxx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 20, ".top.cpu_item", "v_toggle/cpu", "bxx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 20, ".top.cpu_item", "v_toggle/cpu", "bxx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 24, ".top.cpu_item", "v_toggle/cpu", "data_mem_opw[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 24, ".top.cpu_item", "v_toggle/cpu", "data_mem_opw[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 24, ".top.cpu_item", "v_toggle/cpu", "data_mem_opw[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 6, 24, ".top.cpu_item", "v_toggle/cpu", "data_mem_opw[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 7, 12, ".top.cpu_item", "v_toggle/cpu", "mem2reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 7, 12, ".top.cpu_item", "v_toggle/cpu", "mem2reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 7, 12, ".top.cpu_item", "v_toggle/cpu", "mem2reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 7, 20, ".top.cpu_item", "v_toggle/cpu", "data_mem_opr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 7, 20, ".top.cpu_item", "v_toggle/cpu", "data_mem_opr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 7, 20, ".top.cpu_item", "v_toggle/cpu", "data_mem_opr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 8, 12, ".top.cpu_item", "v_toggle/cpu", "pc_cond[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 8, 12, ".top.cpu_item", "v_toggle/cpu", "pc_cond[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 7, ".top.cpu_item", "v_toggle/cpu", "alu_b_ctr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 17, ".top.cpu_item", "v_toggle/cpu", "jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 21, ".top.cpu_item", "v_toggle/cpu", "jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 26, ".top.cpu_item", "v_toggle/cpu", "reg_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 33, ".top.cpu_item", "v_toggle/cpu", "mem_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 40, ".top.cpu_item", "v_toggle/cpu", "alu_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 49, ".top.cpu_item", "v_toggle/cpu", "alu_zero", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 9, 58, ".top.cpu_item", "v_toggle/cpu", "branch_ture", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 10, 12, ".top.cpu_item", "v_toggle/cpu", "data2reg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 77, 3, ".top.cpu_item", "v_branch/cpu", "if", "77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 77, 4, ".top.cpu_item", "v_branch/cpu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 78, 3, ".top.cpu_item", "v_branch/cpu", "if", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 78, 4, ".top.cpu_item", "v_branch/cpu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 79, 3, ".top.cpu_item", "v_branch/cpu", "if", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 79, 4, ".top.cpu_item", "v_branch/cpu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 80, 3, ".top.cpu_item", "v_branch/cpu", "if", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 80, 4, ".top.cpu_item", "v_branch/cpu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 81, 3, ".top.cpu_item", "v_branch/cpu", "if", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 81, 4, ".top.cpu_item", "v_branch/cpu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/cpu.v", 75, 3, ".top.cpu_item", "v_line/cpu", "block", "75-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 9, 24, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/instr_memory.v", 10, 25, ".top.cpu_item.instr_memory_item", "v_toggle/instr_memory", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 2, 11, ".top.cpu_item.regfile_item", "v_toggle/regfile", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 3, 11, ".top.cpu_item.regfile_item", "v_toggle/regfile", "we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 4, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 4, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 4, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 4, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 4, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 5, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 5, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 5, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 5, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 5, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 6, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 6, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 6, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 6, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 6, 17, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 7, 18, ".top.cpu_item.regfile_item", "v_toggle/regfile", "wd[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 8, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs1_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 9, 19, ".top.cpu_item.regfile_item", "v_toggle/regfile", "rs2_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 20, 9, ".top.cpu_item.regfile_item", "v_branch/regfile", "if", "20-21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 20, 10, ".top.cpu_item.regfile_item", "v_branch/regfile", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/regfile.v", 19, 5, ".top.cpu_item.regfile_item", "v_line/regfile", "block", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 2, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 3, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 4, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "ctr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 4, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "ctr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 4, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "ctr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 4, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "ctr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 5, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 6, 9, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 7, 9, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_zero", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 8, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_add", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 15, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_shift_l", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 26, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_set_lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 36, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_set_ltu", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_xor", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 54, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_shift_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 65, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_or", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 71, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_and", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 9, 78, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_sub", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 10, 8, ".top.cpu_item.alu_temp", "v_toggle/alu", "is_shift_ra", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 14, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_add[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 22, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_shift[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 32, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_xor[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 40, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_or[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 25, 47, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_and[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 26, 8, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_zero", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 26, 17, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 27, 8, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 27, 18, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_overflow", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 28, 8, ".top.cpu_item.alu_temp", "v_toggle/alu", "add_cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 29, 12, ".top.cpu_item.alu_temp", "v_toggle/alu", "shift_type[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 29, 12, ".top.cpu_item.alu_temp", "v_toggle/alu", "shift_type[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 32, 5, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 32, 6, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 33, 5, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 33, 6, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 34, 5, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 34, 6, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 30, 3, ".top.cpu_item.alu_temp", "v_line/alu", "block", "30-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 60, 7, ".top.cpu_item.alu_temp", "v_toggle/alu", "add_sub", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 61, 8, ".top.cpu_item.alu_temp", "v_toggle/alu", "shift_lr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 62, 7, ".top.cpu_item.alu_temp", "v_toggle/alu", "set_l", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 63, 13, ".top.cpu_item.alu_temp", "v_toggle/alu", "out_temp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 66, 3, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 66, 4, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 67, 3, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 67, 4, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 68, 3, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 68, 4, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 69, 3, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 69, 4, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 70, 3, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 70, 4, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 71, 3, ".top.cpu_item.alu_temp", "v_branch/alu", "if", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 71, 4, ".top.cpu_item.alu_temp", "v_branch/alu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu.v", 64, 3, ".top.cpu_item.alu_temp", "v_line/alu", "block", "64-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 2, 14, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "alu_ctr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 2, 14, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "alu_ctr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 2, 14, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "alu_ctr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 2, 14, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "alu_ctr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 3, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_add", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 4, 9, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_sub", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 5, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_shift_l", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 6, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_set_lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 7, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_set_ltu", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 8, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_xor", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 9, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_shift_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 10, 9, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_shift_ra", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 11, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_or", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/alu_decode.v", 12, 10, ".top.cpu_item.alu_temp.item_alu_decode", "v_toggle/alu_decode", "is_and", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 2, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_in[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 3, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "shift_amt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 3, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "shift_amt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 3, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "shift_amt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 3, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "shift_amt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 3, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "shift_amt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 4, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "shift_type[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 4, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "shift_type[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 5, 24, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "data_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 17, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 25, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 33, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[690]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[691]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 41, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage4[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/barrel_shifter.v", 8, 49, ".top.cpu_item.alu_temp.item0", "v_toggle/barrel_shifter", "stage5[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 2, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[727]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 3, 14, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 4, 8, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 5, 15, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "sum[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 6, 9, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 7, 9, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "zero", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/alu/add.v", 8, 9, ".top.cpu_item.alu_temp.item_add", "v_toggle/add", "overflow", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 2, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 3, 15, ".top.cpu_item.ctr_item", "v_toggle/ctr", "imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 4, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 4, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 4, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 4, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 5, 9, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_b_ctr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 6, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "bxx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 6, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "bxx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 6, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "bxx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 6, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "bxx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 7, 9, ".top.cpu_item.ctr_item", "v_toggle/ctr", "jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 8, 9, ".top.cpu_item.ctr_item", "v_toggle/ctr", "jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 9, 9, ".top.cpu_item.ctr_item", "v_toggle/ctr", "reg_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 10, 9, ".top.cpu_item.ctr_item", "v_toggle/ctr", "mem_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 11, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "mem2reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 11, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "mem2reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 11, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "mem2reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 12, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 12, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 12, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 13, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 13, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 13, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 13, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 15, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 15, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 15, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 15, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 15, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 15, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 15, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 17, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 17, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 17, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 18, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 18, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 18, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 18, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 18, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 18, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 18, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 13, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immI[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 18, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immU[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[813]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[814]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[815]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[816]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[817]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 23, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immS[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[818]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[819]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[820]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[821]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immB[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[864]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[865]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[866]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[867]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 19, 33, ".top.cpu_item.ctr_item", "v_toggle/ctr", "immJ[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 20, 12, ".top.cpu_item.ctr_item", "v_toggle/ctr", "out_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 37, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "type_J", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 37, 14, ".top.cpu_item.ctr_item", "v_toggle/ctr", "type_U", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 37, 21, ".top.cpu_item.ctr_item", "v_toggle/ctr", "type_S", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 37, 28, ".top.cpu_item.ctr_item", "v_toggle/ctr", "type_B", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 37, 35, ".top.cpu_item.ctr_item", "v_toggle/ctr", "type_I", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 37, 42, ".top.cpu_item.ctr_item", "v_toggle/ctr", "type_R", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[886]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 38, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_0110_111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[887]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 39, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_0010_111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 40, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_1101_111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 41, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_1100_111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 42, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_1100_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[888]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 43, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_0000_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 44, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_0100_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[889]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 45, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_0010_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 46, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "op_0110_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[890]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 57, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[891]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 57, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[892]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 58, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[893]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 58, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[894]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 59, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[895]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 59, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[896]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 60, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[897]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 60, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[898]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 61, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[899]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 61, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[900]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 55, 2, ".top.cpu_item.ctr_item", "v_line/ctr", "block", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[901]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 67, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[902]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 68, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[903]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 69, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_010", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[904]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 70, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[905]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 71, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_100", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[906]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 72, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_101", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[907]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 73, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_110", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[908]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 74, 7, ".top.cpu_item.ctr_item", "v_toggle/ctr", "fun3_111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 77, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 77, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 77, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 77, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "alu_ctr_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[909]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 80, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[910]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 80, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[911]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 81, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[912]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 81, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[913]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 82, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[914]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 82, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[915]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 83, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[916]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 83, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[917]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 84, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[918]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 84, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[919]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 85, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[920]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 85, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[921]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 86, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[922]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 86, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[923]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 87, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[924]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 87, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[925]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 88, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[926]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 88, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[927]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 89, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[928]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 89, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[929]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 78, 2, ".top.cpu_item.ctr_item", "v_line/ctr", "block", "78-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 101, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 101, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 101, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 101, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "data_mem_opw_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[930]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 104, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[931]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 104, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[932]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 105, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[933]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 105, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[934]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 106, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[935]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 106, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[936]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 102, 2, ".top.cpu_item.ctr_item", "v_line/ctr", "block", "102-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 110, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "mem2reg_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 110, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "mem2reg_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 110, 11, ".top.cpu_item.ctr_item", "v_toggle/ctr", "mem2reg_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[937]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 113, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[938]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 113, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[939]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 114, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[940]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 114, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[941]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 115, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[942]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 115, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[943]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 116, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[944]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 116, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[945]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 117, 2, ".top.cpu_item.ctr_item", "v_branch/ctr", "if", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[946]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 117, 3, ".top.cpu_item.ctr_item", "v_branch/ctr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[947]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/ctr.v", 111, 2, ".top.cpu_item.ctr_item", "v_line/ctr", "block", "111-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 5, 16, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 6, 16, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 7, 22, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "be[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 7, 22, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "be[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 7, 22, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "be[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 7, 22, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "be[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 8, 20, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "op_read[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 8, 20, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "op_read[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 8, 20, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "op_read[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 10, 31, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 12, 33, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/memory/data_memory.v", 13, 34, ".top.cpu_item.data_memory_item", "v_toggle/data_memory", "rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 2, 8, ".top.cpu_item.pc_item", "v_toggle/pc", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 4, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 5, 13, ".top.cpu_item.pc_item", "v_toggle/pc", "cond[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 5, 13, ".top.cpu_item.pc_item", "v_toggle/pc", "cond[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 6, 14, ".top.cpu_item.pc_item", "v_toggle/pc", "alu_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 7, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "normal_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 8, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "jal_branch_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 9, 15, ".top.cpu_item.pc_item", "v_toggle/pc", "pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 13, 12, ".top.cpu_item.pc_item", "v_toggle/pc", "next_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[948]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 15, 2, ".top.cpu_item.pc_item", "v_branch/pc", "if", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[949]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 15, 3, ".top.cpu_item.pc_item", "v_branch/pc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[950]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 16, 2, ".top.cpu_item.pc_item", "v_branch/pc", "if", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[951]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 16, 3, ".top.cpu_item.pc_item", "v_branch/pc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[952]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 17, 2, ".top.cpu_item.pc_item", "v_branch/pc", "if", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[953]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 17, 3, ".top.cpu_item.pc_item", "v_branch/pc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[954]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 18, 2, ".top.cpu_item.pc_item", "v_branch/pc", "if", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[955]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 18, 3, ".top.cpu_item.pc_item", "v_branch/pc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[956]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc.v", 14, 2, ".top.cpu_item.pc_item", "v_line/pc", "block", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 2, 13, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "branch[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 2, 13, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "branch[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 2, 13, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "branch[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 2, 13, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "branch[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 3, 8, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "less", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 4, 8, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "zero", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 5, 9, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "branch_ture", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[957]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 7, 6, ".top.cpu_item.pc_branch_item", "v_toggle/pc_branch", "branch_ture_temp", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[958]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 10, 2, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "if", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[959]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 10, 3, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[960]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 11, 2, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[961]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 11, 3, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[962]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 12, 2, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "if", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[963]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 12, 3, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[964]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 13, 2, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "if", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[965]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 13, 3, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[966]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 14, 2, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "if", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[967]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 14, 3, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[968]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 15, 2, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "if", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[969]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 15, 3, ".top.cpu_item.pc_branch_item", "v_branch/pc_branch", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[970]), first, "/home/hewang/Desktop/My_test/rv32I/vcode/pc_branch.v", 8, 2, ".top.cpu_item.pc_branch_item", "v_line/pc_branch", "block", "8-9");
}

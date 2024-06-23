// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vff_wrapper___024root.h"

VL_ATTR_COLD void Vff_wrapper___024root___eval_static(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vff_wrapper___024root___eval_initial__TOP(Vff_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vff_wrapper___024root___eval_initial(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_initial\n"); );
    // Body
    Vff_wrapper___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vff_wrapper___024root___eval_initial__TOP(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_hdf4adbe0__0;
    // Body
    __Vtemp_hdf4adbe0__0[0U] = 0x2e747874U;
    __Vtemp_hdf4adbe0__0[1U] = 0x64756d70U;
    __Vtemp_hdf4adbe0__0[2U] = 0x7265655fU;
    __Vtemp_hdf4adbe0__0[3U] = 0x6c745f66U;
    __Vtemp_hdf4adbe0__0[4U] = 0x2f666175U;
    __Vtemp_hdf4adbe0__0[5U] = 0x74707574U;
    __Vtemp_hdf4adbe0__0[6U] = 0x6f75U;
    vlSelf->ff_wrapper__DOT__o_file = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(7, __Vtemp_hdf4adbe0__0)
                                                  , 
                                                  std::string{"w"});
    vlSelf->ff_wrapper__DOT__clk_counter = 0ULL;
}

VL_ATTR_COLD void Vff_wrapper___024root___eval_final(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vff_wrapper___024root___eval_settle(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_wrapper___024root___dump_triggers__act(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_wrapper___024root___dump_triggers__nba(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vff_wrapper___024root___ctor_var_reset(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->_done = VL_RAND_RESET_I(1);
    vlSelf->ff_wrapper__DOT__o_file = 0;
    vlSelf->ff_wrapper__DOT__clk_counter = VL_RAND_RESET_Q(64);
    vlSelf->ff_wrapper__DOT__cc__DOT__counter = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfi_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vfi_wrapper___024root.h"

VL_ATTR_COLD void Vfi_wrapper___024root___eval_static(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfi_wrapper___024root___eval_initial__TOP(Vfi_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vfi_wrapper___024root___eval_initial(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_initial\n"); );
    // Body
    Vfi_wrapper___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__fi_wrapper__DOT__clk_main = 0U;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vfi_wrapper___024root___eval_initial__TOP(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h1924bdd5__0;
    VlWide<5>/*159:0*/ __Vtemp_he58b40f6__0;
    // Body
    __Vtemp_h1924bdd5__0[0U] = 0x2e747874U;
    __Vtemp_h1924bdd5__0[1U] = 0x74726f6cU;
    __Vtemp_h1924bdd5__0[2U] = 0x2f636f6eU;
    __Vtemp_h1924bdd5__0[3U] = 0x7465726eU;
    __Vtemp_h1924bdd5__0[4U] = 0x5f706174U;
    __Vtemp_h1924bdd5__0[5U] = 0x6e707574U;
    __Vtemp_h1924bdd5__0[6U] = 0x69U;
    vlSelf->fi_wrapper__DOT__i_file = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(7, __Vtemp_h1924bdd5__0)
                                                  , 
                                                  std::string{"r"});
    __Vtemp_he58b40f6__0[0U] = 0x2e747874U;
    __Vtemp_he58b40f6__0[1U] = 0x74707574U;
    __Vtemp_he58b40f6__0[2U] = 0x742f6f75U;
    __Vtemp_he58b40f6__0[3U] = 0x75747075U;
    __Vtemp_he58b40f6__0[4U] = 0x6fU;
    vlSelf->fi_wrapper__DOT__o_file = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(5, __Vtemp_he58b40f6__0)
                                                  , 
                                                  std::string{"w"});
    (void)VL_FSCANF_IX(vlSelf->fi_wrapper__DOT__i_file,"%x\n",
                       64,&(vlSelf->fi_wrapper__DOT__golden)) ;(void)VL_FSCANF_IX(vlSelf->fi_wrapper__DOT__i_file,"%x\n",
                                                                                64,
                                                                                &(vlSelf->fi_wrapper__DOT__golden_next)) ;(void)VL_FSCANF_IX(vlSelf->fi_wrapper__DOT__i_file,"%#\n",
                                                                                64,
                                                                                &(vlSelf->fi_wrapper__DOT__case_num)) ;VL_FWRITEF(vlSelf->fi_wrapper__DOT__o_file,"%x\n%20#\n",
                                                                                64,
                                                                                vlSelf->fi_wrapper__DOT__golden,
                                                                                64,
                                                                                vlSelf->fi_wrapper__DOT__case_num);
    vlSelf->fi_wrapper__DOT__clk_main = 0U;
    vlSelf->fi_wrapper__DOT__observe_flag = 0U;
    vlSelf->fi_wrapper__DOT__inject_flag = 1U;
    vlSelf->fi_wrapper__DOT__clk_counter = 0ULL;
}

VL_ATTR_COLD void Vfi_wrapper___024root___eval_final__TOP(Vfi_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vfi_wrapper___024root___eval_final(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_final\n"); );
    // Body
    Vfi_wrapper___024root___eval_final__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vfi_wrapper___024root___eval_final__TOP(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_final__TOP\n"); );
    // Body
    VL_WRITEF("Fault Injection Process Finished!!!\n");
    VL_FCLOSE_I(vlSelf->fi_wrapper__DOT__i_file); vlSelf->fi_wrapper__DOT__i_file = 0;
    VL_FCLOSE_I(vlSelf->fi_wrapper__DOT__o_file); vlSelf->fi_wrapper__DOT__o_file = 0;
}

VL_ATTR_COLD void Vfi_wrapper___024root___eval_settle(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfi_wrapper___024root___dump_triggers__act(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge fi_wrapper.clk_main)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge fi_wrapper.clk_main)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge fi_wrapper.clk_main or negedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge clk or posedge fi_wrapper.clk_main or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfi_wrapper___024root___dump_triggers__nba(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge fi_wrapper.clk_main)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge fi_wrapper.clk_main)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge fi_wrapper.clk_main or negedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge clk or posedge fi_wrapper.clk_main or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfi_wrapper___024root___ctor_var_reset(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->_done = VL_RAND_RESET_I(1);
    vlSelf->fi_wrapper__DOT__clk_main = VL_RAND_RESET_I(1);
    vlSelf->fi_wrapper__DOT__observe_flag = VL_RAND_RESET_I(1);
    vlSelf->fi_wrapper__DOT__inject_flag = VL_RAND_RESET_I(1);
    vlSelf->fi_wrapper__DOT__i_file = 0;
    vlSelf->fi_wrapper__DOT__o_file = 0;
    vlSelf->fi_wrapper__DOT__golden_file = 0;
    vlSelf->fi_wrapper__DOT__case_num = VL_RAND_RESET_Q(64);
    vlSelf->fi_wrapper__DOT__signal_sel = VL_RAND_RESET_Q(64);
    vlSelf->fi_wrapper__DOT__bit_mask = VL_RAND_RESET_Q(64);
    vlSelf->fi_wrapper__DOT__golden = VL_RAND_RESET_Q(64);
    vlSelf->fi_wrapper__DOT__golden_next = VL_RAND_RESET_Q(64);
    vlSelf->fi_wrapper__DOT__faulty = VL_RAND_RESET_Q(64);
    vlSelf->fi_wrapper__DOT__clk_counter = VL_RAND_RESET_Q(64);
    vlSelf->fi_wrapper__DOT__cc__DOT__counter = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__fi_wrapper__DOT__cc__DOT__counter = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fi_wrapper__DOT__clk_main = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

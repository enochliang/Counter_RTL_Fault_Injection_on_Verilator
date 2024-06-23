// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfi_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vfi_wrapper__Syms.h"
#include "Vfi_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfi_wrapper___024root___dump_triggers__act(Vfi_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vfi_wrapper___024root___eval_triggers__act(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((~ (IData)(vlSelf->fi_wrapper__DOT__clk_main)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__fi_wrapper__DOT__clk_main));
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->fi_wrapper__DOT__clk_main) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fi_wrapper__DOT__clk_main)));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->fi_wrapper__DOT__clk_main) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fi_wrapper__DOT__clk_main))) 
                                      | ((~ (IData)(vlSelf->rst)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst)));
    vlSelf->__VactTriggered.at(5U) = ((((~ (IData)(vlSelf->clk)) 
                                        & (IData)(vlSelf->__Vtrigrprev__TOP__clk)) 
                                       | ((IData)(vlSelf->fi_wrapper__DOT__clk_main) 
                                          & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fi_wrapper__DOT__clk_main)))) 
                                      | ((~ (IData)(vlSelf->rst)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__fi_wrapper__DOT__clk_main 
        = vlSelf->fi_wrapper__DOT__clk_main;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfi_wrapper___024root___dump_triggers__act(vlSelf);
    }
#endif
}

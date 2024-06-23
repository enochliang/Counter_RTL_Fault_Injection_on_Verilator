// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vff_wrapper___024root.h"

void Vff_wrapper___024root___eval_act(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vff_wrapper___024root___nba_sequent__TOP__0(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1ULL < vlSelf->ff_wrapper__DOT__clk_counter))) {
        VL_FWRITEF(vlSelf->ff_wrapper__DOT__o_file,"output: %20# %x\n",
                   64,vlSelf->ff_wrapper__DOT__clk_counter,
                   64,vlSelf->ff_wrapper__DOT__cc__DOT__counter);
    }
    VL_FWRITEF(vlSelf->ff_wrapper__DOT__o_file,"input: %20# %x\n",
               64,vlSelf->ff_wrapper__DOT__clk_counter,
               64,vlSelf->ff_wrapper__DOT__cc__DOT__counter);
}

VL_INLINE_OPT void Vff_wrapper___024root___nba_sequent__TOP__1(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vdly__ff_wrapper__DOT__clk_counter;
    __Vdly__ff_wrapper__DOT__clk_counter = 0;
    // Body
    __Vdly__ff_wrapper__DOT__clk_counter = vlSelf->ff_wrapper__DOT__clk_counter;
    __Vdly__ff_wrapper__DOT__clk_counter = (1ULL + vlSelf->ff_wrapper__DOT__clk_counter);
    vlSelf->_done = (0x40ULL == vlSelf->ff_wrapper__DOT__clk_counter);
    vlSelf->ff_wrapper__DOT__clk_counter = __Vdly__ff_wrapper__DOT__clk_counter;
}

VL_INLINE_OPT void Vff_wrapper___024root___nba_sequent__TOP__2(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ff_wrapper__DOT__cc__DOT__counter = ((IData)(vlSelf->rst)
                                                  ? 
                                                 (1ULL 
                                                  + vlSelf->ff_wrapper__DOT__cc__DOT__counter)
                                                  : 0ULL);
}

void Vff_wrapper___024root___eval_nba(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vff_wrapper___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vff_wrapper___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vff_wrapper___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vff_wrapper___024root___eval_triggers__act(Vff_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_wrapper___024root___dump_triggers__act(Vff_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_wrapper___024root___dump_triggers__nba(Vff_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vff_wrapper___024root___eval(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vff_wrapper___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vff_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("rtl/ff_wrapper.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vff_wrapper___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vff_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("rtl/ff_wrapper.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vff_wrapper___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vff_wrapper___024root___eval_debug_assertions(Vff_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

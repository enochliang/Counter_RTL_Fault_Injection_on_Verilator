// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfi_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vfi_wrapper___024root.h"

VL_INLINE_OPT void Vfi_wrapper___024root___act_sequent__TOP__0(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->fi_wrapper__DOT__clk_main = (1U & (~ (IData)(vlSelf->fi_wrapper__DOT__clk_main)));
}

void Vfi_wrapper___024root___eval_act(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vfi_wrapper___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfi_wrapper___024root___nba_sequent__TOP__0(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__fi_wrapper__DOT__clk_counter;
    __Vdly__fi_wrapper__DOT__clk_counter = 0;
    // Body
    __Vdly__fi_wrapper__DOT__clk_counter = vlSelf->fi_wrapper__DOT__clk_counter;
    __Vdly__fi_wrapper__DOT__clk_counter = ((vlSelf->fi_wrapper__DOT__clk_counter 
                                             == (1ULL 
                                                 + vlSelf->fi_wrapper__DOT__case_num))
                                             ? 1ULL
                                             : (1ULL 
                                                + vlSelf->fi_wrapper__DOT__clk_counter));
    vlSelf->fi_wrapper__DOT__inject_flag = (vlSelf->fi_wrapper__DOT__clk_counter 
                                            != vlSelf->fi_wrapper__DOT__case_num);
    vlSelf->_done = (vlSelf->fi_wrapper__DOT__clk_counter 
                     == (1ULL + vlSelf->fi_wrapper__DOT__case_num));
    vlSelf->fi_wrapper__DOT__observe_flag = (1U & (~ 
                                                   ((vlSelf->fi_wrapper__DOT__clk_counter 
                                                     == 
                                                     (1ULL 
                                                      + vlSelf->fi_wrapper__DOT__case_num)) 
                                                    | (0ULL 
                                                       == vlSelf->fi_wrapper__DOT__clk_counter))));
    vlSelf->fi_wrapper__DOT__clk_counter = __Vdly__fi_wrapper__DOT__clk_counter;
}

VL_INLINE_OPT void Vfi_wrapper___024root___nba_sequent__TOP__1(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__fi_wrapper__DOT__cc__DOT__counter 
        = vlSelf->fi_wrapper__DOT__cc__DOT__counter;
}

VL_INLINE_OPT void Vfi_wrapper___024root___nba_sequent__TOP__2(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->fi_wrapper__DOT__observe_flag) 
                     & (~ (IData)(vlSelf->_done))))) {
        VL_FWRITEF(vlSelf->fi_wrapper__DOT__o_file,"%20# %x %x\n",
                   64,vlSelf->fi_wrapper__DOT__signal_sel,
                   64,vlSelf->fi_wrapper__DOT__bit_mask,
                   64,(vlSelf->fi_wrapper__DOT__golden_next 
                       ^ vlSelf->fi_wrapper__DOT__faulty));
    }
}

VL_INLINE_OPT void Vfi_wrapper___024root___nba_sequent__TOP__3(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__fi_wrapper__DOT__cc__DOT__counter 
        = ((IData)(vlSelf->rst) ? (1ULL + vlSelf->fi_wrapper__DOT__cc__DOT__counter)
            : 0ULL);
}

VL_INLINE_OPT void Vfi_wrapper___024root___nba_sequent__TOP__4(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->fi_wrapper__DOT__clk_main) {
        vlSelf->fi_wrapper__DOT__faulty = vlSelf->fi_wrapper__DOT__cc__DOT__counter;
        vlSelf->__Vdly__fi_wrapper__DOT__cc__DOT__counter 
            = vlSelf->fi_wrapper__DOT__golden;
    } else {
        (void)VL_FSCANF_IX(vlSelf->fi_wrapper__DOT__i_file,"%# %x\n",
                           64,&(vlSelf->fi_wrapper__DOT__signal_sel),
                           64,&(vlSelf->fi_wrapper__DOT__bit_mask)) ;if (
                                                                         (0ULL 
                                                                          == vlSelf->fi_wrapper__DOT__signal_sel)) {
            vlSelf->__Vdly__fi_wrapper__DOT__cc__DOT__counter 
                = (vlSelf->fi_wrapper__DOT__cc__DOT__counter 
                   ^ vlSelf->fi_wrapper__DOT__bit_mask);
        }
    }
}

VL_INLINE_OPT void Vfi_wrapper___024root___nba_sequent__TOP__5(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->fi_wrapper__DOT__cc__DOT__counter = vlSelf->__Vdly__fi_wrapper__DOT__cc__DOT__counter;
}

void Vfi_wrapper___024root___eval_nba(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vfi_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vfi_wrapper___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vfi_wrapper___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vfi_wrapper___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vfi_wrapper___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vfi_wrapper___024root___nba_sequent__TOP__5(vlSelf);
    }
}

void Vfi_wrapper___024root___eval_triggers__act(Vfi_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfi_wrapper___024root___dump_triggers__act(Vfi_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfi_wrapper___024root___dump_triggers__nba(Vfi_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vfi_wrapper___024root___eval(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
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
            Vfi_wrapper___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vfi_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("rtl/fi_wrapper.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vfi_wrapper___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vfi_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("rtl/fi_wrapper.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vfi_wrapper___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vfi_wrapper___024root___eval_debug_assertions(Vfi_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

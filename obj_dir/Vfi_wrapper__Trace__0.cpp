// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfi_wrapper__Syms.h"


void Vfi_wrapper___024root__trace_chg_sub_0(Vfi_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfi_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_chg_top_0\n"); );
    // Init
    Vfi_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfi_wrapper___024root*>(voidSelf);
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfi_wrapper___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vfi_wrapper___024root__trace_chg_sub_0(Vfi_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->fi_wrapper__DOT__o_file),32);
        bufp->chgQData(oldp+1,(vlSelf->fi_wrapper__DOT__case_num),64);
        bufp->chgQData(oldp+3,(vlSelf->fi_wrapper__DOT__golden),64);
        bufp->chgQData(oldp+5,(vlSelf->fi_wrapper__DOT__golden_next),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+7,(vlSelf->fi_wrapper__DOT__observe_flag));
        bufp->chgBit(oldp+8,(vlSelf->fi_wrapper__DOT__inject_flag));
        bufp->chgQData(oldp+9,(vlSelf->fi_wrapper__DOT__clk_counter),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+11,(vlSelf->fi_wrapper__DOT__i_file),32);
        bufp->chgQData(oldp+12,(vlSelf->fi_wrapper__DOT__signal_sel),64);
        bufp->chgQData(oldp+14,(vlSelf->fi_wrapper__DOT__bit_mask),64);
        bufp->chgQData(oldp+16,(vlSelf->fi_wrapper__DOT__faulty),64);
    }
    bufp->chgBit(oldp+18,(vlSelf->clk));
    bufp->chgBit(oldp+19,(vlSelf->rst));
    bufp->chgBit(oldp+20,(vlSelf->fi_wrapper__DOT__clk_main));
    bufp->chgQData(oldp+21,(vlSelf->fi_wrapper__DOT__cc__DOT__counter),64);
}

void Vfi_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vfi_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfi_wrapper___024root*>(voidSelf);
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

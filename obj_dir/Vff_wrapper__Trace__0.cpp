// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vff_wrapper__Syms.h"


void Vff_wrapper___024root__trace_chg_sub_0(Vff_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vff_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_chg_top_0\n"); );
    // Init
    Vff_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vff_wrapper___024root*>(voidSelf);
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vff_wrapper___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vff_wrapper___024root__trace_chg_sub_0(Vff_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ff_wrapper__DOT__o_file),32);
    }
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgBit(oldp+2,(vlSelf->rst));
    bufp->chgQData(oldp+3,(vlSelf->ff_wrapper__DOT__cc__DOT__counter),64);
    bufp->chgQData(oldp+5,(vlSelf->ff_wrapper__DOT__clk_counter),64);
}

void Vff_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vff_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vff_wrapper___024root*>(voidSelf);
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}

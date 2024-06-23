// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfi_wrapper__Syms.h"


VL_ATTR_COLD void Vfi_wrapper___024root__trace_init_sub__TOP__0(Vfi_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->pushNamePrefix("fi_wrapper ");
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBit(c+21,"clk_main", false,-1);
    tracep->declQuad(c+22,"c", false,-1, 63,0);
    tracep->declBit(c+8,"observe_flag", false,-1);
    tracep->declBit(c+9,"inject_flag", false,-1);
    tracep->declBus(c+12,"i_file", false,-1, 31,0);
    tracep->declBus(c+1,"o_file", false,-1, 31,0);
    tracep->declBus(c+24,"golden_file", false,-1, 31,0);
    tracep->declQuad(c+2,"case_num", false,-1, 63,0);
    tracep->declQuad(c+13,"signal_sel", false,-1, 63,0);
    tracep->declQuad(c+15,"bit_mask", false,-1, 63,0);
    tracep->declQuad(c+4,"golden", false,-1, 63,0);
    tracep->declQuad(c+6,"golden_next", false,-1, 63,0);
    tracep->declQuad(c+17,"faulty", false,-1, 63,0);
    tracep->declQuad(c+10,"clk_counter", false,-1, 63,0);
    tracep->pushNamePrefix("cc ");
    tracep->declBit(c+20,"n_rst", false,-1);
    tracep->declBit(c+21,"clk", false,-1);
    tracep->declQuad(c+22,"counter_w", false,-1, 63,0);
    tracep->declQuad(c+22,"counter", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vfi_wrapper___024root__trace_init_top(Vfi_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_init_top\n"); );
    // Body
    Vfi_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfi_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfi_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfi_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfi_wrapper___024root__trace_register(Vfi_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfi_wrapper___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfi_wrapper___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfi_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfi_wrapper___024root__trace_full_sub_0(Vfi_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfi_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_full_top_0\n"); );
    // Init
    Vfi_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfi_wrapper___024root*>(voidSelf);
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfi_wrapper___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfi_wrapper___024root__trace_full_sub_0(Vfi_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfi_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfi_wrapper___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->fi_wrapper__DOT__o_file),32);
    bufp->fullQData(oldp+2,(vlSelf->fi_wrapper__DOT__case_num),64);
    bufp->fullQData(oldp+4,(vlSelf->fi_wrapper__DOT__golden),64);
    bufp->fullQData(oldp+6,(vlSelf->fi_wrapper__DOT__golden_next),64);
    bufp->fullBit(oldp+8,(vlSelf->fi_wrapper__DOT__observe_flag));
    bufp->fullBit(oldp+9,(vlSelf->fi_wrapper__DOT__inject_flag));
    bufp->fullQData(oldp+10,(vlSelf->fi_wrapper__DOT__clk_counter),64);
    bufp->fullIData(oldp+12,(vlSelf->fi_wrapper__DOT__i_file),32);
    bufp->fullQData(oldp+13,(vlSelf->fi_wrapper__DOT__signal_sel),64);
    bufp->fullQData(oldp+15,(vlSelf->fi_wrapper__DOT__bit_mask),64);
    bufp->fullQData(oldp+17,(vlSelf->fi_wrapper__DOT__faulty),64);
    bufp->fullBit(oldp+19,(vlSelf->clk));
    bufp->fullBit(oldp+20,(vlSelf->rst));
    bufp->fullBit(oldp+21,(vlSelf->fi_wrapper__DOT__clk_main));
    bufp->fullQData(oldp+22,(vlSelf->fi_wrapper__DOT__cc__DOT__counter),64);
    bufp->fullIData(oldp+24,(vlSelf->fi_wrapper__DOT__golden_file),32);
}

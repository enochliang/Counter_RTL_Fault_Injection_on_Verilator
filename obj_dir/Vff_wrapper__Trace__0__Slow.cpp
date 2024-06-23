// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vff_wrapper__Syms.h"


VL_ATTR_COLD void Vff_wrapper___024root__trace_init_sub__TOP__0(Vff_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->pushNamePrefix("ff_wrapper ");
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declQuad(c+4,"c", false,-1, 63,0);
    tracep->declBus(c+1,"o_file", false,-1, 31,0);
    tracep->declQuad(c+4,"signal_i", false,-1, 63,0);
    tracep->declQuad(c+4,"signal_o", false,-1, 63,0);
    tracep->declQuad(c+6,"clk_counter", false,-1, 63,0);
    tracep->pushNamePrefix("cc ");
    tracep->declBit(c+3,"n_rst", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declQuad(c+4,"counter_w", false,-1, 63,0);
    tracep->declQuad(c+4,"counter", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vff_wrapper___024root__trace_init_top(Vff_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_init_top\n"); );
    // Body
    Vff_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vff_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vff_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vff_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vff_wrapper___024root__trace_register(Vff_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vff_wrapper___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vff_wrapper___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vff_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vff_wrapper___024root__trace_full_sub_0(Vff_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vff_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_full_top_0\n"); );
    // Init
    Vff_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vff_wrapper___024root*>(voidSelf);
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vff_wrapper___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vff_wrapper___024root__trace_full_sub_0(Vff_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_wrapper___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ff_wrapper__DOT__o_file),32);
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->rst));
    bufp->fullQData(oldp+4,(vlSelf->ff_wrapper__DOT__cc__DOT__counter),64);
    bufp->fullQData(oldp+6,(vlSelf->ff_wrapper__DOT__clk_counter),64);
}

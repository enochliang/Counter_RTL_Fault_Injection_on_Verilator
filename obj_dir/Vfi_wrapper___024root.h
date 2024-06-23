// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfi_wrapper.h for the primary calling header

#ifndef VERILATED_VFI_WRAPPER___024ROOT_H_
#define VERILATED_VFI_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"

class Vfi_wrapper__Syms;

class Vfi_wrapper___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ fi_wrapper__DOT__clk_main;
    VL_OUT8(_done,0,0);
    CData/*0:0*/ fi_wrapper__DOT__observe_flag;
    CData/*0:0*/ fi_wrapper__DOT__inject_flag;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__fi_wrapper__DOT__clk_main;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ fi_wrapper__DOT__i_file;
    IData/*31:0*/ fi_wrapper__DOT__o_file;
    IData/*31:0*/ fi_wrapper__DOT__golden_file;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ fi_wrapper__DOT__case_num;
    QData/*63:0*/ fi_wrapper__DOT__signal_sel;
    QData/*63:0*/ fi_wrapper__DOT__bit_mask;
    QData/*63:0*/ fi_wrapper__DOT__golden;
    QData/*63:0*/ fi_wrapper__DOT__golden_next;
    QData/*63:0*/ fi_wrapper__DOT__faulty;
    QData/*63:0*/ fi_wrapper__DOT__clk_counter;
    QData/*63:0*/ fi_wrapper__DOT__cc__DOT__counter;
    QData/*63:0*/ __Vdly__fi_wrapper__DOT__cc__DOT__counter;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfi_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfi_wrapper___024root(Vfi_wrapper__Syms* symsp, const char* v__name);
    ~Vfi_wrapper___024root();
    VL_UNCOPYABLE(Vfi_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

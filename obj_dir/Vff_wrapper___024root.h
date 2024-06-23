// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vff_wrapper.h for the primary calling header

#ifndef VERILATED_VFF_WRAPPER___024ROOT_H_
#define VERILATED_VFF_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"

class Vff_wrapper__Syms;

class Vff_wrapper___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(_done,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ ff_wrapper__DOT__o_file;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ ff_wrapper__DOT__clk_counter;
    QData/*63:0*/ ff_wrapper__DOT__cc__DOT__counter;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vff_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vff_wrapper___024root(Vff_wrapper__Syms* symsp, const char* v__name);
    ~Vff_wrapper___024root();
    VL_UNCOPYABLE(Vff_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

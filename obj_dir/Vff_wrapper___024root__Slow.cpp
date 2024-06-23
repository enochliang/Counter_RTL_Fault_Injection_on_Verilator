// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vff_wrapper__Syms.h"
#include "Vff_wrapper___024root.h"

void Vff_wrapper___024root___ctor_var_reset(Vff_wrapper___024root* vlSelf);

Vff_wrapper___024root::Vff_wrapper___024root(Vff_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vff_wrapper___024root___ctor_var_reset(this);
}

void Vff_wrapper___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vff_wrapper___024root::~Vff_wrapper___024root() {
}

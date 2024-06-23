// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfi_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vfi_wrapper__Syms.h"
#include "Vfi_wrapper___024root.h"

void Vfi_wrapper___024root___ctor_var_reset(Vfi_wrapper___024root* vlSelf);

Vfi_wrapper___024root::Vfi_wrapper___024root(Vfi_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfi_wrapper___024root___ctor_var_reset(this);
}

void Vfi_wrapper___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfi_wrapper___024root::~Vfi_wrapper___024root() {
}

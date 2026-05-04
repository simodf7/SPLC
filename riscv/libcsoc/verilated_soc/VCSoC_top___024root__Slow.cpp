// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top___024root.h"

void VCSoC_top___024root___ctor_var_reset(VCSoC_top___024root* vlSelf);

VCSoC_top___024root::VCSoC_top___024root(VCSoC_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCSoC_top___024root___ctor_var_reset(this);
}

void VCSoC_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCSoC_top___024root::~VCSoC_top___024root() {
}

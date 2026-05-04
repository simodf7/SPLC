// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top___024unit.h"

void VCSoC_top___024unit___ctor_var_reset(VCSoC_top___024unit* vlSelf);

VCSoC_top___024unit::VCSoC_top___024unit(VCSoC_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCSoC_top___024unit___ctor_var_reset(this);
}

void VCSoC_top___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCSoC_top___024unit::~VCSoC_top___024unit() {
}

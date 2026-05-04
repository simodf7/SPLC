// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top_cv32e40s_if_c_obi.h"

void VCSoC_top_cv32e40s_if_c_obi___ctor_var_reset(VCSoC_top_cv32e40s_if_c_obi* vlSelf);

VCSoC_top_cv32e40s_if_c_obi::VCSoC_top_cv32e40s_if_c_obi(VCSoC_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCSoC_top_cv32e40s_if_c_obi___ctor_var_reset(this);
}

void VCSoC_top_cv32e40s_if_c_obi::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCSoC_top_cv32e40s_if_c_obi::~VCSoC_top_cv32e40s_if_c_obi() {
}

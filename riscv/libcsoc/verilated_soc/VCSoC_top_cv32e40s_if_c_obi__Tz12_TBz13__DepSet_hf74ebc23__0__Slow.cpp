// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13.h"

VL_ATTR_COLD void VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13___ctor_var_reset(VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13___ctor_var_reset\n"); );
    // Body
    vlSelf->s_req = VL_RAND_RESET_I(2);
    vlSelf->s_gnt = VL_RAND_RESET_I(2);
    vlSelf->s_rvalid = VL_RAND_RESET_I(2);
}

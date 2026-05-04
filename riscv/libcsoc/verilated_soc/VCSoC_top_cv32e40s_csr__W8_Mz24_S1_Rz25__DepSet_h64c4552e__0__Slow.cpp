// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25.h"

VL_ATTR_COLD void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___stl_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___stl_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 7U) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                     << 6U) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))));
}

VL_ATTR_COLD void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ctor_var_reset(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->scan_cg_en_i = VL_RAND_RESET_I(1);
    vlSelf->wr_data_i = VL_RAND_RESET_I(8);
    vlSelf->wr_en_i = VL_RAND_RESET_I(1);
    vlSelf->rd_data_o = VL_RAND_RESET_I(8);
    vlSelf->rd_error_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
}

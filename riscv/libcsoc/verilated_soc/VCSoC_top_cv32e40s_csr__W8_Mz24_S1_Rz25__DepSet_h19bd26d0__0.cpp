// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25.h"

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 1U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [1U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 2U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [2U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 3U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [3U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 4U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [4U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 5U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [5U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 6U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [6U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 7U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [7U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 8U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [8U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 9U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [9U]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xaU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xaU]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xbU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xbU]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xcU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xcU]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xdU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xdU]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xeU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xeU]));
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

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                             >> 0xfU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU] >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU] >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU] >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU] >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU] >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU] >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU] >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xfU]));
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

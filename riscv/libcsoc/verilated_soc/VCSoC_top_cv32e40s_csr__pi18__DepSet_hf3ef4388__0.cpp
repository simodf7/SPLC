// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top_cv32e40s_csr__pi18.h"

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 1U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 2U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 3U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 4U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 5U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 6U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 7U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 8U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 9U)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xaU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xbU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xcU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xdU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xeU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (IData)((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                             >> 0xfU)));
    }
    vlSelf->__PVT__gen_hardened__DOT__clk_gated = ((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__clk) 
                                                   & (IData)(vlSelf->__PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_csr__pi18___nba_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0\n"); );
    // Body
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
               >> 0x1fU));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1eU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1dU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1cU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1bU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x1aU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x19U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x18U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x17U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x16U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x15U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x14U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x13U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x12U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x11U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0x10U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xfU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xeU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xdU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xcU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xbU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 0xaU)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 9U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 8U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 7U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 6U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 5U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 4U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 3U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 2U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
                     >> 1U)));
    vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSymsp->TOP.CSoC_top__DOT__rst_core_n) 
           && (1U & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i));
    vlSelf->rd_data_o = (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1fU) | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

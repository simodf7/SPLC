// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top___024root.h"

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__107(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__107\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n = 0x200080U;
    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
            = ((0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                ? ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                    ? ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                        ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40s_pc_target_i__DOT__pc_target
                        : ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U] 
                            << 0x1dU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                         >> 3U))) : 
                   ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                     ? (0x7cU & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                 >> 9U)) : ((vlSelf->CSoC_top__DOT__u_core__DOT__mtvec_addr 
                                             << 7U) 
                                            | (0x7cU 
                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                                  >> 4U)))))
                : ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                    ? ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                        ? 0x1a110810U : 0x1a110800U)
                    : ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                        ? ((vlSelf->CSoC_top__DOT__u_core__DOT__mtvec_addr 
                            << 7U) | (0x7cU & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                               >> 0x13U)))
                        : (vlSelf->CSoC_top__DOT__u_core__DOT__mtvec_addr 
                           << 7U))));
    } else if ((0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) {
        if ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                          >> 0x1bU)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                    = ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                        << 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                     >> 1U));
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                = ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                    ? vlSelf->CSoC_top__DOT__u_core__DOT__branch_target_ex
                    : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40s_pc_target_i__DOT__pc_target);
        }
    } else if ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) {
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                      >> 0x1bU)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q;
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
            = ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])
                ? ((0xfffffffcU & vlSelf->CSoC_top__DOT__u_core__DOT__mepc) 
                   | ((2U & (vlSelf->CSoC_top__DOT__u_core__DOT__mepc 
                             & ((~ vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]) 
                                << 1U))) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__mepc)))
                : 0x200080U);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
                = ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q);
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
            = ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])
                ? (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q)));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region 
        = ((0xf0000000U <= vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr) 
           & ((0xf0003fffU >= vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr) 
              & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                 >> 0xeU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                  >> 3U)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__111(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__111\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready = 
        (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                >> 0xdU) | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) 
                            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready) 
                               & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready) 
                                  & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                         >> 0x12U)) 
                                     & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex)) 
                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__114(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__114\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
            << 0x14U) | (QData)((IData)((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp) 
                                          << 0x10U) 
                                         | (0x4000U 
                                            & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = ((0xffffffff3ffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
           | ((QData)((IData)((2U & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]))) 
              << 0x12U));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = ((0xffffffffffffeULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
           | (IData)((IData)((1U & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__121(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__121\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned = 0;
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
            << 2U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 0U;
    if (((2U >= (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
         && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                   >> (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                               ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x2aU) 
                                            * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x2aU) 
                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x2aU) 
                                          * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                    : 0U);
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & ((0x7dU >= ((IData)(9U) + (0x7fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                         && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                   (((IData)(9U) + 
                                     (0x7fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))));
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned 
                = (1U & (((0x7dU >= ((IData)(3U) + 
                                     (0x7fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                          && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(3U) + 
                                      (0x7fU & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x2aU) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                         | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0)));
        } else {
            if (((0U != ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                          ? (3U & (((0U == (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                                     ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                             (((IData)(1U) 
                                               + (0x7fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (3U & (((IData)(0x2aU) 
                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                          : 0U)) | (0U != ((0x7dU >= 
                                            (0x7fU 
                                             & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                            ? (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x2aU) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                   (3U 
                                                    & (((IData)(0x2aU) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                            : 0U)))) {
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
            }
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & (((0x7dU >= ((IData)(9U) + 
                                     (0x7fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                          && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(9U) + 
                                      (0x7fU & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x2aU) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))) 
                         | ((0x7dU >= ((IData)(9U) 
                                       + (0x7fU & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                            && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (((IData)(9U) 
                                        + (0x7fU & 
                                           ((IData)(0x2aU) 
                                            * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x2aU) 
                                                          * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))));
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned 
                = (1U & ((((0x7dU >= ((IData)(3U) + 
                                      (0x7fU & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                     (((IData)(3U) 
                                       + (0x7fU & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x2aU) 
                                                         * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))) 
                          | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                             & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i) 
                                & ((((8U & (VL_REDXOR_32(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                                     >> 0x20U)))) 
                                            << 3U)) 
                                     | ((4U & (VL_REDXOR_32(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                                        >> 0x18U)))) 
                                               << 2U)) 
                                        | ((2U & (VL_REDXOR_32(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                                           >> 0x10U)))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                                       >> 8U)))))))) 
                                    != (0xfU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                        >> 2U)))) 
                                   | ((1U & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                     >> 7U))) 
                                      != (1U & (IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
                                                        >> 6U)))))))) 
                         | (((0x7dU >= ((IData)(3U) 
                                        + (0x7fU & 
                                           ((IData)(0x2aU) 
                                            * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                             && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(3U) 
                                         + (0x7fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(3U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0))));
        }
    } else if (((2U >= (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                          >> (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                               ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x2aU) 
                                            * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x2aU) 
                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x2aU) 
                                          * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                    : 0U);
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & ((0x7dU >= ((IData)(9U) + (0x7fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                         && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                   (((IData)(9U) + 
                                     (0x7fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))));
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned 
                = (1U & (((0x7dU >= ((IData)(3U) + 
                                     (0x7fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                          && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(3U) + 
                                      (0x7fU & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x2aU) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                         | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0)));
        } else {
            if (((0U != ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                          ? (3U & (((0U == (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                     ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                             (((IData)(1U) 
                                               + (0x7fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (3U & (((IData)(0x2aU) 
                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                          : 0U)) | (0U != (3U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp))))) {
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
            }
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & (((0x7dU >= ((IData)(9U) + 
                                     (0x7fU & ((IData)(0x2aU) 
                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                          && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(9U) + 
                                      (0x7fU & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x2aU) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                         | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                    >> 9U))));
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned 
                = (1U & ((((0x7dU >= ((IData)(3U) + 
                                      (0x7fU & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                     (((IData)(3U) 
                                       + (0x7fU & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x2aU) 
                                                         * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                          | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0)) 
                         | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                    >> 3U))));
        }
    } else {
        CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
            = (3U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp));
        CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
            = (1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                             >> 9U)));
        CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned 
            = (1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                             >> 3U)));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
        = ((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
             << 0xaU) | ((QData)((IData)((1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0)
                                                 ? 
                                                ((0x7dU 
                                                  >= 
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                 && (1U 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                        (((IData)(9U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x2aU) 
                                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(9U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x2aU) 
                                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))
                                                 : (IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                            >> 7U)))))) 
                         << 9U)) | (QData)((IData)(
                                                   ((8U 
                                                     & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0)
                                                          ? 
                                                         ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0) 
                                                          | ((0x7dU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x2aU) 
                                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                             && (1U 
                                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                    (((IData)(3U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x2aU) 
                                                                          * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                                     >> 5U)] 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x2aU) 
                                                                            * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))))
                                                          : (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                                     >> 1U))) 
                                                        << 3U)) 
                                                    | (3U 
                                                       & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0)
                                                           ? 
                                                          ((0x7dU 
                                                            >= 
                                                            (0x7fU 
                                                             & ((IData)(0x2aU) 
                                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                            ? 
                                                           (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(0x2aU) 
                                                                  * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                              ? 0U
                                                              : 
                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                              (((IData)(1U) 
                                                                + 
                                                                (0x7fU 
                                                                 & ((IData)(0x2aU) 
                                                                    * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(0x2aU) 
                                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                               (3U 
                                                                & (((IData)(0x2aU) 
                                                                    * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x1fU 
                                                                & ((IData)(0x2aU) 
                                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                            : 0U)
                                                           : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)))))));
    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xfU)))) {
        if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                = ((0x1ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr) 
                   | (((QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h055474d3__0)
                                         ? ((((0x7dU 
                                               >= ((IData)(0xaU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                               ? (0xffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xaU) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x2aU) 
                                                               * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (((IData)(0x19U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x2aU) 
                                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0xaU) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x2aU) 
                                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))) 
                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                        (((IData)(0xaU) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x2aU) 
                                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0xaU) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x2aU) 
                                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))))
                                               : 0U) 
                                             << 0x10U) 
                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                               >> 0x10U))
                                         : (((IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                      >> 8U)) 
                                             << 0x10U) 
                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                               >> 0x10U))))) 
                       << 0xaU) | ((QData)((IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned)) 
                                   << 9U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                = ((0x3fffffffffcULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr) 
                   | (IData)((IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned)));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                = ((0x3fffffffff7ULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr) 
                   | ((QData)((IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__integrity_err_unaligned)) 
                      << 3U));
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_compressed 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if))) 
           && (3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                    >> 0xaU)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_pushpop = 0U;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)))) {
        if ((2U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x16U)))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            }
                        } else if ((0U == (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0x12U))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0xeU))))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                            }
                        } else if ((2U == (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0x12U))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0xeU))))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    VL_ASSIGNSEL_QI(45,16,0x1dU, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode, 
                    ((([&]() {
                        vlSelf->__Vfunc_get_stack_adj_base__0__rlist 
                            = (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xeU)));
                        vlSelf->__Vfunc_get_stack_adj_base__0__Vfuncout 
                            = (((((4U == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist)) 
                                  || (5U == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist))) 
                                 || (6U == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist))) 
                                || (7U == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist)))
                                ? 0x10U : (((((8U == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist)) 
                                              || (9U 
                                                  == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist))) 
                                             || (0xaU 
                                                 == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist))) 
                                            || (0xbU 
                                                == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist)))
                                            ? 0x20U
                                            : ((((0xcU 
                                                  == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist)) 
                                                 || (0xdU 
                                                     == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist))) 
                                                || (0xeU 
                                                    == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist)))
                                                ? 0x30U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__rlist))
                                                    ? 0x40U
                                                    : 0U))));
                    }(), (IData)(vlSelf->__Vfunc_get_stack_adj_base__0__Vfuncout)) 
                      << 4U) | ([&]() {
                    vlSelf->__Vfunc_pushpop_reg_length__1__rlist4 
                        = (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xeU)));
                    vlSelf->__Vfunc_pushpop_reg_length__1__Vfuncout 
                        = (((((((((0U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4)) 
                                  | (1U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                 | (2U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                | (3U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                               | (4U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                              | (5U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                             | (6U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                            | (7U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4)))
                            ? ((0U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                ? 0U : ((1U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                      ? 2U
                                                      : 3U)))))))
                            : (((((((((8U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4)) 
                                      | (9U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                     | (0xaU == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                    | (0xbU == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                   | (0xcU == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                  | (0xdU == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                 | (0xeU == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))) 
                                | (0xfU == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4)))
                                ? ((8U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                    ? 4U : ((9U == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                             ? 5U : 
                                            ((0xaU 
                                              == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                              ? 6U : 
                                             ((0xbU 
                                               == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                               ? 7U
                                               : ((0xcU 
                                                   == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                   ? 8U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                    ? 9U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__rlist4))
                                                     ? 0xaU
                                                     : 0xcU)))))))
                                : 0U));
                }(), (IData)(vlSelf->__Vfunc_pushpop_reg_length__1__Vfuncout))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0 
        = (0x42403U | ((0x4000000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xfU)) 
                                      << 0x1aU)) | 
                       ((0x3800000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0x14U)) 
                                       << 0x17U)) | 
                        ((0x400000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0x10U)) 
                                       << 0x16U)) | 
                         ((0x38000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0x11U)) 
                                       << 0xfU)) | 
                          (0x380U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xcU)) 
                                     << 7U)))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h3675cb66__0 
        = (0x841023U | ((0x700000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xcU)) 
                                      << 0x14U)) | 
                        ((0x38000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x11U)) 
                                      << 0xfU)) | (0x100U 
                                                   & ((IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xfU)) 
                                                      << 8U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0 
        = (0x6fU | (((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                              >> 0x16U)) << 0x1fU) 
                    | ((0x40000000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0x12U)) 
                                       << 0x1eU)) | 
                       ((0x30000000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 0x13U)) 
                                        << 0x1cU)) 
                        | ((0x8000000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0x10U)) 
                                          << 0x1bU)) 
                           | ((0x4000000U & ((IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x11U)) 
                                             << 0x1aU)) 
                              | ((0x2000000U & ((IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xcU)) 
                                                << 0x19U)) 
                                 | ((0x1000000U & ((IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0x15U)) 
                                                   << 0x18U)) 
                                    | ((0xe00000U & 
                                        ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0xdU)) 
                                         << 0x15U)) 
                                       | ((0x1ff000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0x16U))))) 
                                              << 0xcU)) 
                                          | (0x80U 
                                             & ((~ (IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0x19U))) 
                                                << 7U))))))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0 
        = (0x37U | (((- (IData)((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x16U))))) 
                     << 0x11U) | ((0x1f000U & ((IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 0xcU)) 
                                               << 0xcU)) 
                                  | (0xf80U & ((IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 0x11U)) 
                                               << 7U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hef8eb534__0 
        = (0x45413U | ((0x40000000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0x14U)) 
                                       << 0x1eU)) | 
                       ((0x1f00000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xcU)) 
                                       << 0x14U)) | 
                        ((0x38000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x11U)) 
                                      << 0xfU)) | (0x380U 
                                                   & ((IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x11U)) 
                                                      << 7U))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0 
        = (0x847433U | ((0x700000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xcU)) 
                                      << 0x14U)) | 
                        ((0x38000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x11U)) 
                                      << 0xfU)) | (0x380U 
                                                   & ((IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x11U)) 
                                                      << 7U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0 
        = (0x1013U | ((0x1f00000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xcU)) 
                                     << 0x14U)) | (
                                                   (0xf8000U 
                                                    & ((IData)(
                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x11U)) 
                                                       << 0xfU)) 
                                                   | (0xf80U 
                                                      & ((IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x11U)) 
                                                         << 7U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0 
        = (0x12003U | ((0xc000000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xcU)) 
                                      << 0x1aU)) | 
                       ((0x2000000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0x16U)) 
                                       << 0x19U)) | 
                        ((0x1c00000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 0xeU)) 
                                        << 0x16U)) 
                         | (0xf80U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x11U)) 
                                      << 7U))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb3e049f6__0 
        = (0x33U | ((0x1f00000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                            >> 0xcU)) 
                                   << 0x14U)) | (0xf80U 
                                                 & ((IData)(
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0x11U)) 
                                                    << 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h762ac385__0 
        = (0x7413U | ((0x38000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                            >> 0x11U)) 
                                   << 0xfU)) | (0x380U 
                                                & ((IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0x11U)) 
                                                   << 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h732e1d9f__0 
        = (0x40433U | ((0x700000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xcU)) 
                                     << 0x14U)) | (
                                                   (0x38000U 
                                                    & ((IData)(
                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x11U)) 
                                                       << 0xfU)) 
                                                   | (0x380U 
                                                      & ((IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x11U)) 
                                                         << 7U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0 
        = (0U == ((0x20U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 0x16U)) << 5U)) 
                  | (0x1fU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xcU)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hcbe081e8__0 
        = ((0U == (0x1fU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                    >> 0xcU)))) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x11U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 0U;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)))) {
        if ((2U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U))))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((3U == (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xfU))))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 1U;
                            }
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x16U)))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0x14U))))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 1U;
                                }
                            }
                        }
                        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            }
                        } else if ((0U != (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0x12U))))) {
                            if ((2U == (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h7f7d95b2__0 
        = (0x50013U | (([&]() {
                    vlSelf->__Vfunc_sn_to_regnum__8__snum 
                        = (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0x11U)));
                    vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout 
                        = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum)) 
                            || (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum)))
                            ? (8U | (((0U != (7U & 
                                              ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum) 
                                               >> 1U))) 
                                      << 4U) | (7U 
                                                & (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum))))
                            : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum) 
                                              >> 1U))) 
                                << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum))));
                }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout)) 
                       << 7U));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h0996abde__0 
        = (0x513U | (VL_EXTEND_II(17,5, ([&]() {
                        vlSelf->__Vfunc_sn_to_regnum__9__snum 
                            = (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 0x11U)));
                        vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum)) 
                                || (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum)))
                                ? (8U | (((0U != (7U 
                                                  & ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum) 
                                                     >> 1U))) 
                                          << 4U) | 
                                         (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum))))
                                : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum) 
                                                  >> 1U))) 
                                    << 4U) | (0xfU 
                                              & (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum))));
                    }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout))) 
                     << 0xfU));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_he045e39f__0 
        = (0x58013U | (([&]() {
                    vlSelf->__Vfunc_sn_to_regnum__10__snum 
                        = (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xcU)));
                    vlSelf->__Vfunc_sn_to_regnum__10__Vfuncout 
                        = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum)) 
                            || (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum)))
                            ? (8U | (((0U != (7U & 
                                              ((IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum) 
                                               >> 1U))) 
                                      << 4U) | (7U 
                                                & (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum))))
                            : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum) 
                                              >> 1U))) 
                                << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum))));
                }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__10__Vfuncout)) 
                       << 7U));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_haa2f2ddc__0 
        = (0x593U | (VL_EXTEND_II(17,5, ([&]() {
                        vlSelf->__Vfunc_sn_to_regnum__11__snum 
                            = (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 0xcU)));
                        vlSelf->__Vfunc_sn_to_regnum__11__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum)) 
                                || (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum)))
                                ? (8U | (((0U != (7U 
                                                  & ((IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum) 
                                                     >> 1U))) 
                                          << 4U) | 
                                         (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum))))
                                : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum) 
                                                  >> 1U))) 
                                    << 4U) | (0xfU 
                                              & (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum))));
                    }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__11__Vfuncout))) 
                     << 0xfU));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s 
        = ((7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                          >> 0x11U))) != (7U & (IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 0xcU))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_hint = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 0U;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)))) {
        if ((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x19U)))) {
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x18U)))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x17U)))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x17U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x16U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x15U)))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x14U)))) {
                        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x10U)))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x18U)))) {
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x17U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0xffU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xfU))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((1U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xaU))))) {
            if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x19U)))) {
                if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x18U))))) {
                    if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x17U))))) {
                        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x15U)))) {
                            if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0x14U)))) {
                                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0x16U)))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0x10U)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xfU)))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xeU)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xdU)))) {
                                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(
                                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU))))) {
                                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xdU)))) {
                                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                            } else if (
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xcU)))) {
                                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0x16U)))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x18U)))) {
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x17U)))) {
                    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((2U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xaU))))) {
            if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x19U)))) {
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x18U)))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x17U)))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x17U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 0x16U))))) {
                    if ((0U == (0x1fU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 0xcU))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 0x11U))))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x18U)))) {
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x17U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                    >> 0x11U))))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        }
        if ((0U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((1U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xaU))))) {
                if ((2U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xaU))))) {
                    if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0x18U))))) {
                            if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0x17U))))) {
                                if ((1U & (~ (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x16U))))) {
                                    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hcbe081e8__0) {
                                        if (((0U != 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xcU)))) 
                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[0U] 
                                                >> 3U))) {
                                            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_hint = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((2U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U))))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((3U != (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xfU))))) {
                                if ((1U == (3U & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0xfU))))) {
                                    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__123(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__123\n"); );
    // Init
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
        = ((0x7dU >= (0x7fU & ((IData)(0x2aU) * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
            ? (0x3ffffffffffULL & (((QData)((IData)(
                                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x2aU) 
                                                          * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & ((IData)(0x2aU) 
                                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                      | ((QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                         (3U 
                                                          & (((IData)(0x2aU) 
                                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))))
            : 0ULL);
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
    } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
            if ((3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                      >> 0xaU))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x1aU))));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x1aU))));
            }
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = (3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x1aU))));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = (3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x1aU))));
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = (3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x1aU))));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = (3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x1aU))));
        }
    }
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                  >> 1U)))) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                             >> 0xaU))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                      >> 0x1aU))))
                                 ? 1U : 2U)) : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x1aU))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x1aU))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
        = ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])
            ? 0U : (7U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                           + (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                          - ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                              ? 1U : 0U))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__124(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__124\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffe001ffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)((0xfffU & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                  >> 0x21U)) 
                                         + VL_SHIFTL_III(12,12,32, 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xcU))), 4U))))) 
              << 0x11U));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__125(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__125\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)))) {
        if ((2U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            if ((5U == (7U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U))))) {
                if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U))))) {
                    if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x15U))))) {
                        if ((1U & (~ (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0x14U))))) {
                            if ((1U & ((3U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                       | (0x3fffffffU 
                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp = 1U;
                            }
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x16U)))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x15U)))) {
                        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0x14U)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 4U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0x12U))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xeU))))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 3U;
                                }
                            }
                        } else if ((0U == (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0x12U))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0xeU))))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 1U;
                            }
                        } else if ((2U == (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0x12U))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 0xeU))))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 2U;
                            }
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                    }
                } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x15U)))) {
                    if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x14U)))) {
                        if ((3U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0xfU))))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 5U;
                        } else if ((1U == (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xfU))))) {
                            if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 6U;
                            }
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                    }
                } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x14U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                } else if ((1U & ((3U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                  | (0x3fffffffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 7U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__129(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__129\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1ffffffe001fULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)(((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                ? 0U : (0xfffU & ((4U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(
                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                              >> 0x11U)) 
                                                     - 
                                                     VL_SHIFTL_III(12,12,32, 
                                                                   (0x1fU 
                                                                    & ((IData)(1U) 
                                                                       + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q))), 2U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 
                                                   ((IData)(
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 0x11U)) 
                                                    - 
                                                    VL_SHIFTL_III(12,12,32, 
                                                                  (0x1fU 
                                                                   & ((IData)(1U) 
                                                                      + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q))), 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 
                                                    (- 
                                                     VL_SHIFTL_III(12,12,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)), 2U))
                                                     : 0U))))))) 
              << 5U));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__130(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__130\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid 
        = (((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr)) 
            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
              & (IData)((0U == (0x108000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])))));
}

void VCSoC_top___024root___eval_triggers__act(VCSoC_top___024root* vlSelf);
void VCSoC_top___024root___eval_act(VCSoC_top___024root* vlSelf);

bool VCSoC_top___024root___eval_phase__act(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<98> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCSoC_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCSoC_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VCSoC_top___024root___eval_nba(VCSoC_top___024root* vlSelf);

bool VCSoC_top___024root___eval_phase__nba(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCSoC_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__ico(VCSoC_top___024root* vlSelf);
#endif  // VL_DEBUG
bool VCSoC_top___024root___eval_phase__ico(VCSoC_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__nba(VCSoC_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__act(VCSoC_top___024root* vlSelf);
#endif  // VL_DEBUG

void VCSoC_top___024root___eval(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VCSoC_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/CSoC_top.sv", 12, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCSoC_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCSoC_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/CSoC_top.sv", 12, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCSoC_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/CSoC_top.sv", 12, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCSoC_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCSoC_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCSoC_top___024root___eval_debug_assertions(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_sys_i & 0xfeU))) {
        Verilated::overWidthError("clk_sys_i");}
    if (VL_UNLIKELY((vlSelf->rst_sys_ni & 0xfeU))) {
        Verilated::overWidthError("rst_sys_ni");}
    if (VL_UNLIKELY((vlSelf->uart_rx_i & 0xfeU))) {
        Verilated::overWidthError("uart_rx_i");}
    if (VL_UNLIKELY((vlSelf->spi_rx_i & 0xfeU))) {
        Verilated::overWidthError("spi_rx_i");}
    if (VL_UNLIKELY((vlSelf->dtm_tck_i & 0xfeU))) {
        Verilated::overWidthError("dtm_tck_i");}
    if (VL_UNLIKELY((vlSelf->dtm_tms_i & 0xfeU))) {
        Verilated::overWidthError("dtm_tms_i");}
    if (VL_UNLIKELY((vlSelf->dtm_trst_ni & 0xfeU))) {
        Verilated::overWidthError("dtm_trst_ni");}
    if (VL_UNLIKELY((vlSelf->dtm_td_i & 0xfeU))) {
        Verilated::overWidthError("dtm_td_i");}
}
#endif  // VL_DEBUG

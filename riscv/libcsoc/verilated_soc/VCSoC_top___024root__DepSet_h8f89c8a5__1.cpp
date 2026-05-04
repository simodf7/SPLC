// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top___024root.h"

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__0(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop 
        = ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
           & ((~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req)) 
              & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready)));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req)) 
           & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q;
    if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop) 
         & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d = 0U;
    } else if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i) 
                & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d 
            = (1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q)));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req)))) {
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i) 
             & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d 
                = ((0x43U >= (0x7fU & ((IData)(0x22U) 
                                       * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))))
                    ? (0x3ffffffffULL & (((QData)((IData)(
                                                          vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[
                                                          (((IData)(0x21U) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(0x22U) 
                                                                * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x22U) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x22U) 
                                                  * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x22U) 
                                                                       * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))))) 
                                            | ((QData)((IData)(
                                                               vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[
                                                               (3U 
                                                                & (((IData)(0x22U) 
                                                                    * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)))))))
                    : 0ULL);
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__1(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0;
    IData/*31:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0;
    QData/*33:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = 0;
    IData/*31:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0;
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__core_clear_pending 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d = 0U;
    } else if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid) 
                & ((~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__core_clear_pending)) 
                   & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d 
            = (1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q)));
    }
    vlSelf->CSoC_top__DOT__dmi_req_valid = ((~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__core_clear_pending)) 
                                            & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 0U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = (0xffff0fffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                           + ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                               ? ((IData)(1U) << (7U 
                                                  & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U)))
                               : 0U))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0U;
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x100000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)) 
                                             - (IData)(4U)))));
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x16U != (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x18U != (0x7fU & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                                            = ((0x1fU 
                                                >= 
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((0x10U 
                                                      | (0xfU 
                                                         & (IData)(
                                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                    >> 0x22U)))) 
                                                     - (IData)(0x10U))))) 
                                               && (1U 
                                                   & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                      >> 
                                                      ((IData)(0x10U) 
                                                       + 
                                                       (0x1fU 
                                                        & ((0x10U 
                                                            | (0xfU 
                                                               & (IData)(
                                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                          >> 0x22U)))) 
                                                           - (IData)(0x10U)))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))))))) {
            if (((((((((0x40U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U)))))) {
                if ((0x40U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x13U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x34U != (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x35U != (0x7fU & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((0x38U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if ((0x39U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U))))) {
                                        if ((0x3aU 
                                             != (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                            if ((1U 
                                                 & ((0U 
                                                     != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                    | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                       >> 0x16U)))) {
                                                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                    = 
                                                    (0x400000U 
                                                     | vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x3dU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            }
        }
    }
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)) 
                                             - (IData)(4U)))));
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x16U != (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x17U == (0x7fU & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 1U;
                                }
                            } else if ((0x18U != (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U))))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                                        = ((0x1fU >= 
                                            ((IData)(0x10U) 
                                             + (0x1fU 
                                                & ((0x10U 
                                                    | (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                  >> 0x22U)))) 
                                                   - (IData)(0x10U))))) 
                                           && (1U & 
                                               (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                >> 
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((0x10U 
                                                      | (0xfU 
                                                         & (IData)(
                                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                    >> 0x22U)))) 
                                                     - (IData)(0x10U)))))));
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))))))) {
                if ((0x10U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if ((0x18U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                            VL_ASSIGNSEL_WI(256,32,
                                                            (0xffU 
                                                             & VL_SHIFTL_III(8,32,32, 
                                                                             (7U 
                                                                              & (IData)(
                                                                                (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                                >> 0x22U))), 5U)), vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q));
                                        }
                                    }
                                    if ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = 0U;
                                            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xfffff000U 
                                                    & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (3U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)));
                                            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xffffU 
                                                    & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (0xff0000U 
                                                      & ((IData)(
                                                                 (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                  >> 0x10U)) 
                                                         << 0x10U)));
                                        }
                                    }
                                }
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                            = (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) {
                if ((0x39U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                            = ((0xffffffff00000000ULL 
                                & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                               | (IData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)));
                    }
                } else if ((0x3aU == (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                            = ((0xffffffffULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                               | ((QData)((IData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
                                  << 0x20U));
                    }
                }
            }
            if ((0x38U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) {
                if ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                } else {
                    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                        = (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs;
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = ((0xffbfffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                           | (0x400000U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                           & ((~ (CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 0x16U)) 
                                              << 0x16U))));
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = ((0xffff8fffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                           | (((0U != (7U & (CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0xcU)))
                                ? 0U : (7U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0xcU))) 
                              << 0xcU));
                }
            } else if ((0x39U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            } else if ((0x3aU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            } else if ((0x3cU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            } else if ((0x3dU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                           | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x16U)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                }
            }
        }
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror_valid) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
            = ((0xffff8fffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
               | ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror) 
                  << 0xcU));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x20000000U | (0x1fffffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = ((0xffdfffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
           | ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
              << 0x15U));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x407U | (0xfffff000U & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) {
                if ((0x39U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x3aU != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x3cU == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                    = ((0xffffffff00000000ULL 
                                        & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                       | (IData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)));
                            }
                        } else if ((0x3dU == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                    = ((0xffffffffULL 
                                        & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                       | ((QData)((IData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
                                          << 0x20U));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->CSoC_top__DOT__host_rvalid[1U]) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(VL_SHIFTR_III(32,32,32, 
                                            vlSelf->CSoC_top__DOT__host_rdata
                                            [1U], vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT____VdfgTmp_h2d100b33__0)));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid = 0U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid = 0U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid = 0U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack = 0U;
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) {
                if ((0x39U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid 
                            = (0U == (7U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xcU)));
                    }
                }
                if ((0x39U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x3aU != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x3cU == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid 
                                    = (0U == (7U & 
                                              (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0xcU)));
                            }
                        }
                    }
                }
            }
        }
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))))))) {
                if ((0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                        = (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                    if ((0x10000000U & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                            = ((~ ((IData)(1U) << (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                               & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                    }
                }
            }
        }
    }
    if ((2U & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff3U & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x1eU)) & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                 >> 0x1eU)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack = 1U;
    }
    if (((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x1eU) & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push 
        = ((2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
           & (IData)(vlSelf->CSoC_top__DOT__dmi_req_valid));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x80U | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff1ffffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | ((0x80000U & (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                            >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                           << 0x13U)) | ((0x40000U 
                                          & (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                                              >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                             << 0x12U)) 
                                         | (0x20000U 
                                            & (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                                                >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                               << 0x11U)))));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x10000U & (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x10U)));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff0fffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0xc000U & ((- (IData)((0U < ((0xffc00U 
                                            & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                               << 4U)) 
                                           | (0x3ffU 
                                              & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 0x10U)))))) 
                         << 0xeU)));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x200U & (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 9U)));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x100U & (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 8U)));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x800U & ((~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xbU)));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x400U & ((~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xaU)));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x8000000U | (0xe0ffffffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) 
              << 0xcU));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = 0ULL;
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x100000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))))))) {
            if (((((((((0x40U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U)))))) {
                if ((0x40U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x13U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x34U != (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x35U != (0x7fU & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((0x38U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if ((0x39U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U))))) {
                                        if ((0x3aU 
                                             != (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((0U 
                                                      != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                     | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                        >> 0x16U))))) {
                                                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid 
                                                    = 
                                                    (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                         >> 0xcU)));
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
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                   >> 
                                                   (0x3fU 
                                                    & VL_SHIFTL_III(6,32,32, 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                                >> 0x22U))), 5U)))))) 
                          << 2U));
                if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            } else if ((0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) 
                          << 2U));
            } else if ((0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus)) 
                          << 2U));
            } else if ((0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 
                                                   (0x3fU 
                                                    & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart), 5U)))))) 
                          << 2U));
            } else if ((0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs)) 
                          << 2U));
            } else if ((0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)) 
                          << 2U));
            } else if ((0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                          >> 0x22U))), 5U)))
                                             ? 0U : 
                                            (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U))))) 
                                           | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                          >> 0x22U))), 5U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U)))))) 
                          << 2U));
                if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            }
        } else if (((((((((0x40U == (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                          | (0x13U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) 
                         | (0x34U == (0x7fU & (IData)(
                                                      (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x22U))))) 
                        | (0x35U == (0x7fU & (IData)(
                                                     (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U))))) 
                       | (0x38U == (0x7fU & (IData)(
                                                    (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U))))) 
                      | (0x39U == (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) 
                     | (0x3aU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) 
                    | (0x3cU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                  >> 0x22U)))))) {
            CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                = ((0x40U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))
                    ? ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0)) 
                          << 2U)) : ((0x13U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                           >> 0x22U))))
                                      ? ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                         | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1)) 
                                            << 2U))
                                      : ((0x34U == 
                                          (0x7fU & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))
                                          ? ((3ULL 
                                              & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                             | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2)) 
                                                << 2U))
                                          : ((0x35U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U))))
                                              ? ((3ULL 
                                                  & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                 | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3)) 
                                                    << 2U))
                                              : ((0x38U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U))))
                                                  ? 
                                                 ((3ULL 
                                                   & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                  | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)) 
                                                     << 2U))
                                                  : 
                                                 ((0x39U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                               >> 0x22U))))
                                                   ? 
                                                  ((3ULL 
                                                    & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                   | ((QData)((IData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))) 
                                                      << 2U))
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                >> 0x22U))))
                                                    ? 
                                                   ((3ULL 
                                                     & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                    | ((QData)((IData)((IData)(
                                                                               (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                                                >> 0x20U)))) 
                                                       << 2U))
                                                    : 
                                                   ((1U 
                                                     & ((0U 
                                                         != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                        | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                           >> 0x16U)))
                                                     ? 
                                                    (3ULL 
                                                     | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp)
                                                     : 
                                                    ((3ULL 
                                                      & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                                                     | ((QData)((IData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))) 
                                                        << 2U))))))))));
        } else if ((0x3dU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                = ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                          | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x16U))) ? (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp)
                    : ((3ULL & CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                                   >> 0x20U)))) 
                          << 2U)));
        }
    }
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))))) {
                if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x16U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if ((0x17U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if ((0x18U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            }
                        } else if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                            CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                        }
                    }
                }
            }
        } else if ((0x38U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x39U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3aU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3cU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        } else if ((0x3dU == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) {
            if ((1U & ((0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                       | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x16U)))) {
                CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            }
        }
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n[0U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[0U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n[1U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[1U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n[2U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[2U];
    if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT____Vlvbound_haae24920__0 
            = CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp;
        if ((0x43U >= (0x7fU & ((IData)(0x22U) * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WQ(68,34,(0x7fU & ((IData)(0x22U) 
                                            * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))), vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n, vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT____Vlvbound_haae24920__0);
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__2(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xfffff000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
               << 0xbU) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__3(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_ready 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req)) 
           & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req)) 
           & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_valid));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d = 0U;
    } else if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i) 
                & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d 
            = (1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q)));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req)))) {
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i) 
             & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d 
                = (((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_q)) 
                    << 0x22U) | (((QData)((IData)((
                                                   (3U 
                                                    == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))
                                                    ? 2U
                                                    : 1U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_q))));
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__4(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__4\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed = 0;
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d = 0U;
    } else if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid) 
                & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d 
            = (1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q)));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req)) 
           & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_q;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 0U;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed = 0U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_d = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_d = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_d = 0ULL;
    } else {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q)))) {
                    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_d 
                            = ((0U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))
                                ? (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
                                           >> 2U)) : 
                               ((2U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))
                                 ? 0xdeadbeefU : ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))
                                                   ? 0xb051b051U
                                                   : 0xbaadc0deU)));
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q)))) {
                if ((((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_select) 
                      & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_d 
                        = (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q 
                                   >> 2U));
                }
            }
        }
        if ((4U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q)))) {
                    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid) {
                        if ((2U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed = 1U;
                        } else if ((3U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 1U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q)))) {
                if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid) {
                    if ((0U != (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                        if ((2U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed = 1U;
                        } else if ((3U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q)))) {
                            CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 1U;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr) 
             & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q)))) {
            CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr) 
             & ((1U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q)) 
                | (2U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))))) {
            CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 1U;
        }
        if (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy) 
             & (0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q)))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_d = 3U;
        }
        if (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed) 
             & (0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q)))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_d = 2U;
        }
        if ((((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr) 
              & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q 
                 >> 0x10U)) & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_d = 0U;
        }
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_select) {
                if (((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q)) 
                     & (~ (IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_d 
                        = (((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_q)) 
                            << 0x22U) | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_q)) 
                                         << 2U));
                } else if (((3U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q)) 
                            | (IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_d 
                        = (3ULL | (((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_q)) 
                                    << 0x22U) | ((QData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_q)) 
                                                 << 2U)));
                }
            }
        }
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_select) {
                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_d 
                    = (((QData)((IData)(vlSelf->dtm_td_i)) 
                        << 0x28U) | (0xffffffffffULL 
                                     & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q 
                                        >> 1U)));
            }
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__5(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0)))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0)))) {
                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0)))) {
                            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h72df47b6__0)))) {
                                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0)))) {
                                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if (vlSelf->CSoC_top__DOT__u_core__DOT__csr_wr_in_wb_flush) {
                                                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 1U;
                                            }
                                        }
                                    }
                                    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 0U;
                                        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
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
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__6(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs;
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
        = (0xcU | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
        = (0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
        = (0xdU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
        = (0x7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
        = (0xffffffc0U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q) 
              << 0x14U));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0x80000U & ((((IData)((0U != (0x760U 
                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)))) 
                            | (((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__irq_req_ctrl) 
                                  | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h026594b3__0) 
                                    | (IData)(vlSelf->__VdfgTmp_h071f4112__0))) 
                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable))) 
                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug)) 
                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable))) 
                          << 0x13U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)((0U != (0x99U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)))) 
              << 0x12U));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = (0xfffc0fffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = (0x3fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
        = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = (0xffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
        = (0xfffffc00U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
        = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
        = (0xeU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = (0xfffffff3U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xe7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id) 
              << 0x1bU));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xfcffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0xff000000U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) 
                              << 0x19U) | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_in_ex) 
                                           << 0x18U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) 
              << 0x16U));
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                = (0x8000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                = (0x50000000U | (0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
                   | (0x40000000U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                                     << 0x1eU)));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                = (0x200U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U]);
            if ((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    = ((0xffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
                       | ((IData)((1ULL | ((QData)((IData)(
                                                           (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                              << 0x1dU) 
                                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                                                                >> 3U)) 
                                                            | vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb))) 
                                           << 1U))) 
                          << 8U));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                    = ((0xfffffe00U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U]) 
                       | (((IData)((1ULL | ((QData)((IData)(
                                                            (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                               << 0x1dU) 
                                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                                                                 >> 3U)) 
                                                             | vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb))) 
                                            << 1U))) 
                           >> 0x18U) | ((IData)(((1ULL 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                                                                          >> 3U)) 
                                                                      | vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb))) 
                                                     << 1U)) 
                                                 >> 0x20U)) 
                                        << 8U)));
            }
            if ((4U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0xe000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
                       | (0x1000U & ((~ ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)) 
                                         | (2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)))) 
                                     << 0xcU)));
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x8000U | (0xffff0fffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]));
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (3U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x10000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (8U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x80000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            }
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0xf000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                = (0x60000000U | (0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x40000000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                = (1U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = ((0xfffff001U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q)
                        ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                            ? 0x403U : 0x402U) : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                                                   ? 0x401U
                                                   : 0x400U)) 
                      << 1U));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                = ((0xfffffff3U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
                   | (0xfffffffcU & ((8U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q)) 
                                            << 3U)) 
                                     | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q) 
                                        << 2U))));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U]);
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x1e0000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0xf000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                = ((0x7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o) 
                      << 0x1bU));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                = ((0xffffffc0U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]) 
                   | (0x7ffffffU & (0x20U | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o) 
                                             >> 5U))));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x40000000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                = (1U | (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                = (0x48000000U | (0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = ((0xfffff001U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o) 
                      << 1U));
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x1e0000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        } else {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0xe000U | (0xffff0fffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                    = ((0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]) 
                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                            ? 0xbU : 8U) << 0x1bU));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
                       | (0x40000000U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                         << 0x1eU)));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                    = ((0xfffff001U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                       | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb) 
                          << 1U));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                    = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                       | (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                            >> 0x11U) & (0U != (0x300000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]))) 
                          << 0x1fU));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    = ((0xfffffff3U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
                       | (0xfffffffcU & ((8U & ((((
                                                   (0U 
                                                    != 
                                                    (0x6010000U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                                      >> 2U)) 
                                                  | (0U 
                                                     != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb))) 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                                    >> 0x11U)) 
                                                << 3U)) 
                                         | ((IData)(
                                                    (0x10020000U 
                                                     == 
                                                     (0x10020000U 
                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]))) 
                                            << 2U))));
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h72df47b6__0) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x20000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0xbU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x1e0000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                      ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                      : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                        = (0xe000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                        = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                        = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                        = (0x30000000U | (0x87ffffffU 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
                }
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0xe000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                    = (0x10000000U | (0x87ffffffU & 
                                      vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x80000000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__csr_wr_in_wb_flush) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x1c0000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0xe000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                    = (0x30000000U | (0x87ffffffU & 
                                      vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = ((0xffff3fffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
                       | (0xffffc000U & (0x8000U | 
                                         (0x4000U & 
                                          ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[0U] 
                                               >> 4U)) 
                                           << 0xeU)))));
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                    = (0x28000000U | (0x87ffffffU & 
                                      vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x8000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) {
                    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__mcause)) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (3U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                            = (0x8000000U | (0x87ffffffU 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                            = (0x8000000U | (0x87ffffffU 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                    }
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                        = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
                           | (0x10000000U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                             << 0x1cU)));
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                        = ((0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]) 
                           | (((1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                       >> 0x17U) & 
                                      (~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                          >> 1U))))
                                ? 0xfU : ((1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                                    >> 1U)))
                                           ? 0xeU : 4U)) 
                              << 0x1bU));
                    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                        = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                        = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]) 
                           | (0x80000000U & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                              << 8U) 
                                             & ((~ 
                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                                  >> 1U)) 
                                                << 0x1fU))));
                }
            } else if ((1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                              | ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                  >> 7U) & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                            >> 0x18U))))) {
                if ((1U & (~ (IData)(((0U != (0x60000000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])) 
                                      | (0U != (0x41U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U]))))))) {
                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                            = (0x70000000U | (0x87ffffffU 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]));
                        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                            = (0x8000U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                    }
                }
            }
            if ((1U & (IData)(((0x22084U == (0x22084U 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])) 
                               & (0U == (0x21000U & 
                                         vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                    = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                       | (1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))));
            }
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
            = (0xbU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
        if (vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0xbU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                    = (0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (4U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                    = (0x87ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (2U | vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            }
        }
    }
    if (((((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
               >> 0xdU)) & (vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                            >> 2U)) & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q))) 
         & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_ready)) 
            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_if) 
               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_if))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 1U;
    }
    if ((1U & (((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid) 
                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready)) 
                 & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                    >> 2U)) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
               | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xdU)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 0U;
    }
    if ((1U & ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_valid) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_ready)) 
                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q)) 
               | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = 0U;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__7(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
        = ((0xf800003fU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U]) 
           | (0xffffffc0U & ((0x4000000U & (((~ (vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                                                 >> 2U)) 
                                             & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                                            << 0x1aU)) 
                             | ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o)
                                   ? (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause))
                                   : 0U) << 0x15U) 
                                | ((0x1ff800U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause) 
                                                 << 0xbU)) 
                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o)
                                        ? 0xfU : 0U) 
                                      << 6U))))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__8(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__8\n"); );
    // Init
    CData/*5:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                         ? (- (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                        >> 0x17U)))
                         : (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                     >> 0x17U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
                                          ? ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                              << 0x10U) 
                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                >> 0x10U))
                                          : ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              << 9U) 
                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                >> 0x17U))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x30U))))))
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                           >> 0x38U))))))
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                          >> 0x3cU))))))
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 2U) | (QData)((IData)((3U & (IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3eU))))))
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 1U) | (QData)((IData)((1U & (IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3fU))))))
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__9(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__9\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if (vlSelf->CSoC_top__DOT__host_rvalid
                   [1U]) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelf->CSoC_top__DOT__host_rvalid[1U]) {
                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
            }
        } else if (vlSelf->CSoC_top__DOT__host_gnt[1U]) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 4U;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if (vlSelf->CSoC_top__DOT__host_gnt[1U]) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 3U;
        }
    } else {
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid) 
             & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0x14U))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid) 
             & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                >> 0xfU))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
        }
    }
    if (((2U < (7U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    if (((0U != ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__10(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__10\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop) 
         & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
           & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop)) 
          & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

extern const VlUnpacked<CData/*2:0*/, 64> VCSoC_top__ConstPool__TABLE_h1d3ded05_0;

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__12(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__12\n"); );
    // Init
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    __Vtableidx8 = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns 
        = VCSoC_top__ConstPool__TABLE_h1d3ded05_0[__Vtableidx8];
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__14(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__14\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid 
        = ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                     >> 0xfU))) && ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                                     ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid) 
                                        && ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)
                                             ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                             : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                                                 ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                                 : 
                                                ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h055474d3__0) 
                                                 | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0) 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))))))
                                     : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__15(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__15\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = 0;
    // Body
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = 0U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))) {
                if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                     & (0U != (0x3fU & ((IData)(0x20U) 
                                        - (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result)))))) {
                    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = 1U;
                }
            }
        }
    }
    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                 >> 1U))) : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result;
    } else if (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = (0x3fU & (((IData)(0x20U) - (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result)) 
                        - (IData)(1U)));
    } else if ((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = (0x3fU & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                        - (IData)(1U)));
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__16(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__16\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x17U)))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     >> 0x18U)))) {
                    if ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                    }
                }
            } else if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                            : ((0xff000000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               << 1U)) 
                               | ((0xff0000U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 << 0x11U) 
                                                | (0x10000U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                      >> 0xfU)))) 
                                  | ((0xff00U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 << 1U)) 
                                     | (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 >> 0xfU))))));
                }
            } else if ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x17U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = (((- (IData)((0U != (0xffU 
                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                  >> 0xfU))))) 
                            << 0x18U) | ((0xff0000U 
                                          & ((- (IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                             >> 7U))))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & ((- (IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                 << 1U) 
                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                   >> 0x1fU)))))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                 >> 0x17U)))))))));
                }
            } else if ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
            }
        } else if ((0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                 << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x17U)) 
                               & (~ ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                      << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                >> 0x17U))))
                            : (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                 << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x17U)) 
                               | (~ ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                      << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                >> 0x17U)))));
                } else if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     >> 0x17U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                             << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       >> 0x17U)) ^ 
                           (~ ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                          >> 0x17U))));
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? 0U : ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                 ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                 : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result)));
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? 0U : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                    : ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU) : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result))));
        }
    } else if ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x19U)))) {
                if ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0x17U)))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0)));
                    }
                }
            }
        } else if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x18U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? (0xffffU & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                       << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                 >> 0x17U)))
                        : (((- (IData)((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              >> 6U)))) 
                            << 0x10U) | (0xffffU & 
                                         ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                           << 9U) | 
                                          (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x17U)))));
            }
        } else if ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? (1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0)))
                    : (((- (IData)((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                          >> 0x1eU)))) 
                        << 8U) | (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x17U))));
        }
    } else if ((0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x18U)))) {
                if ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                }
            }
        } else if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                             >> 0x18U)))) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x17U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
            }
        }
    } else if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                ? ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                   >> 0x17U)) & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                  << 9U) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                    >> 0x17U)))
                    : (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                   >> 0x17U)) | ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                  << 9U) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                    >> 0x17U))))
                : ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                    : (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                   >> 0x17U)) ^ ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                  << 9U) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                    >> 0x17U)))));
    } else if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         >> 0x18U)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result);
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__17(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__17\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xcU) | (((0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid)) 
                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgTmp_hfbe59110__0))));
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_valid = 
        (((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
              >> 3U)) | ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                          >> 3U) & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
                                     ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
                                     : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_1)))) 
         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 2U;
    } else if ((0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 1U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = 0U;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = 1U;
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)) 
               | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xdU)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = 1U;
    } else if ((0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 0U;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                      >> 0x15U)))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xdU)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
    } else if ((0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
    } else if ((0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
    }
    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb 
        = (((5U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                    >> 0x1cU)) & ((((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                     >> 9U) & (0xc000U 
                                               == (0xc000U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]))) 
                                   | ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                       >> 6U) & (0U 
                                                 == 
                                                 (0xc000U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])))) 
                                  & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                         >> 0xdU)) 
                                     & (0U != vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                                        [0U])))) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_valid));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__18(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__18\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n 
        = (3U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))
                  ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))
                  : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__19(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__19\n"); );
    // Init
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0;
    CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0 = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id = 
        (1U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                   >> 2U)) & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                  >> 5U)) & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                     >> 9U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40s_pc_target_i__DOT__pc_target 
        = ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
            ? ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
                ? (((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                     << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                 >> 0x16U)) + (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               >> 6U)))) 
                                                << 0xdU) 
                                               | ((0x1000U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      << 6U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                         >> 3U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                            << 5U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                              >> 0xeU)))))))
                : (((0x800U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
                     ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                         << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                   >> 0x17U)) : ((0x800U 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
                                                  ? 
                                                 vlSelf->CSoC_top__DOT__u_core__DOT__rf_rdata_id
                                                 [0U]
                                                  : 
                                                 vlSelf->CSoC_top__DOT__u_core__DOT__rf_rdata_id
                                                 [0U])) 
                   + vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type))
            : ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
                ? (((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                     << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                 >> 0x16U)) + (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               >> 6U)))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 7U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                         >> 0x10U)) 
                                                     | (0x7feU 
                                                        & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                            << 5U) 
                                                           | (0x1eU 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                 >> 0x1bU))))))))
                : ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                     << 0x1fU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                   << 0x1eU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U)))))))))))))))))))))))))) 
                   + (0x3fcU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                >> 0x11U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id = (IData)(
                                                            ((~ 
                                                              ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                                                               >> 2U)) 
                                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                                >> 0x30U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl 
        = vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we) {
        vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl 
            = (4U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n));
    } else if ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl 
            = (4U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0));
    } else if ((1U & ((((IData)((0x82U == (0x82U & 
                                           vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]))) 
                        & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                           >> 0xdU)) | ((IData)((0x2080U 
                                                 == 
                                                 (0x2080U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]))) 
                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                           >> 0xcU))) 
                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id) 
                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_mret_insn_id)) 
                         & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                            >> 0xeU))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl 
            = (4U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id));
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
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_jmp_id) 
              & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                 >> 7U)));
    CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0 
        = (1U & (~ (((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__alu_bch) 
                       | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_jmp_id)) 
                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id)) 
                     | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id) 
                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_mret_insn_id))) 
                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o))));
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access 
        = (3U & ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl))
                  ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl)
                  : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__first_op_id 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
            >> 2U) & ((IData)(CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0) 
                      | (0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt))));
    vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id 
        = ((IData)(CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0) 
           | (1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
                    = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n);
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
                    = CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access;
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q;
            }
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
            = ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])
                ? (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q)));
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
            = CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region 
        = ((0xf0000000U <= vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr) 
           & ((0xf0003fffU >= vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr) 
              & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                 >> 0xeU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__last_op_id 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
            >> 1U) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__multi_op_id_stall 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id)) 
           & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
              >> 7U));
    vlSelf->__VdfgTmp_hdc70427a__0 = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT____VdfgTmp_hf5b457eb__0) 
                                      & ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                          >> 2U) & 
                                         ((((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                             >> 6U) 
                                            & (3U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))) 
                                           | ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                               >> 3U) 
                                              & (0U 
                                                 == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)))) 
                                          & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                 >> 0xdU)) 
                                             & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)) 
                                                & ((0U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                        >> 7U)))
                                                    ? 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                                                    == vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                         >> 7U)))
                                                     ? 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                     >= vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q)
                                                     : 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                     < vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__id_valid = (IData)(
                                                           ((0U 
                                                             == 
                                                             (0x84000U 
                                                              & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                                            & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                >> 7U) 
                                                               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__multi_op_id_stall))));
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
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                  >> 3U)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__20(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__20\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_valid = 
        (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
           >> 0x1fU) | (1U & (((0U != (0x600U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])) 
                               | (0U != (0x8080U & 
                                         vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]))) 
                              | (((((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                     >> 0x16U) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid)) 
                                   | ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                       >> 0x12U) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid))) 
                                  | ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                      >> 0xcU) & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgTmp_h3c034895__0) 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex)))) 
                                 | (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                      >> 0x1eU) | (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x82c000U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])) 
                                                           | (0U 
                                                              != 
                                                              ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                                                << 2U) 
                                                               | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                                                  >> 0x1eU)))))) 
                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                       >> 6U)))))) 
         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__23(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__23\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q) 
            > ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                >> 0x18U) & (3U | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                    << 5U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 4U) 
                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                    << 2U))))))) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en) 
              & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy) 
                 & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)) 
                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_valid = 
        (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert) 
          | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid)) 
         & (IData)((0U == (0x108000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]))));
    vlSelf->__VdfgTmp_hbd0ad740__0 = ((0x63U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode))
                                       ? (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                            ? 0U : 1U) 
                                          << 1U) : 0U);
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__24(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__24\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_ex 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
            >> 0x1fU) ? vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result
            : ((0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])
                ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)
                : ((0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])
                    ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                        ? (- vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                        : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                    : ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U])
                        ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                        : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__25(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__25\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 0U;
            }
        } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
                = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                    & (0U != (0x3fU & ((IData)(0x20U) 
                                       - (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result)))))
                    ? 2U : 3U);
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 1U;
    }
    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = 0U;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__26(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__26\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0 
        = (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex)) 
            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgTmp_h3c034895__0)) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex));
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

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__27(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__27\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0 
        = (1U & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                  & ((vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                      >> 2U) & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_valid) 
                                 & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_wb) 
                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                       >> 3U))) | (
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                                    >> 5U) 
                                                   | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0))))) 
                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__28(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__28\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        (0xfdffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        (0xfffbU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        (0xfe7fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        (0xfff7U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        (0xfffeU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    if ((1U & (IData)((((0U != (0x63000000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])) 
                        | (0U != (0x41U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U]))) 
                       | (0U != ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                  << 0x1dU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U] 
                                               >> 3U))))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
            = (4U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    }
    if (((((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
            >> 0xcU) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex)) 
          & (0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) 
         | (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex)) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb)) 
            & (0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
            = (0x200U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        ((0xfbffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)) 
         | ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id) 
              << 0xaU) & ((((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_wb)) 
                            << 0xaU) | (0x7ffc00U & 
                                        ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                                          << 0xaU) 
                                         & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                             << 6U) 
                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 9U))))) 
                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) 
                              & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hbd94c080__0) 
                                 & (0U != (0x1fU & 
                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                            >> 0x16U))))) 
                             << 0xaU))) & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id) 
                                               & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id) 
                                                  & (IData)(
                                                            ((0xa0000000U 
                                                              == 
                                                              (0xa0000000U 
                                                               & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) 
                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h2fa28643__0)))))) 
                                           << 0xaU)));
    if ((1U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id) 
                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfi_insn_id) 
                    | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfe_insn_id) 
                       | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                          >> 0x17U))) & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                         >> 7U))) & 
               ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id) 
                    & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id) 
                       & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h417d913a__0) 
                              & (IData)((0x42U == (0x42U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]))))) 
                          & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h417d913a__0) 
                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h2fa28643__0)) 
                             | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h3ecfe561__0) 
                                & (IData)((0x20000U 
                                           == (0x20004U 
                                               & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]))))))))) 
                & (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                     >> 6U) & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                >> 0xfU) | ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                             >> 6U) 
                                            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h417d913a__0) 
                                               | ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                   >> 0xaU) 
                                                  | ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                      >> 9U) 
                                                     | ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                         >> 0xfU) 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz 
                                                           >> 0x1aU)))))))) 
                   | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb)))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
            = (0x100U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    }
    if (((((vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz 
            >> 0x1bU) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb)) 
          | (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
               >> 0xfU) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                           >> 6U)) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb))) 
         | (IData)(((0x3000000U == (0x3000000U & vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz)) 
                    & ((0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz 
                                  >> 0xcU)) == (0xfffU 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz)))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
            = (0x80U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    }
    if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read) 
         & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            >> 0x11U))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
            = (8U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    }
    if ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we) 
          | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we) 
             | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we))) 
         & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
             >> 6U) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                       >> 0xcU)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
            = (1U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_id 
        = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                 | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                    >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0xeU))));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                    >> 5U)) & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                                                       >> 0x17U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                    >> 5U)) & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                                                       >> 0x1bU)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__csr_en 
        = (1U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                     >> 2U)) & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                    >> 5U)) & (IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                       >> 0x11U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we 
        = (1U & ((~ (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                      >> 2U) | ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                    >> 1U)) & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                               >> 0x17U)))) 
                 & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                            >> 0x12U))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__29(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__29\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__id_ready = 
        (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                >> 0xeU) | ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__multi_op_id_stall)) 
                            & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                   >> 0x13U)) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready)))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__32(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__32\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0)))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0)))) {
                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0)))) {
                            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h72df47b6__0)))) {
                                    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set 
                                            = (1U & 
                                               (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_busy)));
                                        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
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
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__34(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__34\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_ready));
    vlSelf->__VdfgTmp_he3376dba__0 = ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                          >> 0x14U)) 
                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__35(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__35\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 0U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0)))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0)))) {
                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0)))) {
                            if ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid)) 
                                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__36(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__36\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_id 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready) 
              & ((IData)(vlSelf->__VdfgTmp_hd874cca6__0) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o 
        = (((~ (IData)((0U != VL_SHIFTL_III(32,32,32, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q, 1U)))) 
            & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we)) 
               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_id))) 
           | ((~ (IData)((0U != vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o 
        = (((~ (IData)((0U != VL_SHIFTL_III(32,32,32, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q, 1U)))) 
            & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we)) 
               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_id))) 
           | ((~ (IData)((0U != vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__37(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__37\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 0U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0)))) {
                if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 3U;
                } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                            = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                ? 2U : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9cc9d2cc__0)
                                         ? 1U : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hb2988707__0)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_he3dfd21d__0)
                                                   ? 1U
                                                   : 0U))));
                    }
                }
            }
            if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0) {
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                    = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb)
                        ? 2U : 4U);
            }
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq) {
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 3U;
            }
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__38(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__38\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw 
        = ((0x8000U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
            ? ((0x4000U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
                ? ((vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[3U] 
                    << 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[2U] 
                                 >> 1U)) : vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_wb)
            : ((0x4000U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
                ? vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_ex
                : vlSelf->CSoC_top__DOT__u_core__DOT__rf_rdata_id
               [0U]));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw 
        = ((0x2000U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
            ? ((0x1000U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
                ? ((vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[4U] 
                    << 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[3U] 
                                 >> 1U)) : vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_wb)
            : ((0x1000U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp))
                ? vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_ex
                : vlSelf->CSoC_top__DOT__u_core__DOT__rf_rdata_id
               [1U]));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__39(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__39\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____VdfgTmp_h3d6eff21__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_valid) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_ready));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__41(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__41\n"); );
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
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp = 0U;
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
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
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

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__43(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__43\n"); );
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
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid 
        = (((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr)) 
            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
              & (IData)((0U == (0x108000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
        = ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])
            ? 0U : (7U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                           + (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                          - ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                              ? 1U : 0U))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__44(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__44\n"); );
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

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__45(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__45\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)))) {
        if ((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xaU))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                   | ((QData)((IData)(((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x19U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x18U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0
                                                : (0x842023U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x1aU)) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x16U)) 
                                                             << 0x19U)) 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | ((0xc00U 
                                                                   & ((IData)(
                                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x14U)) 
                                                                      << 0xaU)) 
                                                                  | (0x200U 
                                                                     & ((IData)(
                                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x10U)) 
                                                                        << 9U)))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x16U)))
                                                    ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h3675cb66__0
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x14U)))
                                                      ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h3675cb66__0
                                                      : 
                                                     (0x840023U 
                                                      | ((0x700000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xcU)) 
                                                             << 0x14U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x11U)) 
                                                                << 0xfU)) 
                                                            | ((0x100U 
                                                                & ((IData)(
                                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xfU)) 
                                                                   << 8U)) 
                                                               | (0x80U 
                                                                  & ((IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x10U)) 
                                                                     << 7U)))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x14U)))
                                                      ? 
                                                     (0x41403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x15U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x11U)) 
                                                                << 0xfU)) 
                                                            | ((0x4000U 
                                                                & ((~ (IData)(
                                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x10U))) 
                                                                   << 0xeU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U))))))
                                                      : 
                                                     (0x44403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x15U)) 
                                                         | ((0x100000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0x10U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))))))
                                        : ((1U & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x18U)))
                                            ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0
                                                : (0x10413U 
                                                   | ((0x3c000000U 
                                                       & ((IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x11U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3000000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x15U)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xfU)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((IData)(
                                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x10U)) 
                                                                   << 0x16U)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 7U)))))))))))) 
                      << 0xaU));
        } else if ((1U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xaU))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                   | ((QData)((IData)(((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x19U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x18U)))
                                            ? (0x40063U 
                                               | (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x16U))))) 
                                                   << 0x1cU) 
                                                  | ((0xc000000U 
                                                      & ((IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xfU)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xcU)) 
                                                            << 0x19U)) 
                                                        | ((0x38000U 
                                                            & ((IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x11U)) 
                                                               << 0xfU)) 
                                                           | ((0x1000U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x17U)) 
                                                                  << 0xcU)) 
                                                              | ((0xc00U 
                                                                  & ((IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x14U)) 
                                                                     << 0xaU)) 
                                                                 | ((0x300U 
                                                                     & ((IData)(
                                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xdU)) 
                                                                        << 8U)) 
                                                                    | (0x80U 
                                                                       & ((IData)(
                                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U)) 
                                                                          << 7U))))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x15U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x14U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x16U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x10U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xeU)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xdU)))
                                                          ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xcU)))
                                                           ? 
                                                          (0xfff44413U 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x11U)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U))))
                                                           : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0))
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xdU)))
                                                          ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xcU)))
                                                           ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0
                                                           : 
                                                          (0xff40000U 
                                                           | vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h762ac385__0))))
                                                        : 
                                                       (0x2800000U 
                                                        | vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h732e1d9f__0))
                                                       : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x10U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)))
                                                        ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0
                                                        : 
                                                       (0x846433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x11U)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)))
                                                        ? 
                                                       (0x844433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xcU)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x11U)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0x11U)) 
                                                                    << 7U)))))
                                                        : 
                                                       (0x40800000U 
                                                        | vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h732e1d9f__0))))
                                                     : 
                                                    (0x40000U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                         << 0x1aU) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x16U)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xcU)) 
                                                                  << 0x14U)) 
                                                              | vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h762ac385__0)))))
                                                    : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hef8eb534__0)))
                                        : ((1U & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x18U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0)
                                                    ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x11U))))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x16U))))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & ((IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xdU)) 
                                                               << 0x1bU)) 
                                                           | ((0x4000000U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xfU)) 
                                                                  << 0x1aU)) 
                                                              | ((0x2000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xcU)) 
                                                                     << 0x19U)) 
                                                                 | (0x1000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x10U)) 
                                                                       << 0x18U)))))))
                                                     : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0))
                                                : (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x16U))))) 
                                                       << 0x1aU) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x16U)) 
                                                             << 0x19U)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | (0xf80U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x11U)) 
                                                                  << 7U)))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0
                                                : (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x16U))))) 
                                                       << 0x1aU) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x16U)) 
                                                             << 0x19U)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | ((0xf8000U 
                                                                & ((IData)(
                                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0x11U)) 
                                                                   << 0xfU)) 
                                                               | (0xf80U 
                                                                  & ((IData)(
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0x11U)) 
                                                                     << 7U)))))))))))) 
                      << 0xaU));
        } else if ((2U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xaU))))) {
            if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x19U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(((1U & (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x18U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0
                                                : (0x12023U 
                                                   | ((0xc000000U 
                                                       & ((IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0x11U)) 
                                                          << 0x1aU)) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0x16U)) 
                                                             << 0x19U)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xcU)) 
                                                                << 0x14U)) 
                                                            | (0xe00U 
                                                               & ((IData)(
                                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x13U)) 
                                                                  << 9U)))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x17U)))
                                                ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xcU))))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x11U))))
                                                      ? 0x100073U
                                                      : 
                                                     (0xe7U 
                                                      | (0xf8000U 
                                                         & ((IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0x11U)) 
                                                            << 0xfU))))
                                                     : 
                                                    (0x33U 
                                                     | ((0x1f00000U 
                                                         & ((IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xcU)) 
                                                            << 0x14U)) 
                                                        | ((0xf8000U 
                                                            & ((IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0x11U)) 
                                                               << 0xfU)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0x11U)) 
                                                                 << 7U))))))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xcU))))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x11U))))
                                                      ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb3e049f6__0
                                                      : 
                                                     (0x67U 
                                                      | (0xf8000U 
                                                         & ((IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0x11U)) 
                                                            << 0xfU))))
                                                     : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb3e049f6__0)))))) 
                          << 0xaU));
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x18U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0)) 
                          << 0xaU));
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x17U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0)) 
                          << 0xaU));
            } else if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x16U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0)) 
                          << 0xaU));
            } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hcbe081e8__0) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0)) 
                          << 0xaU));
                if (((0U != (0x1fU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xcU)))) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[0U] 
                        >> 3U))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                           | ((QData)((IData)((((IData)(vlSelf->__VdfgTmp_hc0917257__0) 
                                                << 0x19U) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                      << 4U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                         << 7U)) 
                                                     | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->__VdfgTmp_hbd0ad740__0) 
                                                            << 7U) 
                                                           | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode)))))))) 
                              << 0xaU));
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0)) 
                          << 0xaU));
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                   | ((QData)((IData)((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xaU)))) 
                      << 0xaU));
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert) 
               << 6U) | (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)) 
                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_hint)) 
                         << 5U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x61U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | ((0x10U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                        >> 0x16U)) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                       << 3U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q) 
                                                  << 2U) 
                                                 | (2U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                                       >> 0x16U))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x7eU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                    >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_if 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)) 
                 & (IData)(((0ULL != (0x20bULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed)) 
                            | (IData)(vlSelf->__VdfgTmp_hdc70427a__0)))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__46(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__46\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_if 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____VdfgTmp_h3d6eff21__0) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert) 
              | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_hint)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o 
        = (((~ (IData)((0U != VL_SHIFTL_III(32,32,32, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q, 1U)))) 
            & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we)) 
               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_if))) 
           | ((~ (IData)((0U != vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__48(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__48\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 0U;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 1U;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 0U;
    if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
    } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                    = (0x2019c00ULL | (0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                    = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                       & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                             >> 0x14U)));
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
            } else {
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                    = (0x144c00ULL | (0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 7U;
            }
        } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                        ? (0x10113U 
                                           | ((IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 0x11U)) 
                                              << 0x14U))
                                        : (0x10113U 
                                           | ((- (IData)(
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                          >> 0x11U))) 
                                              << 0x14U))))) 
                      << 0xaU));
            if ((4U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 6U;
            } else if ((3U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 7U;
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                    = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                       & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                             >> 0x14U)));
                CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
            }
        } else {
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                        ? (0x12083U 
                                           | ((IData)(
                                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 5U)) 
                                              << 0x14U))
                                        : (0x112023U 
                                           | (((IData)(
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 0xaU)) 
                                               << 0x19U) 
                                              | (0xf80U 
                                                 & ((IData)(
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 5U)) 
                                                    << 7U))))))) 
                      << 0xaU));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 5U;
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s)
                                        ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_he045e39f__0
                                        : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_haa2f2ddc__0))) 
                      << 0xaU));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy) 
                   & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                         >> 0x14U)));
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
        } else {
            CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            VL_ASSIGNSEL_QI(42,32,0xaU, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0x12003U | (((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                   >> 5U)) 
                                          << 0x14U) 
                                         | (([&]() {
                                    vlSelf->__Vfunc_sn_to_regnum__2__snum 
                                        = (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelf->__Vfunc_sn_to_regnum__2__Vfuncout 
                                        = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum)) 
                                            || (1U 
                                                == (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum))));
                                }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__2__Vfuncout)) 
                                            << 7U))));
            if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
                 == ((0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                      >> 0x1dU))) - (IData)(1U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
            }
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        VL_ASSIGNSEL_QI(42,32,0xaU, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                        (0x12023U | (((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                               >> 0xaU)) 
                                      << 0x19U) | (
                                                   (([&]() {
                                    vlSelf->__Vfunc_sn_to_regnum__3__snum 
                                        = (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelf->__Vfunc_sn_to_regnum__3__Vfuncout 
                                        = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum)) 
                                            || (1U 
                                                == (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum))));
                                }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__3__Vfuncout)) 
                                                    << 0x14U) 
                                                   | (0xf80U 
                                                      & ((IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                  >> 5U)) 
                                                         << 7U))))));
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
             == ((0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                  >> 0x1dU))) - (IData)(1U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        }
    } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
        if ((1U == (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                    >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(42,32,0xaU, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0x12003U | (((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                   >> 5U)) 
                                          << 0x14U) 
                                         | (([&]() {
                                    vlSelf->__Vfunc_sn_to_regnum__4__snum 
                                        = (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout 
                                        = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum)) 
                                            || (1U 
                                                == (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum))));
                                }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout)) 
                                            << 7U))));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        } else if ((1U < (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                          >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(42,32,0xaU, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0x12003U | (((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                   >> 5U)) 
                                          << 0x14U) 
                                         | (([&]() {
                                    vlSelf->__Vfunc_sn_to_regnum__5__snum 
                                        = (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout 
                                        = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum)) 
                                            || (1U 
                                                == (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum))));
                                }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout)) 
                                            << 7U))));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 2U;
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x12083U | ((IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                            >> 5U)) 
                                                   << 0x14U)))) 
                      << 0xaU));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 5U;
        }
    } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
        if ((1U == (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                    >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(42,32,0xaU, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0xfe012e23U | (([&]() {
                                vlSelf->__Vfunc_sn_to_regnum__6__snum 
                                    = (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout 
                                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum)) 
                                        || (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum)))
                                        ? (8U | (((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum) 
                                                       >> 1U))) 
                                                  << 4U) 
                                                 | (7U 
                                                    & (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum))))
                                        : (((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum) 
                                               >> 1U))) 
                                            << 4U) 
                                           | (0xfU 
                                              & (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum))));
                            }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout)) 
                                            << 0x14U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        } else if ((1U < (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                          >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(42,32,0xaU, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0xfe012e23U | (([&]() {
                                vlSelf->__Vfunc_sn_to_regnum__7__snum 
                                    = (0x1fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout 
                                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum)) 
                                        || (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum)))
                                        ? (8U | (((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum) 
                                                       >> 1U))) 
                                                  << 4U) 
                                                 | (7U 
                                                    & (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum))))
                                        : (((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum) 
                                               >> 1U))) 
                                            << 4U) 
                                           | (0xfU 
                                              & (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum))));
                            }(), (IData)(vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout)) 
                                            << 0x14U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 1U;
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = (0x3f844b88c00ULL | (0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 5U;
        }
    } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
            = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
               | ((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h7f7d95b2__0)) 
                  << 0xaU));
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
    } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
            = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
               | ((QData)((IData)(((0U == (7U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0x11U))))
                                    ? (0x6fU | (0x1f000U 
                                                & ((IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xcU)) 
                                                   << 0xcU)))
                                    : (0xefU | (0xff000U 
                                                & ((IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xcU)) 
                                                   << 0xcU)))))) 
                  << 0xaU));
        CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
            = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy) 
               & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                     >> 0x14U)));
    } else if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
            = ((0x3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
               | ((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h0996abde__0)) 
                  << 0xaU));
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
    }
    if ((1U & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)) 
                & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                      >> 0x14U))) | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                     >> 0xfU)))) {
        CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_last 
        = ((IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm) 
           | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xfU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)
                                ? ((IData)(vlSelf->__VdfgTmp_he3376dba__0) 
                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                      >> 0xfU)) : (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm)) 
                              & (IData)(vlSelf->__VdfgTmp_he3376dba__0))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy 
        = (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)
                  ? ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                     & (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))
                  : (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q))));
    vlSelf->CSoC_top__DOT__u_core__DOT__last_op_if 
        = (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert) 
                 | ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)) 
                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_last))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int;
    if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready))) {
        if ((1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    >> 1U) | ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                  >> 1U)) & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h199e55be__0 = 0U;
            if ((2U >= (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n)) 
                       | (7U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h199e55be__0) 
                                << (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))));
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert) 
           | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__49(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__49\n"); );
    // Init
    IData/*31:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0;
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                         >> 0x10U)))) 
               & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlSelf->CSoC_top__DOT__dm_device_req) {
        if (vlSelf->CSoC_top__DOT__dm_device_we) {
            if ((0x100U != (0xfffU & vlSelf->CSoC_top__DOT__dm_device_addr))) {
                if ((0x108U != (0xfffU & vlSelf->CSoC_top__DOT__dm_device_addr))) {
                    if ((0x110U == (0xfffU & vlSelf->CSoC_top__DOT__dm_device_addr))) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                            = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelf->CSoC_top__DOT__device_wdata
                                            [6U]))));
                    }
                }
            }
        }
    }
    if ((2U & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = 0U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0xffffffffULL << (0x3fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                              >> 0x22U))), 5U)))) 
                            & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
                              << (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                    >> 0x22U))), 5U))));
                }
            }
        }
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__data_valid) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__data_mem_csrs;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x100000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))))) {
                if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x16U != (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            if ((0x18U != (0x7fU & (IData)(
                                                           (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U))))) {
                                    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                                        if ((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
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
    if ((((IData)(vlSelf->CSoC_top__DOT__dmi_req_valid) 
          & (0x200000000ULL == (0x300000000ULL & vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q))) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                            >> 0x22U)))))) {
                if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                }
            } else if ((0x10U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U))))) {
                if ((0x11U != (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x22U))))) {
                    if ((0x12U != (0x7fU & (IData)(
                                                   (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                    >> 0x22U))))) {
                        if ((0x16U == (0x7fU & (IData)(
                                                       (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U))))) {
                            CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                = (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q);
                            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            } else {
                                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                    = ((~ (CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                           >> 8U)) 
                                       & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                            }
                        } else if ((0x17U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            }
                        } else if ((0x18U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                         >> 0x22U))))) {
                            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                                if ((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                }
                            }
                        } else if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy) {
                            if ((0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmderror_valid) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmderror;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__50(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__50\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued = 0;
    // Body
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____VdfgTmp_h3d6eff21__0) 
           & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)) 
              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_next 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q;
    if ((1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en)) 
               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert) 
                   & (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued)) 
                  | (IData)(vlSelf->__VdfgTmp_h1a660b63__0))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_next = 0U;
    } else if (CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__instr_issued) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_next 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q)));
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__1(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vdly__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    if (vlSelf->dtm_trst_ni) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        __Vdly__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d;
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q 
                = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q 
                = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
    } else {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        __Vdly__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = 1U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = 1U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 1U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 
        = ((IData)(vlSelf->dtm_trst_ni) && (1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                                                  >> 2U)));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelf->dtm_trst_ni))) 
           || (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelf->dtm_trst_ni))) 
           || (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = __Vdly__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__4(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tck_n 
        = (1U & (~ (IData)(vlSelf->dtm_tck_i)));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__5(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__6(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->dtm_tdo_oe_o = ((IData)(vlSelf->dtm_trst_ni) 
                            && ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
                                | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr)));
    vlSelf->dtm_td_o = ((IData)(vlSelf->dtm_trst_ni) 
                        && (1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                   ? (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                   : ((1U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                       ? vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                       : ((0x10U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                           ? vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q
                                           : ((0x11U 
                                               == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                               ? (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q)
                                               : (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_q)))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__7(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
               >> 0x1fU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x1eU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x1dU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x1cU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x1bU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x1aU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x19U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x18U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x15U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x14U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x13U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x12U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0x10U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0xfU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0xeU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0xdU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0xcU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0xbU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 0xaU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 9U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 8U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 6U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 5U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 4U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 3U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 2U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
            << 0x1fU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1eU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__8(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_n 
                     >> 2U)));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__9(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
               >> 0x1fU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x1eU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x1dU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x1cU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x1bU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x1aU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x19U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x18U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x15U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x14U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x13U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x12U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0x10U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0xfU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0xeU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0xdU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0xcU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0xbU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 0xaU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 9U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 8U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 6U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 5U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 4U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 3U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 2U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__mepc = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                          << 0x1cU) 
                                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                             << 0x1bU) 
                                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                << 0x1aU) 
                                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                         << 0x17U) 
                                                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                            << 0x16U) 
                                                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                               << 0x15U) 
                                                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U)))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__10(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
               >> 0x1fU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x1eU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x1dU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x1cU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x1bU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x1aU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x19U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x18U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x15U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x14U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x13U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x12U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0x10U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0xfU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0xeU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0xdU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0xcU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0xbU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 0xaU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 9U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 8U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
                     >> 6U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_rdata 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
            << 0x1fU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1eU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__11(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 0xfU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 0xcU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 0xbU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 8U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 6U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 2U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 0xaU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h20ed6652__0 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
            << 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__gen_debug_csr__DOT__dcsr_csr_i__rd_data_o 
        = (0x40000010U | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                           << 0xfU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0xbU) | 
                                        (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                             << 8U) 
                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                << 7U) 
                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h20ed6652__0))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__12(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
               >> 0x1fU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x1eU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x1dU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x1cU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x1bU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x1aU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x19U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x18U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x15U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x14U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x13U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x12U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0x10U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0xfU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0xeU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0xdU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0xcU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0xbU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 0xaU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 9U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 8U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__mtvec_addr 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
            << 0x18U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x17U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0xfU) 
                                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 9U) 
                                                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)))))))))))))))))))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
            << 0x1fU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x1eU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__13(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                     >> 0x15U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                     >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                     >> 0xcU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                     >> 0xbU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                     >> 3U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
            << 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
    vlSelf->CSoC_top__DOT__u_core__DOT__mstatus = (
                                                   ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                    << 0x15U) 
                                                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                << 7U) 
                                                               | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                  << 3U))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__14(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
               >> 0x1fU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 0xaU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 9U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 8U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 6U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 5U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 4U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 3U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 2U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__mcause = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__15(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q 
        = vlSelf->CSoC_top__DOT__rst_core_n;
    vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(((((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                         | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid)) 
                        | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                           >> 3U)) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_busy))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__32(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__32\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i));
    vlSelf->__VdfgTmp_h7d22ad46__0 = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                       << 2U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__49(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__49\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 2U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 3U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 0x13U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 0x12U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 0x10U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
                     >> 4U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_rdata 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
            << 0x13U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                          << 0x12U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                        << 0x11U) | 
                                       (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                                               << 3U) 
                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o)))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__50(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__50\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (IData)(vlSelf->CSoC_top__DOT__u_secure_ctrl__DOT__security_level));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__51(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__51\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n) 
                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o 
        = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n))) 
           || (1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n)));
    vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl = 
        (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
          << 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__52(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__52\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
               >> 0x1fU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x1eU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x1dU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x1cU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x1bU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x1aU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x19U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x18U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x15U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x14U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x13U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x12U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0x10U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 0xbU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 7U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                     >> 3U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__mie = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                << 0x1fU) 
                                               | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                         << 0x1cU) 
                                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                            << 0x1bU) 
                                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                  << 0x19U) 
                                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                     << 0x18U) 
                                                                    | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                              << 0x15U) 
                                                                             | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                                                << 3U)))))))))))))))))));
}

extern const VlUnpacked<CData/*3:0*/, 128> VCSoC_top__ConstPool__TABLE_h752feedc_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h3d438b21_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h3d7e6b5c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_hdcf5e0b8_0;
extern const VlUnpacked<CData/*1:0*/, 128> VCSoC_top__ConstPool__TABLE_h5a82a902_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__0(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    __Vtableidx20 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = VCSoC_top__ConstPool__TABLE_h752feedc_0[__Vtableidx20];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = VCSoC_top__ConstPool__TABLE_h3d438b21_0[__Vtableidx20];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = VCSoC_top__ConstPool__TABLE_h3d7e6b5c_0[__Vtableidx20];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = VCSoC_top__ConstPool__TABLE_hdcf5e0b8_0[__Vtableidx20];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = VCSoC_top__ConstPool__TABLE_h5a82a902_0[__Vtableidx20];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__1(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    __Vtableidx16 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = VCSoC_top__ConstPool__TABLE_h752feedc_0[__Vtableidx16];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = VCSoC_top__ConstPool__TABLE_h3d438b21_0[__Vtableidx16];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = VCSoC_top__ConstPool__TABLE_h3d7e6b5c_0[__Vtableidx16];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = VCSoC_top__ConstPool__TABLE_hdcf5e0b8_0[__Vtableidx16];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = VCSoC_top__ConstPool__TABLE_h5a82a902_0[__Vtableidx16];
}

extern const VlUnpacked<CData/*1:0*/, 16> VCSoC_top__ConstPool__TABLE_h794efc0c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VCSoC_top__ConstPool__TABLE_h2ed44cc5_0;
extern const VlUnpacked<CData/*0:0*/, 16> VCSoC_top__ConstPool__TABLE_hc22c295c_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__2(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h794efc0c_0[__Vtableidx15];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = VCSoC_top__ConstPool__TABLE_h2ed44cc5_0[__Vtableidx15];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = VCSoC_top__ConstPool__TABLE_hc22c295c_0[__Vtableidx15];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__3(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*3:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    __Vtableidx27 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h794efc0c_0[__Vtableidx27];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = VCSoC_top__ConstPool__TABLE_h2ed44cc5_0[__Vtableidx27];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = VCSoC_top__ConstPool__TABLE_hc22c295c_0[__Vtableidx27];
}

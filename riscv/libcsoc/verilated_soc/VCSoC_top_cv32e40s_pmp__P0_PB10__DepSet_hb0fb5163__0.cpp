// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top_cv32e40s_pmp__P0_PB10.h"

VL_INLINE_OPT void VCSoC_top_cv32e40s_pmp__P0_PB10___act_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__0(VCSoC_top_cv32e40s_pmp__P0_PB10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_pmp__P0_PB10___act_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__region_match_gt;
    __PVT__region_match_gt = 0;
    SData/*15:0*/ __PVT__region_match_lt;
    __PVT__region_match_lt = 0;
    SData/*15:0*/ __PVT__region_match_eq;
    __PVT__region_match_eq = 0;
    // Body
    __PVT__region_match_lt = ((((IData)(((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                         >> 2U)) < 
                                vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U]) 
                               << 0xfU) | ((((IData)(
                                                     ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                      >> 2U)) 
                                             < ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                   >> 0x1eU))) 
                                            << 0xeU) 
                                           | ((((IData)(
                                                        ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                         >> 2U)) 
                                                < (
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                      >> 0x1cU))) 
                                               << 0xdU) 
                                              | ((((IData)(
                                                           ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                            >> 2U)) 
                                                   < 
                                                   ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                     << 6U) 
                                                    | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                       >> 0x1aU))) 
                                                  << 0xcU) 
                                                 | ((((IData)(
                                                              ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                               >> 2U)) 
                                                      < 
                                                      ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                          >> 0x18U))) 
                                                     << 0xbU) 
                                                    | ((((IData)(
                                                                 ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                  >> 2U)) 
                                                         < 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                           << 0xaU) 
                                                          | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                             >> 0x16U))) 
                                                        << 0xaU) 
                                                       | ((((IData)(
                                                                    ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                     >> 2U)) 
                                                            < 
                                                            ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                              << 0xcU) 
                                                             | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                >> 0x14U))) 
                                                           << 9U) 
                                                          | ((((IData)(
                                                                       ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                        >> 2U)) 
                                                               < 
                                                               ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                 << 0xeU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                   >> 0x12U))) 
                                                              << 8U) 
                                                             | ((((IData)(
                                                                          ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                           >> 2U)) 
                                                                  < 
                                                                  ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                    << 0x10U) 
                                                                   | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                      >> 0x10U))) 
                                                                 << 7U) 
                                                                | ((((IData)(
                                                                             ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                              >> 2U)) 
                                                                     < 
                                                                     ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                       << 0x12U) 
                                                                      | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                         >> 0xeU))) 
                                                                    << 6U) 
                                                                   | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                        < 
                                                                        ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                          << 0x14U) 
                                                                         | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                            >> 0xcU))) 
                                                                       << 5U) 
                                                                      | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                           < 
                                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                             << 0x16U) 
                                                                            | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                               >> 0xaU))) 
                                                                          << 4U) 
                                                                         | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                              < 
                                                                              ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                << 0x18U) 
                                                                               | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))) 
                                                                             << 3U) 
                                                                            | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                < 
                                                                                ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))) 
                                                                                << 2U) 
                                                                               | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                < 
                                                                                ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))) 
                                                                                << 1U) 
                                                                                | ((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                < 
                                                                                ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                << 0x1eU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))))))))))))));
    __PVT__region_match_gt = ((((IData)(((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                         >> 2U)) > vlSelf->__VdfgTmp_hc5f5801f__0) 
                               << 0xfU) | ((((IData)(
                                                     ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                      >> 2U)) 
                                             > vlSelf->__VdfgTmp_h20c39b22__0) 
                                            << 0xeU) 
                                           | ((((IData)(
                                                        ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                         >> 2U)) 
                                                > vlSelf->__VdfgTmp_h5ee5889e__0) 
                                               << 0xdU) 
                                              | ((((IData)(
                                                           ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                            >> 2U)) 
                                                   > vlSelf->__VdfgTmp_h39af6969__0) 
                                                  << 0xcU) 
                                                 | ((((IData)(
                                                              ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                               >> 2U)) 
                                                      > vlSelf->__VdfgTmp_h88b1d18d__0) 
                                                     << 0xbU) 
                                                    | ((((IData)(
                                                                 ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                  >> 2U)) 
                                                         > vlSelf->__VdfgTmp_h46eed216__0) 
                                                        << 0xaU) 
                                                       | ((((IData)(
                                                                    ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                     >> 2U)) 
                                                            > vlSelf->__VdfgTmp_hc7521f3e__0) 
                                                           << 9U) 
                                                          | ((((IData)(
                                                                       ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                        >> 2U)) 
                                                               > vlSelf->__VdfgTmp_h21170832__0) 
                                                              << 8U) 
                                                             | ((((IData)(
                                                                          ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                           >> 2U)) 
                                                                  > vlSelf->__VdfgTmp_h9c079945__0) 
                                                                 << 7U) 
                                                                | ((((IData)(
                                                                             ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                              >> 2U)) 
                                                                     > vlSelf->__VdfgTmp_h3d093ef8__0) 
                                                                    << 6U) 
                                                                   | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                        > vlSelf->__VdfgTmp_h022b9d1b__0) 
                                                                       << 5U) 
                                                                      | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                           > vlSelf->__VdfgTmp_h548998df__0) 
                                                                          << 4U) 
                                                                         | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                              > vlSelf->__VdfgTmp_h1411aa6b__0) 
                                                                             << 3U) 
                                                                            | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                > vlSelf->__VdfgTmp_hbbb3ff22__0) 
                                                                                << 2U) 
                                                                               | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                > vlSelf->__VdfgTmp_h29ced6b7__0) 
                                                                                << 1U) 
                                                                                | ((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                > vlSelf->__VdfgTmp_h9507a9ab__0))))))))))))))));
    __PVT__region_match_eq = (((((IData)(((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                          >> 2U)) & vlSelf->__VdfgTmp_hdfddb7f1__0) 
                                == (vlSelf->__VdfgTmp_hc5f5801f__0 
                                    & vlSelf->__VdfgTmp_hdfddb7f1__0)) 
                               << 0xfU) | (((((IData)(
                                                      ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                       >> 2U)) 
                                              & vlSelf->__VdfgTmp_h80dc378a__0) 
                                             == (vlSelf->__VdfgTmp_h20c39b22__0 
                                                 & vlSelf->__VdfgTmp_h80dc378a__0)) 
                                            << 0xeU) 
                                           | (((((IData)(
                                                         ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                          >> 2U)) 
                                                 & vlSelf->__VdfgTmp_h5173a24b__0) 
                                                == 
                                                (vlSelf->__VdfgTmp_h5ee5889e__0 
                                                 & vlSelf->__VdfgTmp_h5173a24b__0)) 
                                               << 0xdU) 
                                              | (((((IData)(
                                                            ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                             >> 2U)) 
                                                    & vlSelf->__VdfgTmp_h32cd929a__0) 
                                                   == 
                                                   (vlSelf->__VdfgTmp_h39af6969__0 
                                                    & vlSelf->__VdfgTmp_h32cd929a__0)) 
                                                  << 0xcU) 
                                                 | (((((IData)(
                                                               ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                >> 2U)) 
                                                       & vlSelf->__VdfgTmp_h19935004__0) 
                                                      == 
                                                      (vlSelf->__VdfgTmp_h88b1d18d__0 
                                                       & vlSelf->__VdfgTmp_h19935004__0)) 
                                                     << 0xbU) 
                                                    | (((((IData)(
                                                                  ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                   >> 2U)) 
                                                          & vlSelf->__VdfgTmp_h47e7bb97__0) 
                                                         == 
                                                         (vlSelf->__VdfgTmp_h46eed216__0 
                                                          & vlSelf->__VdfgTmp_h47e7bb97__0)) 
                                                        << 0xaU) 
                                                       | (((((IData)(
                                                                     ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                      >> 2U)) 
                                                             & vlSelf->__VdfgTmp_hd1071dc7__0) 
                                                            == 
                                                            (vlSelf->__VdfgTmp_hc7521f3e__0 
                                                             & vlSelf->__VdfgTmp_hd1071dc7__0)) 
                                                           << 9U) 
                                                          | (((((IData)(
                                                                        ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                         >> 2U)) 
                                                                & vlSelf->__VdfgTmp_h0ab821ce__0) 
                                                               == 
                                                               (vlSelf->__VdfgTmp_h21170832__0 
                                                                & vlSelf->__VdfgTmp_h0ab821ce__0)) 
                                                              << 8U) 
                                                             | (((((IData)(
                                                                           ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                            >> 2U)) 
                                                                   & vlSelf->__VdfgTmp_ha20284c8__0) 
                                                                  == 
                                                                  (vlSelf->__VdfgTmp_h9c079945__0 
                                                                   & vlSelf->__VdfgTmp_ha20284c8__0)) 
                                                                 << 7U) 
                                                                | (((((IData)(
                                                                              ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                               >> 2U)) 
                                                                      & vlSelf->__VdfgTmp_h4c552959__0) 
                                                                     == 
                                                                     (vlSelf->__VdfgTmp_h3d093ef8__0 
                                                                      & vlSelf->__VdfgTmp_h4c552959__0)) 
                                                                    << 6U) 
                                                                   | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                         & vlSelf->__VdfgTmp_h07c516e0__0) 
                                                                        == 
                                                                        (vlSelf->__VdfgTmp_h022b9d1b__0 
                                                                         & vlSelf->__VdfgTmp_h07c516e0__0)) 
                                                                       << 5U) 
                                                                      | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                            & vlSelf->__VdfgTmp_heb0ae4d2__0) 
                                                                           == 
                                                                           (vlSelf->__VdfgTmp_h548998df__0 
                                                                            & vlSelf->__VdfgTmp_heb0ae4d2__0)) 
                                                                          << 4U) 
                                                                         | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                               & vlSelf->__VdfgTmp_hcb6b3920__0) 
                                                                              == 
                                                                              (vlSelf->__VdfgTmp_h1411aa6b__0 
                                                                               & vlSelf->__VdfgTmp_hcb6b3920__0)) 
                                                                             << 3U) 
                                                                            | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                & vlSelf->__VdfgTmp_ha1b73c99__0) 
                                                                                == 
                                                                                (vlSelf->__VdfgTmp_hbbb3ff22__0 
                                                                                & vlSelf->__VdfgTmp_ha1b73c99__0)) 
                                                                                << 2U) 
                                                                               | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                & vlSelf->__VdfgTmp_h48688b71__0) 
                                                                                == 
                                                                                (vlSelf->__VdfgTmp_h29ced6b7__0 
                                                                                & vlSelf->__VdfgTmp_h48688b71__0)) 
                                                                                << 1U) 
                                                                                | (((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                & vlSelf->__VdfgTmp_h4df2fd54__0) 
                                                                                == 
                                                                                (vlSelf->__VdfgTmp_h9507a9ab__0 
                                                                                & vlSelf->__VdfgTmp_h4df2fd54__0)))))))))))))))));
    vlSelf->__PVT__region_mml_perm_check = (0xfffeU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfffeU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (1U & 
                                               ((1U 
                                                 & ((~ 
                                                     vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]) 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                       >> 1U)))
                                                 ? 
                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                 >> 7U)
                                                 : 
                                                ((1U 
                                                  & (~ (IData)(
                                                               (0x87U 
                                                                == 
                                                                (0x87U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                 && (1U 
                                                     & ((3U 
                                                         == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                         ? 
                                                        ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                          >> 7U) 
                                                         & (IData)(vlSelf->__PVT__region_basic_perm_check))
                                                         : 
                                                        ((~ 
                                                          (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 7U)) 
                                                         & (IData)(vlSelf->__PVT__region_basic_perm_check))))))));
    vlSelf->__PVT__region_mml_perm_check = (0xfffdU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfffdU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (2U & 
                                               (((IData)(
                                                         (0x200U 
                                                          == 
                                                          (0x300U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                  ? 
                                                 (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                  >> 0xfU)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(
                                                                (0x8700U 
                                                                 == 
                                                                 (0x8700U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                  && (1U 
                                                      & ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 0xfU) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 1U))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                            >> 0xfU)) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 1U)))))) 
                                                << 1U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfffbU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfffbU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (4U & 
                                               (((IData)(
                                                         (0x20000U 
                                                          == 
                                                          (0x30000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                  ? 
                                                 (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                  >> 0x17U)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(
                                                                (0x870000U 
                                                                 == 
                                                                 (0x870000U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                  && (1U 
                                                      & ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 0x17U) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 2U))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                            >> 0x17U)) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 2U)))))) 
                                                << 2U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfff7U 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfff7U 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (8U & 
                                               (((IData)(
                                                         (0x2000000U 
                                                          == 
                                                          (0x3000000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                  ? 
                                                 (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                  >> 0x1fU)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(
                                                                (0x87000000U 
                                                                 == 
                                                                 (0x87000000U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                  && (1U 
                                                      & ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 0x1fU) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 3U))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                            >> 0x1fU)) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 3U)))))) 
                                                << 3U)));
    vlSelf->__PVT__region_mml_perm_check = (0xffefU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xffefU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x10U 
                                               & (((1U 
                                                    & ((~ 
                                                        vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]) 
                                                       & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                          >> 1U)))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 7U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87U 
                                                                   == 
                                                                   (0x87U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 4U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 7U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 4U)))))) 
                                                  << 4U)));
    vlSelf->__PVT__region_mml_perm_check = (0xffdfU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xffdfU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x20U 
                                               & (((IData)(
                                                           (0x200U 
                                                            == 
                                                            (0x300U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x8700U 
                                                                   == 
                                                                   (0x8700U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 0xfU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 5U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 0xfU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 5U)))))) 
                                                  << 5U)));
    vlSelf->__PVT__region_mml_perm_check = (0xffbfU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xffbfU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x40U 
                                               & (((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x870000U 
                                                                   == 
                                                                   (0x870000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 0x17U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 6U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 0x17U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 6U)))))) 
                                                  << 6U)));
    vlSelf->__PVT__region_mml_perm_check = (0xff7fU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xff7fU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x80U 
                                               & (((IData)(
                                                           (0x2000000U 
                                                            == 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87000000U 
                                                                   == 
                                                                   (0x87000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 0x1fU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 7U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 0x1fU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 7U)))))) 
                                                  << 7U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfeffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfeffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x100U 
                                               & (((1U 
                                                    & ((~ 
                                                        vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]) 
                                                       & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                          >> 1U)))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 7U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87U 
                                                                   == 
                                                                   (0x87U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 8U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 7U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 8U)))))) 
                                                  << 8U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfdffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfdffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x200U 
                                               & (((IData)(
                                                           (0x200U 
                                                            == 
                                                            (0x300U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x8700U 
                                                                   == 
                                                                   (0x8700U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 0xfU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 9U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0xfU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 9U)))))) 
                                                  << 9U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfbffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfbffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x400U 
                                               & (((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x870000U 
                                                                   == 
                                                                   (0x870000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 0x17U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xaU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0x17U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xaU)))))) 
                                                  << 0xaU)));
    vlSelf->__PVT__region_mml_perm_check = (0xf7ffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xf7ffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x800U 
                                               & (((IData)(
                                                           (0x2000000U 
                                                            == 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87000000U 
                                                                   == 
                                                                   (0x87000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 0x1fU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xbU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0x1fU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xbU)))))) 
                                                  << 0xbU)));
    vlSelf->__PVT__region_mml_perm_check = (0xefffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xefffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x1000U 
                                               & (((1U 
                                                    & ((~ 
                                                        vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]) 
                                                       & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                          >> 1U)))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 7U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87U 
                                                                   == 
                                                                   (0x87U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xcU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 7U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xcU)))))) 
                                                  << 0xcU)));
    vlSelf->__PVT__region_mml_perm_check = (0xdfffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xdfffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x2000U 
                                               & (((IData)(
                                                           (0x200U 
                                                            == 
                                                            (0x300U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x8700U 
                                                                   == 
                                                                   (0x8700U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 0xfU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xdU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 0xfU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xdU)))))) 
                                                  << 0xdU)));
    vlSelf->__PVT__region_mml_perm_check = (0xbfffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xbfffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x4000U 
                                               & (((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x870000U 
                                                                   == 
                                                                   (0x870000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 0x17U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xeU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 0x17U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xeU)))))) 
                                                  << 0xeU)));
    vlSelf->__PVT__region_mml_perm_check = (0x7fffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0x7fffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x8000U 
                                               & (((IData)(
                                                           (0x2000000U 
                                                            == 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87000000U 
                                                                   == 
                                                                   (0x87000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 0x1fU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xfU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 0x1fU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xfU)))))) 
                                                  << 0xfU)));
    vlSelf->__PVT__region_match_all = (0xfffeU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfffeU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (1U & ((0x10U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                 ? (IData)(__PVT__region_match_eq)
                                                 : 
                                                ((1U 
                                                  & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                     >> 3U)) 
                                                 && (1U 
                                                     & (((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)))))));
    vlSelf->__PVT__region_match_all = (0xfffdU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfffdU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (2U & (((0x1000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                  ? 
                                                 ((0x800U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                   ? 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 1U)
                                                   : 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 1U))
                                                  : 
                                                 ((1U 
                                                   & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                      >> 0xbU)) 
                                                  && (1U 
                                                      & ((((IData)(__PVT__region_match_eq) 
                                                           | (IData)(__PVT__region_match_gt)) 
                                                          & (IData)(__PVT__region_match_lt)) 
                                                         >> 1U)))) 
                                                << 1U)));
    vlSelf->__PVT__region_match_all = (0xfffbU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfffbU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (4U & (((0x100000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                  ? 
                                                 ((0x80000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                   ? 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 2U))
                                                  : 
                                                 ((1U 
                                                   & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                      >> 0x13U)) 
                                                  && (1U 
                                                      & ((((IData)(__PVT__region_match_eq) 
                                                           | (IData)(__PVT__region_match_gt)) 
                                                          & (IData)(__PVT__region_match_lt)) 
                                                         >> 2U)))) 
                                                << 2U)));
    vlSelf->__PVT__region_match_all = (0xfff7U & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfff7U & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (8U & (((0x10000000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                  ? 
                                                 ((0x8000000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                   ? 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 3U)
                                                   : 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 3U))
                                                  : 
                                                 ((1U 
                                                   & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                      >> 0x1bU)) 
                                                  && (1U 
                                                      & ((((IData)(__PVT__region_match_eq) 
                                                           | (IData)(__PVT__region_match_gt)) 
                                                          & (IData)(__PVT__region_match_lt)) 
                                                         >> 3U)))) 
                                                << 3U)));
    vlSelf->__PVT__region_match_all = (0xffefU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xffefU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x10U & (
                                                   ((0x10U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 4U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 4U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 3U)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 4U)))) 
                                                   << 4U)));
    vlSelf->__PVT__region_match_all = (0xffdfU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xffdfU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x20U & (
                                                   ((0x1000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((0x800U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 5U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 0xbU)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 5U)))) 
                                                   << 5U)));
    vlSelf->__PVT__region_match_all = (0xffbfU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xffbfU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x40U & (
                                                   ((0x100000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((0x80000U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 6U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 6U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 0x13U)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 6U)))) 
                                                   << 6U)));
    vlSelf->__PVT__region_match_all = (0xff7fU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xff7fU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x80U & (
                                                   ((0x10000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 7U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 7U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 0x1bU)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 7U)))) 
                                                   << 7U)));
    vlSelf->__PVT__region_match_all = (0xfeffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfeffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x100U & 
                                          (((0x10U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((8U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 8U)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 8U))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 3U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 8U)))) 
                                           << 8U)));
    vlSelf->__PVT__region_match_all = (0xfdffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfdffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x200U & 
                                          (((0x1000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((0x800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 9U)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 9U))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0xbU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 9U)))) 
                                           << 9U)));
    vlSelf->__PVT__region_match_all = (0xfbffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfbffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x400U & 
                                          (((0x100000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((0x80000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xaU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xaU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x13U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xaU)))) 
                                           << 0xaU)));
    vlSelf->__PVT__region_match_all = (0xf7ffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xf7ffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x800U & 
                                          (((0x10000000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((0x8000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xbU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xbU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x1bU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xbU)))) 
                                           << 0xbU)));
    vlSelf->__PVT__region_match_all = (0xefffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xefffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x1000U & 
                                          (((0x10U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((8U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xcU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xcU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 3U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xcU)))) 
                                           << 0xcU)));
    vlSelf->__PVT__region_match_all = (0xdfffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xdfffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x2000U & 
                                          (((0x1000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((0x800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xdU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xdU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0xbU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xdU)))) 
                                           << 0xdU)));
    vlSelf->__PVT__region_match_all = (0xbfffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xbfffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x4000U & 
                                          (((0x100000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((0x80000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xeU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xeU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x13U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xeU)))) 
                                           << 0xeU)));
    vlSelf->__PVT__region_match_all = (0x7fffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0x7fffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x8000U & 
                                          (((0x10000000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((0x8000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xfU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xfU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x1bU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xfU)))) 
                                           << 0xfU)));
    vlSelf->__PVT__access_fault_all = ((0x8000U & (
                                                   ((1U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                      >> 0xfU))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                      ? (IData)(
                                                                (0x80000000U 
                                                                 == 
                                                                 (0x84000000U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                      : 
                                                     (~ 
                                                      (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                       >> 0x1aU)))) 
                                                   << 0xfU)) 
                                       | ((0x4000U 
                                           & (((1U 
                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                    >> 0xeU))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                    ? (IData)(
                                                              (0x800000U 
                                                               == 
                                                               (0x840000U 
                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    : 
                                                   (~ 
                                                    (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                     >> 0x12U)))) 
                                              << 0xeU)) 
                                          | ((0x2000U 
                                              & (((1U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                    >> 0xdU))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                    ? (IData)(
                                                              (0x8000U 
                                                               == 
                                                               (0x8400U 
                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    : 
                                                   (~ 
                                                    (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                     >> 0xaU)))) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((1U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                      ? 
                                                     (~ 
                                                      ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                       >> 0xcU))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                       ? (IData)(
                                                                 (0x80U 
                                                                  == 
                                                                  (0x84U 
                                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                       : 
                                                      (~ 
                                                       (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                        >> 2U)))) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((1U 
                                                         & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                          >> 0xbU))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? (IData)(
                                                                    (0x80000000U 
                                                                     == 
                                                                     (0x84000000U 
                                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                          : 
                                                         (~ 
                                                          (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                           >> 0x1aU)))) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((1U 
                                                            & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                            ? 
                                                           (~ 
                                                            ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                             >> 0xaU))
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                             ? (IData)(
                                                                       (0x800000U 
                                                                        == 
                                                                        (0x840000U 
                                                                         & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                             : 
                                                            (~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0x12U)))) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((1U 
                                                               & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                               ? 
                                                              (~ 
                                                               ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                >> 9U))
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                ? (IData)(
                                                                          (0x8000U 
                                                                           == 
                                                                           (0x8400U 
                                                                            & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                                : 
                                                               (~ 
                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                 >> 0xaU)))) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((1U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                  ? 
                                                                 (~ 
                                                                  ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                   >> 8U))
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                   ? (IData)(
                                                                             (0x80U 
                                                                              == 
                                                                              (0x84U 
                                                                               & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                                   : 
                                                                  (~ 
                                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                    >> 2U)))) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((1U 
                                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                     ? 
                                                                    (~ 
                                                                     ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                      >> 7U))
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                      ? (IData)(
                                                                                (0x80000000U 
                                                                                == 
                                                                                (0x84000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                      : 
                                                                     (~ 
                                                                      (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                       >> 0x1aU)))) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((1U 
                                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                        ? 
                                                                       (~ 
                                                                        ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                         >> 6U))
                                                                        : 
                                                                       ((3U 
                                                                         == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                         ? (IData)(
                                                                                (0x800000U 
                                                                                == 
                                                                                (0x840000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                         : 
                                                                        (~ 
                                                                         (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                          >> 0x12U)))) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((1U 
                                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                           ? 
                                                                          (~ 
                                                                           ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                            >> 5U))
                                                                           : 
                                                                          ((3U 
                                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                            ? (IData)(
                                                                                (0x8000U 
                                                                                == 
                                                                                (0x8400U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                            : 
                                                                           (~ 
                                                                            (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                             >> 0xaU)))) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((1U 
                                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                              ? 
                                                                             (~ 
                                                                              ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                               >> 4U))
                                                                              : 
                                                                             ((3U 
                                                                               == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                               ? (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x84U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                               : 
                                                                              (~ 
                                                                               (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                >> 2U)))) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ 
                                                                                ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x80000000U 
                                                                                == 
                                                                                (0x84000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x1aU)))) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ 
                                                                                ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                                >> 2U))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x800000U 
                                                                                == 
                                                                                (0x840000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x12U)))) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ 
                                                                                ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x8000U 
                                                                                == 
                                                                                (0x8400U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0xaU)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->__PVT__region_mml_perm_check))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x84U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 2U))))))))))))))))))));
    vlSelf->__PVT__access_fault = (IData)(((3U != (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                           | (0U != 
                                              (3U & 
                                               vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U]))));
    if ((0x8000U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 0xfU));
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 0xeU));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 0xdU));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 0xcU));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 0xbU));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 0xaU));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 9U));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 8U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 7U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 6U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 5U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 4U));
    }
    if ((8U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 3U));
    }
    if ((4U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 2U));
    }
    if ((2U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & ((IData)(vlSelf->__PVT__access_fault_all) 
                                             >> 1U));
    }
    if ((1U & (IData)(vlSelf->__PVT__region_match_all))) {
        vlSelf->__PVT__access_fault = (1U & (IData)(vlSelf->__PVT__access_fault_all));
    }
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_pmp__P0_PB10___nba_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__0(VCSoC_top_cv32e40s_pmp__P0_PB10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_pmp__P0_PB10___nba_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__0\n"); );
    // Body
    vlSelf->__VdfgTmp_hdfddb7f1__0 = (((1U & ((0x18000000U 
                                               != (0x18000000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18000000U 
                                                != 
                                                (0x18000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18000000U 
                                                 != 
                                                 (0x18000000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18000000U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18000000U 
                                                          != 
                                                          (0x18000000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18000000U 
                                                             != 
                                                             (0x18000000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18000000U 
                                                                != 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18000000U 
                                                                   != 
                                                                   (0x18000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18000000U 
                                                                      != 
                                                                      (0x18000000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18000000U 
                                                                         != 
                                                                         (0x18000000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18000000U 
                                                                            != 
                                                                            (0x18000000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18000000U 
                                                                               != 
                                                                               (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])))))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ 
                                                                                vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U]))) 
                                                                                << 1U) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                                                >> 0x1bU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h80dc378a__0 = (((1U & ((0x180000U 
                                               != (0x180000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                   >> 0x1eU)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x180000U 
                                                != 
                                                (0x180000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                  << 2U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                    >> 0x1eU)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x180000U 
                                                 != 
                                                 (0x180000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                     >> 0x1eU)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                      << 2U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                        >> 0x1eU)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                      << 2U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                        >> 0x1eU)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x180000U 
                                                       != 
                                                       (0x180000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                         << 2U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                           >> 0x1eU)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x180000U 
                                                          != 
                                                          (0x180000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                            << 2U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                              >> 0x1eU)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x180000U 
                                                             != 
                                                             (0x180000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                               << 2U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x180000U 
                                                                != 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x180000U 
                                                                   != 
                                                                   (0x180000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x180000U 
                                                                      != 
                                                                      (0x180000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x180000U 
                                                                         != 
                                                                         (0x180000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x180000U 
                                                                            != 
                                                                            (0x180000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x180000U 
                                                                               != 
                                                                               (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                >> 0x1eU)) 
                                                                                | (0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                                                >> 0x13U))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h5173a24b__0 = (((1U & ((0x1800U 
                                               != (0x1800U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                 << 4U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                   >> 0x1cU)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x1800U 
                                                != 
                                                (0x1800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                  << 4U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                    >> 0x1cU)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x1800U 
                                                 != 
                                                 (0x1800U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                   << 4U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                     >> 0x1cU)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                        >> 0x1cU)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                        >> 0x1cU)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x1800U 
                                                       != 
                                                       (0x1800U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                         << 4U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                           >> 0x1cU)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x1800U 
                                                          != 
                                                          (0x1800U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                            << 4U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                              >> 0x1cU)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x1800U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                               << 4U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x1800U 
                                                                != 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x1800U 
                                                                   != 
                                                                   (0x1800U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x1800U 
                                                                      != 
                                                                      (0x1800U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x1800U 
                                                                         != 
                                                                         (0x1800U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x1800U 
                                                                            != 
                                                                            (0x1800U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x1800U 
                                                                               != 
                                                                               (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                >> 0x1cU)) 
                                                                                | (0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                                                >> 0xbU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h32cd929a__0 = (((1U & ((0x18U 
                                               != (0x18U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                 << 6U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                   >> 0x1aU)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                  << 6U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                    >> 0x1aU)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                   << 6U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                     >> 0x1aU)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                      << 6U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                        >> 0x1aU)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                      << 6U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                        >> 0x1aU)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                         << 6U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                           >> 0x1aU)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                            << 6U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                              >> 0x1aU)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18U 
                                                             != 
                                                             (0x18U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                               << 6U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18U 
                                                                != 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18U 
                                                                   != 
                                                                   (0x18U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18U 
                                                                      != 
                                                                      (0x18U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18U 
                                                                         != 
                                                                         (0x18U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18U 
                                                                            != 
                                                                            (0x18U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18U 
                                                                               != 
                                                                               (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                >> 0x1aU)) 
                                                                                | (0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                                                >> 3U))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h19935004__0 = (((1U & ((0x18000000U 
                                               != (0x18000000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                   >> 0x18U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18000000U 
                                                != 
                                                (0x18000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                    >> 0x18U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18000000U 
                                                 != 
                                                 (0x18000000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                     >> 0x18U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                        >> 0x18U)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                        >> 0x18U)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18000000U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                         << 8U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                           >> 0x18U)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18000000U 
                                                          != 
                                                          (0x18000000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                            << 8U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                              >> 0x18U)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18000000U 
                                                             != 
                                                             (0x18000000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                               << 8U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18000000U 
                                                                != 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18000000U 
                                                                   != 
                                                                   (0x18000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18000000U 
                                                                      != 
                                                                      (0x18000000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18000000U 
                                                                         != 
                                                                         (0x18000000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18000000U 
                                                                            != 
                                                                            (0x18000000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18000000U 
                                                                               != 
                                                                               (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                >> 0x18U)) 
                                                                                | (0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                                >> 0x1bU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h47e7bb97__0 = (((1U & ((0x180000U 
                                               != (0x180000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                   >> 0x16U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x180000U 
                                                != 
                                                (0x180000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                  << 0xaU) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                    >> 0x16U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x180000U 
                                                 != 
                                                 (0x180000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                   << 0xaU) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                     >> 0x16U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                      << 0xaU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                        >> 0x16U)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                      << 0xaU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                        >> 0x16U)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x180000U 
                                                       != 
                                                       (0x180000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                         << 0xaU) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                           >> 0x16U)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x180000U 
                                                          != 
                                                          (0x180000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                            << 0xaU) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                              >> 0x16U)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x180000U 
                                                             != 
                                                             (0x180000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                               << 0xaU) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x180000U 
                                                                != 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x180000U 
                                                                   != 
                                                                   (0x180000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x180000U 
                                                                      != 
                                                                      (0x180000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x180000U 
                                                                         != 
                                                                         (0x180000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x180000U 
                                                                            != 
                                                                            (0x180000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x180000U 
                                                                               != 
                                                                               (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                >> 0x16U)) 
                                                                                | (0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                                >> 0x13U))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_hd1071dc7__0 = (((1U & ((0x1800U 
                                               != (0x1800U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                 << 0xcU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                   >> 0x14U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x1800U 
                                                != 
                                                (0x1800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                  << 0xcU) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                    >> 0x14U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x1800U 
                                                 != 
                                                 (0x1800U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                   << 0xcU) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                     >> 0x14U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                      << 0xcU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                        >> 0x14U)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                      << 0xcU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                        >> 0x14U)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x1800U 
                                                       != 
                                                       (0x1800U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                         << 0xcU) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                           >> 0x14U)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x1800U 
                                                          != 
                                                          (0x1800U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                            << 0xcU) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                              >> 0x14U)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x1800U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                               << 0xcU) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x1800U 
                                                                != 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x1800U 
                                                                   != 
                                                                   (0x1800U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x1800U 
                                                                      != 
                                                                      (0x1800U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x1800U 
                                                                         != 
                                                                         (0x1800U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x1800U 
                                                                            != 
                                                                            (0x1800U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x1800U 
                                                                               != 
                                                                               (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                                                << 0xcU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                >> 0x14U)) 
                                                                                | (0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                                >> 0xbU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h0ab821ce__0 = (((1U & ((0x18U 
                                               != (0x18U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                 << 0xeU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                   >> 0x12U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                  << 0xeU) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                    >> 0x12U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                   << 0xeU) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                     >> 0x12U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                      << 0xeU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                        >> 0x12U)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                      << 0xeU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                        >> 0x12U)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                         << 0xeU) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                           >> 0x12U)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                            << 0xeU) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                              >> 0x12U)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18U 
                                                             != 
                                                             (0x18U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                               << 0xeU) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18U 
                                                                != 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18U 
                                                                   != 
                                                                   (0x18U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18U 
                                                                      != 
                                                                      (0x18U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18U 
                                                                         != 
                                                                         (0x18U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18U 
                                                                            != 
                                                                            (0x18U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18U 
                                                                               != 
                                                                               (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                                << 0xeU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                >> 0x12U)) 
                                                                                | (0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                                >> 3U))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_ha20284c8__0 = (((1U & ((0x18000000U 
                                               != (0x18000000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                   >> 0x10U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18000000U 
                                                != 
                                                (0x18000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                    >> 0x10U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18000000U 
                                                 != 
                                                 (0x18000000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                     >> 0x10U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                      << 0x10U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                        >> 0x10U)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                      << 0x10U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                        >> 0x10U)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18000000U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                         << 0x10U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                           >> 0x10U)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18000000U 
                                                          != 
                                                          (0x18000000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                            << 0x10U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                              >> 0x10U)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18000000U 
                                                             != 
                                                             (0x18000000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18000000U 
                                                                != 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18000000U 
                                                                   != 
                                                                   (0x18000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18000000U 
                                                                      != 
                                                                      (0x18000000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18000000U 
                                                                         != 
                                                                         (0x18000000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18000000U 
                                                                            != 
                                                                            (0x18000000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18000000U 
                                                                               != 
                                                                               (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                >> 0x10U)) 
                                                                                | (0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                >> 0x1bU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h4c552959__0 = (((1U & ((0x180000U 
                                               != (0x180000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                 << 0x12U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                   >> 0xeU)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x180000U 
                                                != 
                                                (0x180000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                  << 0x12U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                    >> 0xeU)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x180000U 
                                                 != 
                                                 (0x180000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                   << 0x12U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                     >> 0xeU)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                      << 0x12U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                        >> 0xeU)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                      << 0x12U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                        >> 0xeU)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x180000U 
                                                       != 
                                                       (0x180000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                         << 0x12U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                           >> 0xeU)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x180000U 
                                                          != 
                                                          (0x180000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                            << 0x12U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                              >> 0xeU)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x180000U 
                                                             != 
                                                             (0x180000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                               << 0x12U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x180000U 
                                                                != 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x180000U 
                                                                   != 
                                                                   (0x180000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x180000U 
                                                                      != 
                                                                      (0x180000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x180000U 
                                                                         != 
                                                                         (0x180000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x180000U 
                                                                            != 
                                                                            (0x180000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x180000U 
                                                                               != 
                                                                               (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                >> 0xeU)) 
                                                                                | (0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                >> 0x13U))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h07c516e0__0 = (((1U & ((0x1800U 
                                               != (0x1800U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                 << 0x14U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                   >> 0xcU)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x1800U 
                                                != 
                                                (0x1800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                  << 0x14U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                    >> 0xcU)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x1800U 
                                                 != 
                                                 (0x1800U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                   << 0x14U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                     >> 0xcU)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                      << 0x14U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                        >> 0xcU)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                      << 0x14U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                        >> 0xcU)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x1800U 
                                                       != 
                                                       (0x1800U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                         << 0x14U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                           >> 0xcU)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x1800U 
                                                          != 
                                                          (0x1800U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                            << 0x14U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                              >> 0xcU)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x1800U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                               << 0x14U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x1800U 
                                                                != 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x1800U 
                                                                   != 
                                                                   (0x1800U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU)))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x1800U 
                                                                      != 
                                                                      (0x1800U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU)))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x1800U 
                                                                         != 
                                                                         (0x1800U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU)))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x1800U 
                                                                            != 
                                                                            (0x1800U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x1800U 
                                                                               != 
                                                                               (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                >> 0xcU)) 
                                                                                | (0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                >> 0xbU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_heb0ae4d2__0 = (((1U & ((0x18U 
                                               != (0x18U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                 << 0x16U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                   >> 0xaU)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                  << 0x16U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                    >> 0xaU)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                   << 0x16U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                     >> 0xaU)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                      << 0x16U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                        >> 0xaU)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                      << 0x16U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                        >> 0xaU)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                         << 0x16U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                           >> 0xaU)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                            << 0x16U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                              >> 0xaU)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18U 
                                                             != 
                                                             (0x18U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                               << 0x16U) 
                                                                              | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU)))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18U 
                                                                != 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU)))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18U 
                                                                   != 
                                                                   (0x18U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU)))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18U 
                                                                      != 
                                                                      (0x18U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18U 
                                                                         != 
                                                                         (0x18U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18U 
                                                                            != 
                                                                            (0x18U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18U 
                                                                               != 
                                                                               (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                >> 0xaU)) 
                                                                                | (0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                >> 3U))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_hcb6b3920__0 = (((1U & ((0x18000000U 
                                               != (0x18000000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                   >> 8U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18000000U 
                                                != 
                                                (0x18000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                  << 0x18U) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                    >> 8U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18000000U 
                                                 != 
                                                 (0x18000000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                   << 0x18U) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                     >> 8U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                        >> 8U)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18000000U 
                                                    != 
                                                    (0x18000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                        >> 8U)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18000000U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                         << 0x18U) 
                                                                        | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                           >> 8U)))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18000000U 
                                                          != 
                                                          (0x18000000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                              >> 8U)))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18000000U 
                                                             != 
                                                             (0x18000000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                           >> 8U)))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18000000U 
                                                                != 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18000000U 
                                                                   != 
                                                                   (0x18000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18000000U 
                                                                      != 
                                                                      (0x18000000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18000000U 
                                                                         != 
                                                                         (0x18000000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18000000U 
                                                                            != 
                                                                            (0x18000000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18000000U 
                                                                               != 
                                                                               (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U)) 
                                                                                | (0x18000000U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x1bU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_ha1b73c99__0 = (((1U & ((0x180000U 
                                               != (0x180000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                   >> 6U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x180000U 
                                                != 
                                                (0x180000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                  << 0x1aU) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                    >> 6U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x180000U 
                                                 != 
                                                 (0x180000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                   << 0x1aU) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                     >> 6U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                      << 0x1aU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                        >> 6U)))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x180000U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                      << 0x1aU) 
                                                                     | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                        >> 6U)))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x180000U 
                                                       != 
                                                       (0x180000U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                     >> 6U)))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x180000U 
                                                          != 
                                                          (0x180000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                           >> 6U))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x180000U 
                                                             != 
                                                             (0x180000U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                              >> 6U))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x180000U 
                                                                != 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x180000U 
                                                                   != 
                                                                   (0x180000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x180000U 
                                                                      != 
                                                                      (0x180000U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x180000U 
                                                                         != 
                                                                         (0x180000U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x180000U 
                                                                            != 
                                                                            (0x180000U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x180000U 
                                                                               != 
                                                                               (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U)) 
                                                                                | (0x180000U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x13U))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h48688b71__0 = (((1U & ((0x1800U 
                                               != (0x1800U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                 << 0x1cU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                   >> 4U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x1800U 
                                                != 
                                                (0x1800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (0x3fffffffU 
                                                              & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                  << 0x1cU) 
                                                                 | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                    >> 4U)))))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x1800U 
                                                 != 
                                                 (0x1800U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                     >> 4U)))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                  >> 4U)))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x1800U 
                                                    != 
                                                    (0x1800U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                     >> 4U))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x1800U 
                                                       != 
                                                       (0x1800U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                        >> 4U))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x1800U 
                                                          != 
                                                          (0x1800U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                           >> 4U))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x1800U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                              >> 4U))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x1800U 
                                                                != 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x1800U 
                                                                   != 
                                                                   (0x1800U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x1800U 
                                                                      != 
                                                                      (0x1800U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x1800U 
                                                                         != 
                                                                         (0x1800U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x1800U 
                                                                            != 
                                                                            (0x1800U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x1800U 
                                                                               != 
                                                                               (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U)) 
                                                                                | (0x1800U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0xbU))))))))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h4df2fd54__0 = (((1U & ((0x18U 
                                               != (0x18U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                              | (~ (IData)(
                                                           (0x7fffffffU 
                                                            == 
                                                            (0x7fffffffU 
                                                             & ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                 << 0x1eU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                   >> 2U)))))))) 
                                       << 0x1fU) | 
                                      (((1U & ((0x18U 
                                                != 
                                                (0x18U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                               | (~ (IData)(
                                                            (0x3fffffffU 
                                                             == 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                              >> 2U)))))) 
                                        << 0x1eU) | 
                                       (((1U & ((0x18U 
                                                 != 
                                                 (0x18U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                | (~ (IData)(
                                                             (0x1fffffffU 
                                                              == 
                                                              (0x1fffffffU 
                                                               & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                  >> 2U))))))) 
                                         << 0x1dU) 
                                        | (((1U & (
                                                   (0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0xfffffffU 
                                                                 == 
                                                                 (0xfffffffU 
                                                                  & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                     >> 2U))))))) 
                                            << 0x1cU) 
                                           | (((1U 
                                                & ((0x18U 
                                                    != 
                                                    (0x18U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                   | (~ (IData)(
                                                                (0x7ffffffU 
                                                                 == 
                                                                 (0x7ffffffU 
                                                                  & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                     >> 2U))))))) 
                                               << 0x1bU) 
                                              | (((1U 
                                                   & ((0x18U 
                                                       != 
                                                       (0x18U 
                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                      | (~ (IData)(
                                                                   (0x3ffffffU 
                                                                    == 
                                                                    (0x3ffffffU 
                                                                     & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                        >> 2U))))))) 
                                                  << 0x1aU) 
                                                 | (((1U 
                                                      & ((0x18U 
                                                          != 
                                                          (0x18U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                         | (~ (IData)(
                                                                      (0x1ffffffU 
                                                                       == 
                                                                       (0x1ffffffU 
                                                                        & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                           >> 2U))))))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & ((0x18U 
                                                             != 
                                                             (0x18U 
                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                            | (~ (IData)(
                                                                         (0xffffffU 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                              >> 2U))))))) 
                                                        << 0x18U) 
                                                       | (((1U 
                                                            & ((0x18U 
                                                                != 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                               | (~ (IData)(
                                                                            (0x7fffffU 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                           << 0x17U) 
                                                          | (((1U 
                                                               & ((0x18U 
                                                                   != 
                                                                   (0x18U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                  | (~ (IData)(
                                                                               (0x3fffffU 
                                                                                == 
                                                                                (0x3fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                              << 0x16U) 
                                                             | (((1U 
                                                                  & ((0x18U 
                                                                      != 
                                                                      (0x18U 
                                                                       & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                     | (~ (IData)(
                                                                                (0x1fffffU 
                                                                                == 
                                                                                (0x1fffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                 << 0x15U) 
                                                                | (((1U 
                                                                     & ((0x18U 
                                                                         != 
                                                                         (0x18U 
                                                                          & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                        | (~ (IData)(
                                                                                (0xfffffU 
                                                                                == 
                                                                                (0xfffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                    << 0x14U) 
                                                                   | (((1U 
                                                                        & ((0x18U 
                                                                            != 
                                                                            (0x18U 
                                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                           | (~ (IData)(
                                                                                (0x7ffffU 
                                                                                == 
                                                                                (0x7ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                       << 0x13U) 
                                                                      | (((1U 
                                                                           & ((0x18U 
                                                                               != 
                                                                               (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                              | (~ (IData)(
                                                                                (0x3ffffU 
                                                                                == 
                                                                                (0x3ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                          << 0x12U) 
                                                                         | (((1U 
                                                                              & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffffU 
                                                                                == 
                                                                                (0x1ffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                             << 0x11U) 
                                                                            | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffffU 
                                                                                == 
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 0x10U) 
                                                                               | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fffU 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 0xfU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fffU 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 0xeU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fffU 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 0xdU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfffU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 0xcU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 0xbU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3ffU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 0xaU) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1ffU 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 9U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xffU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 8U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 7U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 6U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 5U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 4U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 3U) 
                                                                                | (((1U 
                                                                                & ((0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])) 
                                                                                | (~ (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U)) 
                                                                                | (0x18U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 3U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__region_basic_perm_check = ((0x8000U 
                                               & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                  >> 0xbU)) 
                                              | ((0x4000U 
                                                  & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                     >> 4U)) 
                                                 | ((0x2000U 
                                                     & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                        << 3U)) 
                                                    | ((0x1000U 
                                                        & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                           << 0xaU)) 
                                                       | ((0x800U 
                                                           & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0xfU)) 
                                                          | ((0x400U 
                                                              & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                 >> 8U)) 
                                                             | ((0x200U 
                                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                    >> 1U)) 
                                                                | ((0x100U 
                                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                       << 6U)) 
                                                                   | ((0x80U 
                                                                       & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                          >> 0x13U)) 
                                                                      | ((0x40U 
                                                                          & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                             >> 0xcU)) 
                                                                         | ((0x20U 
                                                                             & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                >> 5U)) 
                                                                            | ((0x10U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                << 2U)) 
                                                                               | ((8U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x17U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 2U)))))))))))))))));
    vlSelf->__VdfgTmp_hc5f5801f__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                       >> 0x1bU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU])) 
                                                         >> 0x1cU)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U])) 
                                                       << 2U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U])) 
                                                         >> 0x1eU)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h20c39b22__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                       >> 0x13U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU])) 
                                                    << 0x26U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU])) 
                                                       << 6U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU])) 
                                                         >> 0x1aU)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU])) 
                                                         >> 0x1cU)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h5ee5889e__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                       >> 0xbU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU])) 
                                                         >> 0x18U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU])) 
                                                    << 0x26U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU])) 
                                                       << 6U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU])) 
                                                         >> 0x1aU)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h39af6969__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                       >> 3U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU])) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU])) 
                                                       << 0xaU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU])) 
                                                         >> 0x16U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU])) 
                                                         >> 0x18U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h88b1d18d__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                       >> 0x1bU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU])) 
                                                    << 0x2cU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU])) 
                                                       << 0xcU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU])) 
                                                         >> 0x14U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU])) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU])) 
                                                       << 0xaU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU])) 
                                                         >> 0x16U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h46eed216__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                       >> 0x13U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU])) 
                                                    << 0x2eU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU])) 
                                                       << 0xeU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU])) 
                                                         >> 0x12U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU])) 
                                                    << 0x2cU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU])) 
                                                       << 0xcU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU])) 
                                                         >> 0x14U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_hc7521f3e__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                       >> 0xbU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU])) 
                                                    << 0x2eU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU])) 
                                                       << 0xeU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU])) 
                                                         >> 0x12U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h21170832__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                       >> 3U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U])) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U])) 
                                                       << 0x12U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U])) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U])) 
                                                         >> 0x10U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h9c079945__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                       >> 0x1bU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U])) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U])) 
                                                       << 0x14U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U])) 
                                                         >> 0xcU)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U])) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U])) 
                                                       << 0x12U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U])) 
                                                         >> 0xeU)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h3d093ef8__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                       >> 0x13U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U])) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U])) 
                                                       << 0x16U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U])) 
                                                         >> 0xaU)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U])) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U])) 
                                                       << 0x14U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U])) 
                                                         >> 0xcU)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h022b9d1b__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                       >> 0xbU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U])) 
                                                         >> 8U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U])) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U])) 
                                                       << 0x16U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U])) 
                                                         >> 0xaU)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h548998df__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                       >> 3U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U])) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U])) 
                                                       << 0x1aU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U])) 
                                                         >> 6U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U])) 
                                                         >> 8U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h1411aa6b__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                       >> 0x1bU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U])) 
                                                         >> 4U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U])) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U])) 
                                                       << 0x1aU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U])) 
                                                         >> 6U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_hbbb3ff22__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                       >> 0x13U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U])) 
                                                         >> 2U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U])) 
                                                         >> 4U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h29ced6b7__0 = (IData)((0xffffffffULL 
                                              & (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                       >> 0xbU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U])) 
                                                         >> 2U)))) 
                                                 >> 2U)));
    vlSelf->__VdfgTmp_h9507a9ab__0 = ((1U == (3U & 
                                              (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                               >> 3U)))
                                       ? 0U : ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                << 0x1eU) 
                                               | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                  >> 2U)));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_pmp__P0_PB10___nba_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__1(VCSoC_top_cv32e40s_pmp__P0_PB10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_pmp__P0_PB10___nba_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__1\n"); );
    // Body
    vlSelf->__PVT__region_mml_perm_check = (0xfffeU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfffeU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (1U & 
                                               ((1U 
                                                 & ((~ 
                                                     vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]) 
                                                    & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                       >> 1U)))
                                                 ? 
                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                 >> 7U)
                                                 : 
                                                ((1U 
                                                  & (~ (IData)(
                                                               (0x87U 
                                                                == 
                                                                (0x87U 
                                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                 && (1U 
                                                     & ((3U 
                                                         == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                         ? 
                                                        ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                          >> 7U) 
                                                         & (IData)(vlSelf->__PVT__region_basic_perm_check))
                                                         : 
                                                        ((~ 
                                                          (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 7U)) 
                                                         & (IData)(vlSelf->__PVT__region_basic_perm_check))))))));
    vlSelf->__PVT__region_mml_perm_check = (0xfffdU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfffdU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (2U & 
                                               (((IData)(
                                                         (0x200U 
                                                          == 
                                                          (0x300U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                  ? 
                                                 (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                  >> 0xfU)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(
                                                                (0x8700U 
                                                                 == 
                                                                 (0x8700U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                  && (1U 
                                                      & ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 0xfU) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 1U))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                            >> 0xfU)) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 1U)))))) 
                                                << 1U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfffbU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfffbU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (4U & 
                                               (((IData)(
                                                         (0x20000U 
                                                          == 
                                                          (0x30000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                  ? 
                                                 (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                  >> 0x17U)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(
                                                                (0x870000U 
                                                                 == 
                                                                 (0x870000U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                  && (1U 
                                                      & ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 0x17U) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 2U))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                            >> 0x17U)) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 2U)))))) 
                                                << 2U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfff7U 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfff7U 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (8U & 
                                               (((IData)(
                                                         (0x2000000U 
                                                          == 
                                                          (0x3000000U 
                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                  ? 
                                                 (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                  >> 0x1fU)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(
                                                                (0x87000000U 
                                                                 == 
                                                                 (0x87000000U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U]))))) 
                                                  && (1U 
                                                      & ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                           >> 0x1fU) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 3U))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                            >> 0x1fU)) 
                                                          & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                             >> 3U)))))) 
                                                << 3U)));
    vlSelf->__PVT__region_mml_perm_check = (0xffefU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xffefU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x10U 
                                               & (((1U 
                                                    & ((~ 
                                                        vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]) 
                                                       & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                          >> 1U)))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 7U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87U 
                                                                   == 
                                                                   (0x87U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 4U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 7U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 4U)))))) 
                                                  << 4U)));
    vlSelf->__PVT__region_mml_perm_check = (0xffdfU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xffdfU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x20U 
                                               & (((IData)(
                                                           (0x200U 
                                                            == 
                                                            (0x300U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x8700U 
                                                                   == 
                                                                   (0x8700U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 0xfU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 5U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 0xfU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 5U)))))) 
                                                  << 5U)));
    vlSelf->__PVT__region_mml_perm_check = (0xffbfU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xffbfU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x40U 
                                               & (((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x870000U 
                                                                   == 
                                                                   (0x870000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 0x17U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 6U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 0x17U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 6U)))))) 
                                                  << 6U)));
    vlSelf->__PVT__region_mml_perm_check = (0xff7fU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xff7fU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x80U 
                                               & (((IData)(
                                                           (0x2000000U 
                                                            == 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87000000U 
                                                                   == 
                                                                   (0x87000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                             >> 0x1fU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 7U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                              >> 0x1fU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 7U)))))) 
                                                  << 7U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfeffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfeffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x100U 
                                               & (((1U 
                                                    & ((~ 
                                                        vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]) 
                                                       & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                          >> 1U)))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 7U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87U 
                                                                   == 
                                                                   (0x87U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 8U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 7U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 8U)))))) 
                                                  << 8U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfdffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfdffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x200U 
                                               & (((IData)(
                                                           (0x200U 
                                                            == 
                                                            (0x300U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x8700U 
                                                                   == 
                                                                   (0x8700U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 0xfU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 9U))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0xfU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 9U)))))) 
                                                  << 9U)));
    vlSelf->__PVT__region_mml_perm_check = (0xfbffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xfbffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x400U 
                                               & (((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x870000U 
                                                                   == 
                                                                   (0x870000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 0x17U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xaU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0x17U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xaU)))))) 
                                                  << 0xaU)));
    vlSelf->__PVT__region_mml_perm_check = (0xf7ffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xf7ffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x800U 
                                               & (((IData)(
                                                           (0x2000000U 
                                                            == 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87000000U 
                                                                   == 
                                                                   (0x87000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                             >> 0x1fU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xbU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0x1fU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xbU)))))) 
                                                  << 0xbU)));
    vlSelf->__PVT__region_mml_perm_check = (0xefffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xefffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x1000U 
                                               & (((1U 
                                                    & ((~ 
                                                        vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]) 
                                                       & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                          >> 1U)))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 7U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87U 
                                                                   == 
                                                                   (0x87U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xcU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 7U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xcU)))))) 
                                                  << 0xcU)));
    vlSelf->__PVT__region_mml_perm_check = (0xdfffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xdfffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x2000U 
                                               & (((IData)(
                                                           (0x200U 
                                                            == 
                                                            (0x300U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0xfU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x8700U 
                                                                   == 
                                                                   (0x8700U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 0xfU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xdU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 0xfU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xdU)))))) 
                                                  << 0xdU)));
    vlSelf->__PVT__region_mml_perm_check = (0xbfffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0xbfffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x4000U 
                                               & (((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x870000U 
                                                                   == 
                                                                   (0x870000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 0x17U) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xeU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 0x17U)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xeU)))))) 
                                                  << 0xeU)));
    vlSelf->__PVT__region_mml_perm_check = (0x7fffU 
                                            & (IData)(vlSelf->__PVT__region_mml_perm_check));
    vlSelf->__PVT__region_mml_perm_check = ((0x7fffU 
                                             & (IData)(vlSelf->__PVT__region_mml_perm_check)) 
                                            | (0x8000U 
                                               & (((IData)(
                                                           (0x2000000U 
                                                            == 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    ? 
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x1fU)
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(
                                                                  (0x87000000U 
                                                                   == 
                                                                   (0x87000000U 
                                                                    & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U]))))) 
                                                    && (1U 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                            ? 
                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                             >> 0x1fU) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xfU))
                                                            : 
                                                           ((~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                              >> 0x1fU)) 
                                                            & ((IData)(vlSelf->__PVT__region_basic_perm_check) 
                                                               >> 0xfU)))))) 
                                                  << 0xfU)));
    vlSelf->__PVT__access_fault_all = ((0x8000U & (
                                                   ((1U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                      >> 0xfU))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                      ? (IData)(
                                                                (0x80000000U 
                                                                 == 
                                                                 (0x84000000U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                      : 
                                                     (~ 
                                                      (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                       >> 0x1aU)))) 
                                                   << 0xfU)) 
                                       | ((0x4000U 
                                           & (((1U 
                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                    >> 0xeU))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                    ? (IData)(
                                                              (0x800000U 
                                                               == 
                                                               (0x840000U 
                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    : 
                                                   (~ 
                                                    (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                     >> 0x12U)))) 
                                              << 0xeU)) 
                                          | ((0x2000U 
                                              & (((1U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                    >> 0xdU))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                    ? (IData)(
                                                              (0x8000U 
                                                               == 
                                                               (0x8400U 
                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                    : 
                                                   (~ 
                                                    (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                     >> 0xaU)))) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((1U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                      ? 
                                                     (~ 
                                                      ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                       >> 0xcU))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                       ? (IData)(
                                                                 (0x80U 
                                                                  == 
                                                                  (0x84U 
                                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])))
                                                       : 
                                                      (~ 
                                                       (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                        >> 2U)))) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((1U 
                                                         & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                          >> 0xbU))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                          ? (IData)(
                                                                    (0x80000000U 
                                                                     == 
                                                                     (0x84000000U 
                                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                          : 
                                                         (~ 
                                                          (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                           >> 0x1aU)))) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((1U 
                                                            & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                            ? 
                                                           (~ 
                                                            ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                             >> 0xaU))
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                             ? (IData)(
                                                                       (0x800000U 
                                                                        == 
                                                                        (0x840000U 
                                                                         & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                             : 
                                                            (~ 
                                                             (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                              >> 0x12U)))) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((1U 
                                                               & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                               ? 
                                                              (~ 
                                                               ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                >> 9U))
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                ? (IData)(
                                                                          (0x8000U 
                                                                           == 
                                                                           (0x8400U 
                                                                            & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                                : 
                                                               (~ 
                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                 >> 0xaU)))) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((1U 
                                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                  ? 
                                                                 (~ 
                                                                  ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                   >> 8U))
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                   ? (IData)(
                                                                             (0x80U 
                                                                              == 
                                                                              (0x84U 
                                                                               & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])))
                                                                   : 
                                                                  (~ 
                                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                                    >> 2U)))) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((1U 
                                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                     ? 
                                                                    (~ 
                                                                     ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                      >> 7U))
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                      ? (IData)(
                                                                                (0x80000000U 
                                                                                == 
                                                                                (0x84000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                      : 
                                                                     (~ 
                                                                      (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                       >> 0x1aU)))) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((1U 
                                                                        & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                        ? 
                                                                       (~ 
                                                                        ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                         >> 6U))
                                                                        : 
                                                                       ((3U 
                                                                         == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                         ? (IData)(
                                                                                (0x800000U 
                                                                                == 
                                                                                (0x840000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                         : 
                                                                        (~ 
                                                                         (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                          >> 0x12U)))) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((1U 
                                                                           & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                           ? 
                                                                          (~ 
                                                                           ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                            >> 5U))
                                                                           : 
                                                                          ((3U 
                                                                            == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                            ? (IData)(
                                                                                (0x8000U 
                                                                                == 
                                                                                (0x8400U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                            : 
                                                                           (~ 
                                                                            (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                             >> 0xaU)))) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((1U 
                                                                              & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                              ? 
                                                                             (~ 
                                                                              ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                               >> 4U))
                                                                              : 
                                                                             ((3U 
                                                                               == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                               ? (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x84U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])))
                                                                               : 
                                                                              (~ 
                                                                               (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                                                >> 2U)))) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ 
                                                                                ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x80000000U 
                                                                                == 
                                                                                (0x84000000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x1aU)))) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ 
                                                                                ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                                >> 2U))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x800000U 
                                                                                == 
                                                                                (0x840000U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0x12U)))) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ 
                                                                                ((IData)(vlSelf->__PVT__region_mml_perm_check) 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x8000U 
                                                                                == 
                                                                                (0x8400U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 0xaU)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0U])
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->__PVT__region_mml_perm_check))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))
                                                                                 ? (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x84U 
                                                                                & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])))
                                                                                 : 
                                                                                (~ 
                                                                                (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                                                >> 2U))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top_cv32e40s_pmp__P0_PB10___nba_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__2(VCSoC_top_cv32e40s_pmp__P0_PB10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VCSoC_top_cv32e40s_pmp__P0_PB10___nba_comb__TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i__2\n"); );
    // Init
    SData/*15:0*/ __PVT__region_match_gt;
    __PVT__region_match_gt = 0;
    SData/*15:0*/ __PVT__region_match_lt;
    __PVT__region_match_lt = 0;
    SData/*15:0*/ __PVT__region_match_eq;
    __PVT__region_match_eq = 0;
    // Body
    __PVT__region_match_lt = ((((IData)(((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                         >> 2U)) < 
                                vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x11U]) 
                               << 0xfU) | ((((IData)(
                                                     ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                      >> 2U)) 
                                             < ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x10U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                   >> 0x1eU))) 
                                            << 0xeU) 
                                           | ((((IData)(
                                                        ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                         >> 2U)) 
                                                < (
                                                   (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xfU] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                      >> 0x1cU))) 
                                               << 0xdU) 
                                              | ((((IData)(
                                                           ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                            >> 2U)) 
                                                   < 
                                                   ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xeU] 
                                                     << 6U) 
                                                    | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                       >> 0x1aU))) 
                                                  << 0xcU) 
                                                 | ((((IData)(
                                                              ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                               >> 2U)) 
                                                      < 
                                                      ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xdU] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                          >> 0x18U))) 
                                                     << 0xbU) 
                                                    | ((((IData)(
                                                                 ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                  >> 2U)) 
                                                         < 
                                                         ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xcU] 
                                                           << 0xaU) 
                                                          | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                             >> 0x16U))) 
                                                        << 0xaU) 
                                                       | ((((IData)(
                                                                    ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                     >> 2U)) 
                                                            < 
                                                            ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xbU] 
                                                              << 0xcU) 
                                                             | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                >> 0x14U))) 
                                                           << 9U) 
                                                          | ((((IData)(
                                                                       ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                        >> 2U)) 
                                                               < 
                                                               ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0xaU] 
                                                                 << 0xeU) 
                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                   >> 0x12U))) 
                                                              << 8U) 
                                                             | ((((IData)(
                                                                          ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                           >> 2U)) 
                                                                  < 
                                                                  ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[9U] 
                                                                    << 0x10U) 
                                                                   | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                      >> 0x10U))) 
                                                                 << 7U) 
                                                                | ((((IData)(
                                                                             ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                              >> 2U)) 
                                                                     < 
                                                                     ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[8U] 
                                                                       << 0x12U) 
                                                                      | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                         >> 0xeU))) 
                                                                    << 6U) 
                                                                   | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                        < 
                                                                        ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[7U] 
                                                                          << 0x14U) 
                                                                         | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                            >> 0xcU))) 
                                                                       << 5U) 
                                                                      | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                           < 
                                                                           ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[6U] 
                                                                             << 0x16U) 
                                                                            | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                               >> 0xaU))) 
                                                                          << 4U) 
                                                                         | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                              < 
                                                                              ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[5U] 
                                                                                << 0x18U) 
                                                                               | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                >> 8U))) 
                                                                             << 3U) 
                                                                            | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                < 
                                                                                ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[4U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                >> 6U))) 
                                                                                << 2U) 
                                                                               | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                < 
                                                                                ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[3U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                >> 4U))) 
                                                                                << 1U) 
                                                                                | ((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                < 
                                                                                ((vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[2U] 
                                                                                << 0x1eU) 
                                                                                | (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[1U] 
                                                                                >> 2U))))))))))))))))));
    __PVT__region_match_gt = ((((IData)(((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                         >> 2U)) > vlSelf->__VdfgTmp_hc5f5801f__0) 
                               << 0xfU) | ((((IData)(
                                                     ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                      >> 2U)) 
                                             > vlSelf->__VdfgTmp_h20c39b22__0) 
                                            << 0xeU) 
                                           | ((((IData)(
                                                        ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                         >> 2U)) 
                                                > vlSelf->__VdfgTmp_h5ee5889e__0) 
                                               << 0xdU) 
                                              | ((((IData)(
                                                           ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                            >> 2U)) 
                                                   > vlSelf->__VdfgTmp_h39af6969__0) 
                                                  << 0xcU) 
                                                 | ((((IData)(
                                                              ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                               >> 2U)) 
                                                      > vlSelf->__VdfgTmp_h88b1d18d__0) 
                                                     << 0xbU) 
                                                    | ((((IData)(
                                                                 ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                  >> 2U)) 
                                                         > vlSelf->__VdfgTmp_h46eed216__0) 
                                                        << 0xaU) 
                                                       | ((((IData)(
                                                                    ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                     >> 2U)) 
                                                            > vlSelf->__VdfgTmp_hc7521f3e__0) 
                                                           << 9U) 
                                                          | ((((IData)(
                                                                       ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                        >> 2U)) 
                                                               > vlSelf->__VdfgTmp_h21170832__0) 
                                                              << 8U) 
                                                             | ((((IData)(
                                                                          ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                           >> 2U)) 
                                                                  > vlSelf->__VdfgTmp_h9c079945__0) 
                                                                 << 7U) 
                                                                | ((((IData)(
                                                                             ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                              >> 2U)) 
                                                                     > vlSelf->__VdfgTmp_h3d093ef8__0) 
                                                                    << 6U) 
                                                                   | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                        > vlSelf->__VdfgTmp_h022b9d1b__0) 
                                                                       << 5U) 
                                                                      | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                           > vlSelf->__VdfgTmp_h548998df__0) 
                                                                          << 4U) 
                                                                         | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                              > vlSelf->__VdfgTmp_h1411aa6b__0) 
                                                                             << 3U) 
                                                                            | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                > vlSelf->__VdfgTmp_hbbb3ff22__0) 
                                                                                << 2U) 
                                                                               | ((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                > vlSelf->__VdfgTmp_h29ced6b7__0) 
                                                                                << 1U) 
                                                                                | ((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                > vlSelf->__VdfgTmp_h9507a9ab__0))))))))))))))));
    __PVT__region_match_eq = (((((IData)(((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                          >> 2U)) & vlSelf->__VdfgTmp_hdfddb7f1__0) 
                                == (vlSelf->__VdfgTmp_hc5f5801f__0 
                                    & vlSelf->__VdfgTmp_hdfddb7f1__0)) 
                               << 0xfU) | (((((IData)(
                                                      ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                       >> 2U)) 
                                              & vlSelf->__VdfgTmp_h80dc378a__0) 
                                             == (vlSelf->__VdfgTmp_h20c39b22__0 
                                                 & vlSelf->__VdfgTmp_h80dc378a__0)) 
                                            << 0xeU) 
                                           | (((((IData)(
                                                         ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                          >> 2U)) 
                                                 & vlSelf->__VdfgTmp_h5173a24b__0) 
                                                == 
                                                (vlSelf->__VdfgTmp_h5ee5889e__0 
                                                 & vlSelf->__VdfgTmp_h5173a24b__0)) 
                                               << 0xdU) 
                                              | (((((IData)(
                                                            ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                             >> 2U)) 
                                                    & vlSelf->__VdfgTmp_h32cd929a__0) 
                                                   == 
                                                   (vlSelf->__VdfgTmp_h39af6969__0 
                                                    & vlSelf->__VdfgTmp_h32cd929a__0)) 
                                                  << 0xcU) 
                                                 | (((((IData)(
                                                               ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                >> 2U)) 
                                                       & vlSelf->__VdfgTmp_h19935004__0) 
                                                      == 
                                                      (vlSelf->__VdfgTmp_h88b1d18d__0 
                                                       & vlSelf->__VdfgTmp_h19935004__0)) 
                                                     << 0xbU) 
                                                    | (((((IData)(
                                                                  ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                   >> 2U)) 
                                                          & vlSelf->__VdfgTmp_h47e7bb97__0) 
                                                         == 
                                                         (vlSelf->__VdfgTmp_h46eed216__0 
                                                          & vlSelf->__VdfgTmp_h47e7bb97__0)) 
                                                        << 0xaU) 
                                                       | (((((IData)(
                                                                     ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                      >> 2U)) 
                                                             & vlSelf->__VdfgTmp_hd1071dc7__0) 
                                                            == 
                                                            (vlSelf->__VdfgTmp_hc7521f3e__0 
                                                             & vlSelf->__VdfgTmp_hd1071dc7__0)) 
                                                           << 9U) 
                                                          | (((((IData)(
                                                                        ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                         >> 2U)) 
                                                                & vlSelf->__VdfgTmp_h0ab821ce__0) 
                                                               == 
                                                               (vlSelf->__VdfgTmp_h21170832__0 
                                                                & vlSelf->__VdfgTmp_h0ab821ce__0)) 
                                                              << 8U) 
                                                             | (((((IData)(
                                                                           ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                            >> 2U)) 
                                                                   & vlSelf->__VdfgTmp_ha20284c8__0) 
                                                                  == 
                                                                  (vlSelf->__VdfgTmp_h9c079945__0 
                                                                   & vlSelf->__VdfgTmp_ha20284c8__0)) 
                                                                 << 7U) 
                                                                | (((((IData)(
                                                                              ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                               >> 2U)) 
                                                                      & vlSelf->__VdfgTmp_h4c552959__0) 
                                                                     == 
                                                                     (vlSelf->__VdfgTmp_h3d093ef8__0 
                                                                      & vlSelf->__VdfgTmp_h4c552959__0)) 
                                                                    << 6U) 
                                                                   | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                         & vlSelf->__VdfgTmp_h07c516e0__0) 
                                                                        == 
                                                                        (vlSelf->__VdfgTmp_h022b9d1b__0 
                                                                         & vlSelf->__VdfgTmp_h07c516e0__0)) 
                                                                       << 5U) 
                                                                      | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                            & vlSelf->__VdfgTmp_heb0ae4d2__0) 
                                                                           == 
                                                                           (vlSelf->__VdfgTmp_h548998df__0 
                                                                            & vlSelf->__VdfgTmp_heb0ae4d2__0)) 
                                                                          << 4U) 
                                                                         | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                               & vlSelf->__VdfgTmp_hcb6b3920__0) 
                                                                              == 
                                                                              (vlSelf->__VdfgTmp_h1411aa6b__0 
                                                                               & vlSelf->__VdfgTmp_hcb6b3920__0)) 
                                                                             << 3U) 
                                                                            | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                & vlSelf->__VdfgTmp_ha1b73c99__0) 
                                                                                == 
                                                                                (vlSelf->__VdfgTmp_hbbb3ff22__0 
                                                                                & vlSelf->__VdfgTmp_ha1b73c99__0)) 
                                                                                << 2U) 
                                                                               | (((((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                & vlSelf->__VdfgTmp_h48688b71__0) 
                                                                                == 
                                                                                (vlSelf->__VdfgTmp_h29ced6b7__0 
                                                                                & vlSelf->__VdfgTmp_h48688b71__0)) 
                                                                                << 1U) 
                                                                                | (((IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                                                                >> 2U)) 
                                                                                & vlSelf->__VdfgTmp_h4df2fd54__0) 
                                                                                == 
                                                                                (vlSelf->__VdfgTmp_h9507a9ab__0 
                                                                                & vlSelf->__VdfgTmp_h4df2fd54__0)))))))))))))))));
    vlSelf->__PVT__region_match_all = (0xfffeU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfffeU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (1U & ((0x10U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                 ? (IData)(__PVT__region_match_eq)
                                                 : 
                                                ((1U 
                                                  & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                     >> 3U)) 
                                                 && (1U 
                                                     & (((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)))))));
    vlSelf->__PVT__region_match_all = (0xfffdU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfffdU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (2U & (((0x1000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                  ? 
                                                 ((0x800U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                   ? 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 1U)
                                                   : 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 1U))
                                                  : 
                                                 ((1U 
                                                   & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                      >> 0xbU)) 
                                                  && (1U 
                                                      & ((((IData)(__PVT__region_match_eq) 
                                                           | (IData)(__PVT__region_match_gt)) 
                                                          & (IData)(__PVT__region_match_lt)) 
                                                         >> 1U)))) 
                                                << 1U)));
    vlSelf->__PVT__region_match_all = (0xfffbU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfffbU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (4U & (((0x100000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                  ? 
                                                 ((0x80000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                   ? 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 2U))
                                                  : 
                                                 ((1U 
                                                   & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                      >> 0x13U)) 
                                                  && (1U 
                                                      & ((((IData)(__PVT__region_match_eq) 
                                                           | (IData)(__PVT__region_match_gt)) 
                                                          & (IData)(__PVT__region_match_lt)) 
                                                         >> 2U)))) 
                                                << 2U)));
    vlSelf->__PVT__region_match_all = (0xfff7U & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfff7U & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (8U & (((0x10000000U 
                                                  & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                  ? 
                                                 ((0x8000000U 
                                                   & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U])
                                                   ? 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 3U)
                                                   : 
                                                  ((IData)(__PVT__region_match_eq) 
                                                   >> 3U))
                                                  : 
                                                 ((1U 
                                                   & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x45U] 
                                                      >> 0x1bU)) 
                                                  && (1U 
                                                      & ((((IData)(__PVT__region_match_eq) 
                                                           | (IData)(__PVT__region_match_gt)) 
                                                          & (IData)(__PVT__region_match_lt)) 
                                                         >> 3U)))) 
                                                << 3U)));
    vlSelf->__PVT__region_match_all = (0xffefU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xffefU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x10U & (
                                                   ((0x10U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 4U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 4U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 3U)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 4U)))) 
                                                   << 4U)));
    vlSelf->__PVT__region_match_all = (0xffdfU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xffdfU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x20U & (
                                                   ((0x1000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((0x800U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 5U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 0xbU)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 5U)))) 
                                                   << 5U)));
    vlSelf->__PVT__region_match_all = (0xffbfU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xffbfU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x40U & (
                                                   ((0x100000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((0x80000U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 6U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 6U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 0x13U)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 6U)))) 
                                                   << 6U)));
    vlSelf->__PVT__region_match_all = (0xff7fU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xff7fU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x80U & (
                                                   ((0x10000000U 
                                                     & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U])
                                                      ? 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 7U)
                                                      : 
                                                     ((IData)(__PVT__region_match_eq) 
                                                      >> 7U))
                                                     : 
                                                    ((1U 
                                                      & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x46U] 
                                                         >> 0x1bU)) 
                                                     && (1U 
                                                         & ((((IData)(__PVT__region_match_eq) 
                                                              | (IData)(__PVT__region_match_gt)) 
                                                             & (IData)(__PVT__region_match_lt)) 
                                                            >> 7U)))) 
                                                   << 7U)));
    vlSelf->__PVT__region_match_all = (0xfeffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfeffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x100U & 
                                          (((0x10U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((8U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 8U)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 8U))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 3U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 8U)))) 
                                           << 8U)));
    vlSelf->__PVT__region_match_all = (0xfdffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfdffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x200U & 
                                          (((0x1000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((0x800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 9U)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 9U))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0xbU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 9U)))) 
                                           << 9U)));
    vlSelf->__PVT__region_match_all = (0xfbffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xfbffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x400U & 
                                          (((0x100000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((0x80000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xaU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xaU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x13U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xaU)))) 
                                           << 0xaU)));
    vlSelf->__PVT__region_match_all = (0xf7ffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xf7ffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x800U & 
                                          (((0x10000000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                             ? ((0x8000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xbU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xbU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x47U] 
                                                    >> 0x1bU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xbU)))) 
                                           << 0xbU)));
    vlSelf->__PVT__region_match_all = (0xefffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xefffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x1000U & 
                                          (((0x10U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((8U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xcU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xcU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 3U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xcU)))) 
                                           << 0xcU)));
    vlSelf->__PVT__region_match_all = (0xdfffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xdfffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x2000U & 
                                          (((0x1000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((0x800U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xdU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xdU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0xbU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xdU)))) 
                                           << 0xdU)));
    vlSelf->__PVT__region_match_all = (0xbfffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0xbfffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x4000U & 
                                          (((0x100000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((0x80000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xeU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xeU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x13U)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xeU)))) 
                                           << 0xeU)));
    vlSelf->__PVT__region_match_all = (0x7fffU & (IData)(vlSelf->__PVT__region_match_all));
    vlSelf->__PVT__region_match_all = ((0x7fffU & (IData)(vlSelf->__PVT__region_match_all)) 
                                       | (0x8000U & 
                                          (((0x10000000U 
                                             & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                             ? ((0x8000000U 
                                                 & vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U])
                                                 ? 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xfU)
                                                 : 
                                                ((IData)(__PVT__region_match_eq) 
                                                 >> 0xfU))
                                             : ((1U 
                                                 & (vlSymsp->TOP.CSoC_top__DOT__u_core__DOT__csr_pmp[0x48U] 
                                                    >> 0x1bU)) 
                                                && (1U 
                                                    & ((((IData)(__PVT__region_match_eq) 
                                                         | (IData)(__PVT__region_match_gt)) 
                                                        & (IData)(__PVT__region_match_lt)) 
                                                       >> 0xfU)))) 
                                           << 0xfU)));
}

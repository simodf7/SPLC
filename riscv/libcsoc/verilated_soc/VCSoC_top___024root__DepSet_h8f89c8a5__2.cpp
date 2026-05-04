// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top___024root.h"

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__4(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->CSoC_top__DOT__host_err[0U] = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_resp))) 
                                           && ((8U 
                                                >= (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp)) 
                                               && vlSelf->CSoC_top__DOT__device_err
                                               [vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp]));
    vlSelf->CSoC_top__DOT__host_err[1U] = ((IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_resp) 
                                           && ((8U 
                                                >= (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp)) 
                                               && vlSelf->CSoC_top__DOT__device_err
                                               [vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp]));
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_current_byte_d 
        = vlSelf->CSoC_top__DOT__u_uart__DOT__tx_current_byte_q;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q)))) {
            vlSelf->CSoC_top__DOT__u_uart__DOT__tx_current_byte_d 
                = (0x7fU & ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_current_byte_q) 
                            >> 1U));
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q))) {
        vlSelf->CSoC_top__DOT__u_uart__DOT__tx_current_byte_d 
            = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)
                ? 0U : (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                                   ? 0U : (vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                           (((IData)(7U) 
                                             + (0x3ffU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))) 
                                 | (vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                    (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U) 
                                              >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))));
    }
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
        = vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
                = (0xfeU & ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q) 
                            << 1U));
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
            = ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)
                ? 0U : ((0x3f7U >= (0x3ffU & VL_SHIFTL_III(10,10,32, 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                         ? (0xffU & (((0U == (0x1fU 
                                              & VL_SHIFTL_III(10,10,32, 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                                       ? 0U : (vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                               (((IData)(7U) 
                                                 + 
                                                 (0x3ffU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))) 
                                     | (vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                        (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U) 
                                                  >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(10,10,32, 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))))
                         : 0U));
    }
    if (vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_resp) {
        vlSelf->CSoC_top__DOT__host_rdata[0U] = 0U;
        vlSelf->CSoC_top__DOT__host_rdata[1U] = ((8U 
                                                  >= (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp))
                                                  ? 
                                                 vlSelf->CSoC_top__DOT__device_rdata
                                                 [vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp]
                                                  : 0U);
    } else {
        vlSelf->CSoC_top__DOT__host_rdata[0U] = ((8U 
                                                  >= (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp))
                                                  ? 
                                                 vlSelf->CSoC_top__DOT__device_rdata
                                                 [vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp]
                                                  : 0U);
        vlSelf->CSoC_top__DOT__host_rdata[1U] = 0U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror = 0U;
    if ((4U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlSelf->CSoC_top__DOT__host_rvalid
                    [1U]) {
                    if (vlSelf->CSoC_top__DOT__host_err
                        [1U]) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror = 2U;
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelf->CSoC_top__DOT__host_rvalid[1U]) {
                if (vlSelf->CSoC_top__DOT__host_err
                    [1U]) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror = 2U;
                }
            }
        }
    }
    if (((2U < (7U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror = 4U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror_valid = 0U;
    if ((4U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlSelf->CSoC_top__DOT__host_rvalid
                    [1U]) {
                    if (vlSelf->CSoC_top__DOT__host_err
                        [1U]) {
                        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelf->CSoC_top__DOT__host_rvalid[1U]) {
                if (vlSelf->CSoC_top__DOT__host_err
                    [1U]) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
                }
            }
        }
    }
    if (((2U < (7U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
    }
    if (((0U != ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                 & (~ ((IData)(0xffffffffU) << (7U 
                                                & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                   >> 0x11U)))))) 
         & (0U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror = 3U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror_valid = 1U;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__6(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
        = ((QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__core_instr_sel_dbg)
                             ? ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
                                 ? (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                                            >> 0x20U))
                                 : (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux))
                             : vlSelf->CSoC_top__DOT__mem_instr_rdata))) 
           << 8U);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
        = ((0xfffffffffcULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp) 
           | (IData)((IData)((((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rvalidpar_err_resp) 
                                 | ((8U >= ((IData)(1U) 
                                            + (0xfU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                    && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                                              >> ((IData)(1U) 
                                                  + 
                                                  (0xfU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q)))))))) 
                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp)) 
                               << 1U) | ((8U >= ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                         && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                                                   >> 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q)))))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0)
            ? ((0x7dU >= ((IData)(0xaU) + (0x7fU & 
                                           ((IData)(0x2aU) 
                                            * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                ? (((0U == (0x1fU & ((IData)(0xaU) 
                                     + (0x7fU & ((IData)(0x2aU) 
                                                 * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                     ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (((IData)(0x29U) + (0x7fU 
                                                 & ((IData)(0x2aU) 
                                                    * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0xaU) 
                                                + (0x7fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                   | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                      (((IData)(0xaU) + (0x7fU & ((IData)(0x2aU) 
                                                  * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                       >> 5U)] >> (0x1fU & ((IData)(0xaU) 
                                            + (0x7fU 
                                               & ((IData)(0x2aU) 
                                                  * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                : 0U) : (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                 >> 8U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)) 
           & (3U != (3U & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if)) 
           & (3U != (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                           >> 0x10U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr;
    if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                ? (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))
                : (2U | (0xfffffffcU & ((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
    } else {
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
                = ((2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                    ? (3U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                    : 0U);
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)
                ? (2U | (0xfffffffcU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))
                : (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))));
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__10(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible 
        = (1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                    | (IData)((4U == (0x804U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e1fb522__0) 
           & (IData)((((0xc000U == (0xc000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])) 
                       & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                             >> 0xfU))) & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e1fb522__0) 
           & (IData)((((0U == (0xc000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])) 
                       & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                             >> 0xcU))) & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9cc9d2cc__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & ((vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
               >> 0xfU) & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                           & (0xc000U == (0xc000U & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hb2988707__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & ((vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
               >> 0xcU) & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                           & (0U == (0xc000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xffffff0fU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (0xfffffff0U & ((0x80U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                        << 7U) | (0xffffff80U 
                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                                                     << 5U)))) 
                             | ((0x40U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                          << 6U)) | 
                                ((0x20U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                           << 4U)) 
                                 | (0x10U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                             << 2U)))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9cc9d2cc__0) 
              | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hb2988707__0) 
                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_he3dfd21d__0))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__14(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we = 0U;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0x10U)))) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 1U;
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
        }
        if ((0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x100U 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we = 1U;
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
        }
    }
    vlSelf->__VdfgTmp_h1a660b63__0 = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we) 
                                      | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__16(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb 
        = (1U & (((((((0U != (0x16010000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])) 
                      | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                         >> 2U)) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e23c627__0)) 
                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0)) 
                   | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0)) 
                  | (0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb))) 
                 & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                    >> 0x11U)));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__19(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hf07770e7__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_interruptible) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
              & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h655d388e__0) 
                 & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hf07770e7__0) 
              & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
                     | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q))) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd1a451ee__0))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__24(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__24\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_hb4d880cc_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h7704201a_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h9e4cd301_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h4e9589e2_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h4d427c12_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h684773c9_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_hfa0236c1_0;
extern const VlUnpacked<CData/*3:0*/, 32> VCSoC_top__ConstPool__TABLE_h27456227_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_hc89e3c61_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h8ca1851a_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_hc30dfd60_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_ha5501e12_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__54(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__54\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_ir;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_ir = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_ir;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_ir = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset = 0;
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*4:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = (((IData)(vlSelf->dtm_tms_i) << 4U) 
                     | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tap_state_q));
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset 
        = VCSoC_top__ConstPool__TABLE_hb4d880cc_0[__Vtableidx11];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr 
        = VCSoC_top__ConstPool__TABLE_h7704201a_0[__Vtableidx11];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr 
        = VCSoC_top__ConstPool__TABLE_h9e4cd301_0[__Vtableidx11];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr 
        = VCSoC_top__ConstPool__TABLE_h4e9589e2_0[__Vtableidx11];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_ir 
        = VCSoC_top__ConstPool__TABLE_h4d427c12_0[__Vtableidx11];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_ir 
        = VCSoC_top__ConstPool__TABLE_h684773c9_0[__Vtableidx11];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_ir 
        = VCSoC_top__ConstPool__TABLE_hfa0236c1_0[__Vtableidx11];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tap_state_d 
        = VCSoC_top__ConstPool__TABLE_h27456227_0[__Vtableidx11];
    if (vlSelf->dtm_trst_ni) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
    } else {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q = 0xdb3U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q = 0ULL;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = 1U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_q 
        = ((IData)(vlSelf->dtm_trst_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
            = (((IData)(vlSelf->dtm_td_i) << 4U) | 
               (0xfU & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q) 
                        >> 1U)));
    }
    if (CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_ir) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 5U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    if (CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_ir) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    }
    __Vtableidx10 = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_select 
        = VCSoC_top__ConstPool__TABLE_hc89e3c61_0[__Vtableidx10];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select 
        = VCSoC_top__ConstPool__TABLE_h8ca1851a_0[__Vtableidx10];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = VCSoC_top__ConstPool__TABLE_hc30dfd60_0[__Vtableidx10];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = VCSoC_top__ConstPool__TABLE_ha5501e12_0[__Vtableidx10];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0xdb3U;
        }
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_q;
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    } else {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    }
    if (CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = 1U;
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (((IData)(vlSelf->dtm_td_i) << 0x1fU) 
                   | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                      >> 1U));
        }
    }
    if (CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0xdb3U;
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d 
                = vlSelf->dtm_td_i;
        }
    }
    if (CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d 
                = (0x1071U | ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q) 
                              << 0xaU));
        }
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d 
                = (((IData)(vlSelf->dtm_td_i) << 0x1fU) 
                   | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q 
                      >> 1U));
        }
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear 
        = ((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) 
           | ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select) 
              & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr) 
                 & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q 
                    >> 0x11U))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_d = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q)))) {
                if ((((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_select) 
                      & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q)))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_d 
                        = (0x7fU & (IData)((vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q 
                                            >> 0x22U)));
                }
            }
        }
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear)))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_valid = 1U;
                }
            } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_valid = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__55(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__55\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
              << 0x1dU));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)((0xc0000000U == (0xc0000000U 
                                       & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))) 
              << 0x17U));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n)
            ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)
            : 0U);
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__26(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__26\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata[__Vilp] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__28(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__28\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i) 
              & ((((8U & (VL_REDXOR_32((0xffU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                         >> 0x20U)))) 
                          << 3U)) | ((4U & (VL_REDXOR_32(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                                     >> 0x18U)))) 
                                            << 2U)) 
                                     | ((2U & (VL_REDXOR_32(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                                        >> 0x10U)))) 
                                               << 1U)) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                                         >> 8U)))))))) 
                  != (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                      >> 2U)))) | (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
                                                               >> 6U)))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__29(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__29\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb 
        = ((0U != (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                         >> 0x19U))) ? 1U : ((0x10000000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])
                                              ? 0x19U
                                              : ((4U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[1U])
                                                  ? 0x18U
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e23c627__0)
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl))
                                                     ? 0xbU
                                                     : 8U)
                                                    : 
                                                   ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0)
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb))
                                                       ? 7U
                                                       : 5U))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__30(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__30\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q 
           & vlSelf->CSoC_top__DOT__u_core__DOT__mie);
    vlSelf->CSoC_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                  ? 0x1eU : ((0x20000000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x10U
                                                              : 
                                                             ((0x800U 
                                                               & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0xbU
                                                               : 
                                                              ((8U 
                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 3U
                                                                : 7U))))))))))))))))));
}

extern const VlUnpacked<CData/*1:0*/, 16> VCSoC_top__ConstPool__TABLE_h794efc0c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VCSoC_top__ConstPool__TABLE_h2ed44cc5_0;
extern const VlUnpacked<CData/*0:0*/, 16> VCSoC_top__ConstPool__TABLE_hc22c295c_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__31(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__31\n"); );
    // Init
    CData/*3:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    __Vtableidx23 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h794efc0c_0[__Vtableidx23];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = VCSoC_top__ConstPool__TABLE_h2ed44cc5_0[__Vtableidx23];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = VCSoC_top__ConstPool__TABLE_hc22c295c_0[__Vtableidx23];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__32(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__32\n"); );
    // Init
    CData/*3:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h794efc0c_0[__Vtableidx19];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = VCSoC_top__ConstPool__TABLE_h2ed44cc5_0[__Vtableidx19];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = VCSoC_top__ConstPool__TABLE_hc22c295c_0[__Vtableidx19];
}

extern const VlUnpacked<CData/*1:0*/, 256> VCSoC_top__ConstPool__TABLE_h73f7fa79_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCSoC_top__ConstPool__TABLE_h386f2eab_0;
extern const VlUnpacked<CData/*1:0*/, 256> VCSoC_top__ConstPool__TABLE_h4028bd74_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCSoC_top__ConstPool__TABLE_hd1823543_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__33(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__33\n"); );
    // Init
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx18 = ((0x80U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h73f7fa79_0[__Vtableidx18];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = VCSoC_top__ConstPool__TABLE_h386f2eab_0[__Vtableidx18];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = VCSoC_top__ConstPool__TABLE_h4028bd74_0[__Vtableidx18];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = VCSoC_top__ConstPool__TABLE_hd1823543_0[__Vtableidx18];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__34(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__34\n"); );
    // Init
    CData/*7:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    __Vtableidx22 = ((0x80U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h73f7fa79_0[__Vtableidx22];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = VCSoC_top__ConstPool__TABLE_h386f2eab_0[__Vtableidx22];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = VCSoC_top__ConstPool__TABLE_h4028bd74_0[__Vtableidx22];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = VCSoC_top__ConstPool__TABLE_hd1823543_0[__Vtableidx22];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__35(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__35\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__36(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__36\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__irq_wu_ctrl 
        = (0U != (vlSelf->CSoC_top__DOT__core_irq & vlSelf->CSoC_top__DOT__u_core__DOT__mie));
}

extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h9d96fb61_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_ha69b166b_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h2ba0869e_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__37(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__37\n"); );
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = VCSoC_top__ConstPool__TABLE_h9d96fb61_0[__Vtableidx13];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = VCSoC_top__ConstPool__TABLE_ha69b166b_0[__Vtableidx13];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = VCSoC_top__ConstPool__TABLE_h2ba0869e_0[__Vtableidx13];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__38(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__38\n"); );
    // Init
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    __Vtableidx25 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = VCSoC_top__ConstPool__TABLE_h9d96fb61_0[__Vtableidx25];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = VCSoC_top__ConstPool__TABLE_ha69b166b_0[__Vtableidx25];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = VCSoC_top__ConstPool__TABLE_h2ba0869e_0[__Vtableidx25];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__40(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__40\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[0U] 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_rdata 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h1a660b63__0));
    vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[1U] 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_rdata 
            >> 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                         << 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[2U] 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
            >> 0x1fU) | ((IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q)))) 
                         << 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[3U] 
        = (((IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q)) 
                      << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q)))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q))) 
                                  >> 0x20U)) << 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[4U] 
        = ((IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q)) 
                      << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q))) 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->CSoC_top__DOT__u_core__DOT__branch_target_ex 
        = ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[0U])
            ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_cmp_result)
                ? ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                    << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                              >> 0x17U)) : ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                             << 8U) 
                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                                               >> 0x18U)))
            : ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                          >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__branch_decision_ex 
        = ((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[0U] 
                  >> 1U)) || (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_cmp_result));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_in_ex) 
           & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__branch_decision_ex)));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__56(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__56\n"); );
    // Body
    vlSelf->CSoC_top__DOT__rst_core_n = ((~ (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U)) 
                                         & (IData)(vlSelf->rst_sys_ni));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__45(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__45\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b92ddbf__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [0U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [0U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64cea0b4__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [0xfU] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                          [0xfU] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h632373b8__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [1U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [1U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b93374d__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [2U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [2U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a26c866__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [3U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [3U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b91e9ba__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [4U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [4U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a2dfa61__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [5U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [5U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4fe6f5f5__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [6U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [6U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff9476e__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [7U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [7U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89de3bb4__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [8U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [8U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff87b8f__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [9U] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                        [9U] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff556d0__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [0xaU] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                          [0xaU] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h49618b27__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [0xbU] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                          [0xbU] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89b02a07__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [0xcU] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                          [0xcU] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89aa4ab0__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [0xdU] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                          [0xdU] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64725447__0 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                 & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                        [0xeU] >> 6U)) | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                          [0xeU] >> 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64cea0b4__0) 
            << 0xfU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64725447__0) 
                         << 0xeU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89aa4ab0__0) 
                                      << 0xdU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89b02a07__0) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h49618b27__0) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff556d0__0) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff87b8f__0) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89de3bb4__0) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff9476e__0) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4fe6f5f5__0) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a2dfa61__0) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b91e9ba__0) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a26c866__0) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b93374d__0) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h632373b8__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b92ddbf__0))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__46(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__46\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp 
        = ((((~ ((8U >= (0xfU & ((IData)(3U) * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q)))) 
                 && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                           >> (0xfU & ((IData)(3U) 
                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q))))))) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0)) 
            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp) 
               & (((8U & (VL_REDXOR_32((0xffU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                         >> 0x20U)))) 
                          << 3U)) | ((4U & (VL_REDXOR_32(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                                     >> 0x18U)))) 
                                            << 2U)) 
                                     | ((2U & (VL_REDXOR_32(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                                        >> 0x10U)))) 
                                               << 1U)) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                                         >> 8U)))))))) 
                  != (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                      >> 2U)))))) | 
           ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0) 
            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp) 
               & ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                 >> 7U))) != (1U & (IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp 
                                                            >> 6U)))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__48(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__48\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__irq_req_ctrl 
        = ((0U != vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              | (3U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__50(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__50\n"); );
    // Init
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    __Vtableidx21 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = VCSoC_top__ConstPool__TABLE_h9d96fb61_0[__Vtableidx21];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = VCSoC_top__ConstPool__TABLE_ha69b166b_0[__Vtableidx21];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = VCSoC_top__ConstPool__TABLE_h2ba0869e_0[__Vtableidx21];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__51(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__51\n"); );
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = VCSoC_top__ConstPool__TABLE_h9d96fb61_0[__Vtableidx17];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = VCSoC_top__ConstPool__TABLE_ha69b166b_0[__Vtableidx17];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = VCSoC_top__ConstPool__TABLE_h2ba0869e_0[__Vtableidx17];
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__52(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__52\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
               | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__irq_wu_ctrl) 
                  | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug))) 
              << 1U));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__53(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__53\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp 
        = ((((~ ((8U >= (0xfU & ((IData)(3U) * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q)))) 
                 && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                           >> (0xfU & ((IData)(3U) 
                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q))))))) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0)) 
            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp) 
               & (((8U & (VL_REDXOR_32((0xffU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                         >> 0x21U)))) 
                          << 3U)) | ((4U & (VL_REDXOR_32(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                                     >> 0x19U)))) 
                                            << 2U)) 
                                     | ((2U & (VL_REDXOR_32(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                                        >> 0x11U)))) 
                                               << 1U)) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                                         >> 9U)))))))) 
                  != (0xfU & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                      >> 2U)))))) | 
           ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0) 
            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp) 
               & ((1U & VL_REDXOR_32((3U & (IData)(
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                    >> 7U))))) 
                  != (1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                    >> 6U)))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__55(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__55\n"); );
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
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__56(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__56\n"); );
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
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__57(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__57\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__irq_req_ctrl) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hf07770e7__0) 
              & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q)) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd1a451ee__0))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__60(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__60\n"); );
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
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__61(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__61\n"); );
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
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push 
        = ((2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
           & (IData)(vlSelf->CSoC_top__DOT__dmi_req_valid));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__62(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__62\n"); );
    // Body
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

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__64(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__64\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed = 0;
    // Body
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

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__67(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__67\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access = 0;
    QData/*48:0*/ CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl;
    CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0;
    IData/*31:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux = 0;
    IData/*31:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0;
    IData/*16:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a = 0;
    IData/*16:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h783c9ded__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h783c9ded__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f69db53__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f69db53__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78a2bbdb__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78a2bbdb__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d09d08__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d09d08__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6a4a8a__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6a4a8a__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f56cbd6__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f56cbd6__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f52a87c__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f52a87c__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78014cff__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78014cff__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d96f00__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d96f00__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c56418__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c56418__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c7cbdd__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c7cbdd__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6f4536__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6f4536__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7537718b__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7537718b__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7452ce28__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7452ce28__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h744c4f3a__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h744c4f3a__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h746a9116__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h746a9116__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75a738a5__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75a738a5__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bb9f9de__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bb9f9de__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bbee248__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bbee248__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7534c2b0__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7534c2b0__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b85b741__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b85b741__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7ba9b27a__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7ba9b27a__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7baa643c__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7baa643c__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7448f01c__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7448f01c__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7507dea0__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7507dea0__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75607f60__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75607f60__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h751e85de__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h751e85de__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b81875d__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b81875d__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b8f8bfe__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b8f8bfe__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h748dec40__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h748dec40__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__12__Vfuncout;
    __Vfunc_csr_next_value__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__12__wdata;
    __Vfunc_csr_next_value__12__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__13__Vfuncout;
    __Vfunc_csr_next_value__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__13__wdata;
    __Vfunc_csr_next_value__13__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__14__Vfuncout;
    __Vfunc_csr_next_value__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__14__wdata;
    __Vfunc_csr_next_value__14__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__15__Vfuncout;
    __Vfunc_csr_next_value__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__15__wdata;
    __Vfunc_csr_next_value__15__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__19__Vfuncout;
    __Vfunc_csr_next_value__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__19__wdata;
    __Vfunc_csr_next_value__19__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__20__Vfuncout;
    __Vfunc_csr_next_value__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__20__wdata;
    __Vfunc_csr_next_value__20__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__27__Vfuncout;
    __Vfunc_csr_next_value__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__27__wdata;
    __Vfunc_csr_next_value__27__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__28__Vfuncout;
    __Vfunc_csr_next_value__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__28__wdata;
    __Vfunc_csr_next_value__28__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__29__Vfuncout;
    __Vfunc_csr_next_value__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__29__wdata;
    __Vfunc_csr_next_value__29__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__30__Vfuncout;
    __Vfunc_csr_next_value__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__30__wdata;
    __Vfunc_csr_next_value__30__wdata = 0;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__31__Vfuncout;
    __Vfunc_mcontrol6_hit_resolve__31__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__31__current_value;
    __Vfunc_mcontrol6_hit_resolve__31__current_value = 0;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__31__next_value;
    __Vfunc_mcontrol6_hit_resolve__31__next_value = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = ((((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
               & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
              & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb))) 
             & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
            & (0U == (0x31000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]))) 
           & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                 >> 0x18U)));
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0U;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                  >> 1U) & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                               >> 0x1fU))));
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 0U;
    if ((0x800U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    }
                                } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        }
                    } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x400U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read 
                                = ((1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 3U)) || 
                                   ((1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                           >> 2U)) 
                                    || (1U & ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((1U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0xdU))
                                                   : 
                                                  (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0xdU)))
                                               : ((1U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0xdU))
                                                   : 
                                                  (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0xdU)))))));
                        } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 5U)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                }
            } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    }
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en = 0U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en = 1U;
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en = 1U;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en 
            = ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) 
               || (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = 0U;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)) 
               | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xdU)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = 0U;
    } else if ((0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
        = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
           >> 0x10U);
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 1U;
            CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh;
        } else {
            CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                   >> 0x10U);
        }
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                          >> 0x15U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 1U;
            }
            if ((0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])) {
                CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh;
        }
    }
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
        = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
           >> 0x10U);
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah;
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
               >> 0x10U);
    }
    if ((1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xdU)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
               >> 0x10U);
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
               >> 0x10U);
    } else if ((0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
               >> 0x10U);
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
               >> 0x10U);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (IData)(((0x800U == (0xfffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                             & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                             [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x801U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 1U))) << 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x802U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 2U))) << 2U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x803U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 3U))) << 3U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x804U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 4U))) << 4U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x805U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 5U))) << 5U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x806U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 6U))) << 6U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x807U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 7U))) << 7U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x808U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 8U))) << 8U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x809U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 9U))) << 9U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80aU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xaU))) << 0xaU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80bU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xbU))) << 0xbU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80cU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xcU))) << 0xcU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80dU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xdU))) << 0xdU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80eU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xeU))) << 0xeU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80fU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xfU))) << 0xfU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x810U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x10U))) << 0x10U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x811U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x11U))) << 0x11U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x812U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x12U))) << 0x12U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x813U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x13U))) << 0x13U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x814U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x14U))) << 0x14U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x815U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x15U))) << 0x15U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x816U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x16U))) << 0x16U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x817U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x17U))) << 0x17U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x818U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x18U))) << 0x18U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x819U == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x19U))) << 0x19U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81aU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1aU))) << 0x1aU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81bU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1bU))) << 0x1bU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81cU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1cU))) << 0x1cU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81dU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1dU))) << 0x1dU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81eU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1eU))) << 0x1eU));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81fU == (0xfffU & 
                                          vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1fU))) << 0x1fU));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en = 0U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en = 1U;
        }
    }
    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en = 0U;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
            >> 0x1aU) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o));
    if ((1U & (~ (IData)(vlSelf->clk_sys_i)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                   >> 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgTmp_hfbe59110__0 
        = (IData)((0U == (0x30000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            >> 6U) & (0U == (0x42000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
            >> 2U) & ((2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                      & ((~ ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                                 >> 1U)) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q))) 
                         & ((0U == vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0) 
                            | (((1U == vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0) 
                                & (0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
                               | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                                  >> 1U))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
        = (0x1fffffffffeffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
        if ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                } else if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                } else if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0U == (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                          >> 0x13U)))) {
                            if ((0U == ((0x3e0U & (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x11U)) 
                                        | (0x1fU & 
                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                            >> 0xeU))))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x200ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0U == (0xfffU 
                                               & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   << 5U) 
                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                     >> 0x1bU))))
                                        ? (0x20ULL 
                                           | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                        : ((1U == (0xfffU 
                                                   & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       << 5U) 
                                                      | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                         >> 0x1bU))))
                                            ? (0x40ULL 
                                               | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     << 5U) 
                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                       >> 0x1bU))))
                                                ? (
                                                   (1U 
                                                    & ((0x18U 
                                                        != 
                                                        (0x18U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])) 
                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                          >> 0xdU)))
                                                    ? 0x9f510000100ULL
                                                    : 
                                                   (4ULL 
                                                    | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                : (
                                                   (0x7b2U 
                                                    == 
                                                    (0xfffU 
                                                     & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         << 5U) 
                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                           >> 0x1bU))))
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])
                                                     ? 
                                                    (0x80ULL 
                                                     | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                                     : 0x9f510000100ULL)
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                          << 5U) 
                                                         | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                            >> 0x1bU))))
                                                     ? 
                                                    ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0x18U 
                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])) 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__mstatus 
                                                                 >> 0x15U)))
                                                      ? 0x9f510000100ULL
                                                      : 
                                                     ((0x1fffffffffffdULL 
                                                       & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                                                              >> 7U))))) 
                                                         << 1U)))
                                                     : 
                                                    ((0x8c0U 
                                                      == 
                                                      (0xfffU 
                                                       & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                           << 5U) 
                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                             >> 0x1bU))))
                                                      ? 
                                                     ((IData)(
                                                              ((0U 
                                                                == 
                                                                (0x18U 
                                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])) 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__mstatus 
                                                                  >> 0x15U)))
                                                       ? 0x9f510000100ULL
                                                       : 
                                                      ((0x1fffffffffffeULL 
                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                       | (IData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                                                              >> 7U)))))))
                                                      : 0x9f510000100ULL))))));
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x60000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            if ((0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x4000000000ULL 
                                       | (0x1ff9fffffffffULL 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x80000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x1ff9fffffffffULL 
                                       & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            }
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x800000000ULL | 
                                   (0x1ffe7ffffffffULL 
                                    & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1fffe3fffffffULL 
                                   & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = ((1U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                 >> 0x13U)))
                                    ? (0x8000ULL | 
                                       (0x1fffffffe7fffULL 
                                        & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                    : ((2U == (3U & 
                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                >> 0x13U)))
                                        ? ((0x1fffffffe7fffULL 
                                            & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                           | ((QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                    >> 0x16U)))
                                                                ? 0U
                                                                : 2U))) 
                                              << 0xfU))
                                        : ((3U == (3U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 0x13U)))
                                            ? ((0x1fffffffe7fffULL 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                               | ((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                        >> 0x16U)))
                                                                    ? 0U
                                                                    : 3U))) 
                                                  << 0xfU))
                                            : 0x9f510000100ULL)));
                            if ((((0xbf9U == (0xfffU 
                                              & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  << 5U) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 0x1bU)))) 
                                  | (0xbfaU == (0xfffU 
                                                & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    << 5U) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 0x1bU))))) 
                                 | (0xbfcU == (0xfffU 
                                               & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   << 5U) 
                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                     >> 0x1bU)))))) {
                                if ((1U == (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                  >> 0x13U)))) {
                                    if ((0U == (0x1fU 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x16U)))) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                    }
                                } else {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                                }
                            }
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1000000000000ULL 
                                   | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x400000000000ULL 
                                   | (0x19fffffffffffULL 
                                      & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x2800000000ULL 
                                   | (0x1ff87ffffffffULL 
                                      & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0xc0000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1e07fffffffffULL 
                                   & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x40000ULL | (0x1ffffffe3ffffULL 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = ((0x1ffffcfffffffULL 
                                    & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                   | ((QData)((IData)(
                                                      ((0x800000U 
                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])
                                                        ? 0U
                                                        : 1U))) 
                                      << 0x1cU));
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0U != (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                          >> 0x13U)))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1000000000000ULL 
                                   | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x600000000000ULL 
                                   | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x2800000000ULL 
                                   | (0x1ff87ffffffffULL 
                                      & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0xc0000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1e07fffffffffULL 
                                   & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0xc0000ULL | (0x1ffffffe3ffffULL 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x20000000ULL | 
                                   (0x1ffffcfffffffULL 
                                    & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x1800000000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x200000000ULL | (0x1ff81ffffffffULL 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x180000ULL | (0x1ffffffe3ffffULL 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x30000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                            ? ((0x1e07fffffffffULL 
                                & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                               | ((QData)((IData)((
                                                   (0x100000U 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                    ? 
                                                   ((0x80000U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                     ? 0x17U
                                                     : 0x16U)
                                                    : 
                                                   ((0x80000U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                     ? 0x1dU
                                                     : 0x1cU)))) 
                                  << 0x27U)) : ((0x100000U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                 ? 0x9f510000100ULL
                                                 : 
                                                ((0x1e07fffffffffULL 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                 | ((QData)((IData)(
                                                                    ((0x80000U 
                                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                                      ? 0x11U
                                                                      : 0x10U))) 
                                                    << 0x27U))));
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        }
    } else if ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
        if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            } else if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x1000000000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x4800000000ULL | (0x1ff87ffffffffULL 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x180000000ULL | (0x1fffe3fffffffULL 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x1e07fffffffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x40000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if (((3U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                       >> 5U))) | (2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       >> 5U))))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x1000000000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x1ff87ffffffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0xc0000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                      >> 3U)))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x100000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        }
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (((((((((0U == ((0x1f8U 
                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  << 3U)) 
                                              | (7U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 0x13U)))) 
                                      | (0x100U == 
                                         ((0x1f8U & 
                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            << 3U)) 
                                          | (7U & (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U))))) 
                                     | (2U == ((0x1f8U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                     >> 0x13U))))) 
                                    | (3U == ((0x1f8U 
                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  << 3U)) 
                                              | (7U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 0x13U))))) 
                                   | (4U == ((0x1f8U 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 << 3U)) 
                                             | (7U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U))))) 
                                  | (6U == ((0x1f8U 
                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                << 3U)) 
                                            | (7U & 
                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                >> 0x13U))))) 
                                 | (7U == ((0x1f8U 
                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                               << 3U)) 
                                           | (7U & 
                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                               >> 0x13U))))) 
                                | (1U == ((0x1f8U & 
                                           (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            << 3U)) 
                                          | (7U & (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U)))))
                                ? ((0x1e07fffffffffULL 
                                    & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                   | ((QData)((IData)(
                                                      ((0U 
                                                        == 
                                                        ((0x1f8U 
                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                               >> 0x13U))))
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         == 
                                                         ((0x1f8U 
                                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                              << 3U)) 
                                                          | (7U 
                                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                >> 0x13U))))
                                                         ? 8U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          ((0x1f8U 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               << 3U)) 
                                                           | (7U 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                 >> 0x13U))))
                                                          ? 0x1aU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           ((0x1f8U 
                                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                << 3U)) 
                                                            | (7U 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                  >> 0x13U))))
                                                           ? 0x13U
                                                           : 
                                                          ((4U 
                                                            == 
                                                            ((0x1f8U 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                 << 3U)) 
                                                             | (7U 
                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                   >> 0x13U))))
                                                            ? 4U
                                                            : 
                                                           ((6U 
                                                             == 
                                                             ((0x1f8U 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                  << 3U)) 
                                                              | (7U 
                                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                    >> 0x13U))))
                                                             ? 6U
                                                             : 
                                                            ((7U 
                                                              == 
                                                              ((0x1f8U 
                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                   << 3U)) 
                                                               | (7U 
                                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                     >> 0x13U))))
                                                              ? 7U
                                                              : 1U))))))))) 
                                      << 0x27U)) : 
                               ((5U == ((0x1f8U & (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   << 3U)) 
                                        | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                 >> 0x13U))))
                                 ? (0x28000000000ULL 
                                    | (0x1e07fffffffffULL 
                                       & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                 : ((0x105U == ((0x1f8U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    << 3U)) 
                                                | (7U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 0x13U))))
                                     ? (0x68000000000ULL 
                                        | (0x1e07fffffffffULL 
                                           & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                     : 0x9f510000100ULL)));
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            }
        } else if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        } else if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        } else if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x6000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x180000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x800000000ULL | (0x1ff81ffffffffULL 
                                         & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x40000000ULL | (0x1ffff3fffffffULL 
                                        & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = ((0x1ffffffffe7ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                       | ((QData)((IData)((3U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                 >> 0x13U)))) 
                          << 0xbU));
                if ((1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                            >> 0x15U) | (3U == (3U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U)))))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        }
    } else if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
        if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        } else if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x1000000000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x2800000000ULL | (0x1ff87ffffffffULL 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x80000000ULL | (0x1ffff3fffffffULL 
                                            & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x1e07fffffffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x40000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            }
        } else if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x1000000000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x800000000ULL | (0x1ff87ffffffffULL 
                                         & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x1ffff3fffffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0xc0000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                if ((0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                            ? ((0x1e07fffffffffULL 
                                & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                               | ((QData)((IData)((
                                                   (0x80000U 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                    ? 7U
                                                    : 6U))) 
                                  << 0x27U)) : ((0x80000U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U]))
                                                  ? 
                                                 (0x28000000000ULL 
                                                  | (0x1e07fffffffffULL 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U]))
                                                   ? 
                                                  (0x68000000000ULL 
                                                   | (0x1e07fffffffffULL 
                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                   : 0x9f510000100ULL))
                                                 : 
                                                (0x20000000000ULL 
                                                 | (0x1e07fffffffffULL 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))));
                } else if ((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x1e07fffffffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                           | ((QData)((IData)(((0x80000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                ? 0x13U
                                                : 0x1aU))) 
                              << 0x27U));
                } else if ((0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x8000000000ULL | (0x1e07fffffffffULL 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    if ((0U != (0x7fU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U]))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x1e07fffffffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        }
    } else if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
        if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x200ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0U == (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                         >> 0x13U)))
                            ? (0x10ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                            : ((1U == (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                             >> 0x13U)))
                                ? (8ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                : 0x9f510000100ULL));
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        }
    } else if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
    } else if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
        if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x4000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0xc0000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0xc00000000ULL | (0x1ff81ffffffffULL 
                                     & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x1ffff3fffffffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = ((0x1ffffffffe3ffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                   | ((QData)((IData)(((6U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                              >> 0x12U)) 
                                       | (1U & (~ (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x15U)))))) 
                      << 0xaU));
            if ((((7U == (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                >> 0x13U))) | (6U == 
                                               (7U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U)))) 
                 | (3U == (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                 >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x9f510000100ULL;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_mtvec_init_if 
        = (IData)(((0U == (0x78000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) 
                   & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                      >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 0U;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                  >> 0x13U) & ((~ (IData)((0U != (0x21000U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])))) 
                               & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                  >> 0x11U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
                = ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access)
                    : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q));
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
            = ((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                      >> 1U)) && (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result 
        = (0x3ffffffffULL & (VL_MULS_QQQ(34, (0x3ffffffffULL 
                                              & VL_EXTENDS_QI(34,32, 
                                                              ((0x200000U 
                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                                                >> 0x10U)))) 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                                                : 
                                                               ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                                 << 0x10U) 
                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                                                   >> 0x10U))))), 
                                         (0x3ffffffffULL 
                                          & VL_EXTENDS_QI(34,32, 
                                                          ((0x200000U 
                                                            & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                                            >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                                            : 
                                                           ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                                             << 0x10U) 
                                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                               >> 0x10U)))))) 
                             + VL_EXTENDS_QQ(34,33, vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc)));
    if (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = (((0U != ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                         << 0x10U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                      >> 0x10U))) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0));
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = 0U;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                << 0x10U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                             >> 0x10U));
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d 
            = ((IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                    << 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q;
        CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__clk = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en) 
                                               & (IData)(vlSelf->clk_sys_i));
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            >> 0x11U) & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                             >> 0xcU)) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgTmp_hfbe59110__0)));
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
            >> 0xcU) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfi_insn_id 
        = (1U & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                     >> 5U)) & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        >> 1U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfe_insn_id 
        = (1U & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                     >> 5U)) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id 
        = (((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                >> 5U)) & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                           >> 7U)) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                      >> 0x2dU));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__alu_bch 
        = (1U & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                     >> 5U)) & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        >> 0x2fU))));
    vlSelf->CSoC_top__DOT__u_core__DOT__alu_jmp_id 
        = (1U & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                     >> 5U)) & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        >> 0x2eU))));
    if ((0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])) {
        CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f510000100ULL;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel = 1U;
    } else {
        CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
            = vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel 
            = (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                             >> 0x1cU)));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_mret_insn_id 
        = (1U & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                     >> 5U)) & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        >> 2U))));
    if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0x10U)))) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
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
        }
    }
    if (CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 1U;
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0x12U)))) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0x11U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            }
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
            = ((0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])
                ? ((0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])
                    ? ((~ ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                            << 0x1bU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                         >> 5U))) & 
                       ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                         << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                   >> 0x17U))) : ((
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    << 0x1bU) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                      >> 5U)) 
                                                  | ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                      << 9U) 
                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                        >> 0x17U))))
                : ((0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])
                    ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                        << 0x1bU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                     >> 5U)) : ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                 << 0x1bU) 
                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                   >> 5U))));
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                << 0x1bU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                             >> 5U));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res 
        = (0x1ffffffffULL & ((IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift)
                              ? (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))
                              : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d 
        = ((IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
            ? (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))
                ? (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   + CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                : (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   - CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q);
    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 9U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
        }
    } else if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    } else if ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                >> 0x1fU)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex) 
           & (2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
        = ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 8U))) ? ((1U & (IData)(
                                                    (CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 8U)))
                                       ? 0x9f510000100ULL
                                       : CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_mret_insn_id) 
           & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
              >> 7U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we 
        = vlSelf->CSoC_top__DOT__u_core__DOT__csr_mtvec_init_if;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = 0U;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((0x100U 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x80U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we = 1U;
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 7U)))) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we = 1U;
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
        }
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we = 0ULL;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we = 0ULL;
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                      >> 0x10U)))) {
            if ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xbU)))) {
                                if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
                                                            CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 1U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        if (
                                                            (0x2000U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
                                                            CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 7U)))) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xcU)))) {
                            if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we = 1U;
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
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                    if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        if ((0x100U 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                            if ((0x80U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U)))) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                            if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                            = (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0x3fU 
                                                   & ((IData)(0x30U) 
                                                      + 
                                                      (0xfU 
                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                          >> 5U))))));
                                    }
                                } else {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                        = ((0x200U 
                                            & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])
                                            ? (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (0xfU 
                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                          >> 5U))))))
                                            : (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0x3fU 
                                                   & ((IData)(0x10U) 
                                                      + 
                                                      (0xfU 
                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                          >> 5U)))))));
                                }
                            } else if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                        = (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we 
                                           | ((QData)((IData)(1U)) 
                                              << (0xfU 
                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 5U))));
                                }
                            }
                            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xbU)))) {
                                if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 9U)))) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                                            = (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we 
                                               | ((QData)((IData)(0xfU)) 
                                                  << 
                                                  (0x3fU 
                                                   & VL_SHIFTL_III(6,32,32, 
                                                                   (0xfU 
                                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                       >> 5U)), 2U))));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                  >> 0xdU)))) {
                        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 0xaU)))) {
                                    if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])) {
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we = 1U;
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
        }
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h783c9ded__0 
            = (0x163e0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f69db53__0 
            = (0x163c0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78a2bbdb__0 
            = (0x163a0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d09d08__0 
            = (0x16380U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6a4a8a__0 
            = (0x16360U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f56cbd6__0 
            = (0x16340U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f52a87c__0 
            = (0x16320U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78014cff__0 
            = (0x16300U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d96f00__0 
            = (0x162e0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c56418__0 
            = (0x162c0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c7cbdd__0 
            = (0x162a0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6f4536__0 
            = (0x16280U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7537718b__0 
            = (0x16260U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7452ce28__0 
            = (0x16240U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h744c4f3a__0 
            = (0x16220U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h746a9116__0 
            = (0x16200U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75a738a5__0 
            = (0x161e0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bb9f9de__0 
            = (0x161c0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bbee248__0 
            = (0x161a0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7534c2b0__0 
            = (0x16180U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b85b741__0 
            = (0x16160U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7ba9b27a__0 
            = (0x16140U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7baa643c__0 
            = (0x16120U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7448f01c__0 
            = (0x16100U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7507dea0__0 
            = (0x160e0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75607f60__0 
            = (0x160c0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h751e85de__0 
            = (0x160a0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b81875d__0 
            = (0x16080U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b8f8bfe__0 
            = (0x16060U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h748dec40__0 
            = (0x16020U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7a6b903d__0 
            = (0x16040U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h74913440__0 
            = (0x16000U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
    } else {
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we = 0ULL;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we = 0ULL;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h783c9ded__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f69db53__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78a2bbdb__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d09d08__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6a4a8a__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f56cbd6__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f52a87c__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78014cff__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d96f00__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c56418__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c7cbdd__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6f4536__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7537718b__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7452ce28__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h744c4f3a__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h746a9116__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75a738a5__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bb9f9de__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bbee248__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7534c2b0__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b85b741__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7ba9b27a__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7baa643c__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7448f01c__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7507dea0__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75607f60__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h751e85de__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b81875d__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b8f8bfe__0 = 0U;
        CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h748dec40__0 = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7a6b903d__0 = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h74913440__0 = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n 
        = ((1U > vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x6400U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = (5U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    __Vfunc_csr_next_value__30__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__30__Vfuncout = (4U & __Vfunc_csr_next_value__30__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_n 
        = __Vfunc_csr_next_value__30__Vfuncout;
    __Vfunc_csr_next_value__29__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__29__Vfuncout = (0xf001fU 
                                            & __Vfunc_csr_next_value__29__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n 
        = __Vfunc_csr_next_value__29__Vfuncout;
    __Vfunc_csr_next_value__20__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__20__Vfuncout = __Vfunc_csr_next_value__20__wdata;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n 
        = __Vfunc_csr_next_value__20__Vfuncout;
    __Vfunc_csr_next_value__12__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__12__Vfuncout = (0xffffffc0U 
                                            & __Vfunc_csr_next_value__12__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
        = __Vfunc_csr_next_value__12__Vfuncout;
    __Vfunc_csr_next_value__19__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__19__Vfuncout = __Vfunc_csr_next_value__19__wdata;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n 
        = __Vfunc_csr_next_value__19__Vfuncout;
    __Vfunc_csr_next_value__13__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__13__Vfuncout = __Vfunc_csr_next_value__13__wdata;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
        = __Vfunc_csr_next_value__13__Vfuncout;
    __Vfunc_csr_next_value__27__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__27__Vfuncout = (0xffff0888U 
                                            & __Vfunc_csr_next_value__27__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
        = __Vfunc_csr_next_value__27__Vfuncout;
    __Vfunc_csr_next_value__15__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__15__Vfuncout = (0xfffffffeU 
                                            & __Vfunc_csr_next_value__15__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n 
        = __Vfunc_csr_next_value__15__Vfuncout;
    __Vfunc_csr_next_value__14__wdata = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__14__Vfuncout = (0xfffffffeU 
                                            & __Vfunc_csr_next_value__14__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
        = __Vfunc_csr_next_value__14__Vfuncout;
    __Vfunc_csr_next_value__28__wdata = (0x800007ffU 
                                         & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    __Vfunc_csr_next_value__28__Vfuncout = (0x800007ffU 
                                            & __Vfunc_csr_next_value__28__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
        = __Vfunc_csr_next_value__28__Vfuncout;
    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
        }
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 9U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT____Vcellout__u_secure_ctrl__rvalid_o;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we;
    }
    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n 
                = ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    << 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                 >> 1U));
        }
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 9U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                = ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    << 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                 >> 1U));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n) 
                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                      << 0x1fU));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = ((0xfffff800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n) 
                   | (0x7ffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                                >> 1U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = (0xff00ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n);
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hcb29fb4a__0 
        = ((8U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 4U)) | ((4U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    << 2U)) | ((2U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                               | (1U 
                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                     >> 2U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h008729eb__0 
        = ((8U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0xcU)) | ((4U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                       >> 0xaU)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7754d39f__0 
        = ((8U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x14U)) | ((4U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0xeU)) | 
                                ((2U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                        >> 0x10U)) 
                                 | (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x12U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hdaaeed4e__0 
        = ((8U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x1cU)) | ((4U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0x16U)) | 
                                ((2U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                        >> 0x18U)) 
                                 | (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x1aU)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = (((((0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                        >> 0x18U)) == (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                       >> 0x1bU)) & 
             (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_id)
                ? ((0U != (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                           >> 0x1bU)) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_ex))
                : (0U != (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                          >> 0x1bU))) & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x14U)))) 
            << 1U) | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hbd94c080__0) 
                      & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_id)
                           ? (IData)(((0U != (0x7c00000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) 
                                      | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_ex)))
                           : (0U != (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                              >> 0x16U)))) 
                         & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                    >> 0x13U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = (((((0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                        >> 0x17U)) == (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                       >> 0x1bU)) & 
             (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_id)
                ? ((0U != (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                           >> 0x1bU)) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_wb))
                : (0U != (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                          >> 0x1bU))) & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x14U)))) 
            << 1U) | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hf56e56e2__0) 
                      & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_id)
                           ? (IData)(((0U != (0x7c00000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) 
                                      | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_wb)))
                           : (0U != (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                              >> 0x16U)))) 
                         & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                    >> 0x13U)))));
    if (CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int 
            = (0U == vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = ((((0xfU == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                           >> 0x1cU)) | (2U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                                                >> 0x1cU))) 
                | (6U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                          >> 0x1cU))) ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
                : (0x30009aeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata;
    }
    if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
                CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 1U;
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int 
        = (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we) 
            & (0U == vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) 
           | (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    __Vfunc_mcontrol6_hit_resolve__31__next_value = 
        ((2U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                >> 0x18U)) | (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 0x16U)));
    __Vfunc_mcontrol6_hit_resolve__31__current_value 
        = ((2U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                  [0U] >> 0x18U)) | (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 0x16U)));
    __Vfunc_mcontrol6_hit_resolve__31__Vfuncout = (
                                                   ((0U 
                                                     != (IData)(__Vfunc_mcontrol6_hit_resolve__31__next_value)) 
                                                    & (1U 
                                                       != (IData)(__Vfunc_mcontrol6_hit_resolve__31__next_value)))
                                                    ? (IData)(__Vfunc_mcontrol6_hit_resolve__31__current_value)
                                                    : (IData)(__Vfunc_mcontrol6_hit_resolve__31__next_value));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0U] 
        = __Vfunc_mcontrol6_hit_resolve__31__Vfuncout;
    if (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we) 
         & (0U == vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
            = ((2U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 0x1cU)) ? (0x28001000U | 
                                     ((([&]() {
                                vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value 
                                    = (0xfU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 7U));
                                vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout 
                                    = ((((0U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value)) 
                                         & (2U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value))) 
                                        & (3U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value)))
                                        ? 0U : (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value));
                            }(), (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout)) 
                                       << 7U) | ((0x40U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                 | VL_EXTEND_II(6,4, 
                                                                ((([&]() {
                                            vlSelf->__Vfunc_mcontrol2_6_u_resolve__33__next_value 
                                                = (1U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 3U));
                                            vlSelf->__Vfunc_mcontrol2_6_u_resolve__33__Vfuncout 
                                                = vlSelf->__Vfunc_mcontrol2_6_u_resolve__33__next_value;
                                        }(), (IData)(vlSelf->__Vfunc_mcontrol2_6_u_resolve__33__Vfuncout)) 
                                                                  << 3U) 
                                                                 | (7U 
                                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))))))
                : ((6U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x1cU)) ? (0x68000000U 
                                         | VL_EXTEND_II(27,26, 
                                                        ((0x2000000U 
                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                             [0U] 
                                                             << 0x18U)) 
                                                         | VL_EXTEND_II(25,23, 
                                                                        ((0x400000U 
                                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                                             [0U] 
                                                                             << 0x16U)) 
                                                                         | VL_EXTEND_II(22,16, 
                                                                                (0x1000U 
                                                                                | VL_EXTEND_II(12,11, 
                                                                                ((([&]() {
                                                                vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__next_value 
                                                                    = 
                                                                    (0xfU 
                                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                        >> 7U));
                                                                vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__Vfuncout 
                                                                    = 
                                                                    ((((0U 
                                                                        != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__next_value)) 
                                                                       & (2U 
                                                                          != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__next_value))) 
                                                                      & (3U 
                                                                         != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__next_value)))
                                                                      ? 0U
                                                                      : (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__next_value));
                                                            }(), (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__Vfuncout)) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                                                | VL_EXTEND_II(6,4, 
                                                                                ((([&]() {
                                                                            vlSelf->__Vfunc_mcontrol2_6_u_resolve__37__next_value 
                                                                                = 
                                                                                (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                                >> 3U));
                                                                            vlSelf->__Vfunc_mcontrol2_6_u_resolve__37__Vfuncout 
                                                                                = vlSelf->__Vfunc_mcontrol2_6_u_resolve__37__next_value;
                                                                        }(), (IData)(vlSelf->__Vfunc_mcontrol2_6_u_resolve__37__Vfuncout)) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))))))))))))
                    : ((5U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                               >> 0x1cU)) ? ((0U != 
                                              (0xfcfff651U 
                                               & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata))
                                              ? 0xf8000000U
                                              : (0x58000000U 
                                                 | ((0x200U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                    | VL_EXTEND_II(9,7, 
                                                                   (1U 
                                                                    | (([&]() {
                                                    vlSelf->__Vfunc_etrigger_u_resolve__38__next_value 
                                                        = 
                                                        (1U 
                                                         & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                            >> 6U));
                                                    vlSelf->__Vfunc_etrigger_u_resolve__38__Vfuncout 
                                                        = vlSelf->__Vfunc_etrigger_u_resolve__38__next_value;
                                                }(), (IData)(vlSelf->__Vfunc_etrigger_u_resolve__38__Vfuncout)) 
                                                                       << 6U))))))
                        : 0xf8000000U)));
    }
    if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0x400000U | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf97e2934__0 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7a6b903d__0)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x17040U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h783c9ded__0) 
            << 0x1fU) | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f69db53__0) 
                          << 0x1eU) | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78a2bbdb__0) 
                                        << 0x1dU) | 
                                       (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d09d08__0) 
                                         << 0x1cU) 
                                        | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6a4a8a__0) 
                                            << 0x1bU) 
                                           | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f56cbd6__0) 
                                               << 0x1aU) 
                                              | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f52a87c__0) 
                                                  << 0x19U) 
                                                 | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78014cff__0) 
                                                     << 0x18U) 
                                                    | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d96f00__0) 
                                                        << 0x17U) 
                                                       | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c56418__0) 
                                                           << 0x16U) 
                                                          | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c7cbdd__0) 
                                                              << 0x15U) 
                                                             | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6f4536__0) 
                                                                 << 0x14U) 
                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7537718b__0) 
                                                                    << 0x13U) 
                                                                   | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7452ce28__0) 
                                                                       << 0x12U) 
                                                                      | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h744c4f3a__0) 
                                                                          << 0x11U) 
                                                                         | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h746a9116__0) 
                                                                             << 0x10U) 
                                                                            | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75a738a5__0) 
                                                                                << 0xfU) 
                                                                               | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bb9f9de__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bbee248__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7534c2b0__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b85b741__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7ba9b27a__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7baa643c__0) 
                                                                                << 9U) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7448f01c__0) 
                                                                                << 8U) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7507dea0__0) 
                                                                                << 7U) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75607f60__0) 
                                                                                << 6U) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h751e85de__0) 
                                                                                << 5U) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b81875d__0) 
                                                                                << 4U) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b8f8bfe__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7a6b903d__0) 
                                                                                << 2U) 
                                                                                | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h748dec40__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h74913440__0))))))))))))))))))))))))))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_ha952383e__0 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h74913440__0)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x17000U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h783c9ded__0)) 
             & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                & (0x173e0U == (0x1ffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
            << 0x1fU) | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f69db53__0)) 
                           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                              & (0x173c0U == (0x1ffe0U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                          << 0x1eU) | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78a2bbdb__0)) 
                                         & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                            & (0x173a0U 
                                               == (0x1ffe0U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                        << 0x1dU) | 
                                       ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d09d08__0)) 
                                          & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                             & (0x17380U 
                                                == 
                                                (0x1ffe0U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                         << 0x1cU) 
                                        | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6a4a8a__0)) 
                                             & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & (0x17360U 
                                                   == 
                                                   (0x1ffe0U 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                            << 0x1bU) 
                                           | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f56cbd6__0)) 
                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & (0x17340U 
                                                      == 
                                                      (0x1ffe0U 
                                                       & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                               << 0x1aU) 
                                              | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f52a87c__0)) 
                                                   & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & (0x17320U 
                                                         == 
                                                         (0x1ffe0U 
                                                          & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                  << 0x19U) 
                                                 | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78014cff__0)) 
                                                      & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & (0x17300U 
                                                            == 
                                                            (0x1ffe0U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                     << 0x18U) 
                                                    | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78d96f00__0)) 
                                                         & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & (0x172e0U 
                                                               == 
                                                               (0x1ffe0U 
                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                        << 0x17U) 
                                                       | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c56418__0)) 
                                                            & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                               & (0x172c0U 
                                                                  == 
                                                                  (0x1ffe0U 
                                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                           << 0x16U) 
                                                          | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h78c7cbdd__0)) 
                                                               & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                  & (0x172a0U 
                                                                     == 
                                                                     (0x1ffe0U 
                                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                              << 0x15U) 
                                                             | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f6f4536__0)) 
                                                                  & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                     & (0x17280U 
                                                                        == 
                                                                        (0x1ffe0U 
                                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                 << 0x14U) 
                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7537718b__0)) 
                                                                     & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                        & (0x17260U 
                                                                           == 
                                                                           (0x1ffe0U 
                                                                            & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                    << 0x13U) 
                                                                   | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7452ce28__0)) 
                                                                        & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                           & (0x17240U 
                                                                              == 
                                                                              (0x1ffe0U 
                                                                               & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                       << 0x12U) 
                                                                      | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h744c4f3a__0)) 
                                                                           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                              & (0x17220U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                          << 0x11U) 
                                                                         | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h746a9116__0)) 
                                                                              & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17200U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                             << 0x10U) 
                                                                            | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75a738a5__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x171e0U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 0xfU) 
                                                                               | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bb9f9de__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x171c0U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 0xeU) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7bbee248__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x171a0U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 0xdU) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7534c2b0__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17180U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 0xcU) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b85b741__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17160U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 0xbU) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7ba9b27a__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17140U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 0xaU) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7baa643c__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17120U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 9U) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7448f01c__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17100U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 8U) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7507dea0__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x170e0U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 7U) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h75607f60__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x170c0U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 6U) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h751e85de__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x170a0U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 5U) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b81875d__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17080U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 4U) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7b8f8bfe__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17060U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf97e2934__0) 
                                                                                << 2U) 
                                                                                | ((((~ (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h748dec40__0)) 
                                                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0x17020U 
                                                                                == 
                                                                                (0x1ffe0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U])))) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_ha952383e__0))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__71(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__71\n"); );
    // Body
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

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__72(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__72\n"); );
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
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n[0U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[0U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n[1U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[1U];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n[2U] 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q[2U];
    if (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT____Vlvbound_haae24920__0 
            = CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp;
        if ((0x43U >= (0x7fU & ((IData)(0x22U) * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WQ(68,34,(0x7fU & ((IData)(0x22U) 
                                            * (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))), vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n, vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT____Vlvbound_haae24920__0);
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__74(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__74\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_illegal 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            >> 6U) & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                       >> 0xfU) & (((0U != (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                  >> 0xdU))) 
                                    & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                        >> 0xfU) & 
                                       ((3U == ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h5f17af21__0)
                                                 ? 
                                                (3U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                    >> 1U))
                                                 : 0U)) 
                                        | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read_priv)))) 
                                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read) 
                                      | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read_priv) 
                                         | ((0x17U 
                                             == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)) 
                                            & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                                               & (3U 
                                                  > 
                                                  (3U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                      >> 4U))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__77(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__77\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0;
    CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0 = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id = 
        (1U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                   >> 2U)) & ((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                  >> 5U)) & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                     >> 9U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id = (IData)(
                                                            ((~ 
                                                              ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                                                               >> 2U)) 
                                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                                >> 0x30U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id));
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
    vlSelf->CSoC_top__DOT__u_core__DOT__first_op_id 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
            >> 2U) & ((IData)(CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0) 
                      | (0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt))));
    vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id 
        = ((IData)(CSoC_top__DOT__u_core__DOT__id_stage_i__DOT____VdfgTmp_h077b79cf__0) 
           | (1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt)));
    vlSelf->CSoC_top__DOT__u_core__DOT__last_op_id 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
            >> 1U) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__multi_op_id_stall 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id)) 
           & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
              >> 7U));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_valid = (IData)(
                                                           ((0U 
                                                             == 
                                                             (0x84000U 
                                                              & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                                                            & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                >> 7U) 
                                                               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__multi_op_id_stall))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__79(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__79\n"); );
    // Body
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
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__80(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__80\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0 = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i 
        = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)));
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              & ((9U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hcb29fb4a__0)) 
                 | ((0xaU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hcb29fb4a__0)) 
                    | ((0xbU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hcb29fb4a__0)) 
                       | (0xdU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hcb29fb4a__0)))))));
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              & ((9U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h008729eb__0)) 
                 | ((0xaU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h008729eb__0)) 
                    | ((0xbU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h008729eb__0)) 
                       | (0xdU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h008729eb__0)))))));
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              & ((9U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7754d39f__0)) 
                 | ((0xaU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7754d39f__0)) 
                    | ((0xbU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7754d39f__0)) 
                       | (0xdU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7754d39f__0)))))));
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
              & ((9U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hdaaeed4e__0)) 
                 | ((0xaU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hdaaeed4e__0)) 
                    | ((0xbU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hdaaeed4e__0)) 
                       | (0xdU == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hdaaeed4e__0)))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
        = (QData)((IData)((((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0) 
                            << 0xfU) | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0) 
                                         << 0xeU) | 
                                        (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0) 
                                          << 0xdU) 
                                         | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0) 
                                             << 0xcU) 
                                            | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0) 
                                                << 0xbU) 
                                               | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0) 
                                                   << 0xaU) 
                                                  | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0) 
                                                      << 9U) 
                                                     | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0) 
                                                         << 8U) 
                                                        | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0) 
                                                            << 7U) 
                                                           | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0) 
                                                               << 6U) 
                                                              | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0) 
                                                                  << 5U) 
                                                                 | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0) 
                                                                     << 4U) 
                                                                    | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0) 
                                                                        << 3U) 
                                                                       | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0) 
                                                                           << 2U) 
                                                                          | (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0) 
                                                                              << 1U) 
                                                                             | (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0))))))))))))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__82(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__82\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i 
        = (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)
                  ? (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 2U) : ((~ (IData)((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)))) 
                               & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 2U))));
    if ((1U & ((IData)((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0))) 
               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [0U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = (0xffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [0U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [0U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [0U]) | (((0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 1U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 1U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [1U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [1U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [1U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [1U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [1U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [1U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [1U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [1U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[1U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [1U]) | (((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x800U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 2U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 2U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [2U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [2U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [2U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [2U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [2U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [2U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [2U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [2U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[2U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [2U]) | (((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x80000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 3U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 3U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [3U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
               >> 0x18U);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [3U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [3U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [3U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [3U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [3U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [3U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [3U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[3U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [3U]) | (((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x8000000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 4U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 4U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [4U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = (0xffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [4U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [4U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [4U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [4U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [4U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [4U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [4U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[4U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [4U]) | (((0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 5U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 5U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [5U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [5U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [5U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [5U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [5U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [5U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [5U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [5U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[5U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [5U]) | (((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x800U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 6U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 6U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [6U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [6U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [6U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [6U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [6U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [6U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [6U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [6U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[6U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [6U]) | (((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x80000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 7U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 7U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [7U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
               >> 0x18U);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [7U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [7U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [7U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [7U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [7U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [7U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [7U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[7U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [7U]) | (((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x8000000U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 8U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 8U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [8U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = (0xffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [8U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [8U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [8U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [8U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [8U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [8U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [8U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[8U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [8U]) | (((0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 9U)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                           >> 9U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [9U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [9U]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [9U]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                              [9U] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [9U]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [9U]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [9U]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                             [9U]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[9U] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [9U]) | (((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                               ? 3U : 2U) : ((0x800U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                              ? 1U : 0U)) 
                         << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 0xaU)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xaU))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xaU];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xaU]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xaU]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xaU] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xaU]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xaU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xaU]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xaU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xaU]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xaU]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xaU] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xaU]) | (((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x80000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 0xbU)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xbU))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xbU];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
               >> 0x18U);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xbU]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xbU]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xbU] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xbU]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xbU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xbU]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xbU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xbU]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xbU]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xbU] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xbU]) | (((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x8000000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 0xcU)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xcU))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xcU];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = (0xffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xcU]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xcU]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xcU] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xcU]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xcU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xcU]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xcU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xcU]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xcU]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xcU] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xcU]) | (((0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((8U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 0xdU)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xdU))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xdU];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 8U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xdU]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xdU]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xdU] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xdU]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xdU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xdU]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xdU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xdU]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xdU]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xdU] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xdU]) | (((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x800U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 0xeU)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xeU))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xeU];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = (0xffU & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x10U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xeU]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xeU]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xeU] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xeU]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xeU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xeU]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xeU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xeU]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xeU]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xeU] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xeU]) | (((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x80000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)) 
                        >> 0xfU)) | (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr 
                                             >> 0xfU))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
            [0xfU];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
               >> 0x18U);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = (0xdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
               [0xfU]);
        if ((1U & (((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                     [0xfU]) & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                                [0xfU] >> 1U)) & (~ (IData)(vlSelf->__VdfgTmp_h7d22ad46__0))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
                = ((0xfeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xfU]) | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xfU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
                = ((0xfdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xfU]) | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xfU]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
                = ((0xfbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                    [0xfU]) | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q
                               [0xfU]));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[0xfU] 
            = ((0xe7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n
                [0xfU]) | (((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                 ? 3U : 2U) : ((0x8000000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                                ? 1U
                                                : 0U)) 
                           << 3U));
    }
}

extern const VlWide<32>/*1023:0*/ VCSoC_top__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__98(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__98\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x15U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : 0U) : ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? ((0x100U 
                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? ((0x80U 
                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_rdata))))
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                           ? 0U
                                                           : 
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x7ffU 
                                                              & ((IData)(0x20U) 
                                                                 + 
                                                                 VL_SHIFTL_III(11,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                         | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                            (0x3fU 
                                                             & (((IData)(0x20U) 
                                                                 + 
                                                                 VL_SHIFTL_III(11,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : 
                                                         (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                            (((IData)(0x1fU) 
                                                              + 
                                                              (0x7ffU 
                                                               & ((IData)(0x20U) 
                                                                  + 
                                                                  VL_SHIFTL_III(11,32,32, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(0x20U) 
                                                                 + 
                                                                 VL_SHIFTL_III(11,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                             (0x3fU 
                                                              & (((IData)(0x20U) 
                                                                  + 
                                                                  VL_SHIFTL_III(11,32,32, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(0x20U) 
                                                                 + 
                                                                 VL_SHIFTL_III(11,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                           ? 0U
                                                           : 
                                                          (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x7ffU 
                                                              & VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                         | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                            (0x3fU 
                                                             & (VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : 
                                                         (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                            (((IData)(0x1fU) 
                                                              + 
                                                              (0x7ffU 
                                                               & VL_SHIFTL_III(11,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                             (0x3fU 
                                                              & (VL_SHIFTL_III(11,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                                            : 0U) : 0U))
            : ((0x400U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? ((0x10U 
                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((8U 
                                                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q
                                                    : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q
                                                    : vlSelf->CSoC_top__DOT__u_core__DOT__dcsr))))
                                             : ((8U 
                                                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 0x1008064U))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata
                                                    : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)))))
                                         : 0U)) : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : 0U)
                                                         : 0U)
                                                        : 0U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? (IData)(vlSelf->__VdfgTmp_h7d22ad46__0)
                                                          : 0U)
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U))
                        : 0U) : 0U) : ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? ((0x100U 
                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? ((0x80U 
                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x30U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))))])
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))))]
                                                      : 
                                                     vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(0x10U) 
                                                         + 
                                                         (0xfU 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))))]))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                     [
                                                     (0xfU 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))]
                                                      : 
                                                     ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(3U) 
                                                           + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_he47001db__0)))] 
                                                       << 0x18U) 
                                                      | ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(2U) 
                                                              + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_he47001db__0)))] 
                                                          << 0x10U) 
                                                         | ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_he47001db__0)))] 
                                                             << 8U) 
                                                            | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                                            [vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_he47001db__0]))))
                                                     : 0U))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlSelf->CSoC_top__DOT__u_core__DOT__mcause)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? vlSelf->CSoC_top__DOT__u_core__DOT__mepc
                                                          : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                        ? 0U
                                                        : 
                                                       (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                      | (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                         (0x1fU 
                                                          & (VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                         ? 0U
                                                         : 
                                                        (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x3ffU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                       | (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                          (0x1fU 
                                                           & (VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                          ? 0U
                                                          : 
                                                         (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                        | (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                           (0x1fU 
                                                            & (VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 
                                                         (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                            ? 0U
                                                            : 
                                                           (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                            (((IData)(0x1fU) 
                                                              + 
                                                              (0x3ffU 
                                                               & VL_SHIFTL_III(10,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                          | (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                                             (0x1fU 
                                                              & (VL_SHIFTL_III(10,32,32, 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                          : 0U)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                                          << 2U)))
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata
                                                          : vlSelf->CSoC_top__DOT__u_core__DOT__mie))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                          ? 0x40901104U
                                                          : vlSelf->CSoC_top__DOT__u_core__DOT__mstatus))))))))
                                            : 0U) : 
                                       ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x80U 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_rdata
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 0U))))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__99(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__99\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q;
    if ((0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((0U != vlSelf->CSoC_top__DOT__u_core__DOT__trigger_match_ex) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
                = ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt))
                    ? 2U : 1U);
        }
    } else if ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 2U;
        }
    } else if ((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 0U;
    }
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__102(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__102\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0 
        = (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex)) 
            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgTmp_h3c034895__0)) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__104(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__104\n"); );
    // Init
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access = 0;
    // Body
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
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access 
        = (3U & ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl))
                  ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl)
                  : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
                = ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access)
                    : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q));
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
            = CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_access;
    }
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
}

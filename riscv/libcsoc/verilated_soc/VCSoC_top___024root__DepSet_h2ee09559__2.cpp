// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top___024root.h"

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__2(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*18:0*/ __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0;
    __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0;
    __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0;
    __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0;
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 = 0;
    IData/*18:0*/ __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1;
    __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1;
    __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1;
    __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1;
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 = 0;
    IData/*18:0*/ __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2;
    __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2;
    __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2;
    __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2;
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 = 0;
    IData/*18:0*/ __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3;
    __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3;
    __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3;
    __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3;
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 = 0;
    // Body
    if (VL_UNLIKELY(vlSelf->CSoC_top__DOT__device_req
                    [8U])) {
        VL_WRITEF("SOC_AES: req=%b addr=0x%08x we=%b wdata=0x%08x\n",
                  1,vlSelf->CSoC_top__DOT__device_req
                  [8U],32,vlSelf->CSoC_top__DOT__device_addr
                  [8U],1,vlSelf->CSoC_top__DOT__device_we
                  [8U],32,vlSelf->CSoC_top__DOT__device_wdata
                  [8U]);
    }
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 = 0U;
    if (VL_UNLIKELY(vlSelf->CSoC_top__DOT__device_req
                    [8U])) {
        VL_WRITEF("AES_WRAPPER: device_addr_i=0x%08x, aes_address=0x%02x, aes_cs=%b, aes_we=%b\n",
                  32,vlSelf->CSoC_top__DOT__device_addr
                  [8U],8,(0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                   [8U] >> 2U)),1,vlSelf->CSoC_top__DOT__device_req
                  [8U],1,vlSelf->CSoC_top__DOT__u_aes__DOT__aes_we);
        if (VL_UNLIKELY((1U & (~ vlSelf->CSoC_top__DOT__device_we
                               [8U])))) {
            VL_WRITEF("AES_WRAPPER: READ - aes_read_data=0x%08x (will be captured)\n",
                      32,vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data);
        }
    }
    if (VL_UNLIKELY(vlSelf->CSoC_top__DOT____Vcellout__u_aes__device_rvalid_o)) {
        VL_WRITEF("AES_WRAPPER: RVALID - captured_read_data=0x%08x\n",
                  32,vlSelf->CSoC_top__DOT__u_aes__DOT__captured_read_data);
    }
    if (vlSelf->CSoC_top__DOT__device_req[0U]) {
        if (vlSelf->CSoC_top__DOT__device_we[0U]) {
            if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__a_wmask))) {
                __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 
                    = (0xffU & vlSelf->CSoC_top__DOT__device_wdata
                       [0U]);
                __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 = 1U;
                __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 = 0U;
                __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0 
                    = (0x7ffffU & (vlSelf->CSoC_top__DOT__device_addr
                                   [0U] >> 2U));
            }
            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__a_wmask))) {
                __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 
                    = (0xffU & (vlSelf->CSoC_top__DOT__device_wdata
                                [0U] >> 8U));
                __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 = 1U;
                __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 = 8U;
                __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1 
                    = (0x7ffffU & (vlSelf->CSoC_top__DOT__device_addr
                                   [0U] >> 2U));
            }
            if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__a_wmask))) {
                __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 
                    = (0xffU & (vlSelf->CSoC_top__DOT__device_wdata
                                [0U] >> 0x10U));
                __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 = 1U;
                __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 = 0x10U;
                __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2 
                    = (0x7ffffU & (vlSelf->CSoC_top__DOT__device_addr
                                   [0U] >> 2U));
            }
            if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__a_wmask))) {
                __Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 
                    = (vlSelf->CSoC_top__DOT__device_wdata
                       [0U] >> 0x18U);
                __Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 = 1U;
                __Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 = 0x18U;
                __Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3 
                    = (0x7ffffU & (vlSelf->CSoC_top__DOT__device_addr
                                   [0U] >> 2U));
            }
        }
        if ((1U & (~ vlSelf->CSoC_top__DOT__device_we
                   [0U]))) {
            vlSelf->CSoC_top__DOT____Vcellout__u_ram__a_rdata_o 
                = vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem
                [(0x7ffffU & (vlSelf->CSoC_top__DOT__device_addr
                              [0U] >> 2U))];
        }
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d;
    if (vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(1024,8,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)), vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, 
                        (0xffU & vlSelf->CSoC_top__DOT__device_wdata
                         [2U]));
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d;
    if (vlSelf->CSoC_top__DOT__mem_instr_req) {
        vlSelf->CSoC_top__DOT__mem_instr_rdata = vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem
            [(0x7ffffU & (IData)((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.req_payload 
                                  >> 0x16U)))];
    }
    if (vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(1024,8,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)), vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_q);
    }
    if (vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT____Vlvbound_hd02abf1b__0 
            = (0xffU & vlSelf->CSoC_top__DOT__device_wdata
               [4U]);
        if ((0x3f7U >= (0x3ffU & VL_SHIFTL_III(10,32,32, 
                                               (0x7fU 
                                                & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)))) {
            VL_ASSIGNSEL_WI(1016,8,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)), 3U)), vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT____Vlvbound_hd02abf1b__0);
        }
    }
    if (vlSelf->CSoC_top__DOT__device_req[3U]) {
        vlSelf->CSoC_top__DOT__u_timer__DOT__rdata_q 
            = vlSelf->CSoC_top__DOT__u_timer__DOT__rdata_d;
        vlSelf->CSoC_top__DOT__u_timer__DOT__error_q 
            = vlSelf->CSoC_top__DOT__u_timer__DOT__error_d;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0) {
        vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem[__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0))) 
                & vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem
                [__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v0))));
    }
    if (__Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1) {
        vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem[__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1))) 
                & vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem
                [__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v1))));
    }
    if (__Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2) {
        vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem[__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2))) 
                & vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem
                [__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v2))));
    }
    if (__Vdlyvset__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3) {
        vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem[__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3))) 
                & vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem
                [__Vdlyvdim0__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem__v3))));
    }
    vlSelf->CSoC_top__DOT__device_rdata[3U] = vlSelf->CSoC_top__DOT__u_timer__DOT__rdata_q;
    vlSelf->CSoC_top__DOT__device_err[3U] = vlSelf->CSoC_top__DOT__u_timer__DOT__error_q;
    vlSelf->CSoC_top__DOT__device_rdata[0U] = vlSelf->CSoC_top__DOT____Vcellout__u_ram__a_rdata_o;
}

extern const VlUnpacked<CData/*0:0*/, 1024> VCSoC_top__ConstPool__TABLE_h0a98d2e0_0;
extern const VlUnpacked<CData/*2:0*/, 4> VCSoC_top__ConstPool__TABLE_h994e36f9_0;
extern const VlUnpacked<CData/*6:0*/, 4> VCSoC_top__ConstPool__TABLE_h57871b8e_0;
extern const VlUnpacked<CData/*6:0*/, 4> VCSoC_top__ConstPool__TABLE_h257eef1a_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__3(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*6:0*/ CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7;
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = 0;
    IData/*31:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed;
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed = 0;
    IData/*31:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q;
    __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q = 0;
    CData/*3:0*/ __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q;
    __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0;
    CData/*0:0*/ __Vdly__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q;
    __Vdly__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q = 0;
    CData/*0:0*/ __Vdly__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q;
    __Vdly__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0;
    QData/*37:0*/ __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62;
    __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0;
    CData/*0:0*/ __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v63;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v63 = 0;
    // Body
    __Vdly__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q;
    __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v63 = 0U;
    __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q;
    __Vdly__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0 = 0U;
    __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready)));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__core_fencei_flush_req));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)) 
                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__irq_wu_ctrl)) 
               & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                     | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)) 
                & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq)) 
               & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                      >> 0x11U) & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                   >> 3U))));
    if (vlSelf->CSoC_top__DOT__rst_core_n) {
        if ((2U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req))) {
            __Vdly__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q 
                = ((1U & (~ ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt) 
                             >> 1U))) && ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err) 
                                          | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q)));
        }
        if ((2U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_req))) {
            __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q 
                = ((1U & (~ ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_gnt) 
                             >> 1U))) && ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err) 
                                          | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q)));
        }
        if ((2U & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_req) 
                   & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_gnt)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q 
                = ((0x1c0U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                              << 3U)) | ((0x20U & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.req_payload) 
                                                   << 5U)) 
                                         | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err) 
                                             | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q)) 
                                            << 4U)));
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear) {
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = 0U;
            }
        }
        if ((2U & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req) 
                   & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q 
                = ((0x1c0U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                              << 3U)) | ((0x20U & (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                   << 5U)) 
                                         | ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err) 
                                              | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q)) 
                                             << 4U) 
                                            | (8U & 
                                               (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                >> 0x15U)))));
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id) {
            if ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid) 
                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready)) 
                 & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_id) 
                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_id)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 0U;
            }
        } else if (((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid) 
                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready)) 
                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__first_op_id)) 
                    & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_id) 
                          | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_id))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 1U;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt 
                = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt))));
        }
        if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 0U;
        }
        if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 1U;
        }
        if ((4U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 1U;
        }
        if ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 1U;
        }
        if ((0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 1U;
        }
        if ((0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 1U;
        }
        if ((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 1U;
        }
        if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 1U;
        }
        if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 1U;
        }
        if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 1U;
        }
        if ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 1U;
        }
        if ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 1U;
        }
        if ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 1U;
        }
        if ((0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 1U;
        }
        if ((0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 1U;
        }
        if ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 1U;
        }
        if ((0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 1U;
        }
        if ((0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 1U;
        }
        if ((0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 1U;
        }
        if ((0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 1U;
        }
        if ((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 1U;
        }
        if ((0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 1U;
        }
        if ((0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 1U;
        }
        if ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 1U;
        }
        if ((0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 1U;
        }
        if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 1U;
        }
        if ((0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 1U;
        }
        if ((0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 1U;
        }
        if ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 1U;
        }
        if ((0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 1U;
        }
        if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 1U;
        }
        if ((vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U] >> 0x1fU)) {
            __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 
                = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                [0U];
            __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 1U;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_last) {
                __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
            } else if ((1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp)) 
                              & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))))) {
                __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n;
        } else if ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
            __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = 0U;
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb) {
            if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_valid) 
                 & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                     >> 3U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_wb)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 0U;
            }
            if ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                   >> 0x11U) & (0U != vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb)) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_wb))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 0U;
            }
        } else if ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_valid) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                        >> 4U)) & (~ ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                       >> 3U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_wb))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 1U;
        }
        if ((IData)((0U != (0x1800000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])))) {
            if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
                 [0U])) {
                __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata
                    [0U];
                __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0 = 1U;
            }
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n;
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U];
        }
        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 1U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U];
        }
        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 4U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U];
        }
        if ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 5U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U];
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n;
        if (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q 
                = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.req_payload;
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] 
                = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] 
                = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] 
                = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__next_cnt;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n;
        if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
        if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q 
                = (3U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs 
            = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n;
        if ((4U & vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl[0U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_next;
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n));
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid) 
             & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_we_q)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q) 
                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex))
                    ? (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                               >> 9U)) : vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_ext);
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_sext_q 
                = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                         >> 3U));
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                         >> 7U));
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q 
                = (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                         >> 5U));
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_we_q 
                = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                         >> 4U));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__next_cnt;
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we) 
             | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o) 
                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_id)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q 
                = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o)
                    ? 0U : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we)
                             ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
                             : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_n));
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we) 
             | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o) 
                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_id)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q 
                = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o)
                    ? 0U : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we)
                             ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
                             : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_n));
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n;
        vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q 
            = (0xffff0888U & vlSelf->CSoC_top__DOT__core_irq);
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid) 
             & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid_q = 1U;
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid_q = 0U;
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt;
        if ((1U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en) 
                    & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                          >> 0x12U))) | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                         >> 0xdU)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next;
        }
        if ((1U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                          >> 0x12U))) | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                         >> 0xdU)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d;
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state 
                = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state;
        }
        if ((1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_valid) 
                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                      >> 0xcU)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q = 0U;
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_1) {
            vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb;
            vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb;
        }
        if ((1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    >> 1U) | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr;
        }
        if ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
        } else if ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
                     & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready)) 
                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q 
                = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n;
        }
        if ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready)) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 1U;
        } else if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 0U;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr) 
             | (IData)(vlSelf->CSoC_top__DOT__core_fencei_flush_req))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 0U;
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 1U;
        }
        if (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q)) 
             & (0U != (6U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_err_wb))))) {
            __Vdly__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q 
                = (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_err_wb) 
                         >> 1U));
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q 
                = (1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_err_wb));
        } else if ((IData)(((0x60000000U == (0x78000000U 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) 
                            & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                               >> 1U)))) {
            __Vdly__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        }
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                      >> 0xfU)))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h0ed3cca4__0 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n;
                if ((0x7dU >= (0x7fU & ((IData)(0x2aU) 
                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) {
                    VL_ASSIGNSEL_WQ(126,42,(0x7fU & 
                                            ((IData)(0x2aU) 
                                             * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))), vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h0ed3cca4__0);
                }
            }
        }
        if (((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_valid) 
               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex)) 
              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_ex)) 
             & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                   >> 0xaU)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 1U;
        } else if ((IData)((0U == (0x30000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 0U;
        }
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs 
            = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns;
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = (0x20000U | vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = ((0xffff3fffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                   | (0xc000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                 << 0xaU)));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = ((0xffffffe3U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                   | (0xfffffffcU & ((0x10U & (((0x1000U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U])
                                                 ? 
                                                ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)) 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                    >> 3U))
                                                 : 
                                                (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                 >> 3U)) 
                                               << 4U)) 
                                     | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_ex) 
                                         << 3U) | (4U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                      << 1U))))));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                   | (2U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                            << 1U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                = ((0xfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U]) 
                   | (0x10000000U & (((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__csr_illegal) 
                                          | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex))) 
                                      << 0x1cU) & (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                                   >> 1U))));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U]) 
                   | (8U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                            >> 9U)));
            if ((0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                    = ((0x107fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U]) 
                       | (0xf800000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                        >> 1U)));
                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                              >> 0xcU)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                        = ((0x7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]) 
                           | (vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_ex 
                              << 0x17U));
                    vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                        = ((0x1f800000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U]) 
                           | (0x1fffffffU & (vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_ex 
                                             >> 9U)));
                }
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                = ((0xff9fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]) 
                   | (0xffe00000U & (((IData)((0xa0000000U 
                                               == (0xa0000000U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))) 
                                      << 0x16U) | ((IData)(
                                                           (0xc0000000U 
                                                            == 
                                                            (0xc0000000U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))) 
                                                   << 0x15U))));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]) 
                   | (((IData)((0xc0000000U == (0xc0000000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))) 
                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__branch_decision_ex)) 
                      << 0x14U));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]) 
                   | (0x80000U & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__csr_illegal)) 
                                   << 0x13U) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                << 4U))));
            if ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                    = ((0x1fU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U]) 
                       | ((IData)((((QData)((IData)(
                                                    (3U 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                        >> 0xdU)))) 
                                    << 0x2cU) | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                       << 9U) 
                                                                      | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                         >> 0x17U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                     << 9U) 
                                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                       >> 0x17U))))))) 
                          << 5U));
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                    = ((0xfff80000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]) 
                       | (((IData)((((QData)((IData)(
                                                     (3U 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                         >> 0xdU)))) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                        << 9U) 
                                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                          >> 0x17U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                      << 9U) 
                                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                        >> 0x17U))))))) 
                           >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                                   (3U 
                                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                                       >> 0xdU)))) 
                                                   << 0x2cU) 
                                                  | (((QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                           << 9U) 
                                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                             >> 0x17U))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                         << 9U) 
                                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                           >> 0x17U)))))) 
                                                 >> 0x20U)) 
                                        << 5U)));
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                    = (0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U]);
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                    = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                       | (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz 
                                >> 0x1aU)));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = ((0x3ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                   | (0xfffc0000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                     << 0xbU)));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                = (((0x3f800U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                 << 0xbU)) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                              >> 0x15U)) 
                   | (0xfffc0000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                     << 0xbU)));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                = (((0x3f800U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                                 << 0xbU)) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                              >> 0x15U)) 
                   | (0xfffc0000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                                     << 0xbU)));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                = ((0xfffffff8U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U]) 
                   | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                            >> 0x15U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                   | (0x2000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                 << 6U)));
            if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                    = ((0xffffe01fU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                       | (0x1fe0U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                      << 6U) | (0x20U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                                   >> 0x1aU)))));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]) 
                   | (0x10000U & ((0x30000U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                               >> 0xeU)) 
                                  | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__csr_illegal) 
                                     << 0x10U))));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                = ((7U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U]) 
                   | (0xfffffff8U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                      << 5U) | (0x18U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                                   >> 0x1bU)))));
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                = ((0xfffffff8U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U]) 
                   | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                            >> 0x1bU)));
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                = ((0xffffff8fU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]) 
                   | (0xfffffff0U & (0x40U | (0x30U 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                 << 1U)))));
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                = ((0xfffffff0U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]) 
                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__first_op_id) 
                       << 3U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_id) 
                                  << 2U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id) 
                                             << 1U) 
                                            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_id)))));
            if ((3U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                      >> 0x25U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                    = ((0x7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U]) 
                       | (((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x25U))))
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x25U))))
                                ? ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                >> 0x16U))
                                : ((2U == (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                         >> 0x25U))))
                                    ? ((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x20U)))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x16U)))
                                    : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw))) 
                          << 0x17U));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                    = ((0xff800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]) 
                       | (((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x25U))))
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x25U))))
                                ? ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                >> 0x16U))
                                : ((2U == (3U & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                         >> 0x25U))))
                                    ? ((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x20U)))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x16U)))
                                    : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw))) 
                          >> 9U));
            }
            if ((2U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                      >> 0x23U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                    = ((0x7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U]) 
                       | (((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x23U))))
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x23U))))
                                ? ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                  >> 0x1fU)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x1eU)))
                                        ? ((0x4000000U 
                                            & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])
                                            ? 2U : 4U)
                                        : (0xfffff000U 
                                           & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                               << 0x19U) 
                                              | (0x1fff000U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 7U)))))
                                    : ((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x1eU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                           >> 6U)))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 0xeU))))
                                        : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type))
                                : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          << 0x17U));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                    = ((0xff800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U]) 
                       | (((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x23U))))
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x23U))))
                                ? ((1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                  >> 0x1fU)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x1eU)))
                                        ? ((0x4000000U 
                                            & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])
                                            ? 2U : 4U)
                                        : (0xfffff000U 
                                           & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                               << 0x19U) 
                                              | (0x1fff000U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 7U)))))
                                    : ((1U & (IData)(
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x1eU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                           >> 6U)))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 0xeU))))
                                        : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type))
                                : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          >> 9U));
            }
            if ((2U != (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                      >> 0x21U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                    = ((0x7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]) 
                       | (((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x21U))))
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x21U))))
                                ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40s_pc_target_i__DOT__pc_target
                                : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          << 0x17U));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                    = ((0xff800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U]) 
                       | (((0U == (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x21U))))
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x21U))))
                                ? vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40s_pc_target_i__DOT__pc_target
                                : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          >> 9U));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id) 
                      << 0x1fU));
            if (vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                    = ((0x9fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]) 
                       | (0xe0000000U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__alu_bch) 
                                          << 0x1eU) 
                                         | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_jmp_id) 
                                            << 0x1dU))));
            }
            if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id) 
                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__div_en))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                    = ((0xe07fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]) 
                       | (0x1f800000U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                  >> 0x27U)) 
                                         << 0x17U)));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__div_en) 
                      << 0x12U));
            if (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__div_en) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                    = ((0xfffcffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]) 
                       | (((0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])
                            ? 0U : (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                                                  >> 0x15U)))) 
                          << 0x10U));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__mul_en) 
                      << 0x16U));
            if (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__mul_en) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                    = ((0xffc7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]) 
                       | (0xfff80000U & ((0x200000U 
                                          & (((~ (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                  >> 5U)) 
                                              & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                                                         >> 0x1aU))) 
                                             << 0x15U)) 
                                         | (((0x20U 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])
                                              ? 0U : 
                                             (3U & (IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                                                            >> 0x18U)))) 
                                            << 0x13U))));
            }
            if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__mul_en) 
                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__div_en))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    = ((0xffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                       | ((IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw)))) 
                          << 0x10U));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                    = (((IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw)))) 
                        >> 0x10U) | ((IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw))) 
                                              >> 0x20U)) 
                                     << 0x10U));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                    = ((0xffff0000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]) 
                       | ((IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw))) 
                                   >> 0x20U)) >> 0x10U));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__csr_en) 
                      << 0xfU));
            if (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__csr_en) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    = ((0xffff9fffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                       | (((0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])
                            ? 0U : (3U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                  >> 0xfU)))) 
                          << 0xdU));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_en) 
                      << 0xcU));
            if (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_en) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    = ((0xfffff0ffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                       | (0xf00U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                             >> 0xaU)) 
                                    << 8U)));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id) 
                      << 7U));
            if (vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    = ((0xffffff87U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                       | (0xfffffff8U & ((0x40U & (
                                                   ((~ 
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                      >> 5U)) 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                               >> 7U))) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((~ 
                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                   >> 5U)) 
                                                 & (IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                            >> 6U))) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & (((~ 
                                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                      >> 5U)) 
                                                    & (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                               >> 5U))) 
                                                   << 4U)) 
                                               | (8U 
                                                  & (((~ 
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                        >> 5U)) 
                                                      & (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                                 >> 4U))) 
                                                     << 3U)))))));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                    = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U]) 
                       | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfe_insn_id) 
                          << 0x1fU));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    = ((0xfffffff8U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U]) 
                       | (0x7fffffffU & ((4U & (((~ 
                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                   >> 5U)) 
                                                 & (IData)(
                                                           (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                            >> 3U))) 
                                                << 2U)) 
                                         | ((0x7ffffffeU 
                                             & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_mret_insn_id) 
                                                << 1U)) 
                                            | ((0x7fffffffU 
                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfi_insn_id)) 
                                               | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfe_insn_id) 
                                                  >> 1U))))));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U]) 
                   | (0x40000000U & (((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                                          >> 2U)) & (IData)(
                                                            (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 8U))) 
                                     << 0x1eU)));
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we) 
                      << 0x1dU));
            if (vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                    = ((0xe0ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U]) 
                       | (0x1f000000U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                         << 0xaU)));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                = ((0xffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U]) 
                   | (0xff000000U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                     << 2U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                = ((0xff000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U]) 
                   | (0xffffffU & ((0xfffffcU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                                 << 2U)) 
                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                      >> 0x1eU))));
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                = ((0xffffc07fU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]) 
                   | (0x3f80U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                 >> 0xfU)));
            if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__alu_bch))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                    = ((0xffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U]) 
                       | ((((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                             << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                         >> 0x16U)) 
                           + ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])
                               ? 0U : ((0x4000000U 
                                        & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])
                                        ? 2U : 4U))) 
                          << 0x18U));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                    = ((0xff000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U]) 
                       | ((((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                             << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                         >> 0x16U)) 
                           + ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])
                               ? 0U : ((0x4000000U 
                                        & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])
                                        ? 2U : 4U))) 
                          >> 8U));
            }
            if ((0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                    = ((0x7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]) 
                       | ((IData)((((QData)((IData)(
                                                    (0xffffU 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                        >> 6U)))) 
                                    << 1U) | (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                 >> 6U)))))) 
                          << 0x17U));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                    = ((0xff000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U]) 
                       | (((IData)((((QData)((IData)(
                                                     (0xffffU 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                         >> 6U)))) 
                                     << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                  >> 6U)))))) 
                           >> 9U) | ((IData)(((((QData)((IData)(
                                                                (0xffffU 
                                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                                                    >> 6U)))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                                     >> 6U))))) 
                                              >> 0x20U)) 
                                     << 0x17U)));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                    = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]) 
                       | (0x20000U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                      << 0x11U)));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                    = ((0xffff3fffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]) 
                       | (0xc000U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                     >> 0xfU)));
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                    = ((0x3fffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]) 
                       | ((IData)((0x3ffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])) 
                                       << 0x23U) | 
                                      (((QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) 
                                        << 3U) | ((QData)((IData)(
                                                                  vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])) 
                                                  >> 0x1dU))))) 
                          << 0xeU));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                    = ((0xff000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U]) 
                       | (((IData)((0x3ffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])) 
                                                   >> 0x1dU))))) 
                           >> 0x12U) | ((IData)(((0x3ffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U])) 
                                                         << 3U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])) 
                                                           >> 0x1dU)))) 
                                                 >> 0x20U)) 
                                        << 0xeU)));
            }
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                = ((0x3fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U]) 
                   | (0xc0000000U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U] 
                                     << 0x1bU)));
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                = ((0xc0000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U]) 
                   | (0x3fffffffU & ((0x38000000U & 
                                      (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                       << 0x1bU)) | 
                                     (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U] 
                                      >> 5U))));
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready) {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]);
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
                vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q = 0U;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_valid) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_ready))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                = (0x80U | vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U]);
            vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                = ((0xe03fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U]) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n) 
                      << 0x16U));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U]) 
                   | (((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid) 
                           | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert))) 
                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn)) 
                      << 5U));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U] 
                = ((7U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U]) 
                   | ((IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                                              ? 0U
                                                              : (IData)(vlSelf->__VdfgTmp_hdc70427a__0)))))) 
                      << 3U));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                = ((0xffffffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U]) 
                   | (((IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                                               ? 0U
                                                               : (IData)(vlSelf->__VdfgTmp_hdc70427a__0)))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                                                  ? 0U
                                                                  : (IData)(vlSelf->__VdfgTmp_hdc70427a__0))))) 
                                             >> 0x20U)) 
                                    << 3U)));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                = ((0xfffffff8U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U]) 
                   | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op) 
                       << 2U) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_if) 
                                  << 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_if))));
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)))) {
                if ((1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                           | (IData)((0ULL != (0x203ULL 
                                               & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed)))))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                        = ((0x3fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U]) 
                           | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                              << 0x16U));
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                        = ((0xffc00000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U]) 
                           | (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                              >> 0xaU));
                }
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                    = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U]) 
                       | (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)) 
                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_compressed)) 
                          << 0x1aU));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                    = ((0xff3fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U]) 
                       | (0xffc00000U & ((((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)) 
                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp)) 
                                          << 0x17U) 
                                         | (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)) 
                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_pushpop)) 
                                            << 0x16U))));
                if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_compressed) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                        = ((0xffc0003fU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U]) 
                           | (0x3fffc0U & ((IData)(
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                    >> 0xaU)) 
                                           << 6U)));
                }
            }
            if (vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] 
                    = ((7U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U]) 
                       | ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                   >> 0xaU)) << 3U));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U] 
                    = ((0xfffffff8U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U]) 
                       | ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                   >> 0xaU)) >> 0x1dU));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U]) 
                       | (0x40U & ((IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                            >> 9U)) 
                                   << 6U)));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                    = ((0x9fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U]) 
                       | (0x60000000U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed) 
                                         << 0x1dU)));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U]) 
                       | (1U & (IData)((vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        >> 3U))));
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                    = ((0x1fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U]) 
                       | ((IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                    ? (((QData)((IData)(vlSelf->__VdfgTmp_hc0917257__0)) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                             >> 0x10U)))) 
                                         << 0x1eU) 
                                        | (QData)((IData)(
                                                          ((0x3e000000U 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                               << 0x11U)) 
                                                           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->__VdfgTmp_hbd0ad740__0) 
                                                                  << 0x11U) 
                                                                 | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode) 
                                                                    << 0xaU))))))))
                                    : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)
                                        ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr
                                        : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed))) 
                          << 0x1dU));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    = (((IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                  ? (((QData)((IData)(vlSelf->__VdfgTmp_hc0917257__0)) 
                                      << 0x23U) | (
                                                   ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                                        >> 0x10U)))) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     ((0x3e000000U 
                                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                                          << 0x11U)) 
                                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->__VdfgTmp_hbd0ad740__0) 
                                                                             << 0x11U) 
                                                                            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode) 
                                                                               << 0xaU))))))))
                                  : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)
                                      ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr
                                      : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed))) 
                        >> 3U) | ((IData)((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                             ? (((QData)((IData)(vlSelf->__VdfgTmp_hc0917257__0)) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                                        >> 0x10U)))) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     ((0x3e000000U 
                                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                                          << 0x11U)) 
                                                                      | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->__VdfgTmp_hbd0ad740__0) 
                                                                             << 0x11U) 
                                                                            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode) 
                                                                               << 0xaU))))))))
                                             : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)
                                                 ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr
                                                 : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed)) 
                                           >> 0x20U)) 
                                  << 0x1dU));
                vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                    = ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U]) 
                       | (0xffU & ((IData)((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert)
                                              ? (((QData)((IData)(vlSelf->__VdfgTmp_hc0917257__0)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                                         >> 0x10U)))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3e000000U 
                                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                                                                           << 0x11U)) 
                                                                       | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3) 
                                                                           << 0x16U) 
                                                                          | (((IData)(vlSelf->__VdfgTmp_hbd0ad740__0) 
                                                                              << 0x11U) 
                                                                             | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode) 
                                                                                << 0xaU))))))))
                                              : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)
                                                  ? vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr
                                                  : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed)) 
                                            >> 0x20U)) 
                                   >> 3U)));
            }
        } else if (vlSelf->CSoC_top__DOT__u_core__DOT__id_ready) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                = (0x7fU & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U]);
        }
        if ((2U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q 
                = (IData)(((0x68000000U == (0x78000000U 
                                            & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) 
                           & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = 0U;
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q 
                = (IData)(((0x8000000U == (0x78000000U 
                                           & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U])) 
                           & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[6U]));
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q 
                = (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                   >> 0x1fU);
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n);
        } else {
            if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = 0U;
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n;
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q = 0U;
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q = 0U;
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n;
            }
            if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
                vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n;
            }
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we) 
             | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o) 
                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_if)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q 
                = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o)
                    ? 0U : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we)
                             ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
                             : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_n));
        }
    } else {
        __Vdly__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q = 0U;
        __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 0U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 1U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v63 = 1U;
        __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 0U;
        __Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 5U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = 0x33ffeULL;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] = 0x1000000U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x1000U | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x8000000U | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x20000000U | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q = 3U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_sext_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc = 0ULL;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q = 3U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 0U;
        __Vdly__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[0U] = 0xc00U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[1U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[2U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[3U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_we_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            = (0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
            = (0x7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            = (0x3ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[1U] = 0x18U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[2U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
            = (0xfffffff8U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            = (0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
            = (0xff8fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            = (0xffffc01fU & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
            = (7U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
            = (0xfff00000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            = (0xffffffe0U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            = (0xc000U | vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            = (0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
            = (0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] = 0x9800000U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            = (0x30U | vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            = (0x3000000U | (0x7fU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]));
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
            = (0x80000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            = (0xfffffff0U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]);
        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[0U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[1U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] = 0x18U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] = 0x180U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q 
        = __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q 
        = __Vdly__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
        = __Vdly__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q;
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v0;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xaU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xaU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xbU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xbU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xcU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xcU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xdU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xdU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xeU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xeU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xfU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xfU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x10U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x10U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x11U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x11U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x12U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x12U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x13U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x13U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x14U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x14U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x15U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x15U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x16U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x16U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x17U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x17U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x18U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x18U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x19U] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x19U] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1aU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1aU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1bU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1bU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1cU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1cU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1dU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1dU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1eU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1eU] = 0x2a00000000ULL;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1fU] 
            = __Vdlyvval__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62;
    }
    if (__Vdlyvset__CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v63) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1fU] = 0x2a00000000ULL;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q 
        = __Vdly__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable 
        = (1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id) 
                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id))));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[1U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [1U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[2U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [2U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[3U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [3U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[4U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [4U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[5U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [5U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[6U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [6U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[7U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [7U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[8U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [8U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[9U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [9U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0xaU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0xaU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0xbU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0xbU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0xcU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0xcU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0xdU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0xdU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0xeU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0xeU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0xfU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0xfU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x10U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x10U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x11U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x11U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x12U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x12U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x13U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x13U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x14U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x14U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x15U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x15U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x16U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x16U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x17U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x17U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x18U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x18U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x19U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x19U];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x1aU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x1aU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x1bU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x1bU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x1cU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x1cU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x1dU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x1dU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x1eU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x1eU];
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0x1fU] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [0x1fU];
    vlSelf->__VdfgTmp_h9293e1c0__0 = ((5U >= (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))) 
                                      && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))) 
                   >> 0x20U));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q 
        = ((IData)(vlSelf->CSoC_top__DOT__rst_core_n) 
           && (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
           - (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[0U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[0U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT____VdfgTmp_hf5b457eb__0 
        = ((2U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                   >> 0x1cU)) | (6U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                        >> 0x1cU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 0U;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match = 0U;
    if ((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 1U;
                CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match 
                    = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
            }
        }
        if ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        } else if ((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_n 
        = VL_SHIFTL_III(32,32,32, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q, 1U);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_n 
        = VL_SHIFTL_III(32,32,32, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q, 1U);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_interruptible 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid_q)) 
           & (0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q)
            ? vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q
            : vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0 
        = ((2U >= (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
           && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 
        = ((2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
            ? (3U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            : 0U);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i 
        = ((0x7dU >= ((IData)(2U) + (0x7fU & ((IData)(0x2aU) 
                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
            ? (0xffffffffffULL & (((QData)((IData)(
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                   (((IData)(0x29U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x2aU) 
                                                         * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x2aU) 
                                                           * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x2aU) 
                                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x2aU) 
                                                          * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x2aU) 
                                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))))
            : 0ULL);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
        [0U];
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    if ((0U == vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
            [0U];
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
            [0U];
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
            ? vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q
            : CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i 
        = ((0x7dU >= ((IData)(2U) + (0x7fU & ((IData)(0x2aU) 
                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
            ? (0xffffffffffULL & (((QData)((IData)(
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                   (((IData)(0x29U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x2aU) 
                                                         * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x2aU) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x2aU) 
                                                           * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x2aU) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x2aU) 
                                                                       * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x2aU) 
                                                          * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))) 
                                     | ((QData)((IData)(
                                                        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                        (((IData)(2U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x2aU) 
                                                              * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                                         >> 5U)])) 
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x2aU) 
                                                   * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))))
            : 0ULL);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h055474d3__0 
        = ((2U >= (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
           && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd1a451ee__0 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q)) 
           & (2U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_wb 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            >> 0x11U) & (0U != (0x1800000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = ((0U != (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                     << 0x1dU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                                  >> 3U)) | vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb)) 
           & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
              >> 0x11U));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
            >> 0x11U) & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                         >> 0x1cU));
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_wb 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                  >> 3U) & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                            >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h3ecfe561__0 
        = (IData)((0x2080U == (0x2080U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr[0U] 
        = (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                    >> 0x17U));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e1fb522__0 
        = (IData)((0x2800U == (0x2800U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e23c627__0 
        = (IData)((0x2400U == (0x2400U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f9bfbd6__0 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                  >> 0x13U) & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                               >> 0x11U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb 
        = (IData)((0x23000U == (0x23000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h72df47b6__0 
        = (1U & (IData)(((0x22000U == (0x22000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])) 
                         & (0U != (0x60U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb 
        = (IData)((0x22100U == (0x22100U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                  >> 0x11U) & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h3ecfe561__0) 
                               | ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                   >> 0x15U) | ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                                 >> 0x14U) 
                                                | ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 0x13U) 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U]))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e1fb522__0) 
           & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
              >> 0x11U));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
           | (0x22200U == (0x22200U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])));
    vlSelf->CSoC_top__DOT__core_fencei_flush_req = 
        ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                  >> 0x11U) & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                >> 0x13U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_he3dfd21d__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h655d388e__0 
        = (1U & (~ ((IData)(vlSelf->CSoC_top__DOT__core_fencei_flush_req) 
                    | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_ex 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            >> 6U) & (0U != (0x3000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem 
        = ((3U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                         >> 0x10U))) | (2U == (3U & 
                                               (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                >> 0x10U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out 
        = (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
             == vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q) 
            | ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                > vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q) 
               ^ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))) 
           & ((~ (IData)((0U != ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                  << 0x10U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                               >> 0x10U))))) 
              | (0U != vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = (IData)((0x1ffffffffULL & (((1ULL | ((QData)((IData)(
                                                               ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                 << 9U) 
                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                   >> 0x17U)))) 
                                               << 1U)) 
                                      + (((QData)((IData)(
                                                          ((0x4000000U 
                                                            & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                                            ? 
                                                           (~ 
                                                            ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                              << 9U) 
                                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                >> 0x17U)))
                                                            : 
                                                           ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                             << 9U) 
                                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                               >> 0x17U))))) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                       >> 0x1aU)))))) 
                                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd 
        = (VL_SHIFTL_III(32,32,32, ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U)), 
                         ((0x22U == (0x3fU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              >> 0x17U)))
                           ? 1U : ((0x24U == (0x3fU 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x17U)))
                                    ? 2U : 3U))) + 
           ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
             << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                       >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        ((0xff8fU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)) 
         | (0x40U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                      >> 1U) & (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                  << 6U) | (0x40U & 
                                            (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                             >> 0x19U))) 
                                & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = 0U;
    if ((0x10000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                      >> 0x1bU)))) {
            if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x1aU)))) {
                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x18U)))) {
                    if ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                          >> 0x17U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         >> 0x1bU)))) {
        if ((0x4000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x18U)))) {
                    if ((0x800000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = (- (IData)((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                >> 0x16U))));
                    }
                }
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh 
        = ((0x10000U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                         >> 4U) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                   << 1U))) | (0xffffU 
                                               & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U]));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah 
        = (((IData)((0x88000U == (0x88000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]))) 
            << 0x10U) | (0xffffU & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U]));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h2fa28643__0 
        = (IData)((0x40U == (0x42U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h417d913a__0 
        = (IData)((0x82U == (0x82U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                  >> 0x1dU) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                               >> 6U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                  >> 0x16U) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                               >> 6U)));
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed 
        = ((1U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                         >> 0x10U))) | (3U == (3U & 
                                               (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                >> 0x10U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                  >> 0x12U) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                               >> 6U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h5f17af21__0 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                  >> 0xfU) & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                              >> 6U)));
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = VL_GTS_IQQ(33, (((QData)((IData)((0x4400000U 
                                            == (0x4400000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])))) 
                           << 0x20U) | (QData)((IData)(
                                                       ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                         << 9U) 
                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                           >> 0x17U))))), 
                     (((QData)((IData)((1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x16U) 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x1aU))))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                     << 9U) 
                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                       >> 0x17U))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_in_ex 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
            >> 6U) & (0xc0000000U == (0xc0000000U & 
                                      vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU])));
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
             << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                       >> 0x17U)) == ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
            >> 0xfU) & (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read_priv 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h5f17af21__0)
             ? (3U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                       << 1U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                 >> 0x1fU))) : 0U) 
           > (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                    >> 4U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_he47001db__0 
        = (0x3fU & VL_SHIFTL_III(6,6,32, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h5f17af21__0)
                                           ? (0xfU 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                 >> 0x17U))
                                           : 0U), 2U));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h5f17af21__0)
            ? (0xfffU & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                          << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                    >> 0x17U))) : 0U);
    if (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                          >> 0x17U));
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                          >> 0x17U));
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                          >> 0x17U));
        vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                          >> 0x17U));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0 
        = ((IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
           | (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0 
        = ((IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
           & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
               >> 0xfU) ^ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)));
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
        = ((0x10000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U])
            ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                ? (1U | ((~ ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                              << 0x10U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                           >> 0x10U))) 
                         << 1U)) : ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                     << 0x10U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                  >> 0x10U)))
            : ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                << 0x10U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                             >> 0x10U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 0U;
    if ((0x800U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz = (0x3ffffffU 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz);
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz 
                                                        = 
                                                        (0x4000000U 
                                                         | vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz);
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
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz = ((0xc000000U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz) 
                                                  | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h5f17af21__0) 
                                                      << 0x19U) 
                                                     | ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f9bfbd6__0) 
                                                          & (0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                 >> 0x11U)))) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                            << 0xcU) 
                                                           | (0xfffU 
                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                 >> 5U))))));
    __Vtableidx4 = ((0x200U & ((~ (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
                               << 9U)) | ((0x100U & 
                                           ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0)) 
                                            << 8U)) 
                                          | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0) 
                                              << 7U) 
                                             | ((0x7eU 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                    >> 0x16U)) 
                                                | (IData)(CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_cmp_result 
        = VCSoC_top__ConstPool__TABLE_h0a98d2e0_0[__Vtableidx4];
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_raddr_id[0U] 
        = (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    >> 0x16U));
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_raddr_id[1U] 
        = (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
           >> 0x1bU);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hbd94c080__0 
        = ((0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                     >> 0x18U)) == (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                             >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hf56e56e2__0 
        = ((0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                     >> 0x17U)) == (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                             >> 0x16U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x9f510000100ULL;
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
        = (0x1fffffffffeffULL & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
    if ((0x33U == (0x7fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                            >> 7U)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x1c0000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x7400000000ULL | (0x1ff81ffffffffULL 
                                  & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
        if (((((((((8U == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                      << 3U)) | (7U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 0x13U)))) 
                   | (9U == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                        << 3U)) | (7U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 0x13U))))) 
                  | (0xaU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                         << 3U)) | 
                              (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                     >> 0x13U))))) 
                 | (0xbU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                        << 3U)) | (7U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                      >> 0x13U))))) 
                | (0xcU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                       << 3U)) | (7U 
                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                     >> 0x13U))))) 
               | (0xdU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                      << 3U)) | (7U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                    >> 0x13U))))) 
              | (0xeU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                     << 3U)) | (7U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                   >> 0x13U))))) 
             | (0xfU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                    << 3U)) | (7U & 
                                               (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                >> 0x13U)))))) {
            if ((8U == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                   << 3U)) | (7U & 
                                              (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                               >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x8000000ULL | (0x1fffff3ffffffULL 
                                       & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((9U == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          << 3U)) | 
                               (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                      >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0xf000000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
            } else if ((0xaU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            << 3U)) 
                                 | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                          >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0xd000000ULL | (0x1fffff0ffffffULL 
                                       & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xbU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            << 3U)) 
                                 | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                          >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0xc000000ULL | (0x1fffff0ffffffULL 
                                       & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xcU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            << 3U)) 
                                 | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                          >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0xa00000ULL | (0x1ffffff1fffffULL 
                                      & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x8000000000ULL | (0x1e07fffffffffULL 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xdU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            << 3U)) 
                                 | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                          >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x800000ULL | (0x1ffffff1fffffULL 
                                      & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x8000000000ULL | (0x1e07fffffffffULL 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xeU == ((0x3f8U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            << 3U)) 
                                 | (7U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                          >> 0x13U))))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0xe00000ULL | vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x8000000000ULL | (0x1e07fffffffffULL 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0xc00000ULL | (0x1ffffff1fffffULL 
                                      & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x8000000000ULL | (0x1e07fffffffffULL 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x9f510000100ULL;
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x9f510000100ULL;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                              >> 6U)))) << 0xcU) | 
           (0xfffU & ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                       << 5U) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                 >> 0x1bU))));
    vlSelf->__VdfgTmp_hd874cca6__0 = (IData)((0U != 
                                              (0x18000000U 
                                               & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id 
        = ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
            >> 0x19U) & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                         >> 7U));
    CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
            << 0x1fU) | ((0x40000000U & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                         << 0x1dU)) 
                         | ((0x20000000U & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                            << 0x1bU)) 
                            | ((0x10000000U & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               << 0x19U)) 
                               | ((0x8000000U & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1dU)) 
                                                                                | (CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hf56e56e2__0) 
           & (0U != (0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                              >> 0x16U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
        = ((0x20U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U])
            ? 0x9f510000100ULL : vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
    if (vlSelf->__VdfgTmp_hd874cca6__0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_id 
            = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U] 
                     >> 7U));
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
            [0U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_id = 0U;
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[0U] = 0x2a00000000ULL;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
            ? CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev
            : ((0x28U == (0x3fU & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                   >> 0x17U))) ? ((
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                   << 9U) 
                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                     >> 0x17U))
                : VL_STREAML_FAST_III(32, ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            << 9U) 
                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                              >> 0x17U)), 0)));
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_rdata_id[0U] 
        = (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated
                  [(0x1fU & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                             >> 0x16U))]);
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_rdata_id[1U] 
        = (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated
                  [(vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    >> 0x1bU)]);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_n 
        = VL_SHIFTL_III(32,32,32, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q, 1U);
    __Vtableidx3 = (3U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3 
        = VCSoC_top__ConstPool__TABLE_h994e36f9_0[__Vtableidx3];
    CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7 
        = VCSoC_top__ConstPool__TABLE_h57871b8e_0[__Vtableidx3];
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode 
        = VCSoC_top__ConstPool__TABLE_h257eef1a_0[__Vtableidx3];
    vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if = 
        ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
         | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q) 
            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)));
    vlSelf->__VdfgTmp_hc0917257__0 = ((0x63U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode))
                                       ? 0U : (IData)(CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct7));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__16(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__16\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__17(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__17\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__18(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__18\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__19(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__20(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__20\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__21(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__22(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__23(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__23\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__24(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__24\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__25(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__25\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__26(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__26\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__27(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__27\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__28(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__28\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__29(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__29\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__30(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__30\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__31(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__31\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__33(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__33\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[0U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__34(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__34\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[1U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__35(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__35\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[2U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__36(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__36\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[3U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__37(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__37\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[4U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__38(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[5U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__39(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__39\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[6U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__40(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__40\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[7U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__41(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__41\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[8U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__42(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__42\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[9U] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__43(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__43\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[0xaU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__44(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__44\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[0xbU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__45(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__45\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[0xcU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__46(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__46\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[0xdU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__47(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__47\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[0xeU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__48(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__48\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[0xfU] 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o;
}

VL_INLINE_OPT void VCSoC_top___024root___nba_sequent__TOP__53(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_sequent__TOP__53\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_uart__DOT__tx_fifo_rvalid;
    CSoC_top__DOT__u_uart__DOT__tx_fifo_rvalid = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelf->__Vdly__CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelf->__Vdly__CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelf->__Vdly__CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt 
        = ((vlSelf->CSoC_top__DOT__host_gnt[0U] << 1U) 
           | (1U & (~ vlSelf->CSoC_top__DOT__host_gnt
                    [0U])));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                 >> 0x10U));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq = 0U;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__resumereq = 0U;
    if ((0U >= (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h7f10666d__0 
            = (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
               >> 0x1fU);
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h2f595387__0 
            = (1U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1eU));
        if ((0U >= (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq)) 
                   | (1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h7f10666d__0) 
                            << (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__resumereq)) 
                   | (1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h2f595387__0) 
                            << (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
        }
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelf->rst_sys_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelf->rst_sys_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelf->rst_sys_ni))) || (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelf->rst_sys_ni))) || (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelf->rst_sys_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelf->rst_sys_ni) && (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d));
    if (vlSelf->rst_sys_ni) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        if ((vlSelf->CSoC_top__DOT__device_req[8U] 
             & (~ vlSelf->CSoC_top__DOT__device_we[8U]))) {
            vlSelf->CSoC_top__DOT__u_aes__DOT__captured_read_data 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data;
        }
        if (((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_start) 
             | (0x63U == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_q)))) {
            vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_q 
                = vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_d;
        }
        if ((vlSelf->CSoC_top__DOT__device_req[7U] 
             & vlSelf->CSoC_top__DOT__device_we[7U])) {
            if ((1U & vlSelf->CSoC_top__DOT__device_be
                 [7U])) {
                vlSelf->CSoC_top__DOT__u_secure_ctrl__DOT__security_level 
                    = (1U & vlSelf->CSoC_top__DOT__device_wdata
                       [7U]);
            }
        }
        vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_q 
            = vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_d;
    } else {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelf->CSoC_top__DOT__u_aes__DOT__captured_read_data = 0U;
        vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_q = 0U;
        vlSelf->CSoC_top__DOT__u_secure_ctrl__DOT__security_level = 1U;
        vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_q = 0U;
    }
    vlSelf->CSoC_top__DOT____Vcellout__u_aes__device_rvalid_o 
        = ((IData)(vlSelf->rst_sys_ni) && vlSelf->CSoC_top__DOT__device_req
           [8U]);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                        >> 7U)) << 7U));
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_fifo_full 
        = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                        >> 7U)) << 7U));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                        >> 7U)) << 7U));
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_full 
        = ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err 
        = ((1U & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt) 
                  >> 1U)) == (1U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt)));
    CSoC_top__DOT__u_uart__DOT__tx_fifo_rvalid = (1U 
                                                  & ((~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                                     & (~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_start = (IData)(
                                                           ((4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_q))) 
                                                            & (0U 
                                                               == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_q))));
    vlSelf->CSoC_top__DOT__uart_irq = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                             & (~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_rvalid 
        = (1U & ((~ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->CSoC_top__DOT__device_rdata[4U] = ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__read_status_q)
                                                ? (
                                                   ((0U 
                                                     == 
                                                     ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_full)
                                                       ? 0x7fU
                                                       : 
                                                      (0x7fU 
                                                       & (((1U 
                                                            & ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                               >> 7U)) 
                                                           == 
                                                           (1U 
                                                            & ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                               >> 7U)))
                                                           ? 
                                                          ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                           - (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                                           : 
                                                          (((IData)(0x7fU) 
                                                            - (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                           + (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_full))
                                                : 0U);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1));
    vlSelf->CSoC_top__DOT__device_rdata[8U] = vlSelf->CSoC_top__DOT__u_aes__DOT__captured_read_data;
    vlSelf->CSoC_top__DOT__device_rvalid[8U] = vlSelf->CSoC_top__DOT____Vcellout__u_aes__device_rvalid_o;
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_d 
        = vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q))) {
            vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_d 
                = ((IData)(CSoC_top__DOT__u_uart__DOT__tx_fifo_rvalid)
                    ? 1U : 0U);
        } else if ((7U == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_bit_counter_q))) {
            vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q))) {
        vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_d = 2U;
    } else if (CSoC_top__DOT__u_uart__DOT__tx_fifo_rvalid) {
        vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_d = 1U;
    }
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(CSoC_top__DOT__u_uart__DOT__tx_fifo_rvalid) 
           & ((~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((0x63U == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_baud_counter_q)) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_next_byte))));
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_d 
        = vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_q;
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_d 
        = vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_q;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_q)))) {
            vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_d 
                = ((0x80U & ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_q) 
                             << 5U)) | (0x7fU & ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_q) 
                                                 >> 1U)));
        }
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_q))) {
            vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_d = 0U;
        } else if ((7U == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_bit_counter_q))) {
            vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_q))) {
        vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_d = 0U;
        vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_d 
            = ((4U & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_q))
                ? 0U : 2U);
    } else if (vlSelf->CSoC_top__DOT__u_uart__DOT__rx_start) {
        vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_d = 1U;
    }
    vlSelf->CSoC_top__DOT__core_irq = (((IData)(vlSelf->CSoC_top__DOT__uart_irq) 
                                        << 0x10U) | 
                                       ((IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__interrupt_q) 
                                        << 7U));
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_d 
        = vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 0U;
        } else if ((0U == (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q))) {
            vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 2U;
    } else if (vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_rvalid) {
        vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 1U;
    }
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_rvalid) 
           & ((~ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((~ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__next_tx_byte_q)) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__next_tx_byte_d))));
    vlSelf->CSoC_top__DOT__device_rdata[7U] = vlSelf->CSoC_top__DOT__u_secure_ctrl__DOT__security_level;
    vlSelf->CSoC_top__DOT__host_rvalid[0U] = ((1U & 
                                               (~ (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_resp))) 
                                              && ((8U 
                                                   >= (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp)) 
                                                  && vlSelf->CSoC_top__DOT__device_rvalid
                                                  [vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp]));
    vlSelf->CSoC_top__DOT__host_rvalid[1U] = ((IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_resp) 
                                              && ((8U 
                                                   >= (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp)) 
                                                  && vlSelf->CSoC_top__DOT__device_rvalid
                                                  [vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp]));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7eU == (0x7fU & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = 0U;
    if ((4U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlSelf->CSoC_top__DOT__host_rvalid
                    [1U]) {
                    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                        = (1U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                 >> 0x10U));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if (vlSelf->CSoC_top__DOT__host_rvalid[1U]) {
                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en 
                    = (1U & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                             >> 0x10U));
            }
        }
    }
    vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_rvalid 
        = ((vlSelf->CSoC_top__DOT__host_rvalid[0U] 
            << 1U) | (1U & (~ vlSelf->CSoC_top__DOT__host_rvalid
                            [0U])));
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_d 
        = ((0x63U == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_q))
            ? 0U : ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_start)
                     ? 0x32U : (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_q)))));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((0x63U == (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_q)) 
            & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__rx_valid)) 
           & ((~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                 != (0x80U ^ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp 
        = ((1U & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_rvalid) 
                  >> 1U)) == (1U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_rvalid)));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__17(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_wr_in_wb_flush 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f9bfbd6__0) 
            & ((1U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                             >> 0x11U))) | ((2U == 
                                             (3U & 
                                              (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 0x11U))) 
                                            | (3U == 
                                               (3U 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                   >> 0x11U)))))) 
           & (((0xbf0U == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                     >> 5U))) | ((0xbf9U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                      >> 5U))) 
                                                 | ((0xbfaU 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U))) 
                                                    | (0xbfcU 
                                                       == 
                                                       (0xfffU 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                           >> 5U)))))) 
              | ((((0x3afU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                         >> 5U))) | 
                   ((0x3aeU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 5U))) 
                    | ((0x3adU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                             >> 5U))) 
                       | ((0x3acU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                >> 5U))) 
                          | ((0x3abU == (0xfffU & (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                   >> 5U))) 
                             | ((0x3aaU == (0xfffU 
                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 5U))) 
                                | ((0x3a9U == (0xfffU 
                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 5U))) 
                                   | ((0x3a8U == (0xfffU 
                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                     >> 5U))) 
                                      | ((0x3a7U == 
                                          (0xfffU & 
                                           (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                            >> 5U))) 
                                         | ((0x3a6U 
                                             == (0xfffU 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 5U))) 
                                            | ((0x3a5U 
                                                == 
                                                (0xfffU 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 5U))) 
                                               | ((0x3a4U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                       >> 5U))) 
                                                  | ((0x3a3U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                          >> 5U))) 
                                                     | ((0x3a2U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                             >> 5U))) 
                                                        | ((0x3a1U 
                                                            == 
                                                            (0xfffU 
                                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                >> 5U))) 
                                                           | (0x3a0U 
                                                              == 
                                                              (0xfffU 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                  >> 5U)))))))))))))))))) 
                  | (((0x3bfU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                            >> 5U))) 
                      | ((0x3beU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                               >> 5U))) 
                         | ((0x3bdU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                  >> 5U))) 
                            | ((0x3bcU == (0xfffU & 
                                           (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                            >> 5U))) 
                               | ((0x3bbU == (0xfffU 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                 >> 5U))) 
                                  | ((0x3baU == (0xfffU 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                    >> 5U))) 
                                     | ((0x3b9U == 
                                         (0xfffU & 
                                          (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                           >> 5U))) 
                                        | ((0x3b8U 
                                            == (0xfffU 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                   >> 5U))) 
                                           | ((0x3b7U 
                                               == (0xfffU 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                      >> 5U))) 
                                              | ((0x3b6U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                      >> 5U))) 
                                                 | ((0x3b5U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                         >> 5U))) 
                                                    | ((0x3b4U 
                                                        == 
                                                        (0xfffU 
                                                         & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                            >> 5U))) 
                                                       | ((0x3b3U 
                                                           == 
                                                           (0xfffU 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                               >> 5U))) 
                                                          | ((0x3b2U 
                                                              == 
                                                              (0xfffU 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                  >> 5U))) 
                                                             | ((0x3b1U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                     >> 5U))) 
                                                                | (0x3b0U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                                                       >> 5U)))))))))))))))))) 
                     | ((0x747U == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                              >> 5U))) 
                        | (IData)(vlSelf->CSoC_top__DOT____Vcellout__u_secure_ctrl__rvalid_o)))) 
                 | ((0x17U == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                         >> 5U))) | 
                    (0x30cU == (0xfffU & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                                          >> 5U)))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
           & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq) 
              | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_resp_valid 
        = (1U & (((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U)))) 
                  && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                            >> ((IData)(1U) + (7U & 
                                               VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))))
                  ? ((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U)))) 
                     && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                               >> ((IData)(1U) + (7U 
                                                  & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U))))))
                  : ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_rvalid) 
                     >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_interruptible) 
              & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h655d388e__0) 
                 & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb)) 
                    & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q)) 
                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd1a451ee__0))))));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__25(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__25\n"); );
    // Init
    VlWide<52>/*1663:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<69>/*2207:0*/ __Vtemp_32;
    VlWide<70>/*2239:0*/ __Vtemp_33;
    VlWide<70>/*2239:0*/ __Vtemp_34;
    VlWide<70>/*2239:0*/ __Vtemp_35;
    VlWide<70>/*2239:0*/ __Vtemp_36;
    VlWide<71>/*2271:0*/ __Vtemp_37;
    VlWide<71>/*2271:0*/ __Vtemp_38;
    VlWide<71>/*2271:0*/ __Vtemp_39;
    VlWide<71>/*2271:0*/ __Vtemp_40;
    VlWide<72>/*2303:0*/ __Vtemp_41;
    VlWide<72>/*2303:0*/ __Vtemp_42;
    VlWide<72>/*2303:0*/ __Vtemp_43;
    VlWide<72>/*2303:0*/ __Vtemp_44;
    VlWide<73>/*2335:0*/ __Vtemp_45;
    VlWide<73>/*2335:0*/ __Vtemp_46;
    VlWide<73>/*2335:0*/ __Vtemp_47;
    VlWide<73>/*2335:0*/ __Vtemp_48;
    // Body
    __Vtemp_1[0U] = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o;
    __Vilp = 1U;
    while ((__Vilp <= 0x33U)) {
        __Vtemp_1[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtemp_31[0U] = (IData)((QData)((IData)(vlSelf->__VdfgTmp_h7d22ad46__0)));
    __Vtemp_31[1U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 2U) | (IData)(((QData)((IData)(vlSelf->__VdfgTmp_h7d22ad46__0)) 
                                         >> 0x20U)));
    __Vtemp_31[2U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 4U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                 >> 0x1eU));
    __Vtemp_31[3U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 6U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                 >> 0x1cU));
    __Vtemp_31[4U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 8U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                 >> 0x1aU));
    __Vtemp_31[5U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 0xaU) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                   >> 0x18U));
    __Vtemp_31[6U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 0xcU) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                   >> 0x16U));
    __Vtemp_31[7U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 0xeU) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                   >> 0x14U));
    __Vtemp_31[8U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 0x10U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                    >> 0x12U));
    __Vtemp_31[9U] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                       << 0x12U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                    >> 0x10U));
    __Vtemp_31[0xaU] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                         << 0x14U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                      >> 0xeU));
    __Vtemp_31[0xbU] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                         << 0x16U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                      >> 0xcU));
    __Vtemp_31[0xcU] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                         << 0x18U) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                      >> 0xaU));
    __Vtemp_31[0xdU] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                         << 0x1aU) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                      >> 8U));
    __Vtemp_31[0xeU] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                         << 0x1cU) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                      >> 6U));
    __Vtemp_31[0xfU] = ((vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                         << 0x1eU) | (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                                      >> 4U));
    __Vtemp_31[0x10U] = (vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o 
                         >> 2U);
    VL_CONCAT_WWW(2208,1664,544, __Vtemp_32, __Vtemp_1, __Vtemp_31);
    VL_CONCAT_WIW(2216,8,2208, __Vtemp_33, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_32);
    VL_CONCAT_WIW(2224,8,2216, __Vtemp_34, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_33);
    VL_CONCAT_WIW(2232,8,2224, __Vtemp_35, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_34);
    VL_CONCAT_WIW(2240,8,2232, __Vtemp_36, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_35);
    VL_CONCAT_WIW(2248,8,2240, __Vtemp_37, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_36);
    VL_CONCAT_WIW(2256,8,2248, __Vtemp_38, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_37);
    VL_CONCAT_WIW(2264,8,2256, __Vtemp_39, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_38);
    VL_CONCAT_WIW(2272,8,2264, __Vtemp_40, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_39);
    VL_CONCAT_WIW(2280,8,2272, __Vtemp_41, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_40);
    VL_CONCAT_WIW(2288,8,2280, __Vtemp_42, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_41);
    VL_CONCAT_WIW(2296,8,2288, __Vtemp_43, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_42);
    VL_CONCAT_WIW(2304,8,2296, __Vtemp_44, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_43);
    VL_CONCAT_WIW(2312,8,2304, __Vtemp_45, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_44);
    VL_CONCAT_WIW(2320,8,2312, __Vtemp_46, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_45);
    VL_CONCAT_WIW(2328,8,2320, __Vtemp_47, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_46);
    VL_CONCAT_WIW(2336,8,2328, __Vtemp_48, (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o), __Vtemp_47);
    VL_EXTEND_WW(2720,2336, vlSelf->CSoC_top__DOT__u_core__DOT__csr_pmp, __Vtemp_48);
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__27(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__27\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
           & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_rvalid) 
              >> 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
           & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_rvalid) 
              >> 1U));
}

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__39(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__39\n"); );
    // Init
    QData/*63:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bf4b0__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bf4b0__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672c82ff__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672c82ff__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bd2ce__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bd2ce__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672be9bb__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672be9bb__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672cffeb__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672cffeb__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bca99__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bca99__0 = 0;
    CData/*5:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h9cf115cb__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h9cf115cb__0 = 0;
    QData/*37:0*/ CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_he725c4b4__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_he725c4b4__0 = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
        = (((QData)((IData)(vlSelf->CSoC_top__DOT__host_rdata
                            [0U])) << 9U) | (QData)((IData)(
                                                            (vlSelf->CSoC_top__DOT__host_err
                                                             [0U] 
                                                             << 7U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
        = ((0x1fffffffffcULL & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp) 
           | (IData)((IData)((((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp) 
                                 | ((8U >= ((IData)(1U) 
                                            + (0xfU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                    && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                                              >> ((IData)(1U) 
                                                  + 
                                                  (0xfU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q)))))))) 
                                | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp)) 
                               << 1U) | ((8U >= ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q))))) 
                                         && (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q) 
                                                   >> 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q)))))))))));
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned 
        = VL_SHIFTR_QQI(64,64,32, ((((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                     & (0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                    | ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                       & (3U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                    ? (((QData)((IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                         >> 9U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q)))
                                    : (((QData)((IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                         >> 9U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                                     >> 9U))))), 
                        VL_SHIFTL_III(32,32,32, (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q), 3U));
    vlSelf->__VdfgTmp_h026594b3__0 = (IData)((((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_rvalid) 
                                               >> 1U) 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                 >> 7U)));
    vlSelf->__VdfgTmp_h071f4112__0 = (IData)((((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_rvalid) 
                                               >> 1U) 
                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp 
                                                 >> 1U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_ext 
        = ((0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q))
            ? (((- (IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                            & (IData)((CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned 
                                       >> 7U))))) << 8U) 
               | (0xffU & (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned)))
            : ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q))
                ? (((- (IData)(((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                                & (IData)((CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned 
                                           >> 0xfU))))) 
                    << 0x10U) | (0xffffU & (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned)))
                : (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned)));
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_err_wb 
        = (((IData)(vlSelf->__VdfgTmp_h026594b3__0) 
            << 2U) | (((IData)(vlSelf->__VdfgTmp_h071f4112__0) 
                       << 1U) | (IData)(vlSelf->__VdfgTmp_h9293e1c0__0)));
    if ((8U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_wb 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_ext;
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_ext;
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_wb 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0x17U));
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata[0U] 
            = ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                          >> 0x17U));
    }
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bf4b0__0 
        = (1U & VL_REDXOR_32((0x56aaad5bU & vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata
                              [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x3eU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | (IData)(CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bf4b0__0));
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672c82ff__0 
        = (1U & VL_REDXOR_32((0x9b33366dU & vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata
                              [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x3dU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672c82ff__0) 
                     << 1U));
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bd2ce__0 
        = (1U & VL_REDXOR_32((0xe3c3c78eU & vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata
                              [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x3bU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bd2ce__0) 
                     << 2U));
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672be9bb__0 
        = (1U & VL_REDXOR_32((0x3fc07f0U & vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata
                              [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x37U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672be9bb__0) 
                     << 3U));
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672cffeb__0 
        = (1U & VL_REDXOR_32((0x3fff800U & vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata
                              [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x2fU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672cffeb__0) 
                     << 4U));
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bca99__0 
        = (1U & VL_REDXOR_32((0xfc000000U & vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata
                              [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = ((0x1fU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
            [0U]) | ((IData)(CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h672bca99__0) 
                     << 5U));
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h9cf115cb__0 
        = (0x2aU ^ vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
           [0U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[0U] 
        = CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_h9cf115cb__0;
    CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_he725c4b4__0 
        = (((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc
                            [0U])) << 0x20U) | (QData)((IData)(
                                                               vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata
                                                               [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata[0U] 
        = CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT____Vlvbound_he725c4b4__0;
}

extern const VlUnpacked<CData/*1:0*/, 16> VCSoC_top__ConstPool__TABLE_h0089a27f_0;
extern const VlUnpacked<CData/*1:0*/, 16> VCSoC_top__ConstPool__TABLE_he32be4eb_0;

VL_INLINE_OPT void VCSoC_top___024root___nba_comb__TOP__69(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___nba_comb__TOP__69\n"); );
    // Init
    CData/*3:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__modified_access;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__modified_access = 0;
    VlWide<3>/*67:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg;
    VL_ZERO_W(68, CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg);
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 0;
    IData/*31:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0 = 0;
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb = 0;
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb = 0;
    CData/*0:0*/ CSoC_top__DOT__u_uart__DOT__rx_fifo_rready;
    CSoC_top__DOT__u_uart__DOT__rx_fifo_rready = 0;
    CData/*0:0*/ CSoC_top__DOT__u_timer__DOT__timer_we;
    CSoC_top__DOT__u_timer__DOT__timer_we = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__16__Vfuncout;
    __Vfunc_csr_next_value__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__16__wdata;
    __Vfunc_csr_next_value__16__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__21__Vfuncout;
    __Vfunc_csr_next_value__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__21__wdata;
    __Vfunc_csr_next_value__21__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__25__Vfuncout;
    __Vfunc_csr_next_value__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__25__wdata;
    __Vfunc_csr_next_value__25__wdata = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    VlWide<3>/*88:0*/ TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload;
    VL_ZERO_W(89, TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload);
    SData/*31:0*/ __Vtemp_1;
    // Body
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0 
        = (1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                    & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                       >> 0xdU))));
    vlSelf->CSoC_top__DOT__u_core__DOT__dcsr = ((0xfffffff0U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__gen_debug_csr__DOT__dcsr_csr_i__rd_data_o) 
                                                | ((8U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                       >> 0x1aU)) 
                                                   | (7U 
                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__gen_debug_csr__DOT__dcsr_csr_i__rd_data_o)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl;
    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
    } else if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0;
    } else if ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                >> 0x1fU)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h20ed6652__0;
    }
    __Vfunc_csr_next_value__16__wdata = ((0xf0000000U 
                                          & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                                         | VL_EXTEND_II(28,16, 
                                                        ((0x8000U 
                                                          & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                         | VL_EXTEND_II(15,13, 
                                                                        ((([&]() {
                                    vlSelf->__Vfunc_dcsr_ebreaku_resolve__17__next_value 
                                        = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                 >> 0xcU));
                                    vlSelf->__Vfunc_dcsr_ebreaku_resolve__17__Vfuncout 
                                        = vlSelf->__Vfunc_dcsr_ebreaku_resolve__17__next_value;
                                }(), (IData)(vlSelf->__Vfunc_dcsr_ebreaku_resolve__17__Vfuncout)) 
                                                                          << 0xcU) 
                                                                         | ((0x800U 
                                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                                            | ((0x400U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                                               | VL_EXTEND_II(10,9, 
                                                                                ((0x1c0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                                                                                | VL_EXTEND_II(6,5, 
                                                                                ((0x10U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                                                                                | VL_EXTEND_II(4,3, 
                                                                                ((4U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                                                | ([&]() {
                                                                vlSelf->__Vfunc_dcsr_prv_resolve__18__next_value 
                                                                    = 
                                                                    (3U 
                                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                                                vlSelf->__Vfunc_dcsr_prv_resolve__18__current_value 
                                                                    = 
                                                                    (3U 
                                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr);
                                                                vlSelf->__Vfunc_dcsr_prv_resolve__18__Vfuncout 
                                                                    = 
                                                                    (((3U 
                                                                       != (IData)(vlSelf->__Vfunc_dcsr_prv_resolve__18__next_value)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->__Vfunc_dcsr_prv_resolve__18__next_value)))
                                                                      ? (IData)(vlSelf->__Vfunc_dcsr_prv_resolve__18__current_value)
                                                                      : (IData)(vlSelf->__Vfunc_dcsr_prv_resolve__18__next_value));
                                                            }(), (IData)(vlSelf->__Vfunc_dcsr_prv_resolve__18__Vfuncout)))))))))))))));
    __Vfunc_csr_next_value__16__Vfuncout = (0x40000010U 
                                            | (0x9dc7U 
                                               & __Vfunc_csr_next_value__16__wdata));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
        = __Vfunc_csr_next_value__16__Vfuncout;
    __Vfunc_csr_next_value__21__wdata = ((VL_EXTEND_II(11,1, 
                                                       ([&]() {
                        vlSelf->__Vfunc_mstatus_tw_resolve__22__next_value 
                            = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                     >> 0x15U));
                        vlSelf->__Vfunc_mstatus_tw_resolve__22__Vfuncout 
                            = vlSelf->__Vfunc_mstatus_tw_resolve__22__next_value;
                    }(), (IData)(vlSelf->__Vfunc_mstatus_tw_resolve__22__Vfuncout))) 
                                          << 0x15U) 
                                         | VL_EXTEND_II(21,18, 
                                                        ((([&]() {
                            vlSelf->__Vfunc_mstatus_mprv_resolve__23__next_value 
                                = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                         >> 0x11U));
                            vlSelf->__Vfunc_mstatus_mprv_resolve__23__Vfuncout 
                                = vlSelf->__Vfunc_mstatus_mprv_resolve__23__next_value;
                        }(), (IData)(vlSelf->__Vfunc_mstatus_mprv_resolve__23__Vfuncout)) 
                                                          << 0x11U) 
                                                         | VL_EXTEND_II(17,13, 
                                                                        ((([&]() {
                                    vlSelf->__Vfunc_mstatus_mpp_resolve__24__next_value 
                                        = (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                 >> 0xbU));
                                    vlSelf->__Vfunc_mstatus_mpp_resolve__24__current_value 
                                        = (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__mstatus 
                                                 >> 0xbU));
                                    vlSelf->__Vfunc_mstatus_mpp_resolve__24__Vfuncout 
                                        = (((3U != (IData)(vlSelf->__Vfunc_mstatus_mpp_resolve__24__next_value)) 
                                            & (0U != (IData)(vlSelf->__Vfunc_mstatus_mpp_resolve__24__next_value)))
                                            ? (IData)(vlSelf->__Vfunc_mstatus_mpp_resolve__24__current_value)
                                            : (IData)(vlSelf->__Vfunc_mstatus_mpp_resolve__24__next_value));
                                }(), (IData)(vlSelf->__Vfunc_mstatus_mpp_resolve__24__Vfuncout)) 
                                                                          << 0xbU) 
                                                                         | (0x88U 
                                                                            & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))))));
    __Vfunc_csr_next_value__21__Vfuncout = (0x221888U 
                                            & __Vfunc_csr_next_value__21__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
        = __Vfunc_csr_next_value__21__Vfuncout;
    __Vfunc_csr_next_value__25__wdata = ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__csr_mtvec_init_if)
                                            ? 0x4000U
                                            : (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 7U)) 
                                          << 7U) | 
                                         ((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata) 
                                          | ((0x3cU 
                                              & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata) 
                                             | (3U 
                                                & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__csr_mtvec_init_if)
                                                    ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata
                                                    : 
                                                   ([&]() {
                                vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__next_value 
                                    = (3U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__current_value 
                                    = (3U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata);
                                vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__Vfuncout 
                                    = (((0U != (IData)(vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__next_value)) 
                                        & (1U != (IData)(vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__next_value)))
                                        ? (IData)(vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__current_value)
                                        : (IData)(vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__next_value));
                            }(), (IData)(vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__Vfuncout)))))));
    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xf0000000U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                   | ((0x8000U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                      | ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                         | ((0x800U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                            | ((0x400U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                               | ((0x1c0U & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                             >> 4U)) 
                                  | ((0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                                     | ((4U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr) 
                                        | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl)))))))));
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = vlSelf->CSoC_top__DOT__u_core__DOT__mstatus;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                      << 7U));
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xffffe7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl) 
                      << 0xbU));
        }
    } else if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__mstatus;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
               | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                  << 3U));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x80U | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = (0xffffe7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
               | (((3U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0)) 
                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                  << 0x11U));
    } else if ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                >> 0x1fU)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__mstatus;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
               | (((3U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h20ed6652__0)) 
                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)) 
                  << 0x11U));
    }
    __Vfunc_csr_next_value__25__Vfuncout = (0xffffff81U 
                                            & __Vfunc_csr_next_value__25__wdata);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
        = __Vfunc_csr_next_value__25__Vfuncout;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0x1ffcU & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7a6b903d__0)) 
                        << 2U) & (((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf97e2934__0)) 
                                   << 2U) & (((~ (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                  >> 2U)) 
                                              << 2U) 
                                             & (((IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0) 
                                                 << 2U) 
                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                   >> 0x13U)))))) 
           | ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h74913440__0)) 
              & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_ha952383e__0)) 
                 & ((~ vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                    & (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfU & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | ((IData)((((QData)((IData)((((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                           << 9U) | 
                                          (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x17U)) 
                                         + ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                             << 9U) 
                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                               >> 0x17U))))) 
                        << 3U) | (QData)((IData)(((6U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                        >> 0xbU))))))) 
              << 4U));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
        = (0x7fU & (((IData)((((QData)((IData)((((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                  << 9U) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                    >> 0x17U)) 
                                                + (
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                    << 9U) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                      >> 0x17U))))) 
                               << 3U) | (QData)((IData)(
                                                        ((6U 
                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                             >> 8U)) 
                                                         | (1U 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                               >> 0xbU))))))) 
                     >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                             (((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                << 9U) 
                                                               | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                  >> 0x17U)) 
                                                              + 
                                                              ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                << 9U) 
                                                               | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                  >> 0x17U))))) 
                                             << 3U) 
                                            | (QData)((IData)(
                                                              ((6U 
                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                                   >> 8U)) 
                                                               | (1U 
                                                                  & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                                     >> 0xbU)))))) 
                                           >> 0x20U)) 
                                  << 4U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
        = (IData)((((QData)((IData)(((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                      << 9U) | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                >> 0x17U)))) 
                    << 3U) | (QData)((IData)(((6U & 
                                               (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n)
                                                   ? 
                                                  (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                                                   >> 0xbU)
                                                   : 
                                                  ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                    << 0x1cU) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                      >> 4U)))
                                                  : 
                                                 ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)
                                                   ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0)
                                                   : 
                                                  ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                    << 0x1cU) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                      >> 4U)))) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0xdU)))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff8U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (IData)(((((QData)((IData)(((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                          << 9U) | 
                                         (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                          >> 0x17U)))) 
                        << 3U) | (QData)((IData)(((6U 
                                                   & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we)
                                                        ? 
                                                       ((0x20000U 
                                                         & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n)
                                                         ? 
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                                                         >> 0xbU)
                                                         : 
                                                        ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                          << 0x1cU) 
                                                         | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                            >> 4U)))
                                                        : 
                                                       ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)
                                                         ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0)
                                                         : 
                                                        ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                          << 0x1cU) 
                                                         | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                                            >> 4U)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                        >> 0xdU)))))) 
                      >> 0x20U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (8U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    >> 5U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffffcULL & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (1ULL | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (2ULL | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (3ULL | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffffcfULL & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
        = (IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
        = (IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))) 
                   >> 0x20U));
    if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = (IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = (IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                       >> 0x20U));
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
        = (IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
        = (IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))) 
                   >> 0x20U));
    if ((4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x10ULL | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x20ULL | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x30ULL | vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = (IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = (IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                       >> 0x20U));
    }
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex = 0U;
    if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex) 
         & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U != (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 5U)))) {
            if ((1U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 5U)))) {
                if ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])) {
                    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 1U;
                }
            }
        }
        if ((2U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 5U)))) {
            if ((0U != (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 7U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex = 1U;
            }
        } else if ((1U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                 >> 5U)))) {
            if ((3U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 7U)))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex = 1U;
            }
        }
    }
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be 
        = ((0U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                         >> 5U))) ? ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                      ? ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                          ? 8U : 4U)
                                      : ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                          ? 2U : 1U))
            : ((1U == (3U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                             >> 5U))) ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
                                          ? 1U : ((0x100U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                   ? 
                                                  ((0x80U 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                    ? 8U
                                                    : 0xcU)
                                                   : 
                                                  ((0x80U 
                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                    ? 6U
                                                    : 3U)))
                : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
                    ? ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                        ? ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                            ? 7U : 3U) : ((0x80U & 
                                           vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                           ? 1U : 0U))
                    : ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                        ? ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                            ? 8U : 0xcU) : ((0x80U 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? 0xeU
                                             : 0xfU)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__last_op_ex 
        = (1U & ((0x1000U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[5U])
                  ? ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex)) 
                     & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                        >> 2U)) : (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                   >> 2U)));
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__modified_access 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q) 
           | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xeU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | ((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                     & (0U == (3U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                               [0U]))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xdU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffeU & ((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                                    & ((1U == (3U & 
                                               vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 1U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xbU & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffcU & ((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                                    & ((2U == (3U & 
                                               vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 2U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((7U & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffff8U & ((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                                    & ((3U == (3U & 
                                               vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 3U))));
    __Vtableidx7 = CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb 
        = VCSoC_top__ConstPool__TABLE_h0089a27f_0[__Vtableidx7];
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb 
        = VCSoC_top__ConstPool__TABLE_he32be4eb_0[__Vtableidx7];
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0x1ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
                ? ((IData)(4U) + (0xfffffffcU & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                                                  << 0x19U) 
                                                 | (0x1fffffcU 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       >> 7U)))))
                : ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                    << 0x19U) | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                 >> 7U))) << 0x19U));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
             ? ((IData)(4U) + (0xfffffffcU & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                                               << 0x19U) 
                                              | (0x1fffffcU 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                    >> 7U)))))
             : ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                 << 0x19U) | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 7U))) >> 7U);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = ((0xfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
           | ((IData)((((QData)((IData)((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                               >> 4U)))) 
                        << 0x24U) | (((QData)((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be)) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0x100U 
                                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                    ? 
                                                                   ((0x80U 
                                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                     ? 
                                                                    ((0xff000000U 
                                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         << 0x15U)) 
                                                                     | (0xffffffU 
                                                                        & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                            << 0x15U) 
                                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              >> 0xbU))))
                                                                     : 
                                                                    ((0xffff0000U 
                                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         << 0xdU)) 
                                                                     | (0xffffU 
                                                                        & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                            << 0xdU) 
                                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              >> 0x13U)))))
                                                                    : 
                                                                   ((0x80U 
                                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                     ? 
                                                                    ((0xffffff00U 
                                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         << 5U)) 
                                                                     | (0xffU 
                                                                        & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                            << 5U) 
                                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              >> 0x1bU))))
                                                                     : 
                                                                    ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                      << 0x1dU) 
                                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                        >> 3U))))))))) 
              << 0x14U));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0xfe000000U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (((IData)((((QData)((IData)((1U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                >> 4U)))) 
                         << 0x24U) | (((QData)((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be)) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0x100U 
                                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                     ? 
                                                                    ((0x80U 
                                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                      ? 
                                                                     ((0xff000000U 
                                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          << 0x15U)) 
                                                                      | (0xffffffU 
                                                                         & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                             << 0x15U) 
                                                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                               >> 0xbU))))
                                                                      : 
                                                                     ((0xffff0000U 
                                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          << 0xdU)) 
                                                                      | (0xffffU 
                                                                         & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                             << 0xdU) 
                                                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                               >> 0x13U)))))
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                      ? 
                                                                     ((0xffffff00U 
                                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          << 5U)) 
                                                                      | (0xffU 
                                                                         & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                             << 5U) 
                                                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                               >> 0x1bU))))
                                                                      : 
                                                                     ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                       << 0x1dU) 
                                                                      | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         >> 3U))))))))) 
               >> 0xcU) | ((IData)(((((QData)((IData)(
                                                      (1U 
                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                          >> 4U)))) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__be)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x100U 
                                                                       & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                       ? 
                                                                      ((0x80U 
                                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                        ? 
                                                                       ((0xff000000U 
                                                                         & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                            << 0x15U)) 
                                                                        | (0xffffffU 
                                                                           & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0xbU))))
                                                                        : 
                                                                       ((0xffff0000U 
                                                                         & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                            << 0xdU)) 
                                                                        | (0xffffU 
                                                                           & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                               << 0xdU) 
                                                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x13U)))))
                                                                       : 
                                                                      ((0x80U 
                                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                        ? 
                                                                       ((0xffffff00U 
                                                                         & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                            << 5U)) 
                                                                        | (0xffU 
                                                                           & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                               << 5U) 
                                                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x1bU))))
                                                                        : 
                                                                       ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                         << 0x1dU) 
                                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           >> 3U)))))))) 
                                    >> 0x20U)) << 0x14U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = ((0xfffc3fffU & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
           | (0xffffc000U & (0x8000U | ((0x30000U & 
                                         (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                          << 0xfU)) 
                                        | (0x4000U 
                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                              << 0xeU))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = (0xfff3ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = (0xffffc000U & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]);
    vlSelf->CSoC_top__DOT__u_core__DOT__trigger_match_ex 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT____VdfgTmp_hf5b457eb__0) 
           & ((((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                 >> 6U) & (0x30U == (0x30U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U]))) 
               | ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                   >> 3U) & (0U == (0x30U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])))) 
              & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex) 
                 & ((((~ (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                          >> 0x18U)) & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                     | ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                         >> 1U) & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                   >> 0x18U))) & ((~ 
                                                   (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0xdU)) 
                                                  & ((0U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                          >> 7U)))
                                                      ? 
                                                     (((0x3fffffffU 
                                                        & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                            << 5U) 
                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                              >> 0x1bU))) 
                                                       == 
                                                       (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                                                        >> 2U)) 
                                                      & (0U 
                                                         != 
                                                         vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
                                                         [0U]))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                           >> 7U)))
                                                       ? 
                                                      (((0xfffffffcU 
                                                         & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                             << 7U) 
                                                            | (0x7cU 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                                  >> 0x19U)))) 
                                                        | (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb)) 
                                                       >= vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q)
                                                       : 
                                                      (((0xfffffffcU 
                                                         & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                             << 7U) 
                                                            | (0x7cU 
                                                               & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                                  >> 0x19U)))) 
                                                        | (IData)(CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb)) 
                                                       < vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region 
        = ((0xf0000000U <= ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                             << 7U) | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                       >> 0x19U))) 
           & ((0xf0003fffU >= ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                << 7U) | (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x19U))) 
              & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
                 >> 0xeU)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 0U;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 0U;
    if ((0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((0U != vlSelf->CSoC_top__DOT__u_core__DOT__trigger_match_ex) 
             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
                = vlSelf->CSoC_top__DOT__u_core__DOT__trigger_match_ex;
            vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 1U;
            CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        }
    } else {
        if ((1U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n = 0U;
            }
        }
        if ((1U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        } else if ((2U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        }
    }
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region) {
        CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_trans_valid 
        = ((~ (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus)) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((((IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__modified_access) 
          | (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword)) 
         & (~ (CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
               >> 3U)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    if ((1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                >> 7U) & (~ (CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                             >> 3U))))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U];
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U];
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U];
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = ((0xfff3ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U]) 
           | (0xfffc0000U & ((0x80000U & (CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                          << 0x12U)) 
                             | (0x40000U & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                             >> 6U) 
                                            & (CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                               << 0x10U))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U]) 
           | (1U & CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]));
    if (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 0x12U) & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt) 
                                   >> 1U)));
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 0x12U) | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt) 
                                   >> 1U)));
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_ready 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U];
    TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U];
    TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[2U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U];
    __Vtemp_1 = ((0x1000U & (VL_REDXOR_32((0xffU & 
                                           (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                            >> 0xcU))) 
                             << 0xcU)) | ((0x800U & 
                                           (VL_REDXOR_32(
                                                         (0xffU 
                                                          & (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                                             >> 4U))) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & (VL_REDXOR_32(
                                                              (0xffU 
                                                               & ((TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                                                   << 4U) 
                                                                  | (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U] 
                                                                     >> 0x1cU)))) 
                                                 << 0xaU)) 
                                             | ((0x200U 
                                                 & (VL_REDXOR_32(
                                                                 (0xffU 
                                                                  & (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U] 
                                                                     >> 0x14U))) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U] 
                                                         >> 0xeU)) 
                                                       << 8U)) 
                                                   | ((0x20U 
                                                       & ((~ 
                                                           (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x1f00000U 
                                                                            & TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((~ 
                                                              (1U 
                                                               & VL_REDXOR_32(
                                                                              (0xf8000U 
                                                                               & TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (VL_REDXOR_32(
                                                                             (0xffU 
                                                                              & (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[2U] 
                                                                                >> 0x11U))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (VL_REDXOR_32(
                                                                                (0xffU 
                                                                                & (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[2U] 
                                                                                >> 9U))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (VL_REDXOR_32(
                                                                                (0xffU 
                                                                                & (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[2U] 
                                                                                >> 1U))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & VL_REDXOR_32(
                                                                                (0xffU 
                                                                                & ((TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[2U] 
                                                                                << 7U) 
                                                                                | (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                                                                >> 0x19U)))))))))))))));
    TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U] 
        = ((0xffffc001U & TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U]) 
           | (__Vtemp_1 << 1U));
    vlSelf->CSoC_top__DOT__host_be[0U] = (0xfU & (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                                  >> 0x14U));
    vlSelf->CSoC_top__DOT__host_wdata[0U] = ((TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                              << 0xcU) 
                                             | (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[0U] 
                                                >> 0x14U));
    vlSelf->CSoC_top__DOT__host_we[0U] = (1U & (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                                >> 0x18U));
    vlSelf->CSoC_top__DOT__host_addr[0U] = ((TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[2U] 
                                             << 7U) 
                                            | (TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload[1U] 
                                               >> 0x19U));
    vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 0U;
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [0U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [0U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [1U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [1U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [2U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [2U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 2U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [3U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [3U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 3U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [4U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [4U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 4U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [5U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [5U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 5U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [6U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [6U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 6U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [7U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [7U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 7U;
    }
    if (((vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
          & vlSelf->CSoC_top__DOT__cfg_device_addr_mask
          [8U]) == vlSelf->CSoC_top__DOT__cfg_device_addr_base
         [8U])) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = 8U;
    }
    if ((0U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[0U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[0U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[0U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[0U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[0U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[0U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[0U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[0U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[0U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[1U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[1U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[1U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[1U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[1U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[1U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[1U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[1U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[1U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[2U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[2U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[2U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[2U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[2U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[2U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[2U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[2U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[2U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[2U] = 0U;
    }
    if ((3U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[3U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[3U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[3U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[3U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[3U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[3U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[3U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[3U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[3U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[3U] = 0U;
    }
    if ((4U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[4U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[4U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[4U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[4U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[4U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[4U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[4U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[4U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[4U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[4U] = 0U;
    }
    if ((5U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[5U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[5U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[5U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[5U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[5U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[5U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[5U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[5U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[5U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[5U] = 0U;
    }
    if ((6U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[6U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[6U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[6U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[6U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[6U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[6U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[6U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[6U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[6U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[6U] = 0U;
    }
    if ((7U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[7U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[7U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[7U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[7U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[7U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[7U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[7U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[7U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[7U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[7U] = 0U;
    }
    if ((8U == (IData)(vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req))) {
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 
            = vlSelf->CSoC_top__DOT__host_be[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_be[8U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 
            = vlSelf->CSoC_top__DOT__host_wdata[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_wdata[8U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 
            = vlSelf->CSoC_top__DOT__host_we[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_we[8U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 
            = vlSelf->CSoC_top__DOT__host_addr[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_addr[8U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0;
        vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 
            = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
        vlSelf->CSoC_top__DOT__device_req[8U] = vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0;
    } else {
        vlSelf->CSoC_top__DOT__device_be[8U] = 0U;
        vlSelf->CSoC_top__DOT__device_wdata[8U] = 0U;
        vlSelf->CSoC_top__DOT__device_we[8U] = 0U;
        vlSelf->CSoC_top__DOT__device_addr[8U] = 0U;
        vlSelf->CSoC_top__DOT__device_req[8U] = 0U;
    }
    vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask = ((0xffffff00U 
                                                   & vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask) 
                                                  | (0xffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & vlSelf->CSoC_top__DOT__device_be
                                                                   [0U])))));
    vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask = ((0xffff00ffU 
                                                   & vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask) 
                                                  | (0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->CSoC_top__DOT__device_be
                                                                       [0U] 
                                                                       >> 1U)))) 
                                                        << 8U)));
    vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask = ((0xff00ffffU 
                                                   & vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask) 
                                                  | (0xff0000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->CSoC_top__DOT__device_be
                                                                       [0U] 
                                                                       >> 2U)))) 
                                                        << 0x10U)));
    vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask = ((0xffffffU 
                                                   & vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->CSoC_top__DOT__device_be
                                                                    [0U] 
                                                                    >> 3U)))) 
                                                     << 0x18U));
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gp_o_d = ((0xff00U 
                                                   & (((2U 
                                                        & vlSelf->CSoC_top__DOT__device_be
                                                        [1U])
                                                        ? 
                                                       (vlSelf->CSoC_top__DOT__device_wdata
                                                        [1U] 
                                                        >> 8U)
                                                        : 
                                                       ((IData)(vlSelf->gpio_o) 
                                                        >> 8U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((1U 
                                                         & vlSelf->CSoC_top__DOT__device_be
                                                         [1U])
                                                         ? 
                                                        vlSelf->CSoC_top__DOT__device_wdata
                                                        [1U]
                                                         : (IData)(vlSelf->gpio_o))));
    vlSelf->CSoC_top__DOT__u_timer__DOT__error_d = 0U;
    if ((0U != (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                [3U]))) {
        if ((4U != (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                    [3U]))) {
            if ((8U != (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                        [3U]))) {
                if ((0xcU != (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                              [3U]))) {
                    vlSelf->CSoC_top__DOT__u_timer__DOT__error_d = 1U;
                }
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_timer__DOT__rdata_d = 
        ((0U == (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                 [3U])) ? (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q)
          : ((4U == (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                     [3U])) ? (IData)((vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                       >> 0x20U)) : 
             ((8U == (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                      [3U])) ? (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q)
               : ((0xcU == (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                            [3U])) ? (IData)((vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                              >> 0x20U))
                   : 0U))));
    vlSelf->CSoC_top__DOT__u_uart__DOT__device_rvalid_d = 0U;
    vlSelf->CSoC_top__DOT__u_gpio__DOT____VdfgTmp_h41b654d0__0 
        = ((~ vlSelf->CSoC_top__DOT__device_we[1U]) 
           & vlSelf->CSoC_top__DOT__device_req[1U]);
    vlSelf->CSoC_top__DOT__u_uart__DOT__device_rdata_d = 0U;
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
            & (~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_fifo_full))) 
           & ((((4U == (0xfffU & vlSelf->CSoC_top__DOT__device_addr
                        [2U])) & vlSelf->CSoC_top__DOT__device_req
                [2U]) & vlSelf->CSoC_top__DOT__device_be
               [2U]) & vlSelf->CSoC_top__DOT__device_we
              [2U]));
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
            & (~ (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_full))) 
           & (((vlSelf->CSoC_top__DOT__device_req[4U] 
                & (0U == (0xfffU & vlSelf->CSoC_top__DOT__device_addr
                          [4U]))) & vlSelf->CSoC_top__DOT__device_we
               [4U]) & vlSelf->CSoC_top__DOT__device_be
              [4U]));
    CSoC_top__DOT__u_uart__DOT__rx_fifo_rready = 0U;
    if (vlSelf->CSoC_top__DOT__device_req[2U]) {
        vlSelf->CSoC_top__DOT__u_uart__DOT__device_rvalid_d = 1U;
        if ((1U & (vlSelf->CSoC_top__DOT__device_be
                   [2U] & (~ vlSelf->CSoC_top__DOT__device_we
                           [2U])))) {
            if ((0U == (0xfffU & vlSelf->CSoC_top__DOT__device_addr
                        [2U]))) {
                vlSelf->CSoC_top__DOT__u_uart__DOT__device_rdata_d 
                    = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                        ? 0U : (0xffU & (((0U == (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U)))
                                           ? 0U : (
                                                   vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))) 
                                         | (vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                            (0x1fU 
                                             & (VL_SHIFTL_III(10,10,32, 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 3U))))));
                CSoC_top__DOT__u_uart__DOT__rx_fifo_rready = 1U;
            } else {
                vlSelf->CSoC_top__DOT__u_uart__DOT__device_rdata_d 
                    = ((4U == (0xfffU & vlSelf->CSoC_top__DOT__device_addr
                               [2U])) ? 0U : ((8U == 
                                               (0xfffU 
                                                & vlSelf->CSoC_top__DOT__device_addr
                                                [2U]))
                                               ? (((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__tx_fifo_full) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->CSoC_top__DOT__uart_irq))))
                                               : 0U));
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_aes__DOT__aes_we = (vlSelf->CSoC_top__DOT__device_req
                                                 [8U] 
                                                 & vlSelf->CSoC_top__DOT__device_we
                                                 [8U]);
    CSoC_top__DOT__u_timer__DOT__timer_we = (vlSelf->CSoC_top__DOT__device_req
                                             [3U] & 
                                             vlSelf->CSoC_top__DOT__device_we
                                             [3U]);
    vlSelf->CSoC_top__DOT__dm_device_we = (vlSelf->CSoC_top__DOT__device_req
                                           [6U] & vlSelf->CSoC_top__DOT__device_we
                                           [6U]);
    vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__a_wmask 
        = (((IData)((0xffU == (vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask 
                               >> 0x18U))) << 3U) | 
           (((IData)((0xffU == (0xffU & (vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask 
                                         >> 0x10U)))) 
             << 2U) | (((IData)((0xffU == (0xffU & 
                                           (vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask 
                                            >> 8U)))) 
                        << 1U) | (0xffU == (0xffU & vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask)))));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7eU == (0x7fU & (IData)(vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelf->CSoC_top__DOT__uart_irq) 
           & ((~ (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(CSoC_top__DOT__u_uart__DOT__rx_fifo_rready)));
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__block_we = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__key_we = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__config_we = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__next_new = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__init_new = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data = 0U;
    if (vlSelf->CSoC_top__DOT__device_req[8U]) {
        if (vlSelf->CSoC_top__DOT__u_aes__DOT__aes_we) {
            if (((0x20U <= (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                     [8U] >> 2U))) 
                 & (0x23U >= (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                       [8U] >> 2U))))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__block_we = 1U;
            }
            if (((0x10U <= (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                     [8U] >> 2U))) 
                 & (0x17U >= (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                       [8U] >> 2U))))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__key_we = 1U;
            }
            if ((0xaU == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                   [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__config_we = 1U;
            }
            if ((8U == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                 [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__next_new 
                    = (1U & (vlSelf->CSoC_top__DOT__device_wdata
                             [8U] >> 1U));
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__init_new 
                    = (1U & vlSelf->CSoC_top__DOT__device_wdata
                       [8U]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__aes_we)))) {
            if ((0U == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                 [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data = 0x61657320U;
            } else if ((1U == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                        [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data = 0x20202020U;
            } else if ((2U == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                        [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data = 0x302e3630U;
            } else if ((8U == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                        [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data 
                    = (((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__keylen_reg) 
                        << 3U) | (((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__encdec_reg) 
                                   << 2U) | (((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__next_reg) 
                                              << 1U) 
                                             | (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__init_reg))));
            } else if ((9U == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                        [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data 
                    = (((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__valid_reg) 
                        << 1U) | (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__ready_reg));
            } else if ((0xaU == (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                          [8U] >> 2U)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data 
                    = (((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__keylen_reg) 
                        << 1U) | (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__encdec_reg));
            }
            if (((0x30U <= (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                     [8U] >> 2U))) 
                 & (0x33U >= (0xffU & (vlSelf->CSoC_top__DOT__device_addr
                                       [8U] >> 2U))))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data 
                    = (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                      ((IData)(3U) 
                                                       - 
                                                       ((0xffU 
                                                         & (vlSelf->CSoC_top__DOT__device_addr
                                                            [8U] 
                                                            >> 2U)) 
                                                        - (IData)(0x30U))), 5U)))
                         ? 0U : (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__result_reg[
                                 (((IData)(0x1fU) + 
                                   (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(3U) 
                                                           - 
                                                           ((0xffU 
                                                             & (vlSelf->CSoC_top__DOT__device_addr
                                                                [8U] 
                                                                >> 2U)) 
                                                            - (IData)(0x30U))), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(3U) 
                                                                  - 
                                                                  ((0xffU 
                                                                    & (vlSelf->CSoC_top__DOT__device_addr
                                                                       [8U] 
                                                                       >> 2U)) 
                                                                   - (IData)(0x30U))), 5U))))) 
                       | (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__result_reg[
                          (3U & (VL_SHIFTL_III(7,32,32, 
                                               ((IData)(3U) 
                                                - (
                                                   (0xffU 
                                                    & (vlSelf->CSoC_top__DOT__device_addr
                                                       [8U] 
                                                       >> 2U)) 
                                                   - (IData)(0x30U))), 5U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(3U) 
                                                               - 
                                                               ((0xffU 
                                                                 & (vlSelf->CSoC_top__DOT__device_addr
                                                                    [8U] 
                                                                    >> 2U)) 
                                                                - (IData)(0x30U))), 5U))));
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_d = 
        (((QData)((IData)((((IData)(CSoC_top__DOT__u_timer__DOT__timer_we) 
                            & (4U == (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                                      [3U]))) ? (((
                                                   (8U 
                                                    & vlSelf->CSoC_top__DOT__device_be
                                                    [3U])
                                                    ? 
                                                   (vlSelf->CSoC_top__DOT__device_wdata
                                                    [3U] 
                                                    >> 0x18U)
                                                    : (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                                               >> 0x38U))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & (((4U 
                                                          & vlSelf->CSoC_top__DOT__device_be
                                                          [3U])
                                                          ? 
                                                         (vlSelf->CSoC_top__DOT__device_wdata
                                                          [3U] 
                                                          >> 0x10U)
                                                          : (IData)(
                                                                    (vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                                                     >> 0x30U))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((2U 
                                                             & vlSelf->CSoC_top__DOT__device_be
                                                             [3U])
                                                             ? 
                                                            (vlSelf->CSoC_top__DOT__device_wdata
                                                             [3U] 
                                                             >> 8U)
                                                             : (IData)(
                                                                       (vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                                                        >> 0x28U))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((1U 
                                                              & vlSelf->CSoC_top__DOT__device_be
                                                              [3U])
                                                              ? 
                                                             vlSelf->CSoC_top__DOT__device_wdata
                                                             [3U]
                                                              : (IData)(
                                                                        (vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                                                         >> 0x20U)))))))
                            : (IData)(((1ULL + vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q) 
                                       >> 0x20U))))) 
          << 0x20U) | (QData)((IData)((((IData)(CSoC_top__DOT__u_timer__DOT__timer_we) 
                                        & (0U == (0x3ffU 
                                                  & vlSelf->CSoC_top__DOT__device_addr
                                                  [3U])))
                                        ? ((((8U & 
                                              vlSelf->CSoC_top__DOT__device_be
                                              [3U])
                                              ? (vlSelf->CSoC_top__DOT__device_wdata
                                                 [3U] 
                                                 >> 0x18U)
                                              : (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                                         >> 0x18U))) 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (((4U 
                                                    & vlSelf->CSoC_top__DOT__device_be
                                                    [3U])
                                                    ? 
                                                   (vlSelf->CSoC_top__DOT__device_wdata
                                                    [3U] 
                                                    >> 0x10U)
                                                    : (IData)(
                                                              (vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                                               >> 0x10U))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((2U 
                                                       & vlSelf->CSoC_top__DOT__device_be
                                                       [3U])
                                                       ? 
                                                      (vlSelf->CSoC_top__DOT__device_wdata
                                                       [3U] 
                                                       >> 8U)
                                                       : (IData)(
                                                                 (vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
                                                                  >> 8U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((1U 
                                                        & vlSelf->CSoC_top__DOT__device_be
                                                        [3U])
                                                        ? 
                                                       vlSelf->CSoC_top__DOT__device_wdata
                                                       [3U]
                                                        : (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q))))))
                                        : ((IData)(1U) 
                                           + (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q))))));
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_we 
        = ((IData)(CSoC_top__DOT__u_timer__DOT__timer_we) 
           & (8U == (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                     [3U])));
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmph_we 
        = ((IData)(CSoC_top__DOT__u_timer__DOT__timer_we) 
           & (0xcU == (0x3ffU & vlSelf->CSoC_top__DOT__device_addr
                       [3U])));
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_d 
        = (((QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmph_we)
                              ? ((((8U & vlSelf->CSoC_top__DOT__device_be
                                    [3U]) ? (vlSelf->CSoC_top__DOT__device_wdata
                                             [3U] >> 0x18U)
                                    : (IData)((vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                               >> 0x38U))) 
                                  << 0x18U) | ((0xff0000U 
                                                & (((4U 
                                                     & vlSelf->CSoC_top__DOT__device_be
                                                     [3U])
                                                     ? 
                                                    (vlSelf->CSoC_top__DOT__device_wdata
                                                     [3U] 
                                                     >> 0x10U)
                                                     : (IData)(
                                                               (vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                                                >> 0x30U))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (((2U 
                                                        & vlSelf->CSoC_top__DOT__device_be
                                                        [3U])
                                                        ? 
                                                       (vlSelf->CSoC_top__DOT__device_wdata
                                                        [3U] 
                                                        >> 8U)
                                                        : (IData)(
                                                                  (vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                                                   >> 0x28U))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((1U 
                                                         & vlSelf->CSoC_top__DOT__device_be
                                                         [3U])
                                                         ? 
                                                        vlSelf->CSoC_top__DOT__device_wdata
                                                        [3U]
                                                         : (IData)(
                                                                   (vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                                                    >> 0x20U)))))))
                              : (IData)((vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_we)
                                          ? ((((8U 
                                                & vlSelf->CSoC_top__DOT__device_be
                                                [3U])
                                                ? (
                                                   vlSelf->CSoC_top__DOT__device_wdata
                                                   [3U] 
                                                   >> 0x18U)
                                                : (IData)(
                                                          (vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 0x18U))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & (((4U 
                                                      & vlSelf->CSoC_top__DOT__device_be
                                                      [3U])
                                                      ? 
                                                     (vlSelf->CSoC_top__DOT__device_wdata
                                                      [3U] 
                                                      >> 0x10U)
                                                      : (IData)(
                                                                (vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                                                 >> 0x10U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((2U 
                                                         & vlSelf->CSoC_top__DOT__device_be
                                                         [3U])
                                                         ? 
                                                        (vlSelf->CSoC_top__DOT__device_wdata
                                                         [3U] 
                                                         >> 8U)
                                                         : (IData)(
                                                                   (vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q 
                                                                    >> 8U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((1U 
                                                          & vlSelf->CSoC_top__DOT__device_be
                                                          [3U])
                                                          ? 
                                                         vlSelf->CSoC_top__DOT__device_wdata
                                                         [3U]
                                                          : (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q))))))
                                          : (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q)))));
    vlSelf->CSoC_top__DOT__u_timer__DOT__interrupt_d 
        = ((~ ((IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_we) 
               | (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmph_we))) 
           & ((vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q 
               >= vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q) 
              | (IData)(vlSelf->CSoC_top__DOT__u_timer__DOT__interrupt_q)));
}

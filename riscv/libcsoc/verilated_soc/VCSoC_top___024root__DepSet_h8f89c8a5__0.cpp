// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top___024root.h"

extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_hb4d880cc_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h7704201a_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h9e4cd301_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h4e9589e2_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h4d427c12_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_h684773c9_0;
extern const VlUnpacked<CData/*0:0*/, 32> VCSoC_top__ConstPool__TABLE_hfa0236c1_0;
extern const VlUnpacked<CData/*3:0*/, 32> VCSoC_top__ConstPool__TABLE_h27456227_0;

VL_INLINE_OPT void VCSoC_top___024root___ico_sequent__TOP__0(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_ir;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_ir = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_ir;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_ir = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset = 0;
    CData/*4:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelf->CSoC_top__DOT__rst_core_n = ((~ (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U)) 
                                         & (IData)(vlSelf->rst_sys_ni));
    if ((1U & (~ (IData)(vlSelf->clk_sys_i)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                   >> 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
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
    vlSelf->CSoC_top__DOT__u_core__DOT__clk = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en) 
                                               & (IData)(vlSelf->clk_sys_i));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q;
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    if (CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_ir) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
            = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    }
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
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d 
                = (0x1071U | ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q) 
                              << 0xaU));
        }
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0xdb3U;
        }
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d 
                = (((IData)(vlSelf->dtm_td_i) << 0x1fU) 
                   | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q 
                      >> 1U));
        }
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (((IData)(vlSelf->dtm_td_i) << 0x1fU) 
                   | (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                      >> 1U));
        }
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d 
                = vlSelf->dtm_td_i;
        }
    }
    if (CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = 1U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 0U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d = 0xdb3U;
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
    }
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear 
        = ((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__test_logic_reset) 
           | ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select) 
              & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr) 
                 & (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q 
                    >> 0x11U))));
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk)))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT____Vcellout__u_secure_ctrl__rvalid_o;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we;
    }
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
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
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
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk));
}

extern const VlUnpacked<CData/*3:0*/, 256> VCSoC_top__ConstPool__TABLE_hc1c0e906_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCSoC_top__ConstPool__TABLE_ha1f15410_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCSoC_top__ConstPool__TABLE_ha7cdd26b_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCSoC_top__ConstPool__TABLE_h7bfe824e_0;
extern const VlUnpacked<CData/*1:0*/, 256> VCSoC_top__ConstPool__TABLE_h26ca7f7f_0;
extern const VlUnpacked<CData/*1:0*/, 256> VCSoC_top__ConstPool__TABLE_h73f7fa79_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCSoC_top__ConstPool__TABLE_h386f2eab_0;
extern const VlUnpacked<CData/*1:0*/, 256> VCSoC_top__ConstPool__TABLE_h4028bd74_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCSoC_top__ConstPool__TABLE_hd1823543_0;

VL_INLINE_OPT void VCSoC_top___024root___ico_comb__TOP__0(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*1:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req = 0;
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx12 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear) 
                      << 7U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                 << 6U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                               << 4U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = VCSoC_top__ConstPool__TABLE_hc1c0e906_0[__Vtableidx12];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = VCSoC_top__ConstPool__TABLE_ha1f15410_0[__Vtableidx12];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = VCSoC_top__ConstPool__TABLE_ha7cdd26b_0[__Vtableidx12];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = VCSoC_top__ConstPool__TABLE_h7bfe824e_0[__Vtableidx12];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = VCSoC_top__ConstPool__TABLE_h26ca7f7f_0[__Vtableidx12];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    __Vtableidx14 = ((0x80U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h73f7fa79_0[__Vtableidx14];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = VCSoC_top__ConstPool__TABLE_h386f2eab_0[__Vtableidx14];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = VCSoC_top__ConstPool__TABLE_h4028bd74_0[__Vtableidx14];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = VCSoC_top__ConstPool__TABLE_hd1823543_0[__Vtableidx14];
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

VL_INLINE_OPT void VCSoC_top___024root___ico_comb__TOP__1(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___ico_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_busy = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_dmi_op_failed = 0;
    CData/*1:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req = 0;
    CData/*7:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*7:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    __Vtableidx24 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear) 
                      << 7U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                 << 6U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                               << 4U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = VCSoC_top__ConstPool__TABLE_hc1c0e906_0[__Vtableidx24];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = VCSoC_top__ConstPool__TABLE_ha1f15410_0[__Vtableidx24];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = VCSoC_top__ConstPool__TABLE_ha7cdd26b_0[__Vtableidx24];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = VCSoC_top__ConstPool__TABLE_h7bfe824e_0[__Vtableidx24];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = VCSoC_top__ConstPool__TABLE_h26ca7f7f_0[__Vtableidx24];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req 
        = ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out) 
           | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    __Vtableidx26 = ((0x80U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h73f7fa79_0[__Vtableidx26];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = VCSoC_top__ConstPool__TABLE_h386f2eab_0[__Vtableidx26];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = VCSoC_top__ConstPool__TABLE_h4028bd74_0[__Vtableidx26];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = VCSoC_top__ConstPool__TABLE_hd1823543_0[__Vtableidx26];
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

VL_INLINE_OPT void VCSoC_top___024root___ico_comb__TOP__2(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q;
    if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear) {
        vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 0U;
    } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid) {
                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 0U;
            }
        } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid) {
                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 0U;
            }
        } else if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
            if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_ready) {
                vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 4U;
            }
        } else if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q))) {
        if (vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_ready) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 2U;
        }
    } else if ((((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_select) 
                 & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                & (0U == (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q)))) {
        if ((1U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q)))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 1U;
        } else if ((2U == (3U & (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q)))) {
            vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = 3U;
        }
    }
}

void VCSoC_top___024root___eval_triggers__ico(VCSoC_top___024root* vlSelf);
void VCSoC_top___024root___eval_ico(VCSoC_top___024root* vlSelf);

bool VCSoC_top___024root___eval_phase__ico(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCSoC_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VCSoC_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__0(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id 
        = (((~ ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                 >> 0x17U) | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                              >> 0xaU))) & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id)) 
           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
               & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                      >> 8U)) & (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                 >> 0x17U))) | ((~ 
                                                 ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                                                  >> 8U)) 
                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__1(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible 
        = (1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                    | (IData)((4U == (0x804U & vlSelf->CSoC_top__DOT__u_core__DOT__dcsr))))));
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
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__2(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffffffffe0ULL & vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | (IData)((IData)((0x1fU & (((0xfU & (IData)(
                                                        (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                         >> 0x1dU))) 
                                        - (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                       - (IData)(1U))))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__4(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__4\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_21;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x3fU 
                                               & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (1U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))))) 
                              << 0x36U) | (((QData)((IData)(
                                                            (0x3fU 
                                                             & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                  << 0x16U) 
                                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                    >> 0xaU)) 
                                                                + 
                                                                (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                 >> 0x1fU))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       >> 4U)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                       >> 0x1eU)))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 2U) 
                                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                          >> 0x1eU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                          >> 0x1dU)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                           << 8U) 
                                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                             >> 0x18U)) 
                                                                         + 
                                                                         (1U 
                                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                             >> 0x1cU)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                              << 0xeU) 
                                                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x12U)) 
                                                                            + 
                                                                            (1U 
                                                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1bU))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0xcU)) 
                                                                               + 
                                                                               (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1aU))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x19U))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x17U))))))))))))));
    __Vtemp_2[1U] = (((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                         << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                     >> 0x16U)) + (1U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 1U))) 
                      << 0x1cU) | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                     >> 0x10U)) 
                                                                 + 
                                                                 (1U 
                                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                      << 0x16U) 
                                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        >> 0xaU)) 
                                                                    + 
                                                                    (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                     >> 0x1fU))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                           >> 4U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                           >> 0x1eU)))))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                            << 2U) 
                                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                              >> 0x1eU)) 
                                                                          + 
                                                                          (1U 
                                                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                              >> 0x1dU)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                               << 8U) 
                                                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x18U)) 
                                                                             + 
                                                                             (1U 
                                                                              & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1cU)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x12U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1bU))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0xcU)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1aU))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x19U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x17U))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_5[2U] = ((0xfc000U & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                     << 0x18U) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                  >> 8U)) 
                                   + (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            >> 4U))) 
                                  << 0xeU)) | ((0x3f00U 
                                                & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                        >> 2U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                        >> 3U))) 
                                                   << 8U)) 
                                               | ((0xfcU 
                                                   & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                         << 4U) 
                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                           >> 0x1cU)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                           >> 2U))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                           << 0xaU) 
                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                             >> 0x16U)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                             >> 1U))) 
                                                        >> 4U)))));
    __Vtemp_11[3U] = ((0xfc0000U & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                       << 0x14U) | 
                                      (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                       >> 0xcU)) + 
                                     (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            >> 0xaU))) 
                                    << 0x12U)) | ((0x3f000U 
                                                   & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                         << 0x1aU) 
                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                           >> 6U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                           >> 9U))) 
                                                      << 0xcU)) 
                                                  | ((0xfc0U 
                                                      & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                              >> 8U))) 
                                                         << 6U)) 
                                                     | (0x3fU 
                                                        & (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             << 6U) 
                                                            | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                               >> 0x1aU)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                               >> 7U)))))));
    __Vtemp_16[4U] = ((0x3f0000U & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                       << 0x16U) | 
                                      (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                       >> 0xaU)) + 
                                     (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            >> 0xfU))) 
                                    << 0x10U)) | ((0xfc00U 
                                                   & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                           >> 4U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                           >> 0xeU))) 
                                                      << 0xaU)) 
                                                  | ((0x3f0U 
                                                      & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            << 2U) 
                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                              >> 0x1eU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                              >> 0xdU))) 
                                                         << 4U)) 
                                                     | (0xfU 
                                                        & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                              << 8U) 
                                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                >> 0x18U)) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                >> 0xcU))) 
                                                           >> 2U)))));
    __Vtemp_21[5U] = ((0xfc000U & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                      << 0x18U) | (
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                   >> 8U)) 
                                    + (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                             >> 0x14U))) 
                                   << 0xeU)) | ((0x3f00U 
                                                 & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                       << 0x1eU) 
                                                      | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                         >> 2U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                         >> 0x13U))) 
                                                    << 8U)) 
                                                | ((0xfcU 
                                                    & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                          << 4U) 
                                                         | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            >> 0x1cU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                            >> 0x12U))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & ((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            << 0xaU) 
                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                              >> 0x16U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                              >> 0x11U))) 
                                                         >> 4U)))));
    __Vtemp_1[2U] = (((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                         << 0xcU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                     >> 0x14U)) + (1U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 6U))) 
                      << 0x1aU) | ((0x3f00000U & ((
                                                   ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 5U))) 
                                                  << 0x14U)) 
                                   | __Vtemp_5[2U]));
    __Vtemp_1[3U] = (((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                         << 8U) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                   >> 0x18U)) + (1U 
                                                 & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                    >> 0xcU))) 
                      << 0x1eU) | ((0x3f000000U & (
                                                   (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                      << 0xeU) 
                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                        >> 0x12U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                        >> 0xbU))) 
                                                   << 0x18U)) 
                                   | __Vtemp_11[3U]));
    __Vtemp_1[4U] = (((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                         << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                     >> 0x16U)) + (1U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 0x11U))) 
                      << 0x1cU) | ((0xfc00000U & ((
                                                   ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                     << 0x10U) 
                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x10U))) 
                                                  << 0x16U)) 
                                   | __Vtemp_16[4U]));
    __Vtemp_1[5U] = (((((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                         << 0xcU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                     >> 0x14U)) + (1U 
                                                   & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 0x16U))) 
                      << 0x1aU) | ((0x3f00000U & ((
                                                   ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                     << 0x12U) 
                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x15U))) 
                                                  << 0x14U)) 
                                   | __Vtemp_21[5U]));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = __Vtemp_2[0U];
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = __Vtemp_2[1U];
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = __Vtemp_1[2U];
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = __Vtemp_1[3U];
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = __Vtemp_1[4U];
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = __Vtemp_1[5U];
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__5(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        ((0xfffdU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)) 
         | (2U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                  >> 1U)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__6(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__6\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgTmp_h3c034895__0 
        = ((0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))
            ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
            : ((1U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__7(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__7\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
           & (2U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__8(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__8\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we = 0U;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we = 0U;
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

extern const VlUnpacked<CData/*1:0*/, 16> VCSoC_top__ConstPool__TABLE_h794efc0c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VCSoC_top__ConstPool__TABLE_h2ed44cc5_0;
extern const VlUnpacked<CData/*0:0*/, 16> VCSoC_top__ConstPool__TABLE_hc22c295c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h9d96fb61_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_ha69b166b_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h2ba0869e_0;

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__9(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__9\n"); );
    // Init
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
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

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__10(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__10\n"); );
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
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

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__11(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__11\n"); );
    // Init
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
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

extern const VlUnpacked<CData/*3:0*/, 128> VCSoC_top__ConstPool__TABLE_h752feedc_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h3d438b21_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h3d7e6b5c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_hdcf5e0b8_0;
extern const VlUnpacked<CData/*1:0*/, 128> VCSoC_top__ConstPool__TABLE_h5a82a902_0;

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__12(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__12\n"); );
    // Init
    CData/*6:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*7:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
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

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__14(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__14\n"); );
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
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

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__15(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__15\n"); );
    // Init
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
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

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__16(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__16\n"); );
    // Init
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block);
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__tmp_sboxw;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__tmp_sboxw = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w2;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w2 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w3;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w3 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w4;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w4 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w5;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w5 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w6;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w6 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w7;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w7 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3 = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rconw;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rconw = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rotstw;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rotstw = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__tw;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__tw = 0;
    IData/*31:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw = 0;
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data);
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w0 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w1 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w2 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w3 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws0 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws1 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws2 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws3 = 0;
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data);
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w0 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w1 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w2 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w3 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws0 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws1 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws2 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws3 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__w;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__w = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b3 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb3 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__w;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__w = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b3 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb3 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__w;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__w = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b3 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb3 = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__w;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__w = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b3 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb0 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb1 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb2 = 0;
    CData/*7:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb3 = 0;
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data);
    VlWide<4>/*127:0*/ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey;
    VL_ZERO_W(128, __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey);
    // Body
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw 
        = ((vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__sbox_inst__DOT__sbox
            [(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw 
              >> 0x18U)] << 0x18U) | ((vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__sbox_inst__DOT__sbox
                                       [(0xffU & (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw 
                                                  >> 0x10U))] 
                                       << 0x10U) | 
                                      ((vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__sbox_inst__DOT__sbox
                                        [(0xffU & (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw 
                                                   >> 8U))] 
                                        << 8U) | vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__sbox_inst__DOT__sbox
                                       [(0xffU & vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw)])));
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[0U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[1U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[2U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[3U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[0U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[1U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[2U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[3U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0 = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1 = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2 = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3 = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key0_reg[3U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key0_reg[2U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w2 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key0_reg[1U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w3 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key0_reg[0U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w4 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_reg[3U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w5 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_reg[2U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w6 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_reg[1U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w7 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_reg[0U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rconw 
        = ((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__rcon_reg) 
           << 0x18U);
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__tmp_sboxw 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w7;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rotstw 
        = ((vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw 
            << 8U) | (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw 
                      >> 0x18U));
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw 
        = (CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rotstw 
           ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__rconw);
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__tw 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw;
    if (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_update) {
        if (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__keylen_reg) {
            if (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__keylen_reg) {
                if ((0U == (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_ctr_reg))) {
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[0U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[4U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[1U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[5U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[2U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[6U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[3U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[7U];
                } else if ((1U == (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_ctr_reg))) {
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[0U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[0U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[1U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[1U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[2U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[2U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[3U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[3U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[0U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[0U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[1U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[1U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[2U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[2U];
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[3U] 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[3U];
                } else {
                    if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_ctr_reg))) {
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0 
                            = (CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__tw);
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1 
                            = ((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1 
                                ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0) 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__tw);
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2 
                            = (((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w2 
                                 ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1) 
                                ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0) 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__tw);
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3 
                            = ((((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w3 
                                  ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w2) 
                                 ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1) 
                                ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0) 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__tw);
                    } else {
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0 
                            = (CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1 
                            = ((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1 
                                ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0) 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2 
                            = (((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w2 
                                 ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1) 
                                ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0) 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
                        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3 
                            = ((((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w3 
                                  ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w2) 
                                 ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w1) 
                                ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w0) 
                               ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
                    }
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[0U] 
                        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3;
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[1U] 
                        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2;
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[2U] 
                        = (IData)((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                                    << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))));
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[3U] 
                        = (IData)(((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                                     << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))) 
                                   >> 0x20U));
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[0U] 
                        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3;
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[1U] 
                        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2;
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[2U] 
                        = (IData)((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                                    << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))));
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[3U] 
                        = (IData)(((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                                     << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))) 
                                   >> 0x20U));
                }
            }
        } else if ((0U == (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_ctr_reg))) {
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[0U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[4U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[1U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[5U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[2U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[6U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[3U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[7U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[0U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[4U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[1U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[5U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[2U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[6U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[3U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key[7U];
        } else {
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0 
                = (CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w4 
                   ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1 
                = ((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w5 
                    ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w4) 
                   ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2 
                = (((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w6 
                     ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w5) 
                    ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w4) 
                   ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3 
                = ((((CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w7 
                      ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w6) 
                     ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w5) 
                    ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__w4) 
                   ^ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__trw);
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[0U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[1U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[2U] 
                = (IData)((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                            << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))));
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new[3U] 
                = (IData)(((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                             << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))) 
                           >> 0x20U));
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[0U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k3;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[1U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k2;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[2U] 
                = (IData)((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                            << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))));
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new[3U] 
                = (IData)(((((QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k0)) 
                             << 0x20U) | (QData)((IData)(CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_gen__DOT__k1))) 
                           >> 0x20U));
        }
    }
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[0U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[1U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[2U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[3U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[0U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w3_reg;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[1U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w2_reg;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[2U] 
        = (IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w0_reg)) 
                    << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w1_reg))));
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[3U] 
        = (IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w0_reg)) 
                     << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w1_reg))) 
                   >> 0x20U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[0U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[1U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[2U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[3U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__old_block[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w0 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w1 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w2 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w3 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__data[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws0 
        = ((0xff000000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w0) 
           | ((0xff0000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w1) 
              | ((0xff00U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w2) 
                 | (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w3))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws1 
        = ((0xff000000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w1) 
           | ((0xff0000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w2) 
              | ((0xff00U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w3) 
                 | (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w0))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws2 
        = ((0xff000000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w2) 
           | ((0xff0000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w3) 
              | ((0xff00U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w0) 
                 | (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w1))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws3 
        = ((0xff000000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w3) 
           | ((0xff0000U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w0) 
              | ((0xff00U & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w1) 
                 | (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__w2))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[0U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[1U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[2U] 
        = (IData)((((QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws0)) 
                    << 0x20U) | (QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws1))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[3U] 
        = (IData)(((((QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws0)) 
                     << 0x20U) | (QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__ws1))) 
                   >> 0x20U));
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[0U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[0U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[1U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[1U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[2U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[2U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[3U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__shiftrows__39__Vfuncout[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[0U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[1U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[2U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[3U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w0 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w1 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w2 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w3 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__data[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__w 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w0;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b0 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__w 
           >> 0x18U);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b1 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__w 
                    >> 0x10U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b2 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__w 
                    >> 8U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b3 
        = (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__w);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb0 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__42__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__42__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__42__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__42__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__42__Vfuncout)) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__43__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__43__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__44__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__43__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__44__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__44__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__44__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__44__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__43__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__43__Vfuncout))) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b2)) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb1 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b0) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__45__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__45__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__45__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__45__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__45__Vfuncout))) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__46__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__46__Vfuncout 
                        = (([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__47__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__46__op;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__47__Vfuncout 
                                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__47__op) 
                                                 << 1U)) 
                                       ^ (0x1bU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__47__op) 
                                                                 >> 7U))))));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__47__Vfuncout)) 
                           ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__46__op));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__46__Vfuncout))) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb2 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b0) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b1)) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__48__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__48__Vfuncout 
                        = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__48__op) 
                                     << 1U)) ^ (0x1bU 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__48__op) 
                                                                 >> 7U))))));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__48__Vfuncout))) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__49__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__49__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__50__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__49__op;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__50__Vfuncout 
                                = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__50__op) 
                                             << 1U)) 
                                   ^ (0x1bU & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__50__op) 
                                                             >> 7U))))));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__50__Vfuncout)) 
                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__49__op));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__49__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb3 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__51__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__51__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__52__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__51__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__52__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__52__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__52__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__52__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__51__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__51__Vfuncout)) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b1)) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b2)) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__53__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__53__Vfuncout 
                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__53__op) 
                                 << 1U)) ^ (0x1bU & 
                                            (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__53__op) 
                                                           >> 7U))))));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__53__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__Vfuncout 
        = (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb0) 
            << 0x18U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb1) 
                          << 0x10U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb2) 
                                        << 8U) | (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__mb3))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws0 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__41__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__w 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w1;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b0 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__w 
           >> 0x18U);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b1 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__w 
                    >> 0x10U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b2 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__w 
                    >> 8U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b3 
        = (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__w);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb0 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__55__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__55__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__55__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__55__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__55__Vfuncout)) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__56__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__56__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__57__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__56__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__57__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__57__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__57__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__57__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__56__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__56__Vfuncout))) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b2)) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb1 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b0) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__58__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__58__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__58__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__58__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__58__Vfuncout))) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__59__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__59__Vfuncout 
                        = (([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__60__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__59__op;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__60__Vfuncout 
                                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__60__op) 
                                                 << 1U)) 
                                       ^ (0x1bU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__60__op) 
                                                                 >> 7U))))));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__60__Vfuncout)) 
                           ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__59__op));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__59__Vfuncout))) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb2 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b0) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b1)) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__61__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__61__Vfuncout 
                        = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__61__op) 
                                     << 1U)) ^ (0x1bU 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__61__op) 
                                                                 >> 7U))))));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__61__Vfuncout))) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__62__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__62__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__63__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__62__op;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__63__Vfuncout 
                                = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__63__op) 
                                             << 1U)) 
                                   ^ (0x1bU & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__63__op) 
                                                             >> 7U))))));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__63__Vfuncout)) 
                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__62__op));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__62__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb3 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__64__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__64__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__65__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__64__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__65__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__65__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__65__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__65__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__64__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__64__Vfuncout)) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b1)) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b2)) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__66__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__66__Vfuncout 
                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__66__op) 
                                 << 1U)) ^ (0x1bU & 
                                            (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__66__op) 
                                                           >> 7U))))));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__66__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__Vfuncout 
        = (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb0) 
            << 0x18U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb1) 
                          << 0x10U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb2) 
                                        << 8U) | (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__mb3))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws1 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__54__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__w 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b0 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__w 
           >> 0x18U);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b1 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__w 
                    >> 0x10U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b2 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__w 
                    >> 8U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b3 
        = (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__w);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb0 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__68__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__68__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__68__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__68__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__68__Vfuncout)) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__69__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__69__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__70__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__69__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__70__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__70__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__70__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__70__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__69__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__69__Vfuncout))) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b2)) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb1 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b0) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__71__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__71__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__71__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__71__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__71__Vfuncout))) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__72__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__72__Vfuncout 
                        = (([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__73__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__72__op;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__73__Vfuncout 
                                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__73__op) 
                                                 << 1U)) 
                                       ^ (0x1bU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__73__op) 
                                                                 >> 7U))))));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__73__Vfuncout)) 
                           ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__72__op));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__72__Vfuncout))) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb2 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b0) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b1)) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__74__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__74__Vfuncout 
                        = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__74__op) 
                                     << 1U)) ^ (0x1bU 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__74__op) 
                                                                 >> 7U))))));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__74__Vfuncout))) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__75__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__75__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__76__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__75__op;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__76__Vfuncout 
                                = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__76__op) 
                                             << 1U)) 
                                   ^ (0x1bU & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__76__op) 
                                                             >> 7U))))));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__76__Vfuncout)) 
                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__75__op));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__75__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb3 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__77__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__77__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__78__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__77__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__78__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__78__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__78__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__78__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__77__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__77__Vfuncout)) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b1)) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b2)) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__79__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__79__Vfuncout 
                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__79__op) 
                                 << 1U)) ^ (0x1bU & 
                                            (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__79__op) 
                                                           >> 7U))))));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__79__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__Vfuncout 
        = (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb0) 
            << 0x18U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb1) 
                          << 0x10U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb2) 
                                        << 8U) | (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__mb3))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws2 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__67__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__w 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__w3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b0 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__w 
           >> 0x18U);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b1 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__w 
                    >> 0x10U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b2 
        = (0xffU & (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__w 
                    >> 8U));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b3 
        = (0xffU & __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__w);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb0 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__81__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__81__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__81__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__81__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__81__Vfuncout)) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__82__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__82__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__83__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__82__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__83__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__83__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__83__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__83__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__82__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__82__Vfuncout))) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b2)) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb1 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b0) 
             ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__84__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b1;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__84__Vfuncout 
                            = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__84__op) 
                                         << 1U)) ^ 
                               (0x1bU & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__84__op) 
                                                       >> 7U))))));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__84__Vfuncout))) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__85__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__85__Vfuncout 
                        = (([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__86__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__85__op;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__86__Vfuncout 
                                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__86__op) 
                                                 << 1U)) 
                                       ^ (0x1bU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__86__op) 
                                                                 >> 7U))))));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__86__Vfuncout)) 
                           ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__85__op));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__85__Vfuncout))) 
           ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b3));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb2 
        = ((((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b0) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b1)) 
            ^ ([&]() {
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__87__op 
                        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b2;
                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__87__Vfuncout 
                        = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__87__op) 
                                     << 1U)) ^ (0x1bU 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__87__op) 
                                                                 >> 7U))))));
                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__87__Vfuncout))) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__88__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__88__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__89__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__88__op;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__89__Vfuncout 
                                = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__89__op) 
                                             << 1U)) 
                                   ^ (0x1bU & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__89__op) 
                                                             >> 7U))))));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__89__Vfuncout)) 
                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__88__op));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__88__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb3 
        = (((([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__90__op 
                            = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b0;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__90__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__91__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__90__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__91__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__91__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__91__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__91__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__90__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__90__Vfuncout)) 
             ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b1)) 
            ^ (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b2)) 
           ^ ([&]() {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__92__op 
                    = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__b3;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__92__Vfuncout 
                    = ((0xfeU & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__92__op) 
                                 << 1U)) ^ (0x1bU & 
                                            (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__92__op) 
                                                           >> 7U))))));
            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__92__Vfuncout)));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__Vfuncout 
        = (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb0) 
            << 0x18U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb1) 
                          << 0x10U) | (((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb2) 
                                        << 8U) | (IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__mb3))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws3 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixw__80__Vfuncout;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[0U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws3;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[1U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws2;
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[2U] 
        = (IData)((((QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws0)) 
                    << 0x20U) | (QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws1))));
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[3U] 
        = (IData)(((((QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws0)) 
                     << 0x20U) | (QData)((IData)(__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__ws1))) 
                   >> 0x20U));
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[0U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[0U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[1U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[1U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[2U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[2U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[3U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__mixcolumns__40__Vfuncout[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[0U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[1U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[2U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[3U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[0U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[1U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[2U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[3U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[0U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[0U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[0U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[1U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[1U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[1U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[2U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[2U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[2U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[3U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__data[3U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__rkey[3U]);
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[0U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[0U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[1U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[1U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[2U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[2U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[3U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__93__Vfuncout[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[0U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[1U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[2U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[3U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[0U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[1U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[2U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[3U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__mixcolumns_block[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[0U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[0U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[0U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[1U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[1U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[1U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[2U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[2U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[2U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[3U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__data[3U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__rkey[3U]);
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[0U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[0U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[1U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[1U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[2U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[2U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[3U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__94__Vfuncout[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[0U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[1U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[2U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[3U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[0U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[0U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[1U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[1U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[2U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[2U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[3U] 
        = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__shiftrows_block[3U];
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[0U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[0U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[0U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[1U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[1U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[1U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[2U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[2U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[2U]);
    __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[3U] 
        = (__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__data[3U] 
           ^ __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__rkey[3U]);
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[0U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[0U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[1U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[1U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[2U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[2U];
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[3U] 
        = __Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__addroundkey__95__Vfuncout[3U];
    if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__update_type))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__update_type) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__update_type)))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[0U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[0U];
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[1U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[1U];
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[2U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[2U];
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[3U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_final_block[3U];
            }
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__update_type))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__update_type))) {
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[0U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[0U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[1U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[1U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[2U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[2U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[3U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_main_block[3U];
        } else {
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[0U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[1U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[2U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[3U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw;
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__update_type))) {
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[0U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[0U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[1U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[1U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[2U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[2U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new[3U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_logic__DOT__addkey_init_block[3U];
    }
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw 
        = ((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__init_state)
            ? CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__tmp_sboxw
            : vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__muxed_sboxw);
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__17(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__17\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated 
        = ((0U >= (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid));
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q;
    if (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
            = ((2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))
                : 0U);
        vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h38308049__0 = 1U;
        if ((2U >= (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
                = (((~ ((IData)(1U) << (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) 
                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int)) 
                   | (7U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h38308049__0) 
                            << (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))));
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0) 
           | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__18(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__18\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid)
                      ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid)
                      ? ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__19(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__19\n"); );
    // Init
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block);
    VlWide<4>/*127:0*/ CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block;
    VL_ZERO_W(128, CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block);
    // Body
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__new_sboxw 
        = ((vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_sbox_inst__DOT__inv_sbox
            [(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
              >> 0x18U)] << 0x18U) | ((vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_sbox_inst__DOT__inv_sbox
                                       [(0xffU & (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
                                                  >> 0x10U))] 
                                       << 0x10U) | 
                                      ((vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_sbox_inst__DOT__inv_sbox
                                        [(0xffU & (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
                                                   >> 8U))] 
                                        << 8U) | vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_sbox_inst__DOT__inv_sbox
                                       [(0xffU & vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw)])));
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[0U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[1U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[2U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[3U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[0U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[1U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[2U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[3U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[0U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[1U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[2U] = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[3U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[0U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[1U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[2U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[3U] = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_we = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_we = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_we = 0U;
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_we = 0U;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[0U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_reg;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[1U] 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_reg;
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[2U] 
        = (IData)((((QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_reg)) 
                    << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_reg))));
    CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[3U] 
        = (IData)(((((QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_reg)) 
                     << 0x20U) | (QData)((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_reg))) 
                   >> 0x20U));
    if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__update_type))) {
        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__update_type) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__update_type)))) {
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[0U] 
                    = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[0U];
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[1U] 
                    = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[1U];
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[2U] 
                    = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[2U];
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[3U] 
                    = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[3U];
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[0U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[0U];
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[1U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[1U];
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[2U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[2U];
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[3U] 
                    = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[3U];
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_we = 1U;
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_we = 1U;
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_we = 1U;
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_we = 1U;
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[0U] 
                    = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[0U] 
                       ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[0U]);
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[1U] 
                    = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[1U] 
                       ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[1U]);
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[2U] 
                    = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[2U] 
                       ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[2U]);
                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[3U] 
                    = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data[3U] 
                       ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey[3U]);
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[0U] 
                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[0U];
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[1U] 
                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[1U];
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[2U] 
                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[2U];
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[3U] 
                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout[3U];
            }
        }
    } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__update_type))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__update_type))) {
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[0U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[0U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[1U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[1U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[2U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[2U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[3U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[3U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[0U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[0U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[1U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[1U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[2U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[2U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[3U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[3U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_we = 1U;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_we = 1U;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_we = 1U;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_we = 1U;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[0U] 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[0U] 
                   ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[0U]);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[1U] 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[1U] 
                   ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[1U]);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[2U] 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[2U] 
                   ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[2U]);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[3U] 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data[3U] 
                   ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey[3U]);
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[0U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[0U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[1U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[1U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[2U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[2U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[3U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout[3U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[0U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[0U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[1U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[1U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[2U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[2U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[3U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[3U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w0 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[3U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w1 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[2U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w2 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[1U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w3 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data[0U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__w 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w0;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b0 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__w 
                   >> 0x18U);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b1 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__w 
                            >> 0x10U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b2 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__w 
                            >> 8U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b3 
                = (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__w);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb0 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__101__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__103__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__101__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__105__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__103__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__105__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__105__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__105__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__104__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__105__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__104__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__104__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__104__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__103__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__104__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__102__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__103__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__102__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__102__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__102__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__101__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__102__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__101__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__106__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__108__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__106__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__108__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__108__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__108__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__107__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__108__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__107__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__107__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__107__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__106__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__107__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__106__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__109__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__109__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__109__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__109__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__109__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__111__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__113__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__111__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__115__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__113__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__115__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__115__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__115__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__114__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__115__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__114__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__114__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__114__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__113__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__114__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__112__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__113__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__112__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__112__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__112__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__111__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__112__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__111__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__116__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__116__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__116__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__116__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__116__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__118__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__120__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__118__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__122__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__120__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__122__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__122__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__122__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__121__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__122__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__121__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__121__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__121__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__120__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__121__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__119__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__120__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__119__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__119__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__119__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__118__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__119__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__118__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__123__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__125__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__123__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__125__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__125__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__125__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__124__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__125__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__124__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__124__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__124__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__123__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__124__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__123__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__126__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__126__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__127__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__126__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__129__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__127__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__131__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__129__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__131__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__131__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__131__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__130__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__131__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__130__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__130__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__130__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__129__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__130__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__128__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__129__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__128__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__128__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__128__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__127__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__128__Vfuncout;
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__127__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__126__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__126__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb1 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__132__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__132__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__133__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__132__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__135__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__133__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__137__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__135__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__137__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__137__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__137__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__136__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__137__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__136__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__136__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__136__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__135__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__136__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__134__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__135__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__134__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__134__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__134__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__133__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__134__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__133__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__132__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__132__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__139__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__141__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__139__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__143__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__141__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__143__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__143__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__143__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__142__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__143__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__142__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__142__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__142__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__141__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__142__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__140__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__141__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__140__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__140__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__140__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__139__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__140__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__139__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__144__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__146__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__144__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__146__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__146__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__146__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__145__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__146__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__145__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__145__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__145__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__144__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__145__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__144__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__147__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__147__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__147__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__147__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__147__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__149__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__151__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__149__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__153__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__151__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__153__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__153__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__153__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__152__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__153__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__152__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__152__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__152__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__151__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__152__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__150__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__151__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__150__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__150__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__150__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__149__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__150__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__149__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__154__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__154__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__154__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__154__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__154__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__156__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__158__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__156__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__160__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__158__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__160__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__160__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__160__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__159__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__160__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__159__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__159__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__159__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__158__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__159__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__157__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__158__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__157__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__157__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__157__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__156__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__157__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__156__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__161__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__163__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__161__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__163__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__163__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__163__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__162__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__163__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__162__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__162__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__162__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__161__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__162__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__161__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb2 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__165__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__167__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__165__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__169__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__167__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__169__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__169__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__169__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__168__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__169__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__168__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__168__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__168__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__167__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__168__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__166__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__167__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__166__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__166__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__166__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__165__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__166__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__165__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__170__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__172__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__170__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__172__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__172__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__172__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__171__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__172__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__171__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__171__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__171__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__170__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__171__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__170__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__173__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__173__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__174__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__173__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__176__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__174__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__178__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__176__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__178__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__178__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__178__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__177__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__178__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__177__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__177__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__177__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__176__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__177__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__175__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__176__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__175__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__175__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__175__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__174__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__175__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__174__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__173__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__173__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__180__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__182__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__180__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__184__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__182__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__184__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__184__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__184__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__183__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__184__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__183__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__183__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__183__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__182__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__183__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__181__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__182__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__181__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__181__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__181__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__180__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__181__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__180__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__185__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__187__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__185__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__187__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__187__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__187__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__186__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__187__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__186__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__186__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__186__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__185__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__186__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__185__Vfuncout))) 
                                   ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__188__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__188__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__188__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__188__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__188__Vfuncout)));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__190__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__192__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__190__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__194__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__192__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__194__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__194__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__194__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__193__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__194__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__193__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__193__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__193__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__192__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__193__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__191__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__192__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__191__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__191__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__191__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__190__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__191__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__190__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__195__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__195__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__195__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__195__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__195__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb3 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__197__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__199__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__197__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__201__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__199__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__201__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__201__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__201__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__200__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__201__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__200__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__200__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__200__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__199__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__200__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__198__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__199__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__198__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__198__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__198__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__197__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__198__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__197__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__202__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__202__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__202__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__202__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__202__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__204__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__206__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__204__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__208__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__206__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__208__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__208__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__208__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__207__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__208__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__207__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__207__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__207__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__206__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__207__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__205__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__206__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__205__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__205__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__205__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__204__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__205__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__204__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__209__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__211__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__209__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__211__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__211__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__211__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__210__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__211__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__210__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__210__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__210__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__209__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__210__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__209__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__212__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__212__Vfuncout 
                                = (([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__213__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__212__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__215__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__213__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__217__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__215__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__217__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__217__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__217__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__216__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__217__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__216__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__216__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__216__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__215__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__216__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__214__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__215__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__214__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__214__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__214__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__213__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__214__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__213__Vfuncout)) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__212__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__212__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__219__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__221__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__219__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__223__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__221__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__223__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__223__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__223__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__222__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__223__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__222__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__222__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__222__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__221__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__222__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__220__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__221__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__220__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__220__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__220__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__219__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__220__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__219__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__224__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__226__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__224__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__226__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__226__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__226__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__225__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__226__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__225__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__225__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__225__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__224__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__225__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__224__Vfuncout))) 
                               ^ ([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__227__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__227__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__227__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__227__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__227__Vfuncout)));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__Vfuncout 
                = (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb0) 
                    << 0x18U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb1) 
                                  << 0x10U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb3))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws0 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__Vfuncout;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__w 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w1;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b0 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__w 
                   >> 0x18U);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b1 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__w 
                            >> 0x10U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b2 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__w 
                            >> 8U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b3 
                = (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__w);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb0 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__230__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__232__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__230__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__234__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__232__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__234__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__234__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__234__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__233__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__234__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__233__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__233__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__233__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__232__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__233__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__231__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__232__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__231__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__231__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__231__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__230__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__231__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__230__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__235__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__237__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__235__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__237__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__237__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__237__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__236__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__237__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__236__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__236__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__236__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__235__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__236__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__235__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__238__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__238__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__238__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__238__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__238__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__240__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__242__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__240__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__244__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__242__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__244__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__244__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__244__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__243__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__244__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__243__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__243__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__243__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__242__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__243__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__241__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__242__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__241__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__241__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__241__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__240__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__241__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__240__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__245__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__245__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__245__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__245__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__245__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__247__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__249__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__247__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__251__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__249__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__251__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__251__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__251__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__250__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__251__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__250__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__250__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__250__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__249__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__250__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__248__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__249__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__248__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__248__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__248__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__247__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__248__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__247__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__252__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__254__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__252__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__254__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__254__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__254__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__253__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__254__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__253__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__253__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__253__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__252__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__253__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__252__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__255__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__255__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__256__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__255__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__258__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__256__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__260__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__258__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__260__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__260__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__260__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__259__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__260__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__259__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__259__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__259__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__258__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__259__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__257__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__258__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__257__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__257__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__257__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__256__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__257__Vfuncout;
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__256__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__255__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__255__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb1 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__261__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__261__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__262__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__261__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__264__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__262__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__266__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__264__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__266__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__266__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__266__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__265__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__266__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__265__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__265__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__265__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__264__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__265__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__263__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__264__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__263__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__263__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__263__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__262__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__263__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__262__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__261__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__261__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__268__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__270__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__268__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__272__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__270__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__272__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__272__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__272__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__271__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__272__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__271__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__271__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__271__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__270__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__271__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__269__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__270__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__269__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__269__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__269__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__268__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__269__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__268__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__273__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__275__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__273__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__275__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__275__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__275__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__274__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__275__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__274__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__274__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__274__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__273__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__274__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__273__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__276__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__276__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__276__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__276__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__276__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__278__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__280__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__278__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__282__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__280__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__282__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__282__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__282__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__281__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__282__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__281__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__281__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__281__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__280__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__281__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__279__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__280__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__279__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__279__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__279__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__278__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__279__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__278__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__283__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__283__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__283__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__283__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__283__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__285__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__287__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__285__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__289__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__287__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__289__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__289__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__289__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__288__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__289__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__288__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__288__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__288__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__287__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__288__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__286__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__287__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__286__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__286__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__286__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__285__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__286__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__285__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__290__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__292__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__290__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__292__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__292__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__292__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__291__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__292__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__291__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__291__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__291__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__290__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__291__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__290__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb2 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__294__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__296__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__294__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__298__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__296__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__298__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__298__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__298__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__297__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__298__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__297__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__297__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__297__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__296__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__297__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__295__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__296__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__295__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__295__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__295__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__294__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__295__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__294__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__299__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__301__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__299__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__301__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__301__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__301__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__300__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__301__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__300__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__300__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__300__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__299__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__300__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__299__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__302__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__302__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__303__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__302__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__305__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__303__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__307__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__305__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__307__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__307__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__307__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__306__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__307__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__306__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__306__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__306__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__305__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__306__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__304__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__305__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__304__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__304__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__304__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__303__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__304__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__303__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__302__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__302__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__309__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__311__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__309__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__313__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__311__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__313__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__313__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__313__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__312__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__313__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__312__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__312__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__312__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__311__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__312__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__310__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__311__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__310__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__310__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__310__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__309__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__310__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__309__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__314__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__316__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__314__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__316__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__316__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__316__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__315__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__316__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__315__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__315__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__315__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__314__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__315__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__314__Vfuncout))) 
                                   ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__317__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__317__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__317__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__317__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__317__Vfuncout)));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__319__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__321__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__319__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__323__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__321__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__323__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__323__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__323__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__322__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__323__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__322__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__322__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__322__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__321__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__322__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__320__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__321__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__320__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__320__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__320__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__319__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__320__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__319__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__324__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__324__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__324__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__324__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__324__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb3 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__326__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__328__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__326__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__330__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__328__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__330__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__330__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__330__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__329__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__330__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__329__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__329__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__329__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__328__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__329__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__327__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__328__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__327__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__327__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__327__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__326__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__327__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__326__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__331__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__331__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__331__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__331__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__331__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__333__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__335__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__333__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__337__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__335__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__337__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__337__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__337__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__336__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__337__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__336__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__336__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__336__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__335__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__336__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__334__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__335__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__334__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__334__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__334__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__333__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__334__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__333__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__338__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__340__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__338__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__340__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__340__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__340__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__339__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__340__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__339__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__339__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__339__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__338__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__339__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__338__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__341__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__341__Vfuncout 
                                = (([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__342__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__341__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__344__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__342__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__346__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__344__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__346__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__346__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__346__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__345__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__346__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__345__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__345__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__345__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__344__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__345__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__343__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__344__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__343__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__343__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__343__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__342__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__343__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__342__Vfuncout)) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__341__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__341__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__348__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__350__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__348__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__352__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__350__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__352__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__352__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__352__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__351__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__352__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__351__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__351__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__351__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__350__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__351__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__349__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__350__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__349__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__349__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__349__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__348__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__349__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__348__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__353__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__355__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__353__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__355__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__355__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__355__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__354__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__355__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__354__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__354__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__354__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__353__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__354__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__353__Vfuncout))) 
                               ^ ([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__356__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__356__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__356__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__356__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__356__Vfuncout)));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__Vfuncout 
                = (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb0) 
                    << 0x18U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb1) 
                                  << 0x10U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb3))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws1 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__Vfuncout;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__w 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w2;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b0 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__w 
                   >> 0x18U);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b1 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__w 
                            >> 0x10U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b2 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__w 
                            >> 8U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b3 
                = (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__w);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb0 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__359__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__361__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__359__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__363__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__361__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__363__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__363__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__363__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__362__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__363__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__362__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__362__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__362__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__361__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__362__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__360__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__361__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__360__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__360__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__360__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__359__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__360__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__359__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__364__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__366__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__364__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__366__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__366__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__366__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__365__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__366__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__365__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__365__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__365__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__364__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__365__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__364__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__367__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__367__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__367__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__367__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__367__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__369__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__371__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__369__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__373__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__371__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__373__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__373__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__373__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__372__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__373__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__372__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__372__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__372__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__371__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__372__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__370__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__371__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__370__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__370__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__370__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__369__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__370__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__369__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__374__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__374__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__374__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__374__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__374__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__376__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__378__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__376__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__380__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__378__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__380__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__380__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__380__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__379__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__380__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__379__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__379__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__379__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__378__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__379__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__377__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__378__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__377__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__377__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__377__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__376__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__377__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__376__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__381__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__383__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__381__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__383__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__383__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__383__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__382__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__383__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__382__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__382__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__382__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__381__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__382__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__381__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__384__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__384__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__385__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__384__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__387__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__385__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__389__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__387__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__389__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__389__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__389__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__388__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__389__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__388__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__388__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__388__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__387__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__388__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__386__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__387__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__386__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__386__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__386__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__385__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__386__Vfuncout;
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__385__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__384__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__384__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb1 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__390__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__390__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__391__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__390__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__393__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__391__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__395__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__393__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__395__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__395__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__395__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__394__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__395__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__394__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__394__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__394__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__393__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__394__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__392__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__393__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__392__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__392__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__392__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__391__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__392__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__391__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__390__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__390__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__397__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__399__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__397__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__401__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__399__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__401__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__401__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__401__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__400__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__401__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__400__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__400__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__400__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__399__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__400__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__398__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__399__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__398__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__398__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__398__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__397__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__398__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__397__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__402__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__404__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__402__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__404__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__404__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__404__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__403__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__404__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__403__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__403__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__403__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__402__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__403__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__402__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__405__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__405__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__405__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__405__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__405__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__407__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__409__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__407__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__411__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__409__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__411__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__411__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__411__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__410__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__411__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__410__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__410__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__410__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__409__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__410__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__408__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__409__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__408__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__408__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__408__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__407__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__408__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__407__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__412__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__412__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__412__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__412__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__412__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__414__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__416__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__414__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__418__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__416__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__418__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__418__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__418__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__417__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__418__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__417__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__417__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__417__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__416__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__417__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__415__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__416__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__415__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__415__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__415__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__414__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__415__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__414__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__419__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__421__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__419__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__421__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__421__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__421__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__420__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__421__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__420__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__420__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__420__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__419__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__420__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__419__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb2 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__423__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__425__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__423__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__427__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__425__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__427__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__427__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__427__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__426__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__427__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__426__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__426__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__426__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__425__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__426__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__424__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__425__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__424__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__424__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__424__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__423__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__424__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__423__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__428__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__430__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__428__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__430__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__430__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__430__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__429__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__430__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__429__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__429__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__429__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__428__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__429__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__428__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__431__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__431__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__432__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__431__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__434__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__432__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__436__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__434__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__436__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__436__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__436__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__435__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__436__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__435__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__435__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__435__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__434__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__435__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__433__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__434__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__433__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__433__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__433__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__432__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__433__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__432__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__431__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__431__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__438__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__440__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__438__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__442__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__440__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__442__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__442__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__442__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__441__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__442__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__441__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__441__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__441__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__440__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__441__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__439__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__440__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__439__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__439__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__439__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__438__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__439__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__438__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__443__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__445__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__443__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__445__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__445__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__445__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__444__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__445__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__444__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__444__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__444__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__443__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__444__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__443__Vfuncout))) 
                                   ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__446__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__446__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__446__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__446__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__446__Vfuncout)));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__448__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__450__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__448__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__452__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__450__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__452__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__452__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__452__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__451__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__452__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__451__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__451__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__451__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__450__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__451__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__449__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__450__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__449__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__449__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__449__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__448__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__449__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__448__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__453__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__453__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__453__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__453__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__453__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb3 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__455__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__457__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__455__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__459__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__457__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__459__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__459__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__459__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__458__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__459__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__458__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__458__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__458__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__457__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__458__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__456__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__457__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__456__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__456__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__456__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__455__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__456__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__455__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__460__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__460__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__460__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__460__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__460__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__462__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__464__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__462__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__466__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__464__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__466__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__466__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__466__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__465__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__466__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__465__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__465__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__465__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__464__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__465__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__463__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__464__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__463__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__463__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__463__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__462__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__463__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__462__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__467__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__469__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__467__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__469__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__469__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__469__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__468__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__469__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__468__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__468__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__468__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__467__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__468__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__467__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__470__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__470__Vfuncout 
                                = (([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__471__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__470__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__473__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__471__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__475__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__473__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__475__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__475__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__475__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__474__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__475__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__474__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__474__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__474__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__473__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__474__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__472__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__473__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__472__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__472__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__472__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__471__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__472__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__471__Vfuncout)) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__470__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__470__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__477__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__479__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__477__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__481__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__479__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__481__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__481__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__481__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__480__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__481__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__480__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__480__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__480__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__479__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__480__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__478__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__479__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__478__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__478__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__478__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__477__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__478__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__477__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__482__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__484__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__482__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__484__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__484__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__484__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__483__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__484__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__483__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__483__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__483__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__482__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__483__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__482__Vfuncout))) 
                               ^ ([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__485__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__485__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__485__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__485__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__485__Vfuncout)));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__Vfuncout 
                = (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb0) 
                    << 0x18U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb1) 
                                  << 0x10U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb3))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws2 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__Vfuncout;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__w 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w3;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b0 
                = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__w 
                   >> 0x18U);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b1 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__w 
                            >> 0x10U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b2 
                = (0xffU & (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__w 
                            >> 8U));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b3 
                = (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__w);
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb0 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__488__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__490__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__488__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__492__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__490__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__492__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__492__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__492__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__491__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__492__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__491__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__491__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__491__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__490__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__491__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__489__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__490__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__489__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__489__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__489__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__488__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__489__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__488__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__493__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__495__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__493__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__495__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__495__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__495__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__494__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__495__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__494__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__494__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__494__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__493__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__494__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__493__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__496__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__496__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__496__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__496__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__496__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__498__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__500__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__498__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__502__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__500__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__502__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__502__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__502__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__501__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__502__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__501__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__501__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__501__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__500__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__501__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__499__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__500__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__499__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__499__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__499__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__498__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__499__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__498__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__503__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__503__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__503__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__503__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__503__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__505__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__507__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__505__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__509__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__507__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__509__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__509__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__509__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__508__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__509__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__508__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__508__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__508__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__507__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__508__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__506__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__507__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__506__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__506__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__506__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__505__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__506__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__505__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__510__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__512__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__510__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__512__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__512__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__512__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__511__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__512__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__511__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__511__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__511__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__510__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__511__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__510__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__513__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__513__Vfuncout 
                            = (([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__514__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__513__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__516__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__514__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__518__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__516__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__518__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__518__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__518__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__517__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__518__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__517__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__517__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__517__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__516__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__517__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__515__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__516__Vfuncout;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__515__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__515__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__515__op) 
                                                               >> 7U))))));
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__514__Vfuncout 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__515__Vfuncout;
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__514__Vfuncout)) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__513__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__513__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb1 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__519__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__519__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__520__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__519__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__522__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__520__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__524__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__522__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__524__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__524__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__524__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__523__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__524__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__523__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__523__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__523__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__522__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__523__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__521__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__522__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__521__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__521__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__521__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__520__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__521__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__520__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__519__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__519__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__526__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__528__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__526__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__530__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__528__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__530__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__530__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__530__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__529__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__530__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__529__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__529__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__529__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__528__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__529__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__527__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__528__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__527__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__527__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__527__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__526__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__527__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__526__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__531__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__533__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__531__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__533__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__533__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__533__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__532__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__533__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__532__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__532__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__532__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__531__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__532__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__531__Vfuncout))) 
                                       ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__534__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__534__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__534__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__534__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__534__Vfuncout)));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__536__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__538__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__536__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__540__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__538__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__540__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__540__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__540__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__539__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__540__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__539__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__539__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__539__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__538__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__539__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__537__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__538__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__537__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__537__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__537__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__536__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__537__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__536__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__541__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__541__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__541__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__541__op) 
                                                                     >> 7U))))));
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__541__Vfuncout))) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__543__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__545__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__543__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__547__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__545__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__547__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__547__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__547__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__546__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__547__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__546__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__546__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__546__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__545__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__546__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__544__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__545__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__544__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__544__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__544__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__543__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__544__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__543__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__548__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__550__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__548__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__550__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__550__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__550__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__549__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__550__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__549__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__549__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__549__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__548__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__549__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__548__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb2 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__552__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__554__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__552__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__556__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__554__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__556__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__556__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__556__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__555__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__556__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__555__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__555__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__555__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__554__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__555__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__553__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__554__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__553__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__553__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__553__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__552__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__553__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__552__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__557__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__559__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__557__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__559__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__559__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__559__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__558__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__559__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__558__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__558__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__558__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__557__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__558__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__557__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__560__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__560__Vfuncout 
                                    = (([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__561__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__560__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__563__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__561__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__565__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__563__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__565__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__565__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__565__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__564__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__565__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__564__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__564__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__564__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__563__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__564__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__562__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__563__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__562__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__562__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__562__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__561__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__562__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__561__Vfuncout)) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__560__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__560__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__Vfuncout 
                                = ((([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__567__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__569__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__567__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__571__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__569__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__571__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__571__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__571__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__570__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__571__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__570__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__570__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__570__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__569__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__570__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__568__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__569__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__568__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__568__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__568__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__567__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__568__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__567__Vfuncout)) 
                                    ^ ([&]() {
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__572__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__574__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__572__op;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__574__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__574__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__574__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__573__op 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__574__Vfuncout;
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__573__Vfuncout 
                                                = (
                                                   (0xfeU 
                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__573__op) 
                                                       << 1U)) 
                                                   ^ 
                                                   (0x1bU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__573__op) 
                                                                     >> 7U))))));
                                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__572__Vfuncout 
                                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__573__Vfuncout;
                                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__572__Vfuncout))) 
                                   ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__575__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__575__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__575__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__575__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__575__Vfuncout)));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__577__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__579__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__577__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__581__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__579__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__581__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__581__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__581__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__580__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__581__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__580__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__580__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__580__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__579__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__580__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__578__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__579__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__578__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__578__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__578__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__577__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__578__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__577__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__582__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__582__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__582__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__582__op) 
                                                                   >> 7U))))));
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__582__Vfuncout))) 
                               ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__op));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb3 
                = (((([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b0;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__584__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__586__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__584__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__588__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__586__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__588__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__588__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__588__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__587__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__588__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__587__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__587__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__587__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__586__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__587__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__585__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__586__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__585__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__585__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__585__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__584__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__585__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__584__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__589__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__589__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__589__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__589__op) 
                                                                       >> 7U))))));
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__589__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__Vfuncout)) 
                     ^ ([&]() {
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__op 
                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b1;
                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__Vfuncout 
                                    = ((([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__591__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__593__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__591__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__595__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__593__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__595__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__595__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__595__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__594__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__595__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__594__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__594__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__594__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__593__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__594__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__592__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__593__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__592__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__592__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__592__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__591__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__592__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__591__Vfuncout)) 
                                        ^ ([&]() {
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__596__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__598__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__596__op;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__598__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__598__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__598__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__597__op 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__598__Vfuncout;
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__597__Vfuncout 
                                                    = 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__597__op) 
                                                         << 1U)) 
                                                     ^ 
                                                     (0x1bU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__597__op) 
                                                                       >> 7U))))));
                                                vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__596__Vfuncout 
                                                    = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__597__Vfuncout;
                                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__596__Vfuncout))) 
                                       ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__op));
                            }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__Vfuncout))) 
                    ^ ([&]() {
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__599__op 
                                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b2;
                            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__599__Vfuncout 
                                = (([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__600__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__599__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__602__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__600__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__604__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__602__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__604__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__604__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__604__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__603__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__604__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__603__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__603__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__603__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__602__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__603__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__601__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__602__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__601__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__601__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__601__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__600__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__601__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__600__Vfuncout)) 
                                   ^ (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__599__op));
                        }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__599__Vfuncout))) 
                   ^ ([&]() {
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__op 
                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b3;
                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__Vfuncout 
                            = ((([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__606__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__608__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__606__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__610__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__608__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__610__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__610__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__610__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__609__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__610__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__609__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__609__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__609__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__608__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__609__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__607__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__608__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__607__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__607__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__607__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__606__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__607__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__606__Vfuncout)) 
                                ^ ([&]() {
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__611__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__613__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__611__op;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__613__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__613__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__613__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__612__op 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__613__Vfuncout;
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__612__Vfuncout 
                                            = ((0xfeU 
                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__612__op) 
                                                   << 1U)) 
                                               ^ (0x1bU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__612__op) 
                                                                   >> 7U))))));
                                        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__611__Vfuncout 
                                            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__612__Vfuncout;
                                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__611__Vfuncout))) 
                               ^ ([&]() {
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__614__op 
                                        = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__op;
                                    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__614__Vfuncout 
                                        = ((0xfeU & 
                                            ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__614__op) 
                                             << 1U)) 
                                           ^ (0x1bU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__614__op) 
                                                               >> 7U))))));
                                }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__614__Vfuncout)));
                    }(), (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__Vfuncout)));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__Vfuncout 
                = (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb0) 
                    << 0x18U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb1) 
                                  << 0x10U) | (((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb3))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws3 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__Vfuncout;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[0U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws3;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[1U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws2;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[2U] 
                = (IData)((((QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws0)) 
                            << 0x20U) | (QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws1))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[3U] 
                = (IData)(((((QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws0)) 
                             << 0x20U) | (QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws1))) 
                           >> 0x20U));
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[0U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[0U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[1U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[1U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[2U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[2U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[3U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout[3U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[0U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[0U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[1U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[1U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[2U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[2U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[3U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_mixcolumns_block[3U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w0 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[3U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w1 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[2U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w2 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[1U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w3 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data[0U];
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws0 
                = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w0) 
                   | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w3) 
                      | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w2) 
                         | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w1))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws1 
                = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w1) 
                   | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w0) 
                      | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w3) 
                         | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w2))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws2 
                = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w2) 
                   | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w1) 
                      | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w0) 
                         | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w3))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws3 
                = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w3) 
                   | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w2) 
                      | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w1) 
                         | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w0))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[0U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws3;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[1U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws2;
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[2U] 
                = (IData)((((QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws0)) 
                            << 0x20U) | (QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws1))));
            vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[3U] 
                = (IData)(((((QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws0)) 
                             << 0x20U) | (QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws1))) 
                           >> 0x20U));
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[0U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[0U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[1U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[1U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[2U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[2U];
            CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[3U] 
                = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout[3U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[0U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[0U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[1U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[1U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[2U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[2U];
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[3U] 
                = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[3U];
        } else {
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[0U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__new_sboxw;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[1U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__new_sboxw;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[2U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__new_sboxw;
            vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[3U] 
                = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__new_sboxw;
            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__sword_ctr_reg))) {
                if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__sword_ctr_reg))) {
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_reg;
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_we = 1U;
                } else {
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
                        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_reg;
                    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_we = 1U;
                }
            } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__sword_ctr_reg))) {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
                    = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_reg;
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_we = 1U;
            } else {
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
                    = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_reg;
                vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_we = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__update_type))) {
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[0U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[0U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[1U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[1U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[2U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[2U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[3U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block[3U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[0U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[0U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[1U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[1U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[2U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[2U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[3U] 
            = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key[3U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_we = 1U;
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_we = 1U;
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_we = 1U;
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_we = 1U;
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[0U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[0U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[1U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[1U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[2U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[2U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[3U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__old_block[3U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[0U] 
            = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[0U] 
               ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[0U]);
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[1U] 
            = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[1U] 
               ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[1U]);
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[2U] 
            = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[2U] 
               ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[2U]);
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[3U] 
            = (vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data[3U] 
               ^ vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey[3U]);
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[0U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[0U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[1U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[1U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[2U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[2U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[3U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout[3U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[0U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[0U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[1U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[1U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[2U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[2U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[3U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__addkey_block[3U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w0 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[3U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w1 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[2U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w2 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[1U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w3 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data[0U];
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws0 
            = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w0) 
               | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w3) 
                  | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w2) 
                     | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w1))));
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws1 
            = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w1) 
               | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w0) 
                  | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w3) 
                     | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w2))));
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws2 
            = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w2) 
               | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w1) 
                  | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w0) 
                     | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w3))));
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws3 
            = ((0xff000000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w3) 
               | ((0xff0000U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w2) 
                  | ((0xff00U & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w1) 
                     | (0xffU & vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w0))));
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[0U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws3;
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[1U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws2;
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[2U] 
            = (IData)((((QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws0)) 
                        << 0x20U) | (QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws1))));
        vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws0)) 
                         << 0x20U) | (QData)((IData)(vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws1))) 
                       >> 0x20U));
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[0U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[0U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[1U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[1U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[2U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[2U];
        CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[3U] 
            = vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout[3U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[0U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[0U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[1U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[1U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[2U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[2U];
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new[3U] 
            = CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_logic__DOT__inv_shiftrows_block[3U];
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__20(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__20\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id)) 
              << 0x1aU));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__21(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__21\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
              << 0x15U));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__22(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__22\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q)) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__23(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__23\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_1 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_wb) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__24(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__24\n"); );
    // Body
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
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9cc9d2cc__0) 
              | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hb2988707__0) 
                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_he3dfd21d__0))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__25(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__25\n"); );
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

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__26(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__26\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = 
        (0x7ffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
                = (0x8000U | (0x3fffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
                = (0x2000U | (0xcfffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)));
        }
    }
    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
                = (0x4000U | (0x3fffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
                = (0x1000U | (0xcfffU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp)));
        }
    }
    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
                = (0x800U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
        }
    }
    if ((IData)((0U != (0x18000000U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U])))) {
        if ((0U != vlSelf->CSoC_top__DOT__u_core__DOT__rf_raddr_id
             [0U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
                = (0xc000U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
        }
        if ((0U != vlSelf->CSoC_top__DOT__u_core__DOT__rf_raddr_id
             [1U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp 
                = (0x3000U | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp));
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__27(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__27\n"); );
    // Init
    CData/*1:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req = 0;
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx12 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear) 
                      << 7U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                 << 6U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                               << 4U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = VCSoC_top__ConstPool__TABLE_hc1c0e906_0[__Vtableidx12];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = VCSoC_top__ConstPool__TABLE_ha1f15410_0[__Vtableidx12];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = VCSoC_top__ConstPool__TABLE_ha7cdd26b_0[__Vtableidx12];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = VCSoC_top__ConstPool__TABLE_h7bfe824e_0[__Vtableidx12];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = VCSoC_top__ConstPool__TABLE_h26ca7f7f_0[__Vtableidx12];
    __Vtableidx14 = ((0x80U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h73f7fa79_0[__Vtableidx14];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = VCSoC_top__ConstPool__TABLE_h386f2eab_0[__Vtableidx14];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = VCSoC_top__ConstPool__TABLE_h4028bd74_0[__Vtableidx14];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = VCSoC_top__ConstPool__TABLE_hd1823543_0[__Vtableidx14];
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__28(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__28\n"); );
    // Init
    CData/*1:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase = 0;
    CData/*0:0*/ CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req;
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req = 0;
    CData/*7:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*7:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    __Vtableidx24 = (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear) 
                      << 7U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                 << 6U) | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                            << 5U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                               << 4U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = VCSoC_top__ConstPool__TABLE_hc1c0e906_0[__Vtableidx24];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = VCSoC_top__ConstPool__TABLE_ha1f15410_0[__Vtableidx24];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = VCSoC_top__ConstPool__TABLE_ha7cdd26b_0[__Vtableidx24];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = VCSoC_top__ConstPool__TABLE_h7bfe824e_0[__Vtableidx24];
    CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = VCSoC_top__ConstPool__TABLE_h26ca7f7f_0[__Vtableidx24];
    __Vtableidx26 = ((0x80U & ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = VCSoC_top__ConstPool__TABLE_h73f7fa79_0[__Vtableidx26];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = VCSoC_top__ConstPool__TABLE_h386f2eab_0[__Vtableidx26];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = VCSoC_top__ConstPool__TABLE_h4028bd74_0[__Vtableidx26];
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = VCSoC_top__ConstPool__TABLE_hd1823543_0[__Vtableidx26];
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__29(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__29\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_wb 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                  >> 1U) | ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                             >> 3U) & ((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb)) 
                                       | (0U != vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb)))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__30(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__30\n"); );
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

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__31(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__31\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hf07770e7__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__lsu_interruptible) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
              & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h655d388e__0) 
                 & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__irq_req_ctrl) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hf07770e7__0) 
              & ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q)) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd1a451ee__0))));
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
           & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hf07770e7__0) 
              & ((~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
                     | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q))) 
                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd1a451ee__0))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__33(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__33\n"); );
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0)))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0)))) {
                    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause 
                            = vlSelf->CSoC_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__34(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__34\n"); );
    // Init
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl;
    CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q;
    CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 1U;
            CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                = ((4U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))
                    ? ((0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])
                        ? 3U : ((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])
                                 ? 2U : ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)))
                    : 0U);
        }
    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0)))) {
            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0)))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0)))) {
                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h72df47b6__0)))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0)))) {
                                    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                                        vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0) {
            CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                = ((0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])
                    ? 3U : ((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])
                             ? 2U : ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])
                                      ? 1U : 0U)));
        } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0)))) {
            if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) {
                CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                    = ((0x20000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[0U])
                        ? 3U : ((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])
                                 ? 2U : ((0x80U & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)));
            } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0)))) {
                if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                    CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
                } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h72df47b6__0)))) {
                    if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0) {
                        if (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                              ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                              : (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                            CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                = ((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])
                                    ? 2U : ((0x80U 
                                             & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])
                                             ? 1U : 0U));
                        }
                    } else if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                        if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__csr_wr_in_wb_flush)))) {
                            if (vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                                CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                    = ((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[0U])
                                        ? 2U : ((0x80U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                 ? 1U
                                                 : 0U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
        = ((0xffff83ffU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U]) 
           | (0xfffffc00U & (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                              << 0xeU) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                           << 0xdU) 
                                          | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q) 
                                             << 0xaU)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
        = ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U]) 
           | (0xfffffffeU & ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                                              >> 2U)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                    >> 2U)));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
        = ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U]) 
           | (((2U & (IData)(CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                        << 0x1dU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                                     >> 3U)) : ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                                                 << 8U) 
                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                                   >> 0x18U)))
                : ((1U & (IData)(CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                        << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                    >> 0x16U)) : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              << 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (((2U & (IData)(CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                        << 0x1dU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                                     >> 3U)) : ((vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                                                 << 8U) 
                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                                   >> 0x18U)))
                : ((1U & (IData)(CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[3U] 
                        << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                    >> 0x16U)) : vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              >> 0x1fU));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__35(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__35\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & ((0x800000U 
                                                   & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                   ? 
                                                  ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    << 0xdU) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      >> 0x13U))
                                                   : 
                                                  ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_2[1U] = ((((0x2000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                        ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                            << 3U) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                         << 0x1eU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      >> 2U))) << 0x1cU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & ((0x800000U 
                                                       & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                        << 0xdU) 
                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                          >> 0x13U))
                                                       : 
                                                      ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                        << 8U) 
                                                       | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                          >> 0x18U)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x7c0U & (((0x20000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                  ? ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      << 0xfU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  >> 0x11U))
                                  : ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      << 0xaU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  >> 0x16U))) 
                                << 6U)) | ((0x3eU & 
                                            (((0x8000000U 
                                               & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                           | (1U & 
                                              (((0x2000000U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                 ? 
                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                               >> 4U))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_4[2U])))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                 ? 0x1eU : 0x1fU) << 0x16U) | ((((0x10000000U 
                                                  & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                  ? 0x1cU
                                                  : 0x1dU) 
                                                << 0x11U) 
                                               | ((((0x4000000U 
                                                     & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0x1aU
                                                     : 0x1bU) 
                                                   << 0xcU) 
                                                  | ((((0x1000000U 
                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0x18U
                                                        : 0x19U) 
                                                      << 7U) 
                                                     | ((((0x400000U 
                                                           & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                           ? 0x16U
                                                           : 0x17U) 
                                                         << 2U) 
                                                        | (((0x100000U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                             ? 0x14U
                                                             : 0x15U) 
                                                           >> 3U)))))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__36(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__36\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0xc0000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                  << 0x1eU) | (((IData)((0U != (0x30000000U 
                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = __Vtemp_1;
}

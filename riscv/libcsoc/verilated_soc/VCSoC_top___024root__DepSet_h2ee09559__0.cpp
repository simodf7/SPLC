// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top__Syms.h"
#include "VCSoC_top___024root.h"

void VCSoC_top___024root____Vdpiexp_CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_memload_TOP(VCSoC_top__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root____Vdpiexp_CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_memload_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 32, 524288, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem)
                 , 0, ~0ULL);
}

void VCSoC_top___024root____Vdpiexp_CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem_TOP(VCSoC_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root____Vdpiexp_CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem_TOP\n"); );
    // Init
    IData/*31:0*/ CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem__Vstatic__valid;
    CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem__Vstatic__valid = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x80000U, index) ? 0U : 1U);
    if ((1U == CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP.CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem[(0x7ffffU 
                                                                 & index)] 
            = val[0U];
    }
    simutil_set_mem__Vfuncrtn = CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ VCSoC_top__ConstPool__CONST_hc1613866_0;

void VCSoC_top___024root____Vdpiexp_CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem_TOP(VCSoC_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root____Vdpiexp_CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem_TOP\n"); );
    // Init
    IData/*31:0*/ CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem__Vstatic__valid;
    CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem__Vstatic__valid = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x80000U, index) ? 0U : 1U);
    if ((1U == CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = VCSoC_top__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = VCSoC_top__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = VCSoC_top__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = VCSoC_top__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = VCSoC_top__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = VCSoC_top__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = VCSoC_top__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = VCSoC_top__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = VCSoC_top__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = VCSoC_top__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = vlSymsp->TOP.CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem
            [(0x7ffffU & index)];
    }
    simutil_get_mem__Vfuncrtn = CSoC_top__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem__Vstatic__valid;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__ico(VCSoC_top___024root* vlSelf);
#endif  // VL_DEBUG

void VCSoC_top___024root___eval_triggers__ico(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VicoTriggered.set(2U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1)));
    vlSelf->__VicoTriggered.set(3U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1)));
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(2U, 1U);
        vlSelf->__VicoTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCSoC_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VCSoC_top___024root___ico_sequent__TOP__0(VCSoC_top___024root* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0(VCSoC_top_cv32e40s_csr__pi18* vlSelf);
void VCSoC_top___024root___ico_comb__TOP__0(VCSoC_top___024root* vlSelf);
void VCSoC_top___024root___ico_comb__TOP__1(VCSoC_top___024root* vlSelf);
void VCSoC_top___024root___ico_comb__TOP__2(VCSoC_top___024root* vlSelf);

void VCSoC_top___024root___eval_ico(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCSoC_top___024root___ico_sequent__TOP__0(vlSelf);
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
        VCSoC_top_cv32e40s_csr__pi18___ico_sequent__TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__0((&vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i));
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCSoC_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((9ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCSoC_top___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0xdULL & vlSelf->__VicoTriggered.word(0U))) {
        VCSoC_top___024root___ico_comb__TOP__2(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__act(VCSoC_top___024root* vlSelf);
#endif  // VL_DEBUG

void VCSoC_top___024root___eval_triggers__act(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid__1)) 
                                     | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready__1))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp__1)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_req) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if__s_req__1)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk__1)));
    vlSelf->__VactTriggered.set(6U, (vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                     != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode__1));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ctrl_byp__1)));
    vlSelf->__VactTriggered.set(8U, (((((((((((((((
                                                   ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ctrl_byp__1)) 
                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                                                        != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__dcsr__1)) 
                                                    | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0) 
                                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0__1))) 
                                                   | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) 
                                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0__1))) 
                                                  | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0) 
                                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0__1))) 
                                                 | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0) 
                                                    != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0__1))) 
                                                | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                                   != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1))) 
                                               | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
                                                  != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible__1))) 
                                              | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                                 != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug__1))) 
                                             | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id) 
                                                != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id__1))) 
                                            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb) 
                                               != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__mpu_status_wb__1))) 
                                           | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                              != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__1))) 
                                          | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_valid) 
                                             != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_valid__1))) 
                                         | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_ready) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_ready__1))) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__last_op_if) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__last_op_if__1))) 
                                       | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_if) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__abort_op_if__1))) 
                                      | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_valid) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_valid__1))) 
                                     | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_ready__1))));
    vlSelf->__VactTriggered.set(9U, ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ctrl_byp__1)) 
                                      | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__1))) 
                                     | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id__1))));
    vlSelf->__VactTriggered.set(0xaU, (0U != ((((((
                                                   vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[0U]) 
                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[1U])) 
                                                 | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[2U])) 
                                                | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[3U])) 
                                               | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[4U])) 
                                              | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[5U]))));
    vlSelf->__VactTriggered.set(0xbU, (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up__1)) 
                                       | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid__1))));
    vlSelf->__VactTriggered.set(0xcU, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up__1)));
    vlSelf->__VactTriggered.set(0xdU, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid__1)));
    vlSelf->__VactTriggered.set(0xeU, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp__1)));
    vlSelf->__VactTriggered.set(0xfU, ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__s_req__1)));
    vlSelf->__VactTriggered.set(0x10U, (vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                                        != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__dcsr__1));
    vlSelf->__VactTriggered.set(0x11U, ((vlSelf->CSoC_top__DOT__u_core__DOT__dcsr 
                                         != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__dcsr__1) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0__1))));
    vlSelf->__VactTriggered.set(0x12U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int__1)));
    vlSelf->__VactTriggered.set(0x13U, (((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0__1)) 
                                          | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) 
                                             != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0__1))) 
                                         | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0__1))) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1))));
    vlSelf->__VactTriggered.set(0x14U, (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0__1)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0__1))));
    vlSelf->__VactTriggered.set(0x15U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1)));
    vlSelf->__VactTriggered.set(0x16U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible__1)));
    vlSelf->__VactTriggered.set(0x17U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug__1)));
    vlSelf->__VactTriggered.set(0x18U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id__1)));
    vlSelf->__VactTriggered.set(0x19U, ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__mpu_status_wb__1)) 
                                         | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0__1))) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0__1))));
    vlSelf->__VactTriggered.set(0x1aU, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__mpu_status_wb__1)));
    vlSelf->__VactTriggered.set(0x1bU, (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__1)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id__1))));
    vlSelf->__VactTriggered.set(0x1cU, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__id_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_ready__1)));
    vlSelf->__VactTriggered.set(0x1dU, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_ready__1)));
    vlSelf->__VactTriggered.set(0x1eU, (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match__1)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__1))));
    vlSelf->__VactTriggered.set(0x1fU, (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw 
                                        != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw__1));
    vlSelf->__VactTriggered.set(0x20U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__2)));
    vlSelf->__VactTriggered.set(0x21U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1)));
    vlSelf->__VactTriggered.set(0x22U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1)));
    vlSelf->__VactTriggered.set(0x23U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1)));
    vlSelf->__VactTriggered.set(0x24U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1)));
    vlSelf->__VactTriggered.set(0x25U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1)));
    vlSelf->__VactTriggered.set(0x26U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__2)));
    vlSelf->__VactTriggered.set(0x27U, ((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1)));
    vlSelf->__VactTriggered.set(0x28U, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated__1)));
    vlSelf->__VactTriggered.set(0x29U, ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                         != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1) 
                                        | (0U != ((
                                                   (((vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U]) 
                                                     | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U])) 
                                                    | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U])) 
                                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U])) 
                                                  | (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U])))));
    vlSelf->__VactTriggered.set(0x2aU, (vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                        != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1));
    vlSelf->__VactTriggered.set(0x2bU, ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy__1)));
    vlSelf->__VactTriggered.set(0x2cU, (vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw 
                                        != vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw__1));
    vlSelf->__VactTriggered.set(0x2dU, (((IData)(vlSelf->clk_sys_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_sys_i__0))) 
                                        | ((~ (IData)(vlSelf->rst_sys_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_sys_ni__0))));
    vlSelf->__VactTriggered.set(0x2eU, ((IData)(vlSelf->clk_sys_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_sys_i__0))));
    vlSelf->__VactTriggered.set(0x2fU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->clk_sys_i) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_sys_i__0)))));
    vlSelf->__VactTriggered.set(0x30U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(0x31U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x32U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x33U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x34U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x35U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x36U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x37U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x38U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x39U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x3aU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x3bU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x3cU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x3dU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x3eU, (((IData)(vlSelf->dtm_tck_i) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dtm_tck_i__0))) 
                                        | ((~ (IData)(vlSelf->dtm_trst_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__dtm_trst_ni__0))));
    vlSelf->__VactTriggered.set(0x3fU, (((IData)(vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tck_n) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tck_n__0))) 
                                        | ((~ (IData)(vlSelf->dtm_trst_ni)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__dtm_trst_ni__0))));
    vlSelf->__VactTriggered.set(0x40U, ((IData)(vlSelf->dtm_tck_i) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__dtm_tck_i__0)));
    vlSelf->__VactTriggered.set(0x41U, ((IData)(vlSelf->dtm_tck_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dtm_tck_i__0))));
    vlSelf->__VactTriggered.set(0x42U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x43U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x44U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x45U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x46U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x47U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x48U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x49U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x4aU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x4bU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x4cU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x4dU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x4eU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x4fU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x50U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x51U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x52U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x53U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x54U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x55U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x56U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x57U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x58U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x59U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x5aU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x5bU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x5cU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x5dU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x5eU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x5fU, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x60U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__VactTriggered.set(0x61U, (((~ (IData)(vlSelf->CSoC_top__DOT__rst_core_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0)) 
                                        | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0)))));
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if__s_req__1 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_req;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ctrl_byp__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__dcsr__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__dcsr;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__mpu_status_wb__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_valid__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_valid;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_ready__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__id_ready;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__last_op_if__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__last_op_if;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__abort_op_if__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_if;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_valid__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__id_valid;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_ready__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[0U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[1U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[2U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[3U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[4U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[5U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__s_req__1 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw__1 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__2 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__2 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U] 
        = vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy__1 
        = vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw__1 
        = vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw;
    vlSelf->__Vtrigprevexpr___TOP__clk_sys_i__0 = vlSelf->clk_sys_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_sys_ni__0 = vlSelf->rst_sys_ni;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0 
        = vlSelf->CSoC_top__DOT__rst_core_n;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__clk__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated__0 
        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__dtm_tck_i__0 = vlSelf->dtm_tck_i;
    vlSelf->__Vtrigprevexpr___TOP__dtm_trst_ni__0 = vlSelf->dtm_trst_ni;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tck_n__0 
        = vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tck_n;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 
        = vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.__PVT__gen_hardened__DOT__clk_gated;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
        vlSelf->__VactTriggered.set(0xbU, 1U);
        vlSelf->__VactTriggered.set(0xcU, 1U);
        vlSelf->__VactTriggered.set(0xdU, 1U);
        vlSelf->__VactTriggered.set(0xeU, 1U);
        vlSelf->__VactTriggered.set(0xfU, 1U);
        vlSelf->__VactTriggered.set(0x10U, 1U);
        vlSelf->__VactTriggered.set(0x11U, 1U);
        vlSelf->__VactTriggered.set(0x12U, 1U);
        vlSelf->__VactTriggered.set(0x13U, 1U);
        vlSelf->__VactTriggered.set(0x14U, 1U);
        vlSelf->__VactTriggered.set(0x15U, 1U);
        vlSelf->__VactTriggered.set(0x16U, 1U);
        vlSelf->__VactTriggered.set(0x17U, 1U);
        vlSelf->__VactTriggered.set(0x18U, 1U);
        vlSelf->__VactTriggered.set(0x19U, 1U);
        vlSelf->__VactTriggered.set(0x1aU, 1U);
        vlSelf->__VactTriggered.set(0x1bU, 1U);
        vlSelf->__VactTriggered.set(0x1cU, 1U);
        vlSelf->__VactTriggered.set(0x1dU, 1U);
        vlSelf->__VactTriggered.set(0x1eU, 1U);
        vlSelf->__VactTriggered.set(0x1fU, 1U);
        vlSelf->__VactTriggered.set(0x20U, 1U);
        vlSelf->__VactTriggered.set(0x21U, 1U);
        vlSelf->__VactTriggered.set(0x22U, 1U);
        vlSelf->__VactTriggered.set(0x23U, 1U);
        vlSelf->__VactTriggered.set(0x24U, 1U);
        vlSelf->__VactTriggered.set(0x25U, 1U);
        vlSelf->__VactTriggered.set(0x26U, 1U);
        vlSelf->__VactTriggered.set(0x27U, 1U);
        vlSelf->__VactTriggered.set(0x28U, 1U);
        vlSelf->__VactTriggered.set(0x29U, 1U);
        vlSelf->__VactTriggered.set(0x2aU, 1U);
        vlSelf->__VactTriggered.set(0x2bU, 1U);
        vlSelf->__VactTriggered.set(0x2cU, 1U);
        vlSelf->__VactTriggered.set(0x40U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCSoC_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__3(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req 
        = ((2U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req)) 
           | (1U & (~ ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req) 
                       >> 1U))));
    vlSelf->CSoC_top__DOT__host_req[0U] = (1U & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req) 
                                                 >> 1U));
    vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->CSoC_top__DOT__host_req[1U]) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req = 1U;
    }
    if (vlSelf->CSoC_top__DOT__host_req[0U]) {
        vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelf->CSoC_top__DOT__host_gnt[0U] = 0U;
    vlSelf->CSoC_top__DOT__host_gnt[1U] = 0U;
    vlSelf->CSoC_top__DOT__host_gnt[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req] 
        = vlSelf->CSoC_top__DOT__host_req[vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req];
    vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt 
        = ((vlSelf->CSoC_top__DOT__host_gnt[0U] << 1U) 
           | (1U & (~ vlSelf->CSoC_top__DOT__host_gnt
                    [0U])));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err 
        = ((1U & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt) 
                  >> 1U)) == (1U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt)));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__13(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__13\n"); );
    // Body
    vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_req 
        = ((2U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_req)) 
           | (1U & (~ ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if.s_req) 
                       >> 1U))));
}

VL_INLINE_OPT void VCSoC_top___024root___act_sequent__TOP__32(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_sequent__TOP__32\n"); );
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

extern const VlWide<32>/*1023:0*/ VCSoC_top__ConstPool__CONST_hd6b7ba52_0;
extern const VlUnpacked<CData/*1:0*/, 16> VCSoC_top__ConstPool__TABLE_h0089a27f_0;
extern const VlUnpacked<CData/*1:0*/, 16> VCSoC_top__ConstPool__TABLE_he32be4eb_0;

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__13(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__13\n"); );
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
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 0;
    IData/*31:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hceb7ce30__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf24a91e8__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h999f4677__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h947f00db__0 = 0;
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
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0 = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0;
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb = 0;
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb;
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb = 0;
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
    IData/*31:0*/ __Vfunc_csr_next_value__16__Vfuncout;
    __Vfunc_csr_next_value__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__16__wdata;
    __Vfunc_csr_next_value__16__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__19__Vfuncout;
    __Vfunc_csr_next_value__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__19__wdata;
    __Vfunc_csr_next_value__19__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__20__Vfuncout;
    __Vfunc_csr_next_value__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__20__wdata;
    __Vfunc_csr_next_value__20__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__21__Vfuncout;
    __Vfunc_csr_next_value__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__21__wdata;
    __Vfunc_csr_next_value__21__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__25__Vfuncout;
    __Vfunc_csr_next_value__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__25__wdata;
    __Vfunc_csr_next_value__25__wdata = 0;
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
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    VlWide<3>/*88:0*/ TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload;
    VL_ZERO_W(89, TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__DOT__req_payload);
    SData/*31:0*/ __Vtemp_1;
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
    CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h60f2d943__0 
        = (1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o) 
                    & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                       >> 0xdU))));
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
    vlSelf->CSoC_top__DOT__u_core__DOT__dcsr = ((0xfffffff0U 
                                                 & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__gen_debug_csr__DOT__dcsr_csr_i__rd_data_o) 
                                                | ((8U 
                                                    & (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                       >> 0x1aU)) 
                                                   | (7U 
                                                      & vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__gen_debug_csr__DOT__dcsr_csr_i__rd_data_o)));
    if ((0x800U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        } else {
                            if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? 0U : 0x15U)
                                    : ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? 0x602U : 0U));
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                } else {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_rdata;
                                }
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else {
                        if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
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
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x20U) 
                                             + VL_SHIFTL_III(11,32,32, 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                     ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                             (((IData)(0x1fU) 
                                               + (0x7ffU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     VL_SHIFTL_III(11,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     VL_SHIFTL_III(11,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                      (0x3fU & (((IData)(0x20U) 
                                                 + 
                                                 VL_SHIFTL_III(11,32,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                >> 5U))] 
                                      >> (0x1fU & ((IData)(0x20U) 
                                                   + 
                                                   VL_SHIFTL_III(11,32,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                : ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(0x20U) 
                                                   + 
                                                   VL_SHIFTL_III(11,32,32, 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                         ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
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
                                          (0x3fU & 
                                           (((IData)(0x20U) 
                                             + VL_SHIFTL_III(11,32,32, 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + 
                                                 VL_SHIFTL_III(11,32,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                    : ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + 
                                                 VL_SHIFTL_III(11,32,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                             ? 0U : 
                                            (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                             (((IData)(0x1fU) 
                                               + (0x7ffU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     VL_SHIFTL_III(11,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
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
                                              >> (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     VL_SHIFTL_III(11,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                        : ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? (((0U 
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
                                            : ((1U 
                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                ? 0U
                                                : (
                                                   ((0U 
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
                                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))));
                    }
                } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                } else {
                    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
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
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                 ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                         (((IData)(0x1fU) 
                                           + (0x7ffU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(11,32,32, 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                               | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                  (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                            >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                            : ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? (((0U == (0x1fU & 
                                            VL_SHIFTL_III(11,32,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                     ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                             (((IData)(0x1fU) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                   | (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                      (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                : ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? (((0U == (0x1fU 
                                                & VL_SHIFTL_III(11,32,32, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                         ? 0U : (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
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
                                          (0x3fU & 
                                           (VL_SHIFTL_III(11,32,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                    : ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(11,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                             ? 0U : 
                                            (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                             (((IData)(0x1fU) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
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
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                        : ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                            ? 0U : 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(11,32,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                              ? 0U : 
                                             (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                              (((IData)(0x1fU) 
                                                + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
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
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))))));
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
        }
    } else if ((0x400U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? 0U : ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((1U 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q
                                                  : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q)
                                              : ((1U 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q
                                                  : vlSelf->CSoC_top__DOT__u_core__DOT__dcsr))));
                        } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x1008064U;
                            }
                        } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata
                                    : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? 0U : 0U);
                            } else {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? (IData)(vlSelf->__VdfgTmp_h7d22ad46__0)
                                    : 0U);
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                }
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
        }
    } else if ((0x200U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        } else {
                            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                [(0x3fU & ((IData)(0x30U) 
                                           + (0xfU 
                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))))];
                        }
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                               [(0x3fU & ((IData)(0x20U) 
                                          + (0xfU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))))]
                                : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                               [(0x3fU & ((IData)(0x10U) 
                                          + (0xfU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))))]);
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 5U)))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                               [(0xfU & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))]
                                : ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
                                    [(0x3fU & ((IData)(3U) 
                                               + (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_he47001db__0)))] 
                                    << 0x18U) | ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata
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
                            : 0U);
                }
            } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                } else if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    } else {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q;
                    }
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : vlSelf->CSoC_top__DOT__u_core__DOT__mcause)
                            : ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? vlSelf->CSoC_top__DOT__u_core__DOT__mepc
                                : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q));
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
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                    = ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                             ? 0U : (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                     (((IData)(0x1fU) 
                                       + (0x3ffU & 
                                          VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,32,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                           | (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                              (0x1fU & (VL_SHIFTL_III(10,32,32, 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                        >> 5U))] >> 
                              (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                        : ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                 ? 0U : (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                         (((IData)(0x1fU) 
                                           + (0x3ffU 
                                              & VL_SHIFTL_III(10,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(10,32,32, 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                               | (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                  (0x1fU & (VL_SHIFTL_III(10,32,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                            >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                            : ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? (((0U == (0x1fU & 
                                            VL_SHIFTL_III(10,32,32, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                     ? 0U : (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                             (((IData)(0x1fU) 
                                               + (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                   | (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                      (0x1fU & (VL_SHIFTL_III(10,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                : ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                    ? ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                        ? (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(10,32,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                             ? 0U : 
                                            (VCSoC_top__ConstPool__CONST_hd6b7ba52_0[
                                             (((IData)(0x1fU) 
                                               + (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
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
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(10,32,32, 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                        : 0U) : ((1U 
                                                  & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))));
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
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                    = ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o) 
                                             << 2U)))
                        : 0U);
            } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                } else {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata
                            : vlSelf->CSoC_top__DOT__u_core__DOT__mie);
                }
            } else if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                    = ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? 0x40901104U : vlSelf->CSoC_top__DOT__u_core__DOT__mstatus);
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
        }
    } else if ((0x100U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    } else if ((0x80U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    } else if ((0x40U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    } else if ((0x20U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    } else if ((0x10U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((8U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
        } else if ((4U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((2U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                    = ((1U & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_rdata
                        : 0U);
            } else {
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
            }
        } else {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
        }
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    }
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
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n 
        = vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl;
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
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 9U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
        }
    } else if ((1U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    } else if ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                >> 0x1fU)) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n 
            = vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h20ed6652__0;
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
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i 
        = (1U & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                 | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i 
        = (1U & ((vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 1U) | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)));
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64cea0b4__0)
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i 
        = (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o)
                  ? (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 2U) : ((~ (IData)((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0)))) 
                               & (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 2U))));
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
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b92ddbf__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h632373b8__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h632373b8__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b93374d__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b93374d__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a26c866__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a26c866__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b91e9ba__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b91e9ba__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a2dfa61__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a2dfa61__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4fe6f5f5__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4fe6f5f5__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff9476e__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff9476e__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89de3bb4__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89de3bb4__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff87b8f__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff87b8f__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff556d0__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff556d0__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h49618b27__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h49618b27__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89b02a07__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89b02a07__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89aa4ab0__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89aa4ab0__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64725447__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64725447__0) 
            | ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64cea0b4__0) 
               & (8U == (0x18U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i.rd_data_o)))))
            ? vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i.rd_data_o
            : vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
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
    if ((0x40000000U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n 
                = ((vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    << 0x1fU) | (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                 >> 1U));
        }
        if ((1U & (~ (vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 9U)))) {
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = 1U;
            vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = 1U;
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
    }
    if ((0x100U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x200U & vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
                CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 1U;
            }
        }
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
    if ((1U & (~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__clk)))) {
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
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
    } else {
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
        vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
    }
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
}

extern const VlUnpacked<CData/*2:0*/, 128> VCSoC_top__ConstPool__TABLE_h1780a55c_0;
extern const VlUnpacked<CData/*1:0*/, 128> VCSoC_top__ConstPool__TABLE_h0692e5a4_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h77c91a6a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_he4e42b2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h5e4815b1_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCSoC_top__ConstPool__TABLE_h3f38541e_0;

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__21(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__21\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus = 0;
    CData/*0:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid = 0;
    CData/*1:0*/ CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status;
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
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
    __Vtableidx5 = ((0x40U & (vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                              >> 0x12U)) | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_trans_valid) 
                                             << 5U) 
                                            | ((((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err) 
                                                 | ((~ (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region)) 
                                                    & ((~ 
                                                        ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q) 
                                                         & (0x30000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U])))) 
                                                       & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i.__PVT__access_fault)))) 
                                                << 4U) 
                                               | (((1U 
                                                    == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt)) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q)))));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n 
        = VCSoC_top__ConstPool__TABLE_h1780a55c_0[__Vtableidx5];
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status 
        = VCSoC_top__ConstPool__TABLE_h0692e5a4_0[__Vtableidx5];
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core 
        = VCSoC_top__ConstPool__TABLE_h77c91a6a_0[__Vtableidx5];
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus 
        = VCSoC_top__ConstPool__TABLE_he4e42b2b_0[__Vtableidx5];
    CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = VCSoC_top__ConstPool__TABLE_h5e4815b1_0[__Vtableidx5];
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = VCSoC_top__ConstPool__TABLE_h3f38541e_0[__Vtableidx5];
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid 
        = (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_resp_valid) 
            | (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid)) 
           | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid 
        = ((~ (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)) 
           & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_trans_valid));
    vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
            ? (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q)
            : (IData)(CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status));
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_busy = 
        (((0U != (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
          | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid)) 
         | ((0U < (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
            | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid)));
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid) 
           & (2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_we[0U] = 
        ((vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
          >> 0x1cU) & ((0U == (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb)) 
                       & ((~ (IData)((0U != vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb))) 
                          & (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid))));
    vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req 
        = ((1U & (IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_req)) 
           | (((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
               | (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_valid)) 
              << 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                      [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                     [0U]));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 1U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 2U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 3U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 4U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 5U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 6U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 7U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 8U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 9U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xaU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xbU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xcU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xdU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xeU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xfU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x10U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x11U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x12U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x13U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x14U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x15U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x16U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x17U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x18U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x19U));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1aU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1bU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1cU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1dU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1eU));
    vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelf->CSoC_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1fU));
}

VL_INLINE_OPT void VCSoC_top___024root___act_comb__TOP__22(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___act_comb__TOP__22\n"); );
    // Init
    CData/*0:0*/ CSoC_top__DOT__u_uart__DOT__rx_fifo_rready;
    CSoC_top__DOT__u_uart__DOT__rx_fifo_rready = 0;
    CData/*0:0*/ CSoC_top__DOT__u_timer__DOT__timer_we;
    CSoC_top__DOT__u_timer__DOT__timer_we = 0;
    // Body
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready 
        = (1U & ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state)
                  ? ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 0x12U) & ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt) 
                                   >> 1U)) : ((vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                               >> 0x12U) 
                                              | ((IData)(vlSymsp->TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if.s_gnt) 
                                                 >> 1U))));
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
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_ready 
        = ((IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (2U > (IData)(vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCSoC_top.h for the primary calling header

#include "VCSoC_top__pch.h"
#include "VCSoC_top___024root.h"

VL_ATTR_COLD void VCSoC_top___024root___eval_static(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCSoC_top___024root___eval_final__TOP(VCSoC_top___024root* vlSelf);

VL_ATTR_COLD void VCSoC_top___024root___eval_final(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_final\n"); );
    // Body
    VCSoC_top___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void VCSoC_top___024root___eval_final__TOP(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_final__TOP\n"); );
    // Body
    VL_FCLOSE_I(vlSelf->CSoC_top__DOT__u_simulator_ctrl__DOT__log_fd); }

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__stl(VCSoC_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCSoC_top___024root___eval_phase__stl(VCSoC_top___024root* vlSelf);

VL_ATTR_COLD void VCSoC_top___024root___eval_settle(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VCSoC_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/CSoC_top.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCSoC_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__stl(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] CSoC_top.u_core.if_stage_i.prefetch_resp_valid or [hybrid] CSoC_top.u_core.if_stage_i.prefetch_unit_i.fetch_ready)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] CSoC_top.u_core.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] CSoC_top.u_core.if_stage_i.instruction_obi_i.rchk_err_resp)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] CSoC_top.u_core.m_c_obi_instr_if.s_req)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] CSoC_top.u_core.if_stage_i.instruction_obi_i.achk)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] CSoC_top.u_core.if_stage_i.gen_seq.sequencer_i.decode)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] CSoC_top.u_core.ctrl_byp)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] CSoC_top.u_core.ctrl_byp or [hybrid] CSoC_top.u_core.dcsr or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_hd64c43a0__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h978a7aa5__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.debug_interruptible or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.pending_sync_debug or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jump_in_id or [hybrid] CSoC_top.u_core.mpu_status_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.if_valid or [hybrid] CSoC_top.u_core.id_ready or [hybrid] CSoC_top.u_core.last_op_if or [hybrid] CSoC_top.u_core.abort_op_if or [hybrid] CSoC_top.u_core.id_valid or [hybrid] CSoC_top.u_core.ex_ready)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] CSoC_top.u_core.ctrl_byp or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jmp_id)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.count_up or [hybrid] CSoC_top.u_core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.count_up)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.data_obi_i.rchk_err_resp)\n");
    }
    if ((0x8000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] CSoC_top.u_core.m_c_obi_data_if.s_req)\n");
    }
    if ((0x10000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] CSoC_top.u_core.dcsr)\n");
    }
    if ((0x20000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] CSoC_top.u_core.dcsr or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0)\n");
    }
    if ((0x40000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] CSoC_top.u_core.cs_registers_i.csr_we_int)\n");
    }
    if ((0x80000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_hd64c43a0__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x100000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0)\n");
    }
    if ((0x200000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x400000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.debug_interruptible)\n");
    }
    if ((0x800000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.pending_sync_debug)\n");
    }
    if ((0x1000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jump_in_id)\n");
    }
    if ((0x2000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] CSoC_top.u_core.mpu_status_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgTmp_h3ec3521f__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgTmp_h9d2d34df__0)\n");
    }
    if ((0x4000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] CSoC_top.u_core.mpu_status_wb)\n");
    }
    if ((0x8000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jmp_id)\n");
    }
    if ((0x10000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] CSoC_top.u_core.id_ready)\n");
    }
    if ((0x20000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] CSoC_top.u_core.ex_ready)\n");
    }
    if ((0x40000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] CSoC_top.u_core.controller_i.bypass_i.rf_rd_ex_match or [hybrid] CSoC_top.u_core.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x80000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] CSoC_top.u_aes.u_aes_core.core.dec_block.tmp_sboxw)\n");
    }
    if ((0x100000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x200000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 33 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x400000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 34 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x800000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 35 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 36 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 37 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 38 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 39 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 40 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.wb_counter_event_gated)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 41 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 42 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 43 is active: @([hybrid] CSoC_top.u_core.if_stage_i.first_op_nondummy)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 44 is active: @([hybrid] CSoC_top.u_aes.u_aes_core.core.muxed_sboxw)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCSoC_top___024root___stl_comb__TOP__1(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___stl_comb__TOP__1\n"); );
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

VL_ATTR_COLD void VCSoC_top___024root___eval_triggers__stl(VCSoC_top___024root* vlSelf);
VL_ATTR_COLD void VCSoC_top___024root___eval_stl(VCSoC_top___024root* vlSelf);

VL_ATTR_COLD bool VCSoC_top___024root___eval_phase__stl(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCSoC_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCSoC_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__ico(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
    if ((4ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((8ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__act(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] CSoC_top.u_core.if_stage_i.prefetch_resp_valid or [hybrid] CSoC_top.u_core.if_stage_i.prefetch_unit_i.fetch_ready)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] CSoC_top.u_core.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] CSoC_top.u_core.if_stage_i.instruction_obi_i.rchk_err_resp)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] CSoC_top.u_core.m_c_obi_instr_if.s_req)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] CSoC_top.u_core.if_stage_i.instruction_obi_i.achk)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] CSoC_top.u_core.if_stage_i.gen_seq.sequencer_i.decode)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] CSoC_top.u_core.ctrl_byp)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] CSoC_top.u_core.ctrl_byp or [hybrid] CSoC_top.u_core.dcsr or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_hd64c43a0__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h978a7aa5__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.debug_interruptible or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.pending_sync_debug or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jump_in_id or [hybrid] CSoC_top.u_core.mpu_status_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.if_valid or [hybrid] CSoC_top.u_core.id_ready or [hybrid] CSoC_top.u_core.last_op_if or [hybrid] CSoC_top.u_core.abort_op_if or [hybrid] CSoC_top.u_core.id_valid or [hybrid] CSoC_top.u_core.ex_ready)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] CSoC_top.u_core.ctrl_byp or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jmp_id)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.count_up or [hybrid] CSoC_top.u_core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.count_up)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.data_obi_i.rchk_err_resp)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] CSoC_top.u_core.m_c_obi_data_if.s_req)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] CSoC_top.u_core.dcsr)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] CSoC_top.u_core.dcsr or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] CSoC_top.u_core.cs_registers_i.csr_we_int)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_hd64c43a0__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0)\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.debug_interruptible)\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.pending_sync_debug)\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jump_in_id)\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] CSoC_top.u_core.mpu_status_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgTmp_h3ec3521f__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgTmp_h9d2d34df__0)\n");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] CSoC_top.u_core.mpu_status_wb)\n");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jmp_id)\n");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] CSoC_top.u_core.id_ready)\n");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] CSoC_top.u_core.ex_ready)\n");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] CSoC_top.u_core.controller_i.bypass_i.rf_rd_ex_match or [hybrid] CSoC_top.u_core.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] CSoC_top.u_aes.u_aes_core.core.dec_block.tmp_sboxw)\n");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x800000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.wb_counter_event_gated)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @([hybrid] CSoC_top.u_core.if_stage_i.first_op_nondummy)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @([hybrid] CSoC_top.u_aes.u_aes_core.core.muxed_sboxw)\n");
    }
    if ((0x200000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @(posedge clk_sys_i or negedge rst_sys_ni)\n");
    }
    if ((0x400000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @(posedge clk_sys_i)\n");
    }
    if ((0x800000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @(negedge CSoC_top.rst_core_n or posedge clk_sys_i)\n");
    }
    if ((0x1000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.clk)\n");
    }
    if ((0x2000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mstateen0_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.jvt_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x8000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mepc_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mscratch_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mstatus_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.gen_debug_csr.dcsr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.basic_mode_csrs.mcause_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.basic_mode_csrs.mtvec_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.basic_mode_csrs.mie_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x400000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.xsecure.cpuctrl_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x800000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.privlvl_user.priv_lvl_i.gen_hardened.clk_gated)\n");
    }
    if ((0x1000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.secure_security_lvl.security_lvl_i.gen_hardened.clk_gated)\n");
    }
    if ((0x2000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.pmp_mseccfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @(posedge dtm_tck_i or negedge dtm_trst_ni)\n");
    }
    if ((0x8000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @(posedge CSoC_top.gen_dm_dmi.u_dmi.i_dmi_jtag_tap.tck_n or negedge dtm_trst_ni)\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @([changed] dtm_tck_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @(posedge dtm_tck_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 66 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[0].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 67 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[1].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 68 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[2].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 69 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[3].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 70 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[4].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 71 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[5].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 72 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[6].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 73 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[7].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 74 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[8].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 75 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[9].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 76 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[10].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 77 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[11].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 78 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[12].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 79 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[13].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 80 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[14].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 81 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[15].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 82 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[0].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 83 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[1].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 84 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[2].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 85 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[3].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 86 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[4].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 87 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[5].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 88 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[6].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 89 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[7].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 90 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[8].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 91 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[9].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 92 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[10].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 93 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[11].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 94 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[12].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 95 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[13].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 96 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[14].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 97 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[15].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCSoC_top___024root___dump_triggers__nba(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] CSoC_top.u_core.if_stage_i.prefetch_resp_valid or [hybrid] CSoC_top.u_core.if_stage_i.prefetch_unit_i.fetch_ready)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] CSoC_top.u_core.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] CSoC_top.u_core.if_stage_i.instruction_obi_i.rchk_err_resp)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] CSoC_top.u_core.m_c_obi_instr_if.s_req)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] CSoC_top.u_core.if_stage_i.instruction_obi_i.achk)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] CSoC_top.u_core.if_stage_i.gen_seq.sequencer_i.decode)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] CSoC_top.u_core.ctrl_byp)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] CSoC_top.u_core.ctrl_byp or [hybrid] CSoC_top.u_core.dcsr or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_hd64c43a0__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h978a7aa5__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.debug_interruptible or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.pending_sync_debug or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jump_in_id or [hybrid] CSoC_top.u_core.mpu_status_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.if_valid or [hybrid] CSoC_top.u_core.id_ready or [hybrid] CSoC_top.u_core.last_op_if or [hybrid] CSoC_top.u_core.abort_op_if or [hybrid] CSoC_top.u_core.id_valid or [hybrid] CSoC_top.u_core.ex_ready)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] CSoC_top.u_core.ctrl_byp or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jmp_id)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.count_up or [hybrid] CSoC_top.u_core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.count_up)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] CSoC_top.u_core.load_store_unit_i.data_obi_i.rchk_err_resp)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] CSoC_top.u_core.m_c_obi_data_if.s_req)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] CSoC_top.u_core.dcsr)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] CSoC_top.u_core.dcsr or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] CSoC_top.u_core.cs_registers_i.csr_we_int)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_hd64c43a0__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h2afb4ddb__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgExtracted_h37e37f35__0)\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.debug_interruptible)\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.pending_sync_debug)\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jump_in_id)\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] CSoC_top.u_core.mpu_status_wb or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgTmp_h3ec3521f__0 or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.__VdfgTmp_h9d2d34df__0)\n");
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] CSoC_top.u_core.mpu_status_wb)\n");
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.sys_mret_id or [hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.jmp_id)\n");
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] CSoC_top.u_core.id_ready)\n");
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] CSoC_top.u_core.ex_ready)\n");
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] CSoC_top.u_core.controller_i.bypass_i.rf_rd_ex_match or [hybrid] CSoC_top.u_core.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] CSoC_top.u_aes.u_aes_core.core.dec_block.tmp_sboxw)\n");
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @([hybrid] CSoC_top.gen_dm_dmi.u_dmi.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @([hybrid] CSoC_top.u_core.controller_i.controller_fsm_i.wb_counter_event_gated)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @([hybrid] CSoC_top.u_core.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @([hybrid] CSoC_top.u_core.if_stage_i.first_op_nondummy)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @([hybrid] CSoC_top.u_aes.u_aes_core.core.muxed_sboxw)\n");
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @(posedge clk_sys_i or negedge rst_sys_ni)\n");
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @(posedge clk_sys_i)\n");
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @(negedge CSoC_top.rst_core_n or posedge clk_sys_i)\n");
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.clk)\n");
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mstateen0_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.jvt_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mepc_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mscratch_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.mstatus_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.gen_debug_csr.dcsr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.basic_mode_csrs.mcause_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.basic_mode_csrs.mtvec_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.basic_mode_csrs.mie_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.xsecure.cpuctrl_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.privlvl_user.priv_lvl_i.gen_hardened.clk_gated)\n");
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.secure_security_lvl.security_lvl_i.gen_hardened.clk_gated)\n");
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.pmp_mseccfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @(posedge dtm_tck_i or negedge dtm_trst_ni)\n");
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @(posedge CSoC_top.gen_dm_dmi.u_dmi.i_dmi_jtag_tap.tck_n or negedge dtm_trst_ni)\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @([changed] dtm_tck_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @(posedge dtm_tck_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 66 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[0].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 67 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[1].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 68 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[2].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 69 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[3].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 70 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[4].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 71 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[5].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 72 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[6].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 73 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[7].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 74 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[8].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 75 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[9].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 76 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[10].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 77 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[11].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 78 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[12].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 79 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[13].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 80 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[14].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 81 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[15].pmp_region.pmpncfg_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 82 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[0].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 83 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[1].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 84 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[2].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 85 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[3].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 86 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[4].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 87 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[5].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 88 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[6].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 89 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[7].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 90 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[8].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 91 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[9].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 92 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[10].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 93 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[11].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 94 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[12].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 95 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[13].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 96 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[14].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 97 is active: @(negedge CSoC_top.rst_core_n or posedge CSoC_top.u_core.cs_registers_i.csr_pmp.gen_pmp_csr[15].pmp_region.pmp_addr_csr_i.gen_hardened.clk_gated)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCSoC_top___024root___ctor_var_reset(VCSoC_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCSoC_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_sys_i = VL_RAND_RESET_I(1);
    vlSelf->rst_sys_ni = VL_RAND_RESET_I(1);
    vlSelf->gpio_i = VL_RAND_RESET_I(8);
    vlSelf->gpio_o = VL_RAND_RESET_I(16);
    vlSelf->uart_rx_i = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_o = VL_RAND_RESET_I(1);
    vlSelf->spi_rx_i = VL_RAND_RESET_I(1);
    vlSelf->spi_tx_o = VL_RAND_RESET_I(1);
    vlSelf->spi_sck_o = VL_RAND_RESET_I(1);
    vlSelf->dtm_tck_i = VL_RAND_RESET_I(1);
    vlSelf->dtm_tms_i = VL_RAND_RESET_I(1);
    vlSelf->dtm_trst_ni = VL_RAND_RESET_I(1);
    vlSelf->dtm_td_i = VL_RAND_RESET_I(1);
    vlSelf->dtm_td_o = VL_RAND_RESET_I(1);
    vlSelf->dtm_tdo_oe_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__host_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__device_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->CSoC_top__DOT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CSoC_top__DOT__uart_irq = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__core_irq = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__core_instr_gnt = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__core_instr_rvalid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__mem_instr_rdata = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__mem_instr_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__dbg_instr_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__core_instr_sel_dbg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__rst_core_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__dm_device_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__dm_device_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__dm_device_addr = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__core_fencei_flush_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT____Vcellout__u_ram__a_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT____Vcellout__u_ram__a_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT____Vcellout__u_gpio__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT____Vcellout__u_spi__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT____Vcellout__u_aes__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT____Vcellout__u_simulator_ctrl__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT____Vcellout__u_secure_ctrl__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_bus__DOT__host_sel_resp = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hb544bc1b__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_hc0c82a6b__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h77181c53__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h8ed5d0a8__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_bus__DOT____Vlvbound_h3b7b0552__0 = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ptr_in_if = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__branch_target_ex = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__branch_decision_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_busy = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_interruptible = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(352, vlSelf->CSoC_top__DOT__u_core__DOT__id_ex_pipe);
    VL_RAND_RESET_W(221, vlSelf->CSoC_top__DOT__u_core__DOT__ex_wb_pipe);
    VL_RAND_RESET_W(168, vlSelf->CSoC_top__DOT__u_core__DOT__if_id_pipe);
    vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_byp = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(196, vlSelf->CSoC_top__DOT__u_core__DOT__ctrl_fsm);
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata_ex = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__last_op_if = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__last_op_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__last_op_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_if = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__abort_op_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__first_op_id = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_raddr_id[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_rdata_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_waddr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__rf_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__mtvec_addr = VL_RAND_RESET_I(25);
    vlSelf->CSoC_top__DOT__u_core__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_counter_read = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_wr_in_wb_flush = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl_if_ctrl = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__priv_lvl = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_hz = VL_RAND_RESET_I(28);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_split_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_err_wb = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_ready_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__lsu_valid_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__wpt_match_wb = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__mpu_status_wb = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_mtvec_init_if = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__dcsr = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__trigger_match_ex = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__alu_en_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__alu_jmp_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_en_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_mret_insn_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfi_insn_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__sys_wfe_insn_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__last_sec_op_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__irq_req_ctrl = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__irq_wu_ctrl = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2720, vlSelf->CSoC_top__DOT__u_core__DOT__csr_pmp);
    VL_RAND_RESET_W(129, vlSelf->CSoC_top__DOT__u_core__DOT__xsecure_ctrl);
    vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_if = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__lfsr_shift_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o = VL_RAND_RESET_I(5);
    vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr = VL_RAND_RESET_Q(42);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_Q(42);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_compressed = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_hint = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp = VL_RAND_RESET_Q(42);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__bus_resp = VL_RAND_RESET_Q(40);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__dummy_insert = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_last = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr = VL_RAND_RESET_Q(42);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__seq_pushpop = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__id_ready_no_dummy = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o = VL_RAND_RESET_Q(52);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT____VdfgTmp_h3d6eff21__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(126, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n = VL_RAND_RESET_Q(42);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rchk_err_q0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_0_i__resp_i = VL_RAND_RESET_Q(40);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vcellinp__rchk_1_i__resp_i = VL_RAND_RESET_Q(40);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h38308049__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h199e55be__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h0ed3cca4__0 = VL_RAND_RESET_Q(42);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h979bf74b__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h055474d3__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__core_trans_debug_region = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk = VL_RAND_RESET_I(13);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__gntpar_err = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rvalidpar_err_resp = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = VL_RAND_RESET_Q(52);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h3675cb66__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hef8eb534__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hcbe081e8__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb3e049f6__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h762ac385__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgTmp_h732e1d9f__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode = VL_RAND_RESET_Q(45);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h7f7d95b2__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h0996abde__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_he045e39f__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_haa2f2ddc__0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_q = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__cnt_next = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__alu_bch = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__mul_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__csr_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__multi_op_id_stall = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__secure_ctrl_flow__DOT__multi_op_cnt = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40s_pc_target_i__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = VL_RAND_RESET_Q(49);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = VL_RAND_RESET_Q(49);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = VL_RAND_RESET_Q(49);
    vlSelf->CSoC_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux = VL_RAND_RESET_Q(49);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_cmp_result = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result = VL_RAND_RESET_I(6);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes);
    VL_RAND_RESET_W(192, vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q = VL_RAND_RESET_I(6);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d = VL_RAND_RESET_I(6);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah = VL_RAND_RESET_I(17);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh = VL_RAND_RESET_I(17);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc = VL_RAND_RESET_Q(33);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = VL_RAND_RESET_Q(33);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res = VL_RAND_RESET_Q(33);
    vlSelf->CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(71, vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(89, vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_resp_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(89, vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_resp = VL_RAND_RESET_Q(41);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_sext_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_we_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_ext = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(89, vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgTmp_h3c034895__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__core_trans_debug_region = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q = VL_RAND_RESET_I(6);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next = VL_RAND_RESET_I(6);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(89, vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__gntpar_err = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rvalidpar_err_resp = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__fifo_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__gntpar_err_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__secure__DOT__integrity_fifo_i__DOT____VdfgTmp_hc50dde59__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgTmp_hfbe59110__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_rdata = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_rdata = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_n[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_rdata[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_we = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmpncfg_warl_ignore_wr = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_we = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_mseccfg_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_rdata = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed0_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed1_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secureseed2_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VL_RAND_RESET_W(2048, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048, vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read_priv = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__gen_debug_csr__DOT__dcsr_csr_i__rd_data_o = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr0_i__lockup_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr1_i__lockup_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellout__xsecure__DOT__lfsr2_i__lockup_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____Vcellinp__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h2b1ac6f5__0 = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgExtracted_h20ed6652__0 = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h5f17af21__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7f9bfbd6__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_he47001db__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h77ce6495__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64cea0b4__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7a6b903d__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h74913440__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hf97e2934__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_ha952383e__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hcb29fb4a__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b92ddbf__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h632373b8__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h008729eb__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b93374d__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h7754d39f__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a26c866__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_hdaaeed4e__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8b91e9ba__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h8a2dfa61__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4fe6f5f5__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff9476e__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89de3bb4__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff87b8f__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h4ff556d0__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h49618b27__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89b02a07__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h89aa4ab0__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgTmp_h64725447__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT____VdfgTmp_hf5b457eb__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__8__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__9__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__10__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__12__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__13__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__14__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__15__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__11__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__20__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__21__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__22__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__23__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__24__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__25__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__26__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__27__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__28__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__29__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__30__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__31__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__16__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__17__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__18__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__19__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr0_i__DOT__lfsr_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr1_i__DOT__lfsr_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__lfsr2_i__DOT__lfsr_n = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv1__DOT__sffs_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT____Vcellinp__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__d_i = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_integrity_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_in_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb = VL_RAND_RESET_I(11);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = VL_RAND_RESET_I(11);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hadecf1ec__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h72df47b6__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hcf15821d__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e23c627__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3e1fb522__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9cc9d2cc__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hb2988707__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_he3dfd21d__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hf07770e7__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd1a451ee__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h655d388e__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__sys_mret_unqual_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__jmpr_unqual_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_id = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_ex = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__dummy_hint_wb = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h3ecfe561__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h2fa28643__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hbd94c080__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hf56e56e2__0 = 0;
    vlSelf->CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h417d913a__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__rf_wdata[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem_gated[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__genblk2__DOT__register_file_ecc__DOT__ecc[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_ram__DOT__a_wmask = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 524288; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__a_wmask = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_ram__DOT__u_ram__DOT__unnamedblk3__DOT__show_mem_paths = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gp_i_q = VL_RAND_RESET_I(24);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gp_o_d = VL_RAND_RESET_I(16);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gp_i_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT____VdfgTmp_h41b654d0__0 = 0;
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__DOT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__device_rdata_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_uart__DOT__device_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_uart__DOT__device_rvalid_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__device_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_q = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_baud_counter_d = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_start = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__rx_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_baud_counter_q = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_baud_counter_d = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_next_byte = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_spi__DOT__read_status_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__next_tx_byte_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__next_tx_byte_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1016, vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT____Vlvbound_hd02abf1b__0 = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__count = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__count_at_limit = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_aes__DOT__aes_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__captured_read_data = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__init_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__init_new = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__next_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__next_new = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__encdec_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__keylen_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__config_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__block_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__block_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__key_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__key_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__result_reg);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__tmp_read_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_key);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core_block);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__aes_core_ctrl_reg = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__aes_core_ctrl_new = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__aes_core_ctrl_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__result_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__result_valid_new = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__result_valid_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__ready_new = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__ready_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__init_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__round_key);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__new_sboxw = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__sword_ctr_reg = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__sword_ctr_new = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__sword_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_ctr_reg = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_ctr_new = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__round_ctr_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_new);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w0_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w1_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w2_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w3_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w0_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w1_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w2_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__block_w3_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__ready_new = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__ready_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__enc_ctrl_reg = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__enc_ctrl_new = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__enc_ctrl_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__update_type = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__muxed_sboxw = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__sword_ctr_reg = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__sword_ctr_new = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__sword_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_ctr_reg = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_ctr_new = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__round_ctr_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_new);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_reg = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w0_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w1_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w2_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__block_w3_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__ready_new = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__ready_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__dec_ctrl_reg = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__dec_ctrl_new = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__dec_ctrl_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__new_sboxw = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__update_type = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_sbox_inst__DOT__inv_sbox[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_new);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key0_reg);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key0_new);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key0_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_reg);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_new);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__prev_key1_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_ctr_reg = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_ctr_new = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_ctrl_reg = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_ctrl_new = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__key_mem_ctrl_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__ready_new = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__ready_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__rcon_reg = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__rcon_new = VL_RAND_RESET_I(8);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__rcon_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT__round_key_update = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__keymem__DOT____Vlvbound_h9564987c__0);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__sbox_inst__DOT__sbox[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmph_we = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_q = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtime_d = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_q = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_timer__DOT__mtimecmp_d = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__u_timer__DOT__interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_timer__DOT__interrupt_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_timer__DOT__error_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_timer__DOT__error_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_timer__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_timer__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__u_timer__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__u_simulator_ctrl__DOT__sim_finish = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__u_simulator_ctrl__DOT__log_fd = 0;
    vlSelf->CSoC_top__DOT__u_secure_ctrl__DOT__security_level = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__error_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_clear = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_select = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dtmcs_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_select = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dmi_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_d = VL_RAND_RESET_Q(41);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__dr_q = VL_RAND_RESET_Q(41);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_d = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__address_q = VL_RAND_RESET_I(7);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__data_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tap_state_q = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tap_state_d = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__update_dr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_dr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__capture_dr = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = VL_RAND_RESET_I(5);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = VL_RAND_RESET_I(5);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = VL_RAND_RESET_I(5);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = VL_RAND_RESET_I(5);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__shift_ir = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__idcode_select = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_select = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__bypass_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tck_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__core_clear_pending = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__core_clear_pending_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__core_dmi_rst_nq = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d = VL_RAND_RESET_Q(41);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q = VL_RAND_RESET_Q(41);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d = VL_RAND_RESET_Q(41);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q = VL_RAND_RESET_Q(41);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d = VL_RAND_RESET_Q(34);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q = VL_RAND_RESET_Q(34);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d = VL_RAND_RESET_Q(34);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q = VL_RAND_RESET_Q(34);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__slave_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__haltreq = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__resumereq = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmderror_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmderror = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__cmdbusy = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__data_mem_csrs = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror_valid = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__sberror = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3 = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = VL_RAND_RESET_I(32);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d);
    VL_RAND_RESET_W(256, vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h7f10666d__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h2f595387__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(68, vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n);
    VL_RAND_RESET_W(68, vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT____Vlvbound_haae24920__0 = VL_RAND_RESET_Q(34);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT____VdfgTmp_h2d100b33__0 = 0;
    VL_RAND_RESET_W(512, vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux = VL_RAND_RESET_Q(64);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hc9353d21__0 = VL_RAND_RESET_I(1);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d = VL_RAND_RESET_I(5);
    vlSelf->CSoC_top__DOT__gen_dm_dmi__DOT__dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q = VL_RAND_RESET_I(5);
    vlSelf->__VdfgTmp_hdc70427a__0 = 0;
    vlSelf->__VdfgTmp_h7d22ad46__0 = 0;
    vlSelf->__VdfgTmp_h1a660b63__0 = 0;
    vlSelf->__VdfgTmp_hc0917257__0 = 0;
    vlSelf->__VdfgTmp_hbd0ad740__0 = 0;
    vlSelf->__VdfgTmp_he3376dba__0 = 0;
    vlSelf->__VdfgTmp_hd874cca6__0 = 0;
    vlSelf->__VdfgTmp_h026594b3__0 = 0;
    vlSelf->__VdfgTmp_h071f4112__0 = 0;
    vlSelf->__VdfgTmp_h9293e1c0__0 = 0;
    vlSelf->__Vfunc_get_stack_adj_base__0__Vfuncout = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_get_stack_adj_base__0__rlist = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_pushpop_reg_length__1__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_pushpop_reg_length__1__rlist4 = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_sn_to_regnum__2__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__2__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__3__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__3__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__4__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__5__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__6__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__7__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__8__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__9__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__10__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__10__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__11__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__11__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_dcsr_ebreaku_resolve__17__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_dcsr_ebreaku_resolve__17__next_value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_dcsr_prv_resolve__18__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_dcsr_prv_resolve__18__current_value = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_dcsr_prv_resolve__18__next_value = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mstatus_tw_resolve__22__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mstatus_tw_resolve__22__next_value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mstatus_mprv_resolve__23__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mstatus_mprv_resolve__23__next_value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mstatus_mpp_resolve__24__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mstatus_mpp_resolve__24__current_value = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mstatus_mpp_resolve__24__next_value = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__current_value = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mtvec_mode_clint_resolve__26__next_value = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mcontrol2_6_u_resolve__33__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mcontrol2_6_u_resolve__33__next_value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__35__next_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mcontrol2_6_u_resolve__37__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mcontrol2_6_u_resolve__37__next_value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_etrigger_u_resolve__38__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_etrigger_u_resolve__38__next_value = VL_RAND_RESET_I(1);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__42__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__42__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__43__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__43__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__44__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__44__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__45__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__45__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__46__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__46__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__47__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__47__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__48__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__48__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__49__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__49__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__50__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__50__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__51__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__51__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__52__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__52__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__53__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__53__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__55__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__55__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__56__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__56__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__57__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__57__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__58__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__58__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__59__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__59__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__60__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__60__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__61__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__61__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__62__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__62__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__63__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__63__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__64__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__64__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__65__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__65__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__66__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__66__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__68__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__68__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__69__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__69__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__70__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__70__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__71__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__71__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__72__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__72__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__73__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__73__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__74__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__74__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__75__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__75__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__76__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__76__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__77__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__77__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__78__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__78__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__79__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__79__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__81__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__81__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__82__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__82__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__83__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__83__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__84__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__84__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__85__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__85__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__86__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__86__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__87__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__87__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__88__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__88__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__89__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__89__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__90__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm3__90__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__91__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__91__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__92__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__enc_block__DOT__gm2__92__op = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__data);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__96__rkey);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__data);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__97__rkey);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__data);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w0 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w2 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__w3 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws0 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws2 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixcolumns__98__ws3 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__w = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__b3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__99__mb3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__100__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__101__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__101__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__102__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__102__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__103__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__103__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__104__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__104__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__105__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__105__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__106__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__106__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__107__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__107__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__108__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__108__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__109__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__109__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__110__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__111__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__111__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__112__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__112__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__113__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__113__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__114__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__114__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__115__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__115__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__116__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__116__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__117__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__118__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__118__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__119__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__119__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__120__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__120__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__121__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__121__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__122__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__122__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__123__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__123__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__124__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__124__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__125__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__125__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__126__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__126__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__127__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__127__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__128__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__128__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__129__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__129__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__130__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__130__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__131__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__131__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__132__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__132__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__133__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__133__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__134__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__134__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__135__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__135__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__136__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__136__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__137__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__137__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__138__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__139__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__139__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__140__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__140__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__141__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__141__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__142__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__142__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__143__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__143__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__144__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__144__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__145__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__145__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__146__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__146__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__147__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__147__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__148__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__149__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__149__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__150__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__150__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__151__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__151__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__152__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__152__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__153__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__153__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__154__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__154__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__155__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__156__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__156__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__157__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__157__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__158__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__158__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__159__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__159__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__160__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__160__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__161__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__161__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__162__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__162__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__163__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__163__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__164__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__165__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__165__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__166__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__166__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__167__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__167__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__168__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__168__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__169__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__169__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__170__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__170__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__171__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__171__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__172__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__172__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__173__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__173__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__174__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__174__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__175__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__175__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__176__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__176__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__177__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__177__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__178__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__178__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__179__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__180__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__180__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__181__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__181__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__182__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__182__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__183__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__183__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__184__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__184__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__185__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__185__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__186__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__186__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__187__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__187__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__188__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__188__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__189__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__190__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__190__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__191__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__191__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__192__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__192__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__193__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__193__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__194__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__194__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__195__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__195__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__196__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__197__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__197__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__198__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__198__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__199__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__199__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__200__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__200__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__201__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__201__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__202__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__202__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__203__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__204__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__204__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__205__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__205__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__206__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__206__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__207__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__207__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__208__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__208__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__209__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__209__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__210__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__210__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__211__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__211__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__212__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__212__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__213__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__213__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__214__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__214__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__215__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__215__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__216__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__216__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__217__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__217__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__218__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__219__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__219__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__220__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__220__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__221__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__221__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__222__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__222__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__223__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__223__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__224__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__224__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__225__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__225__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__226__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__226__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__227__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__227__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__w = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__b3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__228__mb3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__229__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__230__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__230__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__231__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__231__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__232__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__232__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__233__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__233__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__234__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__234__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__235__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__235__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__236__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__236__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__237__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__237__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__238__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__238__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__239__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__240__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__240__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__241__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__241__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__242__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__242__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__243__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__243__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__244__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__244__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__245__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__245__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__246__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__247__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__247__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__248__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__248__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__249__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__249__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__250__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__250__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__251__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__251__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__252__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__252__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__253__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__253__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__254__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__254__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__255__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__255__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__256__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__256__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__257__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__257__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__258__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__258__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__259__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__259__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__260__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__260__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__261__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__261__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__262__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__262__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__263__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__263__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__264__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__264__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__265__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__265__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__266__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__266__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__267__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__268__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__268__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__269__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__269__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__270__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__270__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__271__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__271__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__272__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__272__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__273__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__273__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__274__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__274__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__275__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__275__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__276__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__276__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__277__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__278__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__278__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__279__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__279__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__280__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__280__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__281__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__281__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__282__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__282__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__283__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__283__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__284__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__285__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__285__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__286__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__286__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__287__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__287__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__288__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__288__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__289__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__289__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__290__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__290__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__291__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__291__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__292__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__292__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__293__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__294__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__294__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__295__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__295__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__296__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__296__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__297__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__297__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__298__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__298__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__299__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__299__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__300__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__300__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__301__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__301__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__302__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__302__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__303__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__303__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__304__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__304__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__305__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__305__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__306__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__306__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__307__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__307__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__308__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__309__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__309__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__310__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__310__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__311__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__311__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__312__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__312__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__313__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__313__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__314__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__314__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__315__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__315__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__316__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__316__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__317__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__317__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__318__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__319__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__319__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__320__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__320__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__321__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__321__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__322__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__322__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__323__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__323__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__324__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__324__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__325__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__326__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__326__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__327__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__327__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__328__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__328__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__329__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__329__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__330__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__330__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__331__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__331__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__332__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__333__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__333__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__334__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__334__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__335__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__335__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__336__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__336__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__337__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__337__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__338__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__338__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__339__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__339__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__340__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__340__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__341__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__341__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__342__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__342__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__343__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__343__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__344__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__344__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__345__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__345__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__346__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__346__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__347__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__348__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__348__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__349__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__349__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__350__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__350__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__351__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__351__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__352__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__352__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__353__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__353__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__354__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__354__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__355__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__355__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__356__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__356__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__w = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__b3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__357__mb3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__358__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__359__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__359__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__360__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__360__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__361__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__361__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__362__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__362__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__363__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__363__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__364__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__364__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__365__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__365__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__366__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__366__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__367__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__367__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__368__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__369__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__369__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__370__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__370__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__371__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__371__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__372__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__372__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__373__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__373__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__374__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__374__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__375__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__376__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__376__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__377__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__377__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__378__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__378__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__379__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__379__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__380__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__380__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__381__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__381__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__382__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__382__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__383__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__383__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__384__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__384__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__385__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__385__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__386__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__386__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__387__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__387__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__388__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__388__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__389__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__389__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__390__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__390__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__391__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__391__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__392__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__392__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__393__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__393__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__394__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__394__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__395__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__395__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__396__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__397__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__397__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__398__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__398__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__399__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__399__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__400__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__400__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__401__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__401__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__402__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__402__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__403__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__403__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__404__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__404__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__405__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__405__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__406__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__407__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__407__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__408__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__408__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__409__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__409__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__410__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__410__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__411__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__411__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__412__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__412__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__413__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__414__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__414__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__415__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__415__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__416__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__416__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__417__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__417__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__418__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__418__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__419__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__419__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__420__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__420__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__421__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__421__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__422__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__423__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__423__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__424__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__424__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__425__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__425__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__426__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__426__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__427__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__427__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__428__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__428__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__429__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__429__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__430__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__430__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__431__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__431__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__432__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__432__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__433__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__433__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__434__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__434__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__435__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__435__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__436__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__436__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__437__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__438__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__438__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__439__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__439__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__440__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__440__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__441__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__441__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__442__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__442__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__443__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__443__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__444__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__444__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__445__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__445__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__446__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__446__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__447__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__448__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__448__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__449__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__449__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__450__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__450__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__451__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__451__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__452__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__452__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__453__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__453__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__454__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__455__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__455__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__456__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__456__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__457__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__457__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__458__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__458__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__459__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__459__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__460__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__460__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__461__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__462__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__462__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__463__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__463__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__464__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__464__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__465__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__465__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__466__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__466__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__467__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__467__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__468__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__468__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__469__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__469__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__470__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__470__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__471__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__471__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__472__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__472__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__473__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__473__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__474__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__474__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__475__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__475__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__476__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__477__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__477__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__478__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__478__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__479__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__479__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__480__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__480__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__481__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__481__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__482__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__482__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__483__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__483__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__484__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__484__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__485__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__485__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__w = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__b3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb0 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb1 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb2 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_mixw__486__mb3 = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__487__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__488__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__488__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__489__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__489__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__490__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__490__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__491__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__491__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__492__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__492__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__493__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__493__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__494__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__494__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__495__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__495__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__496__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__496__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__497__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__498__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__498__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__499__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__499__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__500__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__500__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__501__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__501__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__502__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__502__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__503__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__503__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__504__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__505__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__505__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__506__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__506__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__507__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__507__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__508__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__508__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__509__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__509__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__510__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__510__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__511__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__511__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__512__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__512__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__513__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__513__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__514__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__514__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__515__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__515__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__516__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__516__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__517__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__517__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__518__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__518__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__519__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__519__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__520__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__520__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__521__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__521__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__522__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__522__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__523__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__523__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__524__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__524__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__525__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__526__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__526__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__527__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__527__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__528__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__528__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__529__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__529__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__530__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__530__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__531__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__531__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__532__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__532__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__533__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__533__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__534__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__534__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__535__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__536__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__536__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__537__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__537__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__538__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__538__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__539__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__539__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__540__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__540__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__541__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__541__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__542__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__543__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__543__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__544__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__544__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__545__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__545__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__546__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__546__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__547__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__547__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__548__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__548__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__549__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__549__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__550__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__550__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__551__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__552__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__552__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__553__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__553__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__554__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__554__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__555__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__555__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__556__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__556__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__557__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__557__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__558__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__558__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__559__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__559__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__560__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__560__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__561__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__561__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__562__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__562__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__563__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__563__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__564__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__564__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__565__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__565__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__566__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__567__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__567__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__568__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__568__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__569__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__569__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__570__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__570__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__571__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__571__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__572__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__572__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__573__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__573__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__574__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__574__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__575__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__575__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__576__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__577__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__577__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__578__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__578__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__579__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__579__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__580__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__580__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__581__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__581__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__582__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__582__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm11__583__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__584__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__584__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__585__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__585__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__586__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__586__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__587__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__587__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__588__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__588__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__589__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__589__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm13__590__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__591__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__591__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__592__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__592__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__593__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__593__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__594__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__594__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__595__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__595__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__596__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__596__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__597__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__597__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__598__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__598__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__599__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm09__599__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__600__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__600__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__601__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__601__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__602__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__602__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__603__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__603__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__604__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__604__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm14__605__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__606__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm8__606__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__607__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__607__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__608__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__608__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__609__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__609__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__610__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__610__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__611__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm4__611__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__612__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__612__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__613__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__613__op = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__614__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__gm2__614__op = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__data);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w0 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w2 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__w3 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws0 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws2 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__615__ws3 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__data);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__addroundkey__616__rkey);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__data);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w0 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w2 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__w3 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws0 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws2 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__inv_shiftrows__617__ws3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__CSoC_top__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__CSoC_top__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__CSoC_top__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if__s_req__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk__0 = VL_RAND_RESET_I(13);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode__0 = VL_RAND_RESET_Q(45);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ctrl_byp__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__dcsr__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__mpu_status_wb__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__last_op_if__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__abort_op_if__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__s_req__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw__0 = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__rchk_err_resp__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if__s_req__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__achk__1 = VL_RAND_RESET_I(13);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode__1 = VL_RAND_RESET_Q(45);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ctrl_byp__1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__dcsr__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h2afb4ddb__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hd64c43a0__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h978a7aa5__0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_in_id__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__mpu_status_wb__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__last_op_if__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__abort_op_if__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__id_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__resp_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rchk_err_resp__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if__s_req__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h3ec3521f__0__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h9d2d34df__0__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__dec_block__DOT__tmp_sboxw__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__first_op_nondummy__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_aes__DOT__u_aes_core__DOT__core__DOT__muxed_sboxw__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk_sys_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_sys_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__rst_core_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstateen0_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__xsecure__DOT__cpuctrl_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__privlvl_user__DOT__priv_lvl_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__secure_security_lvl__DOT__security_lvl_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__pmp_mseccfg_csr_i__DOT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dtm_tck_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dtm_trst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__gen_dm_dmi__DOT__u_dmi__DOT__i_dmi_jtag_tap__DOT__tck_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i____PVT__gen_hardened__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}

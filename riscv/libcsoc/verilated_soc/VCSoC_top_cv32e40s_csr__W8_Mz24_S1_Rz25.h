// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCSoC_top.h for the primary calling header

#ifndef VERILATED_VCSOC_TOP_CV32E40S_CSR__W8_MZ24_S1_RZ25_H_
#define VERILATED_VCSOC_TOP_CV32E40S_CSR__W8_MZ24_S1_RZ25_H_  // guard

#include "verilated.h"


class VCSoC_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ __PVT__gen_hardened__DOT__clk_gated;
    VL_IN8(clk,0,0);
    VL_IN8(scan_cg_en_i,0,0);
    VL_IN8(wr_data_i,7,0);
    VL_IN8(wr_en_i,0,0);
    VL_OUT8(rd_data_o,7,0);
    VL_OUT8(rd_error_o,0,0);
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__0__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__1__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__2__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__3__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__4__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__5__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__6__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __Vcellout__gen_hardened__DOT__gen_csr_hardened__BRA__7__KET____DOT__gen_unmasked_hardened__DOT__gen_rv0__DOT__sffr_rdatareg__q_o;
    CData/*0:0*/ __PVT__gen_hardened__DOT__core_clock_gate_i__DOT__clk_en;

    // INTERNAL VARIABLES
    VCSoC_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25(VCSoC_top__Syms* symsp, const char* v__name);
    ~VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25();
    VL_UNCOPYABLE(VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

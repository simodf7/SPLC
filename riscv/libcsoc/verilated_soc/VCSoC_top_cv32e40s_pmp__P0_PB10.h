// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCSoC_top.h for the primary calling header

#ifndef VERILATED_VCSOC_TOP_CV32E40S_PMP__P0_PB10_H_
#define VERILATED_VCSOC_TOP_CV32E40S_PMP__P0_PB10_H_  // guard

#include "verilated.h"


class VCSoC_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCSoC_top_cv32e40s_pmp__P0_PB10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(priv_lvl_i,1,0);
    VL_IN8(security_lvl_i,0,0);
    VL_IN8(pmp_req_debug_region_i,0,0);
    VL_IN8(pmp_req_type_i,1,0);
    VL_OUT8(pmp_req_err_o,0,0);
    CData/*0:0*/ __PVT__access_fault;
    SData/*15:0*/ __PVT__region_match_all;
    SData/*15:0*/ __PVT__region_basic_perm_check;
    SData/*15:0*/ __PVT__region_mml_perm_check;
    SData/*15:0*/ __PVT__access_fault_all;
    IData/*31:0*/ __VdfgTmp_hdfddb7f1__0;
    IData/*31:0*/ __VdfgTmp_hc5f5801f__0;
    IData/*31:0*/ __VdfgTmp_h80dc378a__0;
    IData/*31:0*/ __VdfgTmp_h20c39b22__0;
    IData/*31:0*/ __VdfgTmp_h5173a24b__0;
    IData/*31:0*/ __VdfgTmp_h5ee5889e__0;
    IData/*31:0*/ __VdfgTmp_h32cd929a__0;
    IData/*31:0*/ __VdfgTmp_h39af6969__0;
    IData/*31:0*/ __VdfgTmp_h19935004__0;
    IData/*31:0*/ __VdfgTmp_h88b1d18d__0;
    IData/*31:0*/ __VdfgTmp_h47e7bb97__0;
    IData/*31:0*/ __VdfgTmp_h46eed216__0;
    IData/*31:0*/ __VdfgTmp_hd1071dc7__0;
    IData/*31:0*/ __VdfgTmp_hc7521f3e__0;
    IData/*31:0*/ __VdfgTmp_h0ab821ce__0;
    IData/*31:0*/ __VdfgTmp_h21170832__0;
    IData/*31:0*/ __VdfgTmp_ha20284c8__0;
    IData/*31:0*/ __VdfgTmp_h9c079945__0;
    IData/*31:0*/ __VdfgTmp_h4c552959__0;
    IData/*31:0*/ __VdfgTmp_h3d093ef8__0;
    IData/*31:0*/ __VdfgTmp_h07c516e0__0;
    IData/*31:0*/ __VdfgTmp_h022b9d1b__0;
    IData/*31:0*/ __VdfgTmp_heb0ae4d2__0;
    IData/*31:0*/ __VdfgTmp_h548998df__0;
    IData/*31:0*/ __VdfgTmp_hcb6b3920__0;
    IData/*31:0*/ __VdfgTmp_h1411aa6b__0;
    IData/*31:0*/ __VdfgTmp_ha1b73c99__0;
    IData/*31:0*/ __VdfgTmp_hbbb3ff22__0;
    IData/*31:0*/ __VdfgTmp_h48688b71__0;
    IData/*31:0*/ __VdfgTmp_h29ced6b7__0;
    IData/*31:0*/ __VdfgTmp_h4df2fd54__0;
    IData/*31:0*/ __VdfgTmp_h9507a9ab__0;
    VL_INW(csr_pmp_i,2719,0,85);
    VL_IN64(pmp_req_addr_i,33,0);

    // INTERNAL VARIABLES
    VCSoC_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCSoC_top_cv32e40s_pmp__P0_PB10(VCSoC_top__Syms* symsp, const char* v__name);
    ~VCSoC_top_cv32e40s_pmp__P0_PB10();
    VL_UNCOPYABLE(VCSoC_top_cv32e40s_pmp__P0_PB10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

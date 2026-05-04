// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCSoC_top.h for the primary calling header

#ifndef VERILATED_VCSOC_TOP_CV32E40S_IF_C_OBI__TZ12_TBZ13_H_
#define VERILATED_VCSOC_TOP_CV32E40S_IF_C_OBI__TZ12_TBZ13_H_  // guard

#include "verilated.h"


class VCSoC_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ s_req;
    CData/*1:0*/ s_gnt;
    CData/*1:0*/ s_rvalid;

    // INTERNAL VARIABLES
    VCSoC_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13(VCSoC_top__Syms* symsp, const char* v__name);
    ~VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13();
    VL_UNCOPYABLE(VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13* obj);

#endif  // guard

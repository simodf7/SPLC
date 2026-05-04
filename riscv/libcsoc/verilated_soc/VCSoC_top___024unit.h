// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCSoC_top.h for the primary calling header

#ifndef VERILATED_VCSOC_TOP___024UNIT_H_
#define VERILATED_VCSOC_TOP___024UNIT_H_  // guard

#include "verilated.h"


class VCSoC_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCSoC_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCSoC_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCSoC_top___024unit(VCSoC_top__Syms* symsp, const char* v__name);
    ~VCSoC_top___024unit();
    VL_UNCOPYABLE(VCSoC_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

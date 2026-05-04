// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VCSoC_top::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VCSoC_top__Dpi.h"
#include "VCSoC_top.h"

#ifndef VL_DPIDECL_simutil_get_mem_
#define VL_DPIDECL_simutil_get_mem_
int simutil_get_mem(int index, svBitVecVal* val) {
    // DPI export at rtl/prim/prim_util_memload.svh:46:16
    return VCSoC_top::simutil_get_mem(index, val);
}
#endif

#ifndef VL_DPIDECL_simutil_memload_
#define VL_DPIDECL_simutil_memload_
void simutil_memload(const char* file) {
    // DPI export at rtl/prim/prim_util_memload.svh:27:8
    return VCSoC_top::simutil_memload(file);
}
#endif

#ifndef VL_DPIDECL_simutil_set_mem_
#define VL_DPIDECL_simutil_set_mem_
int simutil_set_mem(int index, const svBitVecVal* val) {
    // DPI export at rtl/prim/prim_util_memload.svh:36:16
    return VCSoC_top::simutil_set_mem(index, val);
}
#endif


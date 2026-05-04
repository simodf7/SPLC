// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VCSoC_top.h"
#include "VCSoC_top__Syms.h"
#include "verilated_dpi.h"


void VCSoC_top::simutil_memload(const char* file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root::simutil_memload\n"); );
    // Init
    static thread_local std::string file__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simutil_memload");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCSoC_top__Vcb_simutil_memload_t __Vcb = (VCSoC_top__Vcb_simutil_memload_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    file__Vcvt = file;
    (*__Vcb)((VCSoC_top__Syms*)(__Vscopep->symsp()), file__Vcvt);
}

int VCSoC_top::simutil_set_mem(int index, const svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root::simutil_set_mem\n"); );
    // Init
    IData/*31:0*/ index__Vcvt;
    index__Vcvt = 0;
    VlWide<10>/*311:0*/ val__Vcvt;
    VL_ZERO_W(312, val__Vcvt);
    IData/*31:0*/ simutil_set_mem__Vfuncrtn__Vcvt;
    simutil_set_mem__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simutil_set_mem");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCSoC_top__Vcb_simutil_set_mem_t __Vcb = (VCSoC_top__Vcb_simutil_set_mem_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    index__Vcvt = index;
    VL_SET_W_SVBV(312,val__Vcvt,val + 0);
(*__Vcb)((VCSoC_top__Syms*)(__Vscopep->symsp()), index__Vcvt, val__Vcvt, simutil_set_mem__Vfuncrtn__Vcvt);
    int simutil_set_mem__Vfuncrtn;
    for (size_t simutil_set_mem__Vfuncrtn__Vidx = 0; simutil_set_mem__Vfuncrtn__Vidx < 1; ++simutil_set_mem__Vfuncrtn__Vidx) simutil_set_mem__Vfuncrtn = simutil_set_mem__Vfuncrtn__Vcvt;
    return simutil_set_mem__Vfuncrtn;
}

int VCSoC_top::simutil_get_mem(int index, svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCSoC_top___024root::simutil_get_mem\n"); );
    // Init
    IData/*31:0*/ index__Vcvt;
    index__Vcvt = 0;
    VlWide<10>/*311:0*/ val__Vcvt;
    VL_ZERO_W(312, val__Vcvt);
    IData/*31:0*/ simutil_get_mem__Vfuncrtn__Vcvt;
    simutil_get_mem__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simutil_get_mem");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCSoC_top__Vcb_simutil_get_mem_t __Vcb = (VCSoC_top__Vcb_simutil_get_mem_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    index__Vcvt = index;
    (*__Vcb)((VCSoC_top__Syms*)(__Vscopep->symsp()), index__Vcvt, val__Vcvt, simutil_get_mem__Vfuncrtn__Vcvt);
    for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) VL_SET_SVBV_W(312, val + 10 * val__Vidx, val__Vcvt);
    int simutil_get_mem__Vfuncrtn;
    for (size_t simutil_get_mem__Vfuncrtn__Vidx = 0; simutil_get_mem__Vfuncrtn__Vidx < 1; ++simutil_get_mem__Vfuncrtn__Vidx) simutil_get_mem__Vfuncrtn = simutil_get_mem__Vfuncrtn__Vcvt;
    return simutil_get_mem__Vfuncrtn;
}

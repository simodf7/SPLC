// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCSoC_top__pch.h"

//============================================================
// Constructors

VCSoC_top::VCSoC_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCSoC_top__Syms(contextp(), _vcname__, this)}
    , clk_sys_i{vlSymsp->TOP.clk_sys_i}
    , rst_sys_ni{vlSymsp->TOP.rst_sys_ni}
    , dtm_tck_i{vlSymsp->TOP.dtm_tck_i}
    , dtm_trst_ni{vlSymsp->TOP.dtm_trst_ni}
    , gpio_i{vlSymsp->TOP.gpio_i}
    , uart_rx_i{vlSymsp->TOP.uart_rx_i}
    , uart_tx_o{vlSymsp->TOP.uart_tx_o}
    , spi_rx_i{vlSymsp->TOP.spi_rx_i}
    , spi_tx_o{vlSymsp->TOP.spi_tx_o}
    , spi_sck_o{vlSymsp->TOP.spi_sck_o}
    , dtm_tms_i{vlSymsp->TOP.dtm_tms_i}
    , dtm_td_i{vlSymsp->TOP.dtm_td_i}
    , dtm_td_o{vlSymsp->TOP.dtm_td_o}
    , dtm_tdo_oe_o{vlSymsp->TOP.dtm_tdo_oe_o}
    , gpio_o{vlSymsp->TOP.gpio_o}
    , __PVT__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if}
    , __PVT__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if}
    , __PVT__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i}
    , __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i{vlSymsp->TOP.__PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCSoC_top::VCSoC_top(const char* _vcname__)
    : VCSoC_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCSoC_top::~VCSoC_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCSoC_top___024root___eval_debug_assertions(VCSoC_top___024root* vlSelf);
#endif  // VL_DEBUG
void VCSoC_top___024root___eval_static(VCSoC_top___024root* vlSelf);
void VCSoC_top___024root___eval_initial(VCSoC_top___024root* vlSelf);
void VCSoC_top___024root___eval_settle(VCSoC_top___024root* vlSelf);
void VCSoC_top___024root___eval(VCSoC_top___024root* vlSelf);

void VCSoC_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCSoC_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCSoC_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCSoC_top___024root___eval_static(&(vlSymsp->TOP));
        VCSoC_top___024root___eval_initial(&(vlSymsp->TOP));
        VCSoC_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCSoC_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCSoC_top::eventsPending() { return false; }

uint64_t VCSoC_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCSoC_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCSoC_top___024root___eval_final(VCSoC_top___024root* vlSelf);

VL_ATTR_COLD void VCSoC_top::final() {
    VCSoC_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCSoC_top::hierName() const { return vlSymsp->name(); }
const char* VCSoC_top::modelName() const { return "VCSoC_top"; }
unsigned VCSoC_top::threads() const { return 1; }
void VCSoC_top::prepareClone() const { contextp()->prepareClone(); }
void VCSoC_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VCSoC_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VCSoC_top::trace()' called on model that was Verilated without --trace option");
}

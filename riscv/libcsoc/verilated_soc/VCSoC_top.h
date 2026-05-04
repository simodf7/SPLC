// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCSOC_TOP_H_
#define VERILATED_VCSOC_TOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VCSoC_top__Syms;
class VCSoC_top___024root;
class VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25;
class VCSoC_top_cv32e40s_csr__pi18;
class VCSoC_top_cv32e40s_if_c_obi;
class VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13;
class VCSoC_top_cv32e40s_pmp__P0_PB10;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VCSoC_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCSoC_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_sys_i,0,0);
    VL_IN8(&rst_sys_ni,0,0);
    VL_IN8(&dtm_tck_i,0,0);
    VL_IN8(&dtm_trst_ni,0,0);
    VL_IN8(&gpio_i,7,0);
    VL_IN8(&uart_rx_i,0,0);
    VL_OUT8(&uart_tx_o,0,0);
    VL_IN8(&spi_rx_i,0,0);
    VL_OUT8(&spi_tx_o,0,0);
    VL_OUT8(&spi_sck_o,0,0);
    VL_IN8(&dtm_tms_i,0,0);
    VL_IN8(&dtm_td_i,0,0);
    VL_OUT8(&dtm_td_o,0,0);
    VL_OUT8(&dtm_tdo_oe_o,0,0);
    VL_OUT16(&gpio_o,15,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VCSoC_top_cv32e40s_if_c_obi* const __PVT__CSoC_top__DOT__u_core__DOT__m_c_obi_instr_if;
    VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13* const __PVT__CSoC_top__DOT__u_core__DOT__m_c_obi_data_if;
    VCSoC_top_cv32e40s_pmp__P0_PB10* const __PVT__CSoC_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i;
    VCSoC_top_cv32e40s_pmp__P0_PB10* const __PVT__CSoC_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pmp__DOT__pmp_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__0__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__1__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__2__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__3__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__4__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__5__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__6__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__7__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__8__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__9__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__10__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__11__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__12__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__13__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__14__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;
    VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmpncfg_csr_i;
    VCSoC_top_cv32e40s_csr__pi18* const __PVT__CSoC_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_pmp__DOT__gen_pmp_csr__BRA__15__KET____DOT__pmp_region__DOT__pmp_addr_csr_i;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCSoC_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCSoC_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCSoC_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCSoC_top();
  private:
    VL_UNCOPYABLE(VCSoC_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static int simutil_get_mem(int index, svBitVecVal* val);
    static void simutil_memload(const char* file);
    static int simutil_set_mem(int index, const svBitVecVal* val);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard

# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCSoC_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCSoC_top \
	VCSoC_top__Dpi_Export__0 \
	VCSoC_top___024root__DepSet_h2ee09559__0 \
	VCSoC_top___024root__DepSet_h2ee09559__1 \
	VCSoC_top___024root__DepSet_h2ee09559__2 \
	VCSoC_top___024root__DepSet_h2ee09559__3 \
	VCSoC_top___024root__DepSet_h8f89c8a5__0 \
	VCSoC_top___024root__DepSet_h8f89c8a5__1 \
	VCSoC_top___024root__DepSet_h8f89c8a5__2 \
	VCSoC_top___024root__DepSet_h8f89c8a5__3 \
	VCSoC_top_cv32e40s_if_c_obi__DepSet_h3b768ba4__0 \
	VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13__DepSet_hf74ebc23__0 \
	VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25__DepSet_h19bd26d0__0 \
	VCSoC_top_cv32e40s_csr__pi18__DepSet_hf3ef4388__0 \
	VCSoC_top_cv32e40s_pmp__P0_PB10__DepSet_hb0fb5163__0 \
	VCSoC_top_cv32e40s_pmp__P0_PB10__DepSet_hb0fb5163__1 \
	VCSoC_top__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCSoC_top__ConstPool_0 \
	VCSoC_top___024root__Slow \
	VCSoC_top___024root__DepSet_h2ee09559__0__Slow \
	VCSoC_top___024root__DepSet_h8f89c8a5__0__Slow \
	VCSoC_top___024unit__Slow \
	VCSoC_top___024unit__DepSet_h6f980025__0__Slow \
	VCSoC_top_cv32e40s_if_c_obi__Slow \
	VCSoC_top_cv32e40s_if_c_obi__DepSet_h3b768ba4__0__Slow \
	VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13__Slow \
	VCSoC_top_cv32e40s_if_c_obi__Tz12_TBz13__DepSet_hf74ebc23__0__Slow \
	VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25__Slow \
	VCSoC_top_cv32e40s_csr__W8_Mz24_S1_Rz25__DepSet_h64c4552e__0__Slow \
	VCSoC_top_cv32e40s_csr__pi18__Slow \
	VCSoC_top_cv32e40s_csr__pi18__DepSet_hba95fa76__0__Slow \
	VCSoC_top_cv32e40s_pmp__P0_PB10__Slow \
	VCSoC_top_cv32e40s_pmp__P0_PB10__DepSet_hfd820c9f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCSoC_top__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCSoC_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

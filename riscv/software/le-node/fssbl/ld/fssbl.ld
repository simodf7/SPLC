OUTPUT_ARCH("riscv")

/* Entry Point */
ENTRY(fssbl_entry)

/* Memories definition */
MEMORY
{
    ROM (rx)    : ORIGIN = ROM_ORIGIN, LENGTH = ROM_LEN
    PRS (rw)    : ORIGIN = PRS_ORIGIN, LENGTH = PRS_LEN
    OCM (rwx)   : ORIGIN = OCM_ORIGIN, LENGTH = OCM_LEN
}

/* Sections */
SECTIONS
{
    .isr_vector :
    {
        . = ALIGN(128);
        KEEP(*(.isr_vector))
    } > ROM

    .text :
    {
        . = ALIGN(4);
        *(.text*)
    } > ROM

    .rodata :
    {
        . = ALIGN(4);
        *(.srodata*)
        *(.rodata*)
    } > ROM
}

/* Stack symbol definition at the end of the OCM */
_stack_start = ORIGIN(OCM) + LENGTH(OCM);

/* Memories symbols definition */
_prs_start = ORIGIN(PRS);
_prs_len = LENGTH(PRS);
_ocm_start = ORIGIN(OCM);
_ocm_len = LENGTH(OCM);

/* Secure Monitor symbols definition */
_sm_bin_start = SM_BIN_START;

ASSERT(_ocm_len >= 128, "PRS memory must be at least 128 bytes long");
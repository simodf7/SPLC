OUTPUT_ARCH("riscv")

/* Entry Point */
ENTRY(sm_entry)

/* Memories definition */
MEMORY
{
    OCM (rwx) : ORIGIN = OCM_ORIGIN, LENGTH = OCM_LEN
    FLS (rwx) : ORIGIN = FLS_ORIGIN, LENGTH = FLS_LEN
}

/* Sections */
SECTIONS
{
    .sm :
    {
        KEEP(*(.sm.head));
    } > OCM AT > FLS

    _bin_start = .;

    .vectors :
    {
        . = ALIGN(128);
        _sm_start = .;
        _sm_mtvec = .;
        KEEP(*(.isr_vector))
        KEEP(*(.exception_vector))
        . = ALIGN(4);
    } > OCM AT > FLS

    .text :
    {
        . = ALIGN(4);
        *(.text*)
        . = ALIGN(4);
    } > OCM AT > FLS

    .rodata :
    {
        . = ALIGN(4);
        *(.srodata*)
        *(.rodata*)
        . = ALIGN(4);
    } > OCM AT > FLS
    
    .data :
    {
        . = ALIGN(4);
        _data_start = .;
        *(.sdata*)
        *(.data*)
        . = ALIGN(4);
        _data_end = .;
    } > OCM AT > FLS

    _bin_end = .;

    .bss :
    {
        . = ALIGN(4);
        _bss_start = .;
        *(.sbss*)
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        _bss_end = .;
        _sm_bss_end = .;
    } > OCM
}

ASSERT(DEFINED(__smhead), "Error: SM header is not defined!");
/* SM Header symbols definition */
_bin_len = _bin_end - _bin_start;

/* Misc */
_sm_mtvec_v = _sm_mtvec + 1;
SM_MAX_SE_SHM_SIZE = 1 << SM_MAX_SE_SHM_SIZE_LOG2;

/* Memories symbols definition */
_ocm_start = ORIGIN(OCM);
_ocm_len = LENGTH(OCM);

/* SM Sizes symbols definition */
_data_start_fls = LOADADDR(.data);
_data_end_fls = LOADADDR(.data) + SIZEOF(.data);
_sm_end = ALIGN(_sm_bss_end + SM_STACK_LEN, 4);
_sm_len = _sm_end - _sm_start;

/* SM Stack start symbol definition */
_stack_start = _sm_end;

/* SM Shared memory sizes symbol definition */
_shm_start = ALIGN(_sm_end + 1, 4);
/*
 * To support the overhead given by the buddy allocator, we consider 128 byte as
 * a constant overhead and 1% of the page size as a dynamic overhead
 */
_shm_end = ALIGN(_shm_start + 128 + 1*(SM_MAX_SE_SHM_SIZE + SM_MAX_SE_SHM_SIZE / 100), SM_MAX_SE_SHM_SIZE);
_shm_len = _shm_end - _shm_start;

/* SM Secure Enclaves memory sizes symbol definition */
_sem_start = ALIGN(_shm_end + 1, 4);
/*
 * To support the overhead given by the buddy allocator, we consider 128 byte as
 * a constant overhead and 1% of the page size as a dynamic overhead
*/
_sem_end = ALIGN(_sem_start + 128 + 2*(SM_MAX_SE_SHM_SIZE + SM_MAX_SE_SHM_SIZE / 100), SM_MAX_SE_SHM_SIZE);
_sem_len = _sem_end - _sem_start;

_sstorage_start = ALIGN(_data_end_fls + 1, 4);
_sstorage_end = _sstorage_start + SM_SECURE_STORAGE_SIZE;
_sstorage_len = SM_SECURE_STORAGE_SIZE;

_utdm_entry = UNTRUSTED_ENTRY;

ASSERT(_utdm_entry > _sstorage_end, "Untrusted code entry address before end of SM secure storage");
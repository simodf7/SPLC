OUTPUT_ARCH("riscv")

/* Memories definition */
MEMORY
{
    SE_MEM (rwx) : ORIGIN = 0, LENGTH = 0xFFFFFFFF
}

/* Sections */
SECTIONS
{
    .se :
    {
        KEEP(*(.se.head));
        _offset_table_start = .;
        *(SORT_BY_INIT_PRIORITY(.se.services.*))
        _offset_table_end = .;
    } > SE_MEM

    _bin_start = .;

    .text :
    {
        . = ALIGN(4);
        *(.text*)
        . = ALIGN(4);
    } > SE_MEM

    .rodata :
    {
        . = ALIGN(4);
        *(.srodata*)
        *(.rodata*)
        . = ALIGN(4);
    } > SE_MEM
    
    .data :
    {
        . = ALIGN(4);
        _data_start = .;
        *(.sdata*)
        *(.data*)
        . = ALIGN(4);
        _data_end = .;
    } > SE_MEM

    .got :
    {
        *(.got*)
    }

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
    } > SE_MEM
}

ASSERT(DEFINED(__sehead), "Error: SE header is not defined!");

_bin_len = _bin_end - _bin_start;
_bss_len = _bss_end - _bin_end;
_offset_table_len = (_offset_table_end - _offset_table_start) / 4;
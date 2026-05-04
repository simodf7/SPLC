/* struct seret execute_func_u_mode(void *p, se_service *s, uintptr_t sp) */
.global execute_func_u_mode
execute_func_u_mode:
    /*
     * Save callee saved registers.
     * Caller ones are saved by SM 
     * before invoking this function.
     */
    addi sp,sp,-56
    sw ra, 52(sp)
    sw s0, 48(sp)
    sw fp, 44(sp)
    sw s1, 40(sp)
    sw s2, 36(sp)
    sw s3, 32(sp)
    sw s4, 28(sp)
    sw s5, 24(sp)
    sw s6, 20(sp)
    sw s7, 16(sp)
    sw s8, 12(sp)
    sw s9, 8(sp)
    sw s10, 4(sp)
    sw s11, 0(sp)
    /* Disable interrupts before setting mstatus/mepc */
    csrci mstatus, 8
    /* Save SM stack pointer */
    csrw mscratch, sp
    /* Load mepc with [s] (a1) */
    csrw mepc, a1
    /* Set MPP = U */
    li t1, 0x001800
    csrc mstatus, t1
    /* Set user stack pointer */
    mv sp, a2
    /* Clear all regs */
    mv x1, x0
    /* sp is preserved */
    mv x3, x0
    mv x4, x0
    mv x5, x0
    mv x6, x0
    mv x7, x0
    mv x9, x0
    mv x8, x0
    /* a0 is preserved because it contains [p] */
    mv x11, x0
    mv x12, x0
    mv x13, x0
    mv x14, x0
    mv x15, x0
    mv x16, x0
    mv x17, x0
    mv x18, x0
    mv x19, x0
    mv x20, x0
    mv x21, x0
    mv x22, x0
    mv x23, x0
    mv x24, x0
    mv x25, x0
    mv x26, x0
    mv x27, x0
    mv x28, x0
    mv x29, x0
    mv x30, x0
    mv x31, x0
    /* Jump to [s] in U-mode */
    mret
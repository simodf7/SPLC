.section .rodata

no_isr_message:
  .string "[SM] An interrupt line for which no ISR is available was asserted. This is a fatal error.\n"
nmi_message:
  .string "[SM] NMI handler was triggered. This is a fatal error.\n"
unhandled_exception_message:
  .string "[SM] An unhandled exception was triggered with mepc = 0x%X and mcause = %u. This is a fatal error.\n"

.section .text

/* The entry point of the Secure Monitor */
.global sm_entry
sm_entry:
  /* Zero mscratch as requested by exception handler sp swap mechanism */
  csrw mscratch, x0
  la x5, _sm_mtvec
  csrw mtvec, x5
  la sp, _stack_start
  la x5, _data_start_fls
  la x6, _data_start
  la x7, _data_end
  bge x6, x7, datale
datal:
  lw x28, 0(x5)
  sw x28, 0(x6)
  addi x6, x6, 4
  ble x6, x7, datal
datale:
  la x5, _bss_start
  la x6, _bss_end
  bge x5, x6, bssle
bssl:
  sw x0, 0(x5)
  addi x5, x5, 4
  ble x5, x6, bssl
bssle:
  // a0, a1, a2 and a3 contains root_key ptr, key length,
  // SM trace and mud url by virtue of the fssbl
  jal ra, core_main
  j halt

no_isr_handler:
  la a0, no_isr_message
  j fatal

nmi_handler:
  la a0, nmi_message
  j fatal

instr_addr_mslgnd_handler:
illegal_instr_handler:
breakpoint_handler:
load_addr_mslgnd_handler:
store_amo_addr_mslgnd_handler:
ecall_s_mode_handler:
ecall_m_mode_handler:
instr_page_fault_handler:
load_page_fault_handler:
store_amo_page_fault_handler:
software_check_handler:
hardware_error_handler:
no_trap_handler:
  la a0, unhandled_exception_message
  csrr a1, mepc
  csrr a2, mcause
  jal ra, printf
  j halt

instr_access_fault_handler:
load_access_fault_handler:
store_amo_access_fault_handler:
  jal ra, security_lock
  j halt

ecall_u_mode_handler:
  bnez a7, all_others
  la t0, ecall_u_vector
  // Following the SMAPI, a7 contains the request type
  slli a7, a7, 2
  add t0, t0, a7
  lw t0, 0(t0)
  // Return from SE call is done without register saving.
  jalr x0, 0(t0)
all_others:
  addi sp, sp, -72
  // Save the interrupt stack and enable interrupt again
  // so pheriperal can interrupt while SM is executing
  csrr t0, mstatus
  csrr t1, mcause
  sw t0, 0(sp)      // mstatus
  sw t1, 4(sp)      // mcause
  csrr t0, mepc
  csrr t1, mscratch // mscratch contains the current SE stack pointer
  sw t0, 8(sp)      // mepc
  sw t1, 12(sp)     // mscratch
  // continue saving other regs
  sw t2, 16(sp)
  sw t3, 20(sp)
  sw t4, 24(sp)
  sw t5, 28(sp)
  sw t6, 32(sp)
  sw a0, 36(sp) // a0 and a1 saved because of the call to curr_se_update_current_sp.
  sw a1, 40(sp) // Not restored after the SMAPI call
  sw a2, 44(sp)
  sw a3, 48(sp)
  sw a4, 52(sp)
  sw a5, 56(sp)
  sw a6, 60(sp)
  sw a7, 64(sp)
  sw ra, 68(sp)

  mv a0, t1
  jal ra, curr_se_update_current_sp
  lw a0, 36(sp) // All the register involed in the SMAPI
  lw a1, 40(sp) // call are restored before
  lw a2, 44(sp) // calling the actual handler
  lw a3, 48(sp)
  lw a4, 52(sp)
  lw a5, 56(sp)
  lw a6, 60(sp)
  lw a7, 64(sp)
  
  la t0, ecall_u_vector
  // Following the SMAPI, a7 contains the request type
  slli a7, a7, 2
  add t0, t0, a7
  lw t0, 0(t0)

  // Zero mscratch before enabling interrupt because we are now in M-mode
  csrw mscratch, x0
  // Re-enable interrupts
  csrsi mstatus, 8

  jalr ra, 0(t0)

  // Disable again interrupts.
  // This must be done since once mepc is restored,
  // (and also mstatus/mcause) we can not accept being
  // interrupted because we would lose the stored value(s)
  csrci mstatus, 8

  // Restore interrupt stack
  lw t0, 0(sp)    // mstatus
  lw t1, 4(sp)    // mcause
  lw t2, 8(sp)    // mepc
  lw t3, 12(sp)   // mscratch
  addi t2, t2, 4  // Add 4 mepc to return from ecall
  csrw mstatus, t0
  csrw mcause, t1
  csrw mepc, t2
  csrw mscratch, t3
  // continue restoring other regs
  lw t2, 16(sp)
  lw t3, 20(sp)
  lw t4, 24(sp)
  lw t5, 28(sp)
  lw t6, 32(sp)
  // a0 and a1 not restored because used as return values by SM call
  lw a2, 44(sp)
  lw a3, 48(sp)
  lw a4, 52(sp)
  lw a5, 56(sp)
  lw a6, 60(sp)
  lw a7, 64(sp)
  lw ra, 68(sp)
  lw t0, 72(sp)
  lw t1, 76(sp)
  addi sp, sp, 80

  // Since this is from U-mode we are sure we need to swap the sp <-> mscratch
  csrrw sp, mscratch, sp
  mret // mret will enable again interrupts if they were enabled before (MIE <- MPIE)

exception_handler:
  /*
   * Exceptions/Interrupts taken in U mode are
   * charactezied by the fact that mscratch 
   * contains the SM stack pointer. If taken in M-mode,
   * mscratch contains zero.
   */
  csrrw sp, mscratch, sp
  bnez sp, from_u_mode
  // If from M-mode, mscratch is set again to zero
  csrrw sp, mscratch, sp
from_u_mode:

  // Save t0,t1 on M-mode stack for bare minimum computations
  addi sp, sp, -8
  sw t0, 0(sp)
  sw t1, 4(sp)
  
  csrr t0, mcause
  bltz t0, interrupt_handler

  /* Is exception */
  slli t0, t0, 2
  la t1, exception_vector_start
  add t1, t0, t1
  
  /* 
   * Return from each exception is done by
   * the specific exception handler.
   */
  jalr x0, 0(t1)

interrupt_handler:

  addi sp, sp, -56
  sw t2, 0(sp)
  sw t3, 4(sp)
  sw t4, 8(sp)
  sw t5, 12(sp)
  sw t6, 16(sp)
  sw a0, 20(sp)
  sw a1, 24(sp)
  sw a2, 28(sp)
  sw a3, 32(sp)
  sw a4, 36(sp)
  sw a5, 40(sp)
  sw a6, 44(sp)
  sw a7, 48(sp)
  sw ra, 52(sp)

  slli t0, t0, 2
  la t1, isr_vector_start
  add t1, t0, t1

  jalr ra, 0(t1)

  /* Restore registers and SP and return */
  lw t2, 0(sp)
  lw t3, 4(sp)
  lw t4, 8(sp)
  lw t5, 12(sp)
  lw t6, 16(sp)
  lw a0, 20(sp)
  lw a1, 24(sp)
  lw a2, 28(sp)
  lw a3, 32(sp)
  lw a4, 36(sp)
  lw a5, 40(sp)
  lw a6, 44(sp)
  lw a7, 48(sp)
  lw ra, 52(sp)
  lw t0, 56(sp)
  lw t1, 60(sp)
  addi sp, sp, 64

  csrrw sp, mscratch, sp
  bnez sp, to_u_mode
  csrrw sp, mscratch, sp
to_u_mode:
  mret

/*
 * The vector table of the Secure Monitor.
 * Clint mode is assumed for interrupt architecture.
 */
.section .isr_vector, "ax"
.option norvc
isr_vector_start:
  jal x0, exception_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, timer_irq_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, nmi_handler
  jal x0, uart_irq_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  jal x0, no_isr_handler
  /* Entry point */
  jal x0, sm_entry

/*
 * The exception vector of the Secure Monitor.
 * Interrupts are assumed to be non-vectored.
 */
.section .exception_vector, "ax"
.option norvc
exception_vector_start:
  jal x0, instr_addr_mslgnd_handler
  jal x0, instr_access_fault_handler
  jal x0, illegal_instr_handler
  jal x0, breakpoint_handler
  jal x0, load_addr_mslgnd_handler
  jal x0, load_access_fault_handler
  jal x0, store_amo_addr_mslgnd_handler
  jal x0, store_amo_access_fault_handler
  jal x0, ecall_u_mode_handler
  jal x0, ecall_s_mode_handler
  jal x0, no_trap_handler
  jal x0, ecall_m_mode_handler
  jal x0, instr_page_fault_handler
  jal x0, load_page_fault_handler
  jal x0, no_trap_handler
  jal x0, store_amo_page_fault_handler
  jal x0, no_trap_handler
  jal x0, no_trap_handler
  jal x0, software_check_handler
  jal x0, hardware_error_handler
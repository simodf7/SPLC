// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <stdint.h>

#include "system_regs.h"
#include "uart.h"
#include "gpio.h"
#include "spi.h"
#include "types.h"

#define UART_IRQ_NUM 16
#define UART_IRQ (1 << UART_IRQ_NUM)
#define DEFAULT_UART UART_FROM_BASE_ADDR(UART0_BASE)

#define GPIO_OUT GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_OUT_REG)
#define GPIO_IN GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_IN_REG)
#define GPIO_IN_DBNC GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_IN_DBNC_REG)
#define GPIO_OUT_SHIFT GPIO_FROM_BASE_ADDR(GPIO_BASE + GPIO_OUT_SHIFT_REG)

#define TIMER_IRQ_NUM 7
#define TIMER_IRQ (1 << TIMER_IRQ_NUM)

#define DEFAULT_SPI SPI_FROM_BASE_ADDR(SPI0_BASE)

/**
 * Initialize the sytem vector table and enable interrupts
*/
void system_init(void);

/**
 * Halts the execution
 */
void halt(void);

/**
 * Reports Fatal error and halts the execution
 */
void fatal(const char *message);

/**
 * Writes character to STDOUT (simulation only). Signature matches c stdlib function
 * of the same name.
 *
 * @param c Character to output
 * @returns Character output (never fails so no EOF ever returned)
 */
int putchar(int c);

int printf(const char *fmt, ...);

/**
 * Writes string to STDOUT (simulation only). Signature matches c stdlib function of
 * the same name.
 *
 * @param str String to output
 * @returns 0 always (never fails so no error)
 */
int puts(const char *str);

/**
 * Writes ASCII hex representation of number to STDOUT (simulation only).
 *
 * @param h Number to output in hex
 */
void puthex(uint32_t h);
void putbyte(uint32_t h);
/**
 * Writes ASCII dec representation of number to STDOUT (simulation only).
 *
 * @param h Number to output in decimal
 */
void putdec(uint32_t n);

/**
 * Set per-interrupt enables (`mie` CSR)
 *
 * @param enable_mask Any set bit is set in `mie`, enabling the interrupt. Bits
 * not set in `enable_mask` aren't changed.
 */
void enable_interrupts(uint32_t enable_mask);

/**
 * Clear per-interrupt enables (`mie` CSR)
 *
 * @param enable_mask Any set bit is cleared in `mie`, disabling the interrupt.
 * Bits not set in `enable_mask` aren't changed.
 */
void disable_interrupts(uint32_t disable_mask);

/**
 * Set the global interrupt enable (the `mie` field of `mstatus`). This enables
 * or disable all interrupts at once.
 *
 * @param enable Enable interrupts if set, otherwise disabled
 */
void set_global_interrupt_enable(unsigned int enable);
unsigned int get_global_interrupt_enable(void);

static inline __attribute__((always_inline)) void enable_mcycle(void) {
    __asm__ volatile("csrci mcountinhibit, 1;");
}

static inline __attribute__((always_inline)) void disable_mcycle(void) {
    __asm__ volatile("csrsi mcountinhibit, 1;");
}

static inline __attribute__((always_inline)) void enable_minstret(void) {
    __asm__ volatile("csrci mcountinhibit, 4;");
}

static inline __attribute__((always_inline)) void disable_minstret(void) {
    __asm__ volatile("csrsi mcountinhibit, 4;");
}

static inline __attribute__((always_inline)) void reset_mcycle(void) {
    __asm__ volatile("csrw mcycle, x0");
}

static inline __attribute__((always_inline)) void reset_minstret(void) {
    __asm__ volatile("csrw minstret, x0");
}

static inline __attribute__((always_inline)) uint32_t get_mcycle(void) {
    uint32_t result;
    __asm__ volatile("csrr %0, mcycle;" : "=r"(result));
    return result;
}

static inline __attribute__((always_inline)) uint32_t get_minstret(void) {
    uint32_t result;
    __asm__ volatile("csrr %0, minstret;" : "=r"(result));
    return result;
}

static inline __attribute__((always_inline)) unsigned int get_mepc() {
  uint32_t result;
  __asm__ volatile("csrr %0, mepc;" : "=r"(result));
  return result;
}

static inline __attribute__((always_inline)) unsigned int get_mcause() {
  uint32_t result;
  __asm__ volatile("csrr %0, mcause;" : "=r"(result));
  return result;
}

static inline __attribute__((always_inline)) unsigned int get_mtval() {
  uint32_t result;
  __asm__ volatile("csrr %0, mtval;" : "=r"(result));
  return result;
}

/**
 * Executes [s] function with [p] as first parameter and [sp] as
 * stack pointer in User mode. After the execution of [s],
 * its return value is propagated as the return value of this
 * function.
 */
struct seret execute_func_u_mode(void *p, se_service *s, uintptr_t sp);

#endif

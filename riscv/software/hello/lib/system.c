// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "system.h"
#include "dev_access.h"
#include "uart.h"
#include "dev_access.h"
#include "stddef.h"
#include "print_engine.h"
#include "profiler.h"

void phy_halt(void);

void system_init(void) {
  // Enable interrupts
  uart_enable_rx_int();
  #ifdef ENABLE_PROFILER
  init_profiler();
  #endif
}

int putchar(int c)
{
  DEV_WRITE(SIM_CTRL_BASE + SIM_CTRL_OUT, c);

  return c;
}

int puts(const char *str) {
  while (*str) {
    putchar(*str++);
  }

  return 0;
}

void puthex(uint32_t h) {
  int cur_digit;
  // Iterate through h taking top 4 bits each time and outputting ASCII of hex
  // digit for those 4 bits
  for (int i = 0; i < 8; i++) {
    cur_digit = h >> 28;

    if (cur_digit < 10)
      putchar('0' + cur_digit);
    else
      putchar('A' - 10 + cur_digit);

    h <<= 4;
  }
}

void putbyte(uint32_t h){

    int cur_digit;
    cur_digit = h >> 4;
    if (cur_digit < 10) putchar('0' + cur_digit);
    else putchar('A' - 10 + cur_digit);

    cur_digit = h & 0x0f;
    if (cur_digit < 10) putchar('0' + cur_digit);
    else putchar('A' - 10 + cur_digit);
}

void putdec(uint32_t n){
	if( n > 9 ) putdec(n/10);
	putchar('0' + (n % 10));
}

static int std_output_func(const char *str, size_t len) {

  for (size_t i = 0; i < len; i++) putchar(str[i]);
	
	return len;
}

int printf(const char *fmt, ...) {
  va_list ap;
  int err;

  va_start(ap, fmt);
  err = printf_engine(&std_output_func, fmt, ap);
  va_end(ap);

  return err;
}

void __attribute__((__noreturn__)) halt(void)
{
  #ifdef ENABLE_PROFILER
  print_profiler_results();
  #endif

  #ifndef SM_RELEASE
  DEV_WRITE(SIM_CTRL_BASE + SIM_CTRL_CTRL, 1);
  #else
  __asm__ volatile
  (
    "halt_loop: wfi  \n\t"
    "j halt_loop      \n\t"
  );
  #endif
  __builtin_unreachable();
}

void __attribute__((__noreturn__)) fatal(const char *message)
{
  puts(message);
  halt();
}

void enable_interrupts(uint32_t enable_mask) {
  __asm__ volatile("csrs mie, %0\n" : : "r"(enable_mask));
}

void disable_interrupts(uint32_t disable_mask)
{
  __asm__ volatile("csrc mie, %0\n" : : "r"(disable_mask));
}

unsigned int get_global_interrupt_enable(void)
{
  unsigned int result;
  __asm__ volatile("csrr %0, mstatus;" : "=r"(result));
  return result & (1 << 3);
}

void set_global_interrupt_enable(unsigned int enable)
{
  if (enable) __asm__ volatile("csrs mstatus, %0\n" : : "r"(1<<3));
  else __asm__ volatile("csrc mstatus, %0\n" : : "r"(1<<3));
}

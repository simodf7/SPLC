#ifndef PROFILER_H
#define PROFILER_H

#include <stdint.h>
#include "system.h"

#define MAX_NUM_PROFILED_EXECS 256

struct profiler
{
    int pos;
    struct measure
    {
        char *label;
	    uint32_t cycles;
	    uint32_t intructions;
    } m[MAX_NUM_PROFILED_EXECS];
};

static void log_measure(char *label, uint32_t cycles, uint32_t instructions);

#ifdef DEFINE_PROFILER_STRUCT
struct profiler profiler__ = {0};
#else
extern struct profiler profiler__;
#endif

#ifdef ENABLE_PROFILER
#define PROFILE(label) \
for (uint32_t done__ = 0, start_clock__ = get_mcycle(), start_instr__ = get_minstret(); \
    !done__; log_measure(label, get_mcycle() - start_clock__, get_minstret() - start_instr__), (done__ = 1))
#else
#define PROFILE(...)
#endif

static void init_profiler(void)
{
    reset_mcycle();
    reset_minstret();
    enable_mcycle();
    enable_minstret();
}

static void log_measure(char *label, uint32_t cycles, uint32_t instructions)
{
    if (profiler__.pos >= MAX_NUM_PROFILED_EXECS) return;
    
    profiler__.m[profiler__.pos].label = label;
    profiler__.m[profiler__.pos].cycles = cycles;
    profiler__.m[profiler__.pos].intructions = instructions;
	profiler__.pos++;
}

static void print_profiler_results(void)
{
    printf("[PROFILER] %u executions were profiled:\n", profiler__.pos);
    for (int i = 0; i < profiler__.pos; i++)
    {
        printf("\t%s: %lu clocks | %lu instructions\n",
            profiler__.m[i].label, profiler__.m[i].cycles, profiler__.m[i].intructions);
    }
}

#endif

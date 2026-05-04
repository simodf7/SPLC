#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>
#include <stddef.h>
#include "sehead.h"

typedef uint32_t sehandle;

struct mem_cfg
{
    char *addr;
    size_t size;
};

struct smret
{
	long error;
	long value;
};

struct seret
{
    long value;
    long current_sp;
};

struct smlog
{
    unsigned long id;
    unsigned long event_type;
    long outcome;
    uint8_t requester[32];
    size_t args_len;
    uint8_t args[];
};

#endif
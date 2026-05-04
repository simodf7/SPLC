#ifndef CQUEUE_H_
#define CQUEUE_H_

// circular queue.

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifndef CQUEUE_SIZE
#define CQUEUE_SIZE 2048
#endif

typedef struct cqueue
{
    int head;
    int tail;
    size_t nelem;
    uint8_t mem[CQUEUE_SIZE];
}cqueue_t;

void cqueue_init(cqueue_t *);
bool cqueue_empty(cqueue_t *);
bool cqueue_full(cqueue_t *);
size_t cqueue_nelem(cqueue_t *);
int cqueue_enq(cqueue_t *, uint8_t);
int cqueue_deq(cqueue_t *, uint8_t *);

#endif
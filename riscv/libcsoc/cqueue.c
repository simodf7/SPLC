#include "cqueue.h"

void cqueue_init(cqueue_t *q) {
    q->head = 0;
    q->tail = 0;
    q->nelem = 0;
}

bool cqueue_empty(cqueue_t *q) {
    return q->nelem == 0;
}

bool cqueue_full(cqueue_t *q){
    return q->nelem == CQUEUE_SIZE;
}

size_t cqueue_nelem(cqueue_t *q)
{
    return q->nelem;
}

int cqueue_enq(cqueue_t *q, uint8_t elem){
    
    if (q->nelem == CQUEUE_SIZE)
        return -1;

    q->mem[q->tail] = elem;
    q->tail = (q->tail + 1) % CQUEUE_SIZE;
    q->nelem++;

    return 0;
}

int cqueue_deq(cqueue_t *q, uint8_t *elem){
    
    if (q->nelem == 0 || !elem)
        return -1;

    *elem = q->mem[q->head];
    
    q->head = (q->head + 1) % CQUEUE_SIZE;
    q->nelem--;

    return 0;
}
#include <stdint.h>
#include <string.h>

#include "cbuf.h"

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

#define ALIGN_ADDR_POW2(addr, pow2)                     \
    ({                                                  \
        uintptr_t addr_ = (uintptr_t)(addr);            \
        uintptr_t pow2_ = (uintptr_t)(pow2);            \
        addr_ += - addr_ & (pow2_ - 1UL);               \
    })

struct cbuf
{
    size_t head;
    size_t tail;
    size_t nelem;
    size_t buf_size;
    char buffer[];
};

struct cbuf *cbuf_init(void *base, size_t size)
{
    struct cbuf *c = (struct cbuf *)
        ALIGN_ADDR_POW2(base, _Alignof(struct cbuf));
    size_t offset = (uintptr_t)c->buffer -
                    (uintptr_t)base;

    if (size < offset) return NULL;

    c->head = 0;
    c->tail = 0;
    c->nelem = 0;
    c->buf_size = size - offset;

    return c;
}

size_t cbuf_size(struct cbuf *c)
{
    return c->buf_size;
}

size_t cbuf_push(struct cbuf *c, const void *buf, size_t size)
{
    if (!c) return 0;

    size_t tailcopy_size = 0;
    size_t total = 0;

    if (c->head < c->tail || c->nelem == 0)
    {
        tailcopy_size = MIN(c->buf_size - c->tail, size);
        memcpy(&c->buffer[c->tail], buf, tailcopy_size);
        c->tail = (c->tail + tailcopy_size) % c->buf_size;
        total += tailcopy_size;
    }
    
    // If the whole buf was copied in the previous memcpy, then
    // c->head < c->tail and the MIN() macro will return 0
    size_t headcopy_size = MIN(c->head - c->tail, size - tailcopy_size);
    if (headcopy_size > 0)
    {
        memcpy(&c->buffer[c->tail], &((char *)buf)[tailcopy_size],
            headcopy_size);
        c->tail += headcopy_size;
        total += headcopy_size;
    }
    
    c->nelem += total;    

    return total;
}

struct cbduo cbuf_get_duo(struct cbuf *c, size_t size)
{
    struct cbduo cbd =
    {
        .zones = {NULL, NULL},
        .sizes = {0, 0}
    };
    
    if (!c || c->nelem == 0 || size == 0) return cbd;
    
    // Given the nelem check, head and tail MUST
    // be different values.

    if (c->head < c->tail)
    {
        cbd.zones[0] = &c->buffer[c->head];
        cbd.sizes[0] = MIN(size, c->nelem);
    }
    else
    {
        // c->head > c->tail
        cbd.zones[0] = &c->buffer[c->head];
        cbd.sizes[0] = MIN(size, c->buf_size - c->head);

        size_t temp_head = (c->head + cbd.sizes[0]) % c->buf_size;

        if (temp_head < c->tail)
        {
            cbd.zones[1] = &c->buffer[temp_head];
            cbd.sizes[1] = MIN(size - cbd.sizes[0], c->nelem - cbd.sizes[0]);
        }
    }

    return cbd;
}

void cbuf_commit_duo(struct cbuf *c, struct cbduo *cbd)
{
    if (!c || !cbd) return;

    size_t total = cbd->sizes[0] + cbd->sizes[1];
    c->head = (c->head + total) % c->buf_size;
    c->nelem -= total;
}

size_t cbuf_pop(struct cbuf *c, void *buf, size_t size)
{
    struct cbduo cbd = cbuf_get_duo(c, size);
    if (cbd.sizes[0] > 0)
        memcpy(buf, cbd.zones[0], cbd.sizes[0]);
    if (cbd.sizes[1] > 0)
        memcpy(buf + cbd.sizes[0], cbd.zones[1], cbd.sizes[1]);
    
    cbuf_commit_duo(c, &cbd);

    return cbd.sizes[0] + cbd.sizes[1];
}

size_t cbuf_nelem(struct cbuf *c)
{
    return c->nelem;
}

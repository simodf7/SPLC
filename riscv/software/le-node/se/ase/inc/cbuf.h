#ifndef CBUF_H
#define CBUF_H

#include <stddef.h>

/* A circular buffer */

struct cbuf;

struct cbduo
{
    void *zones[2];
    size_t sizes[2];
};

/*
 * Init the circular buffer at [base] of size [size]
 */
struct cbuf *cbuf_init(void *base, size_t size);

size_t cbuf_size(struct cbuf *c);

/*
 * Push into [c] [size] bytes for the buffer [buf].
 * Return the number of bytes pushed.
 */
size_t cbuf_push(struct cbuf *c, const void *buf, size_t size);

/*
 * Return the zone (or zones) and its size (or their sizes)
 * containing the bytes to be popped. [c] state is not modified
 * until the commit, so bytes are actually still in the queue.
 */
struct cbduo cbuf_get_duo(struct cbuf *c, size_t size);

/*
 * Commit the popping transaction given the [cbd] structure.
 * No other transaction MUST be initiated between a get and a
 * commit.
 */
void cbuf_commit_duo(struct cbuf *c, struct cbduo *cbd);

/*
 * Pop from [c] [size] bytes to the buffer [buf].
 * Return the number of bytes popped.
 */
size_t cbuf_pop(struct cbuf *c, void *buf, size_t size);

size_t cbuf_nelem(struct cbuf *c);

#endif
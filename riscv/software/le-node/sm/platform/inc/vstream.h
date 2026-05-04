#ifndef VSTREAM_H_
#define VSTREAM_H_

#include "stddef.h"

size_t vstream_send(const void *buf, size_t len);
size_t vstream_rcv(void *buf, size_t len);
void vstream_wait_for(size_t size);
int vstream_printf(const char *fmt, ...);
void vstream_register_cb(void(*callback)(int));
void vstream_disable_cb(void);

#endif
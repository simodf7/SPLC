#include "vstream.h"
#include "system.h"
#include "uart.h"
#include "stdint.h"
#include "stdbool.h"
#include "print_engine.h"

#define CQUEUE_SIZE 1024

typedef struct cqueue
{
    size_t head;
    size_t tail;
    size_t nelem;
    uint8_t mem[CQUEUE_SIZE];
} cqueue_t;

static int cqueue_enq(uint8_t elem);
static int cqueue_deq(uint8_t *elem);

/*
*   Static receive circular queue.
*   Receive bytes from uart isr
*/
static volatile cqueue_t rcv_cqueue = {0};

/*
*   Callback function called on uart irq if not null
*/
static void (*rcv_callback_func)(int) = NULL;

/*
*  Send [len] bytes from [buf] over the virtual stream.
*   Returns the number [len] of bytes sent.
*/
size_t vstream_send(const void *buf, size_t len)
{
    size_t i = 0;
    while (i<len)
        uart_out(DEFAULT_UART,((char *)buf)[i++]);
    return len;
}

static int vstream_output_func(const char *str, size_t len)
{	
	return vstream_send(str, len);
}

/*
*  printf over the virtual stream.
*/
int vstream_printf(const char *fmt, ...)
{
    va_list ap;
    int err;

    va_start(ap, fmt);
    err = printf_engine(&vstream_output_func, fmt, ap);
    va_end(ap);

    return err;
}

/*
*  Receive a maximum of [len] bytes from the virtual
*   stream and copy them into [buf].
*   Returns the number on bytes received
*/
size_t vstream_rcv(void *buf, size_t len)
{
    size_t i = 0;
    while (rcv_cqueue.nelem > 0 && i < len)
    {
        cqueue_deq(&((uint8_t *)buf)[i++]);
    }
    return i;
}

/*
*  Wait for the availability of [size] bytes
*  in the receiving queue.
*/
void vstream_wait_for(size_t size)
{
    while (rcv_cqueue.nelem < size);
}

/*
*  Register the [callback] function as a callback
*   that is going to be called every time a new byte
*   is available for reception.
*   The callback receives an int param that is the
*   number of bytes ready to be received.
*/
void vstream_register_cb(void(*callback)(int))
{
    rcv_callback_func = callback;
}

/*
*  Disable the callback mechanism
*/
void vstream_disable_cb(void)
{
    rcv_callback_func = NULL;
}

void uart_irq_handler(void)
{
    cqueue_enq(uart_in(DEFAULT_UART));
    /* This callback needs to be fast because we execute that in ISR mode (Int disabled) */
    if (rcv_callback_func)
        rcv_callback_func(rcv_cqueue.nelem);
}

static int cqueue_enq(uint8_t elem)
{
    if (rcv_cqueue.nelem == CQUEUE_SIZE)
        return -1;

    rcv_cqueue.mem[rcv_cqueue.tail] = elem;
    rcv_cqueue.tail = (rcv_cqueue.tail + 1) % CQUEUE_SIZE;
    unsigned int prev = get_global_interrupt_enable();
    set_global_interrupt_enable(0);
    rcv_cqueue.nelem++;
    set_global_interrupt_enable(prev);

    return 0;
}

static int cqueue_deq(uint8_t *elem)
{
    if (rcv_cqueue.nelem == 0 || !elem)
        return -1;

    *elem = rcv_cqueue.mem[rcv_cqueue.head];
    
    rcv_cqueue.head = (rcv_cqueue.head + 1) % CQUEUE_SIZE;

    unsigned int prev = get_global_interrupt_enable();
    set_global_interrupt_enable(0);
    rcv_cqueue.nelem--;
    set_global_interrupt_enable(prev);

    return 0;
}
#ifndef IPINFO_H
#define IPINFO_H

#include <stdint.h>

struct __attribute__((packed)) ipinfo {
    // Ip (v4) for the stream connection
    // NOTE: MUST BE in Network Order
    uint32_t ip_addr;
    // Port for the stream connection.
    // NOTE: MUST BE in Network Order
    uint16_t port;
};

#endif
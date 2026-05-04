#ifndef ENDIANNESS_H_
#define ENDIANNESS_H_

#include <stdint.h>

static inline uint16_t bswap16(uint16_t x) {
    return ((( x  >> 8 ) & 0xffu ) | (( x  & 0xffu ) << 8 ));
}
static inline uint32_t bswap32(uint32_t x) {
    return ((( x & 0xff000000u ) >> 24 ) |
            (( x & 0x00ff0000u ) >> 8  ) |
            (( x & 0x0000ff00u ) << 8  ) |
            (( x & 0x000000ffu ) << 24 ));
}
static inline uint64_t bswap64(uint64_t x) {
    return ((( x & 0xff00000000000000ull ) >> 56 ) |
            (( x & 0x00ff000000000000ull ) >> 40 ) |
            (( x & 0x0000ff0000000000ull ) >> 24 ) |
            (( x & 0x000000ff00000000ull ) >> 8  ) |
            (( x & 0x00000000ff000000ull ) << 8  ) |
            (( x & 0x0000000000ff0000ull ) << 24 ) |
            (( x & 0x000000000000ff00ull ) << 40 ) |
            (( x & 0x00000000000000ffull ) << 56 ));
}

#if _BYTE_ORDER == _LITTLE_ENDIAN
#define	htonl(_x)	bswap32(_x)
#define	htons(_x)	bswap16(_x)
#define	ntohl(_x)	bswap32(_x)
#define	ntohs(_x)	bswap16(_x)
#else
#define	htonl(_x)	((uint32_t)(_x))
#define	htons(_x)	((uint16_t)(_x))
#define	ntohl(_x)	((uint32_t)(_x))
#define	ntohs(_x)	((uint16_t)(_x))
#endif

#endif //ENDIANNESS_H_
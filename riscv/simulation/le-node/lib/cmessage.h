#ifndef CMESSAGE_H
#define CMESSAGE_H

#include <stdint.h>
#include <assert.h>

#define CPAYLOAD_BLOCK 16
static_assert((CPAYLOAD_BLOCK & (CPAYLOAD_BLOCK - 1)) == 0, "CPAYLOAD_BLOCK must be a power of 2");

struct __attribute__((packed)) cheader
{
    struct __attribute__((packed))
    {
        uint8_t auth_algo;
        uint8_t encr_algo;
        // NOTE: MUST BE in Network Order
        uint16_t auth_key;
        // NOTE: MUST BE in Network Order
        uint16_t encr_key;
        // NOTE: MUST BE set to zero
        uint8_t zero1[2];
        // NOTE: MUST BE in Network Order
        uint32_t payload_len;
        // NOTE: MUST BE set to zero
        uint8_t zero2[4];
    } H;
    uint8_t authentication_tag[32];
    uint8_t encr_payload[];
};

#define CPAYLOAD_TYPE_MUDURL    9
#define CPAYLOAD_TYPE_POLICIES  10
#define CPAYLOAD_TYPE_BIN       11
#define CPAYLOAD_TYPE_LOGS      12
#define CPAYLOAD_TYPE_CLG       13
#define CPAYLOAD_TYPE_RSP       14
#define CPAYLOAD_TYPE_ACK       15

#define CPAYLOAD_LOG_SIZE       128
#define CPAYLOAD_CLG_SIZE       64
#define CPAYLOAD_RSP_SIZE       64

struct __attribute__((packed)) mud_msg
{
    struct __attribute__((packed))
    {
        uint8_t payload_type;
        uint8_t bootstrp_code;
        // NOTE: MUST BE in Network Order
        uint32_t mud_len;
        uint8_t zero[10];
    } H;
    char ISO7816padded_mud[];
};

struct __attribute__((packed)) _lbase
{
    // NOTE: MUST BE in Network Order
    uint32_t id;
    // NOTE: MUST BE in Network Order
    uint32_t event_type;
    // NOTE: MUST BE in Network Order
    int32_t outcome;
    uint8_t requester[32];
};
static_assert(sizeof(struct _lbase) <= CPAYLOAD_LOG_SIZE, "Struct _lbase is too large");

struct __attribute__((packed)) log
{
    struct _lbase base;
    // The args field usage depends on event_type value
    uint8_t args[CPAYLOAD_LOG_SIZE - sizeof(struct _lbase)];
};

struct __attribute__((packed)) logs_msg
{
    struct __attribute__((packed))
    {
        uint8_t payload_type;
        // NOTE: MUST BE in Network Order
        uint32_t logs_len;
        uint8_t zero[11];
    } H;
    struct log logs[];
};

struct __attribute__((packed)) prcn
{
    uint8_t rcn;
    // NOTE: MUST BE in Network Order
    uint32_t rcn_v;
};

struct __attribute__((packed)) policy
{
    uint8_t policy_type;
    struct prcn rcn[3];
    uint8_t recipient[32];
};
static_assert(sizeof(struct policy) == 48, "Struct policy must be 48 bytes long");

struct __attribute__((packed)) policies_msg
{
    struct __attribute__((packed))
    {
        uint8_t payload_type;
        // NOTE: MUST BE in Network Order
        uint32_t policies_len;
        uint8_t zero[11];
    } H;
    struct policy policies[];
};

struct __attribute__((packed)) clg_msg
{
    struct __attribute__((packed))
    {
        uint8_t payload_type;
        uint8_t zero[15];
    } H;
    uint8_t clg[CPAYLOAD_CLG_SIZE];
};

struct __attribute__((packed)) rsp_msg
{
    struct __attribute__((packed))
    {
        uint8_t payload_type;
        uint8_t zero[15];
    } H;
    uint8_t rsp[CPAYLOAD_RSP_SIZE];
};

struct __attribute__((packed)) ack_msg
{
    uint8_t payload_type;
    // NOTE: MUST BE in Network Order
    uint32_t status;
    uint8_t zero[11];
};

#endif
#ifndef SMHEAD_H
#define SMHEAD_H

#include <stdint.h>
#include <stddef.h>

struct smhead
{
    uint8_t mac[32];
    uint32_t version;
    uint32_t bin_len;
    uint8_t bin[];
};

static inline size_t smhead_tot_size(const struct smhead *sm)
{
    return sizeof(*sm) + sm->bin_len;
}

static inline const void *smhead_auth_base(const struct smhead *sm)
{
    return &sm->version;
}

static inline size_t smhead_auth_size(const struct smhead *sm)
{
    return sizeof(*sm) - sizeof(sm->mac) + sm->bin_len;
}

#endif
#include <stddef.h>
#include <string.h>

#include "endian.h"

#define DEFINE_SEHEAD
#include "se.h"

#include "smapi.h"
#include "cmessage.h"

#define ALIGN_ADDR_POW2(addr, pow2)                     \
    ({                                                  \
        uintptr_t addr_ = (uintptr_t)(addr);            \
        uintptr_t pow2_ = (uintptr_t)(pow2);            \
        addr_ += -addr_ & (pow2_ - 1UL);                \
    })

struct shminfo
{
    void *base;
    size_t size;
} shm = {0};

#define DOMAIN_ID 1234
#define MAX_MUD_URL_SIZE 128

_Static_assert((MAX_MUD_URL_SIZE & (CPAYLOAD_BLOCK - 1)) == 0);

static char mud_msg_buffer[sizeof(struct cheader) + sizeof(struct mud_msg) + MAX_MUD_URL_SIZE];

long domain_bootstrapping(void *bp)
{
    shm.base = ((struct shminfo *)bp)->base;    
    shm.size = ((struct shminfo *)bp)->size;
    if (shm.size < sizeof (struct cheader) + sizeof(struct mud_msg) ||
        !shm.base) return -1;

    const uint64_t domain_id = DOMAIN_ID;

    // Master domain key derivation as a function of BA authd image and DOMAIN_ID
    int r = smapi_derive_key("msk", "bakey", (uint8_t *)&domain_id, sizeof(domain_id));
    if (r < 0) return r;

    // Open file containing MUD url
    int mudfd = smapi_open_file("/mud-url", F_RDONLY, SEC_C | SEC_IA, "bakey");
    if (mudfd < 0) return mudfd;
    
    // Create CERTIFY top header
    struct cheader *ch = (struct cheader *)mud_msg_buffer;
    ch->H.auth_algo = 0;
    ch->H.auth_key = htons(2); // MSK
    ch->H.encr_algo = 0, // No encryption for now
    ch->H.encr_key = htons(2);
    ch->H.payload_len = 0; // Compiled after
    memset(ch->H.zero1, 0, sizeof(ch->H.zero1));
    memset(ch->H.zero2, 0, sizeof(ch->H.zero2));

    struct mud_msg *m = (struct mud_msg *)ch->encr_payload;
    m->H.payload_type = CPAYLOAD_TYPE_MUDURL;
    m->H.bootstrp_code = 1;
    memset(m->H.zero, 0, sizeof(m->H.zero));
    m->H.mud_len = smapi_read_file(mudfd, m->ISO7816padded_mud, MAX_MUD_URL_SIZE);
    if ((long)m->H.mud_len < 0) return m->H.mud_len;

    // Pad the message with ISO7816 padding
    uint32_t padded_mud_len = ALIGN_ADDR_POW2(m->H.mud_len, CPAYLOAD_BLOCK);
    if (m->H.mud_len < padded_mud_len)
    {
        m->ISO7816padded_mud[m->H.mud_len] = 0x80;
        memset(&m->ISO7816padded_mud[m->H.mud_len + 1], 0,
            padded_mud_len - m->H.mud_len - 1);
    }

    // Convert fields in Net Order
    m->H.mud_len = htonl(m->H.mud_len);

    // Encrypt m (Skipped for now)

    // Update ch payload length and convert in Net Order
    size_t h_payload_len = sizeof(*m) + padded_mud_len;
    ch->H.payload_len = htonl(h_payload_len);

    const uint8_t *addr[] = {(uint8_t *)&ch->H, (uint8_t *)m};
    const size_t len[] = {sizeof(ch->H), h_payload_len};

    r = smapi_auth_data_hmac256_vector("msk", 2, addr, len, ch->authentication_tag);
    if (r < 0) return r;

    memcpy(shm.base, ch, sizeof(*ch) + h_payload_len);

    return sizeof(*ch) + h_payload_len;
}

REGISTER_SE_SERVICE(domain_bootstrapping, 0);
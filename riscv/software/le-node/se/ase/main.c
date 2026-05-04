#include <stddef.h>
#include <string.h>
#include <stdbool.h>

#include "endian.h"

#define DEFINE_SEHEAD
#include "se.h"

#include "smapi.h"
#include "cmessage.h"
#include "cbuf.h"

#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define SIZEOF_MEMBER(type, member) sizeof(((type *)0)->member)

#define ASEV1_BUFFER_SIZE 1024

_Static_assert(ASEV1_BUFFER_SIZE >= 512,
    "ASE private buffers MUST be at least 512 bytes long");

_Static_assert(ASEV1_BUFFER_SIZE >= sizeof(struct cheader) +
    sizeof(struct logs_msg) + sizeof(struct log),
    "ASE private buffers MUST be big at least as the smallest outbound message");

struct bstream
{
    size_t len;
    unsigned char bytes[];
};

static char in_buffer[ASEV1_BUFFER_SIZE];
static char out_buffer[ASEV1_BUFFER_SIZE];
static uint8_t rsp_buffer[CPAYLOAD_RSP_SIZE];
static uint32_t ack_status;

struct asev1
{
    void *shm_base;
    size_t shm_size;
    int logfile_fd;
    uint8_t current_auth_algo;
    uint8_t current_encr_algo;
    enum state
    {
        RCVNG_HEADER,
        RCVNG_PAYLOAD
    } s;
    struct cheader current_ch;
    bool rsp_rdy;
    bool ack_rdy;
    struct cbuf *c;
} ase = { 0 };

static inline const char *get_keyID(uint16_t keynum)
{
    switch (keynum)
    {
    case 1: return "asekey";
    case 2: return "msk";
    default: return NULL;
    }
}

long boot(void *bp)
{
    struct
    {
        void *shm_start;
        size_t shm_size;
        char logfile_path[32];
    } *aseparam_ptr = bp;

    ase.shm_base = aseparam_ptr->shm_start;    
    ase.shm_size = aseparam_ptr->shm_size;
    ase.rsp_rdy = false;
    ase.logfile_fd = smapi_open_file(aseparam_ptr->logfile_path,
        F_RDONLY, SEC_C | SEC_IA, get_keyID(1));
    if (!ase.shm_base || ase.shm_size < sizeof(*aseparam_ptr) ||
        ase.logfile_fd < 0)
        return -1;

    ase.s = RCVNG_HEADER;
    ase.c = cbuf_init(in_buffer, sizeof(in_buffer));
    if (!ase.c) return -1;

    return 0;
}

static int check_sanity(struct cheader *ch)
{
    uint32_t plen = ntohl(ch->H.payload_len);
    if ((ch->H.auth_algo == 0 && ase.current_auth_algo != 0) ||
        (ch->H.encr_algo == 0 && ase.current_encr_algo != 0) ||
        plen > ASEV1_BUFFER_SIZE || plen % CPAYLOAD_BLOCK ||
        memcmp(ch->H.zero1, "\0\0", sizeof(ch->H.zero1)) ||
        memcmp(ch->H.zero2, "\0\0\0\0", sizeof(ch->H.zero2)))
        return 1;
    
    return 0;
}

static void handle_security_fail(void)
{
    smapi_security_lock();
}

static inline long
handle_challenge(void *p1, size_t p1_len, void *p2, size_t p2_len)
{
    struct clg_msg clg;
    uint8_t *clg_ptr = (uint8_t *)&clg;
    if (p1_len + p2_len != sizeof(clg)) return -1;

    // Naive copy
    memcpy(clg_ptr, p1, p1_len);
    memcpy(clg_ptr + p1_len, p2, p2_len);

    memset(rsp_buffer, 0, sizeof(rsp_buffer));
    
    // Sign each challenge with MSK
    if (smapi_auth_data_hmac256(get_keyID(2), clg.clg, sizeof(clg.clg), rsp_buffer))
        return -1;

    ase.rsp_rdy = true;

    return 0;
}

static inline long apply_policy(struct policy *p)
{
    const size_t num_rcn = sizeof(p->rcn) / sizeof(p->rcn[0]);

    switch (p->policy_type)
    {
    // System-wide policy
    case 1:
        for (size_t i = 0; i < num_rcn; i++)
        {
            switch (p->rcn[i].rcn)
            {
            case 1:
                // SYS_CHANGE_AUTH_ALGO
                ase.current_auth_algo = ntohl(p->rcn[i].rcn_v) ? 1 : 0;
                break;
            
            case 2:
                // SYS_CHANGE_ENCR_ALGO
                ase.current_encr_algo = ntohl(p->rcn[i].rcn_v) ? 1 : 0;
                break;
            
            case 3:
                // SYS_TRG_SECURITY_LOCK
                smapi_security_lock();
                break;
                
            default:
                break;
            }
        }
        break;
    
    // Recipient addressed policy. Not handled for now
    case 2: return 0;

    default: return 0;
    }
    
    return 1;
}

static inline long
handle_policies(void *p1, size_t p1_len, void *p2, size_t p2_len)
{
    if (!p1 || p1_len + p2_len < sizeof(struct policies_msg))
        return -1;

    const size_t policies_len_offset =
        offsetof(struct policies_msg, H.policies_len);
    const size_t policies_offset =
        offsetof(struct policies_msg, policies);

    long policy_error_count = 0;

    uint32_t policies_len;
    struct policy *policies;
    if (p1_len >= policies_len_offset +
        SIZEOF_MEMBER(struct policies_msg, H.policies_len))
    {
        // Whole policies_len is in p1
        policies_len = ntohl(((struct policies_msg *)p1)->H.policies_len);
        // policies array may be all in p1, splitted or all in p2
        size_t tot_num_policies = policies_len / sizeof(struct policy);
        if (p1_len > policies_offset)
        {
            policies = ((struct policies_msg *)p1)->policies;
            size_t p1_num_policies = (p1_len - policies_offset) /
                sizeof(struct policy);
            
            for (size_t i = 0; i < p1_num_policies; i++)
                policy_error_count += apply_policy(policies + i);
            
            size_t p1_spare_bytes = (p1_len - policies_offset) %
                sizeof(struct policy);
            if (p1_spare_bytes > 0)
            {
                // This handle the splitted policy between p1 and p2
                // or the first policy in p2
                struct policy sp;
                memcpy(&sp, policies + p1_num_policies, p1_spare_bytes);
                memcpy((void *)&sp + p1_spare_bytes, p2,
                    sizeof(sp) - p1_spare_bytes);
                
                policy_error_count += apply_policy(&sp);
                policies = (struct policy *)
                    (p2 + sizeof(sp) - p1_spare_bytes);
            }
            else policies = (struct policy *)p2;

            for (size_t i = 0; i < tot_num_policies - p1_num_policies; i++)
                policy_error_count += apply_policy(policies + i);
        }
        else
        {
            size_t d = policies_offset - p1_len;
            policies = (struct policy *)(p2 + d);

            for (size_t i = 0; i < tot_num_policies; i++)
                policy_error_count += apply_policy(policies + i);
        }
    }
    else if (p1_len <= policies_len_offset)
    {
        // Whole policies_len is in p2
        size_t d = policies_len_offset - p1_len;
        policies_len = ntohl(*(uint32_t *)(p2 + d));
        // Also whole policies array is in p2
        d = policies_offset - p1_len;
        policies = (struct policy *)(p2 + d);

        for (size_t i = 0; i < policies_len / sizeof(struct policy); i++)
            policy_error_count += apply_policy(policies + i);
    }
    else
    {
        // policies_len is splitted
        // p1_len > offsetof(struct policies_msg, policies_len) &&
        // p1_len < offsetof(struct policies_msg, policies_len) + sizeof(policies_len)
        size_t p1_part = p1_len - policies_len_offset;
        size_t p2_part = sizeof(policies_len) - p1_part;
        uint8_t *p = (uint8_t *)&policies_len;
        memcpy(p, p1 + policies_len_offset, p1_part);
        memcpy(p + p1_part, p2, p2_part);
        policies_len = ntohl(policies_len);
        // Whole policies array MUST be in p2 since it follows policies_len
        size_t d = policies_offset - p1_len;
        policies = (struct policy *)(p2 + d);

        for (size_t i = 0; i < policies_len / sizeof(struct policy); i++)
            policy_error_count += apply_policy(policies + i);
    }
    
    ack_status = policy_error_count;
    ase.ack_rdy = true;

    return 0;
}

static inline long
handle_bin(void *p1, size_t p1_len, void *p2, size_t p2_len)
{
    (void)p1;
    (void)p1_len;
    (void)p2;
    (void)p2_len;

    return -2;
}

static inline long
handle_completition(struct cheader *ch, void *p1, size_t p1_len,
    void *p2, size_t p2_len)
{
    switch (ch->H.auth_algo)
    {
    case 1: // HMACSHA256
    {
        uint16_t h_auth_key = ntohs(ch->H.auth_key);
        uint8_t check_mac[sizeof(ch->authentication_tag)];
        const uint8_t *addr[] = {(uint8_t *)&ch->H, p1, p2};
        const size_t len[] = {sizeof(ch->H), p1_len, p2_len};
        const size_t num_elem = p2 ? 3 : 2;
        if (smapi_auth_data_hmac256_vector(get_keyID(h_auth_key),
                num_elem, addr, len, check_mac) ||
            memcmp(ch->authentication_tag, check_mac, sizeof(check_mac)))
        {
            handle_security_fail();
            return -1;
        }
        break;
    }
    default: // No authentication
        break;
    }

    switch (ch->H.encr_algo)
    {
    case 1: // AES256 CBC with 16 bytes block size and ISO7816 padding
    {
        uint16_t h_encr_key = ntohs(ase.current_ch.H.encr_key);
        (void)h_encr_key;
        return -2; // To be implemented
        break;
    }
    default: // No encryption
        break;
    }
    
    // The message is authenticated and decrypted
    // Now let's read it!
    uint8_t ptype = *(uint8_t *)p1;
    switch (ptype)
    {
    case CPAYLOAD_TYPE_CLG:
        return handle_challenge(p1, p1_len, p2, p2_len);

    case CPAYLOAD_TYPE_POLICIES:
        return handle_policies(p1, p1_len, p2, p2_len);
    
    case CPAYLOAD_TYPE_BIN:
        return handle_bin(p1, p1_len, p2, p2_len);
    
    default: break;
    }

    return 0;
}

static inline long header_reception(struct bstream *s)
{
    size_t res = cbuf_push(ase.c, s->bytes, s->len);
    if (cbuf_nelem(ase.c) >= sizeof(ase.current_ch))
    {
        if (cbuf_pop(ase.c, &ase.current_ch, sizeof(ase.current_ch)) !=
            sizeof(ase.current_ch))
        return -1;

        // If CHEADER is not ok, trigger security lock
        if (check_sanity(&ase.current_ch))
        {
            handle_security_fail();
            return -1;
        }

        ase.s = RCVNG_PAYLOAD;
        res += cbuf_push(ase.c, &s->bytes[res], s->len - res);
    }

    return res;
}

static inline long payload_reception(struct bstream *s)
{
    size_t res = cbuf_push(ase.c, s->bytes, s->len);

    size_t h_payload_len = ntohl(ase.current_ch.H.payload_len);

    if (cbuf_nelem(ase.c) >= h_payload_len)
    {
        struct cbduo cbd =
            cbuf_get_duo(ase.c, h_payload_len);
        
        if (cbd.sizes[0] + cbd.sizes[1] != h_payload_len)
            return -1;
        
        if (handle_completition(&ase.current_ch, cbd.zones[0],
            cbd.sizes[0], cbd.zones[1], cbd.sizes[1]))
            return -1;
        
        cbuf_commit_duo(ase.c, &cbd);
        ase.s = RCVNG_HEADER;
        res += cbuf_push(ase.c, &s->bytes[res], s->len - res);
    }
    
    return res;
}

long parse_message(void *m)
{
    struct bstream *s = (struct bstream *)m;
    
    // Message format is wrong.
    if ((sizeof(*s) + s->len) > ase.shm_size)
        return -1;
    
    switch (ase.s)
    {
        case RCVNG_HEADER: return header_reception(s);
        case RCVNG_PAYLOAD: return payload_reception(s);
        default: return -1;
    }
}

long produce_logs(void *p)
{
    (void)p;
    // Message is first produced in private memory and then copied
    // to shared memory after the encryption and authentication
    size_t avlbl_size = MIN(sizeof(out_buffer), ase.shm_size);
    if (avlbl_size < sizeof(struct cheader) + sizeof(struct logs_msg) + 
        sizeof(struct log))
        return -1;
    uintptr_t eom = (uintptr_t)out_buffer + avlbl_size;

    struct cheader *ch = (struct cheader *)out_buffer;
    struct logs_msg *lm = (struct logs_msg *)ch->encr_payload;
    struct log *l = lm->logs;
    
    long res;
    struct smlog smlog;
    while ((uintptr_t)(l+1) <= eom)
    {
        res = smapi_read_file(ase.logfile_fd, &smlog, sizeof(smlog));
        if (res == 0) break;
        else if (res != (long)sizeof(smlog)) return -2;
        
        l->base.id = htonl(smlog.id);
        l->base.event_type = htonl(smlog.event_type);
        l->base.outcome = htonl(smlog.outcome);
        memcpy(l->base.requester, smlog.requester, 32);
        
        if (smlog.args_len > sizeof(l->args)) return -3;
        memset(l->args, 0, sizeof(l->args));
        res = smapi_read_file(ase.logfile_fd, l->args, smlog.args_len);
        if (res != (long)smlog.args_len) return -4;
        
        l += 1;
    }
    // No logs available are available
    if (l == lm->logs) return 0;
    
    // Prepare logs_msg payload
    memset(lm->H.zero, 0, sizeof(lm->H.zero));
    lm->H.payload_type = CPAYLOAD_TYPE_LOGS;
    lm->H.logs_len = (uintptr_t)l - (uintptr_t)lm->logs;

    // Prepare cheader
    const uint16_t h_auth_key = 2;
    const uint16_t h_encr_key = 2;
    memset(ch->H.zero1, 0, sizeof(ch->H.zero1));
    memset(ch->H.zero2, 0, sizeof(ch->H.zero2));
    ch->H.auth_algo = ase.current_auth_algo;
    ch->H.auth_key = h_auth_key; // MSK
    ch->H.encr_algo = ase.current_encr_algo;
    ch->H.encr_key = h_encr_key; // MSK
    ch->H.payload_len = sizeof(*lm) + lm->H.logs_len;
    
    // Apply Network endianess
    size_t h_payload_len = ch->H.payload_len;
    lm->H.logs_len = htonl(lm->H.logs_len);
    ch->H.auth_key = htons(ch->H.auth_key);
    ch->H.encr_key = htons(ch->H.encr_key);
    ch->H.payload_len = htonl(ch->H.payload_len);

    // Encrypt
    switch (ch->H.encr_algo)
    {
    case 1: // AES256 CBC
    {
        const uint8_t iv[16] = {0};
        res = smapi_encrypt_data_aescbc(get_keyID(h_encr_key),
                ch->encr_payload, h_payload_len, iv, ch->encr_payload);
        if (res) return -5;
        break;
    }
    
    default: break;
    }

    // Authenticate
    switch (ch->H.auth_algo)
    {
    case 1:
    {
        const uint8_t *addr[] = {(uint8_t *)&ch->H, ch->encr_payload};
        const size_t len[] = {sizeof(ch->H), h_payload_len};
        const size_t num_elem = sizeof(len) / sizeof(len[0]);
        res = smapi_auth_data_hmac256_vector(get_keyID(h_auth_key),
                num_elem, addr, len, ch->authentication_tag);
        if (res) return -6;
        break;
    }

    default: break;
    }
    
    memcpy(ase.shm_base, out_buffer, sizeof(*ch) + h_payload_len);

    return sizeof(*ch) + h_payload_len;
}

long produce_rsp(void *p)
{
    (void)p;
    size_t avlbl_size = MIN(sizeof(out_buffer), ase.shm_size);
    if (avlbl_size < sizeof(struct cheader) + sizeof(struct rsp_msg))
        return -1;
    if (ase.rsp_rdy == false) return 0;

    struct cheader *ch = (struct cheader *)out_buffer;
    struct rsp_msg *rsp = (struct rsp_msg *)ch->encr_payload;

    // Prepare rsp_msg
    rsp->H.payload_type = CPAYLOAD_TYPE_RSP;
    memset(rsp->H.zero, 0, sizeof(rsp->H.zero));
    memcpy(rsp->rsp, rsp_buffer, sizeof(rsp->rsp));

    // Prepare cheader
    const uint16_t h_auth_key = 2;
    const uint16_t h_encr_key = 2;
    memset(ch->H.zero1, 0, sizeof(ch->H.zero1));
    memset(ch->H.zero2, 0, sizeof(ch->H.zero2));
    ch->H.auth_algo = ase.current_auth_algo;
    ch->H.auth_key = h_auth_key; // MSK
    ch->H.encr_algo = ase.current_encr_algo;
    ch->H.encr_key = h_encr_key; // MSK
    ch->H.payload_len = sizeof(*rsp);

    // Apply Network endianess
    size_t h_payload_len = ch->H.payload_len;
    ch->H.auth_key = htons(ch->H.auth_key);
    ch->H.encr_key = htons(ch->H.encr_key);
    ch->H.payload_len = htonl(ch->H.payload_len);

    int res;
    // Encrypt
    switch (ch->H.encr_algo)
    {
    case 1: // AES256 CBC
    {
        const uint8_t iv[16] = {0};
        res = smapi_encrypt_data_aescbc(get_keyID(h_encr_key),
                ch->encr_payload, h_payload_len, iv, ch->encr_payload);
        if (res) return -1;
        break;
    }
    
    default: break;
    }

    // Authenticate
    switch (ch->H.auth_algo)
    {
    case 1:
    {
        const uint8_t *addr[] = {(uint8_t *)&ch->H, ch->encr_payload};
        const size_t len[] = {sizeof(ch->H), h_payload_len};
        const size_t num_elem = sizeof(len) / sizeof(len[0]);
        res = smapi_auth_data_hmac256_vector(get_keyID(h_auth_key),
                num_elem, addr, len, ch->authentication_tag);
        if (res) return -1;
        break;
    }

    default: break;
    }

    memcpy(ase.shm_base, out_buffer, sizeof(*ch) + h_payload_len);

    ase.rsp_rdy = false;

    return sizeof(*ch) + h_payload_len;
}

long produce_ack(void *p)
{
    (void)p;
    size_t avlbl_size = MIN(sizeof(out_buffer), ase.shm_size);
    if (avlbl_size < sizeof(struct cheader) + sizeof(struct ack_msg))
        return -1;
    if (ase.ack_rdy == false) return 0;

    struct cheader *ch = (struct cheader *)out_buffer;
    struct ack_msg *ack = (struct ack_msg *)ch->encr_payload;

    // Prepare ack_msg
    ack->payload_type = CPAYLOAD_TYPE_ACK;
    memset(ack->zero, 0, sizeof(ack->zero));
    ack->status = htonl(ack_status);

    // Prepare cheader
    const uint16_t h_auth_key = 2;
    const uint16_t h_encr_key = 2;
    memset(ch->H.zero1, 0, sizeof(ch->H.zero1));
    memset(ch->H.zero2, 0, sizeof(ch->H.zero2));
    ch->H.auth_algo = ase.current_auth_algo;
    ch->H.auth_key = h_auth_key; // MSK
    ch->H.encr_algo = ase.current_encr_algo;
    ch->H.encr_key = h_encr_key; // MSK
    ch->H.payload_len = sizeof(*ack);

    // Apply Network endianess
    size_t h_payload_len = ch->H.payload_len;
    ch->H.auth_key = htons(ch->H.auth_key);
    ch->H.encr_key = htons(ch->H.encr_key);
    ch->H.payload_len = htonl(ch->H.payload_len);

    int res;
    // Encrypt
    switch (ch->H.encr_algo)
    {
    case 1: // AES256 CBC
    {
        const uint8_t iv[16] = {0};
        res = smapi_encrypt_data_aescbc(get_keyID(h_encr_key),
                ch->encr_payload, h_payload_len, iv, ch->encr_payload);
        if (res) return -1;
        break;
    }
    
    default: break;
    }

    // Authenticate
    switch (ch->H.auth_algo)
    {
    case 1:
    {
        const uint8_t *addr[] = {(uint8_t *)&ch->H, ch->encr_payload};
        const size_t len[] = {sizeof(ch->H), h_payload_len};
        const size_t num_elem = sizeof(len) / sizeof(len[0]);
        res = smapi_auth_data_hmac256_vector(get_keyID(h_auth_key),
                num_elem, addr, len, ch->authentication_tag);
        if (res) return -1;
        break;
    }

    default: break;
    }

    memcpy(ase.shm_base, out_buffer, sizeof(*ch) + h_payload_len);

    ase.ack_rdy = false;

    return sizeof(*ch) + h_payload_len;
}

REGISTER_SE_SERVICE(boot, 0);
REGISTER_SE_SERVICE(parse_message, 1);
REGISTER_SE_SERVICE(produce_logs, 2);
REGISTER_SE_SERVICE(produce_rsp, 3);
REGISTER_SE_SERVICE(produce_ack, 4);
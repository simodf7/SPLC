#include "sm.h"
#include "errno.h"
#include "system.h"

#include <stddef.h>
#include <string.h>

struct state
{
    bool bypass;
    int log_fd;
    unsigned long id_counter;
};

static struct state s = { 0 };

bool tracer_is_initialised(void)
{
    return s.log_fd > 0 && s.id_counter > 0;
}

int init_tracer(char *logfilepath, const char *keyID)
{
    s.bypass = false;
    s.id_counter = 1;
    s.log_fd = open(logfilepath, F_CREAT | F_RDWR, SEC_C | SEC_IA, keyID);
    if (s.log_fd < 0) return s.log_fd;
    
    return 0;
}

void bypass_logging(bool value)
{
    s.bypass = value;
}

int log_sm_event(unsigned long event_type, long outcome, const uint8_t *requester_digest,
    const void *args[], const size_t *len, size_t num_args)
{
    assert(tracer_is_initialised());

    if (s.bypass) return 0;

    static const uint8_t no_requester[32] = {0};

    if (!requester_digest) requester_digest = no_requester;

    struct smlog l = 
    {
        .id = s.id_counter,
        .event_type = event_type,
        .outcome = outcome,
        .args_len = 0
    };
    memcpy(l.requester, requester_digest, sizeof(l.requester));
    if (num_args > 0 && args && len)
        for (size_t i = 0; i < num_args; i++)
            l.args_len += len[i];

    s.id_counter++;
    
    long res = write(s.log_fd, &l, sizeof(l));
    if ((unsigned long)res != sizeof(l)) return res;

    if (num_args > 0 && args && len)
        for (size_t i = 0; i < num_args; i++)
        {
            assert(args[i]);
            res = write(s.log_fd, args[i], len[i]);
            if ((unsigned long)res != len[i]) return res;
        }

    return 0;
}
#include <string.h>
#include <assert.h>

#include "conf.h"
#include "errno.h"
#include "sm.h"

#include "imfs.h"

#define SECBSZ (1 << STORAGE_SECBLOCK_SIZE_POW2)

struct secblock {
    size_t used_size;
    char base[SECBSZ];
};

struct secfile {
    int secflags;
    /* Index of the first byte to read from secblock */
    size_t block_rd_idx;
    struct secblock sb;
    char key[CRYPTO_MAX_LEN_KEY_ID];
    bool used;
};

struct state {
    struct imfs *imfs;
    struct secfile secfiles[STORAGE_MAX_OPENED_FILES];
};

static struct state s = {
    .imfs = NULL,
};

static int apply_security(struct secblock *sb, int secflags)
{
    (void)sb;
    (void)secflags;
    return 0;
}

static int remove_security(struct secblock *sb, int secflags)
{
    (void)sb;
    (void)secflags;
    return 0;
}

int init_storage(char *base, size_t size, bool format)
{
    if (!base) return -E_INVALID_PARAMS;

    struct imfs_conf conf = {
        .max_num_fnodes = STORAGE_MAX_NUM_FNODES,
        .max_opened_files = STORAGE_MAX_OPENED_FILES
    };

    s.imfs = imfs_init(base, size, &conf, format);
    if (!s.imfs) return -E_STORAGE_GENERIC;
    
    // secfiles initialisation
    for (size_t i = 0; i < STORAGE_MAX_OPENED_FILES; i++)
        s.secfiles[i].used = false;

    return 0;
}

bool storage_is_initialised(void)
{
    return s.imfs != NULL;
}

int link(const char *oldpath, const char *newpath)
{
    assert(storage_is_initialised());

    if (!oldpath || !newpath) return -E_INVALID_PARAMS;
    
    int res = imfs_link(s.imfs, oldpath, newpath);
    return res == 0 ? 0 : -E_STORAGE_GENERIC;
}

int unlink(const char *pathname)
{
    assert(storage_is_initialised());
    
    if (!pathname) return -E_INVALID_PARAMS;

    int res = imfs_unlink(s.imfs, pathname);
    return res == 0 ? 0 : -E_STORAGE_GENERIC;
}

int mkdir(const char *pathname)
{
    assert(storage_is_initialised());
    
    if (!pathname) return -E_INVALID_PARAMS;

    int res = imfs_mkdir(s.imfs, pathname);
    return res == 0 ? 0 : -E_STORAGE_GENERIC;
}

int rmdir(const char *pathname)
{
    assert(storage_is_initialised());

    if (!pathname) return -E_INVALID_PARAMS;

    int res = imfs_rmdir(s.imfs, pathname);
    return res == 0 ? 0 : -E_STORAGE_GENERIC;
}

int open(const char *pathname, int flags, int secflags, const char *keyID)
{
    assert(storage_is_initialised());
    
    if (!pathname || !keyID) return -E_INVALID_PARAMS;

    int fd = imfs_open(s.imfs, pathname, flags);
    if (fd < 0) return -E_STORAGE_GENERIC;

    int idx = fd - 1;

    assert(idx >= 0 && 
        idx < STORAGE_MAX_OPENED_FILES &&
        s.secfiles[idx].used == false);

    s.secfiles[idx].used = true;
    s.secfiles[idx].secflags = secflags;
    s.secfiles[idx].block_rd_idx = 0;
    strncpy(s.secfiles[idx].key, keyID, CRYPTO_MAX_LEN_KEY_ID);
    s.secfiles[idx].sb.used_size = 0;

    return fd;
}

int close(int fd)
{
    assert(storage_is_initialised());

    int res = imfs_close(s.imfs, fd);
    if (res < 0) return -E_STORAGE_GENERIC;
    
    int idx = fd - 1;
    s.secfiles[idx].used = false;
    
    return 0;
}

long read(int fd, void *buf, size_t count)
{
    assert(storage_is_initialised());

    if (!buf) return -E_INVALID_PARAMS;

    int idx = fd - 1;
    assert(idx >= 0 && 
        idx < STORAGE_MAX_OPENED_FILES);
    
    int secflags = s.secfiles[idx].secflags;
    struct secblock *sb = &s.secfiles[idx].sb;
    char *cbuf = buf;

    size_t tr = 0;
    size_t rdidx, sbsize, s1, rs;
    while (tr < count)
    {
        rdidx = s.secfiles[idx].block_rd_idx;
        sbsize = sb->used_size;

        // Still something to read from the secblock
        if (rdidx < sbsize)
        {
            s1 = sbsize - rdidx;
            rs = (count - tr) < s1 ? (count - tr) : s1;
            memcpy(&cbuf[tr], &sb->base[rdidx], rs);
            s.secfiles[idx].block_rd_idx += rs;
            tr += rs;
        }

        if (s.secfiles[idx].block_rd_idx < sbsize)
            continue;

        // read a new secblock
        long res = (long)
            imfs_read(s.imfs, fd, sb, sizeof(*sb));
        
        assert(res <= 0 || res == sizeof(*sb));
        
        if (res < 0) return -E_STORAGE_GENERIC;
        else if (res == 0) break;
        
        if (remove_security(sb, secflags))
            return -E_STORAGE_REMOVE_SEC;

        s.secfiles[idx].block_rd_idx = 0;
    }

    return (long)tr;
}

long write(int fd, const void *buf, size_t count)
{
    assert(storage_is_initialised());
    
    if (!buf) return -E_INVALID_PARAMS;

    int idx = fd - 1;
    assert(idx >= 0 && 
        idx < STORAGE_MAX_OPENED_FILES);

    int secflags = s.secfiles[idx].secflags;
    struct secblock sb;
    const char *cbuf = buf;

    size_t tw = 0;
    size_t ws;
    while (tw < count)
    {
        ws = (count - tw) < SECBSZ ?
            (count - tw) : SECBSZ;
        memcpy(sb.base, &cbuf[tw], ws);
        sb.used_size = ws;
        
        tw += ws;

        if (apply_security(&sb, secflags))
            return -E_STORAGE_APPLY_SEC;
        
        // write a new secblock
        long res = (long)
            imfs_write(s.imfs, fd, &sb, sizeof(sb));
        
        assert(res <= 0 || res == sizeof(sb));
        
        if (res < 0) return -E_STORAGE_GENERIC;
        else if (res == 0) break;
    }

    return (long)tw;
}

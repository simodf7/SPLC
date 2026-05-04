#include "libcsoc.h"

/*
*   Here you write the Certify SoC (CSoC) simulation
*/

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "cmessage.h"
#include "ipinfo.h"

#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))

typedef struct _tcpserv
{
    int trash_fd;
    int max_fd;
    int base_socket;
    int curr_snd_fd;
    uint32_t curr_snd_plen;
    int curr_rcv_fd;
    uint32_t curr_rcv_plen;
    struct connection
    {
        uint32_t net_ip;
        uint16_t net_port;
    } connections[128];
    char buff[256];
} tcpserv;

#define die_to(label)                                       \
do {                                                        \
    fprintf(stderr, "Fatal error on %s at line %d: %s\n",   \
        __FILE__, __LINE__, strerror(errno));               \
    goto label;                                             \
} while (0)

static ssize_t send_all(int socket, const void *buffer, size_t length)
{
    size_t total_sent = 0;
    const char *ptr = (const char *)buffer;
    ssize_t bytes_sent;
    while (total_sent < length)
    {
        bytes_sent = write(socket, ptr + total_sent, length - total_sent);
        if (bytes_sent < 0) return bytes_sent;
        total_sent += bytes_sent;
    }

    return total_sent;
}

int main(int argc, char** argv)
{
    csoc_ctx ctx;
    csoc_t system;
    csoc_ctx_init(&ctx, argc, argv);
    csoc_soc_init(&system, &ctx);


    int yes = 1;
    uint16_t port = 33333;
    tcpserv s;
    memset(&s, 0, sizeof(s));

    s.trash_fd = open("/dev/null", O_WRONLY);
    if (s.trash_fd < 0) die_to(epilogue);

    s.max_fd = s.base_socket = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);
    if (s.base_socket < 0) die_to(epilogue);

    struct sockaddr_in a;
    a.sin_family =  AF_INET;
    a.sin_addr.s_addr = INADDR_ANY;
    a.sin_port = htons(port);
    memset(a.sin_zero, 0, sizeof(a.sin_zero));
    
    if (setsockopt(s.base_socket, SOL_SOCKET,
        SO_REUSEADDR, &yes, sizeof(yes)))
        die_to(epilogue);

    if (bind(s.base_socket, (struct sockaddr *)&a, sizeof(a)))
        die_to(epilogue);

    if (listen(s.base_socket, 32)) die_to(epilogue);
    
    fprintf(stderr, "Listening for incoming connections at %s:%d\n",
        inet_ntoa(a.sin_addr), ntohs(a.sin_port));

    while (!csoc_soc_proceedClockCycles(&system, 2000))
    {
        // Accept a new connection if there is enough space
        if (s.max_fd - s.base_socket < (int)COUNT_OF(s.connections))
        {
            socklen_t len = sizeof(a);
            int new_fd = accept(s.base_socket, (struct sockaddr *)&a, &len);
            if ((new_fd < 0 && errno != EAGAIN && errno != EWOULDBLOCK) ||
                new_fd - s.base_socket - 1 >= (int)COUNT_OF(s.connections))
                die_to(epilogue);
            
            if (new_fd > s.base_socket)
            {
                fprintf(stderr, "Accepted a new connection from %s:%d\n",
                    inet_ntoa(a.sin_addr), ntohs(a.sin_port));
    
                s.connections[new_fd - s.base_socket - 1].net_ip = a.sin_addr.s_addr;
                s.connections[new_fd - s.base_socket - 1].net_port = a.sin_port;
                if (new_fd > s.max_fd) s.max_fd = new_fd;
            }
        }

        // If there is not already a socket from which we are receiving a CPAYLOAD,
        // find one, receive and forward the CHEADER to the SoC
        if (s.curr_rcv_fd == 0)
        {
            struct cheader ch;
            ssize_t r;
            for (int i = s.base_socket + 1; i <= s.max_fd; i++)
            {
                if (s.connections[i - s.base_socket - 1].net_ip == 0)
                    continue;
                
                r = recv(i, &ch, sizeof(ch), MSG_DONTWAIT | MSG_PEEK);
                if (r < 0 && errno != EAGAIN && errno != EWOULDBLOCK) die_to(epilogue);
                else if (0 == r)
                {
                    // Connection closed by peer
                    close(i);
                    a.sin_addr.s_addr = s.connections[i - s.base_socket - 1].net_ip;
                    fprintf(stderr, "Connection from %s:%d closed by peer\n",
                        inet_ntoa(a.sin_addr),
                        ntohs(s.connections[i - s.base_socket - 1].net_port));
                    s.connections[i - s.base_socket - 1].net_ip = 0;
                    if (i == s.max_fd) s.max_fd--;
                }
                else if (sizeof(ch) == r)
                {
                    r = recv(i, &ch, sizeof(ch), 0);
                    if (r != sizeof(ch)) die_to(epilogue);
                    
                    struct ipinfo ip;
                    ip.ip_addr = s.connections[i - s.base_socket - 1].net_ip;
                    ip.port = s.connections[i - s.base_socket - 1].net_port;
                    s.curr_rcv_plen = ntohl(ch.H.payload_len);

                    if (csoc_soc_proceedSend(&system, &ip, sizeof(ip))) die_to(epilogue);
                    if (csoc_soc_proceedSend(&system, &ch, sizeof(ch))) die_to(epilogue);
                    s.curr_rcv_fd = i;
                    break;
                }
            }
        }

        // Receiving logic from s.curr_rcv_fd to SoC: CPAYLOAD
        if (s.curr_rcv_fd != 0)
        {
            // Receiving the Encrypted payload
            size_t to_receive = sizeof(s.buff) < s.curr_rcv_plen ?
                sizeof(s.buff) : s.curr_rcv_plen;
            ssize_t r = recv(s.curr_rcv_fd, s.buff, to_receive, MSG_DONTWAIT);
            if (r < 0 && errno != EAGAIN && errno != EWOULDBLOCK) die_to(epilogue);
            else if (0 == r)
            {
                // Connection closed by peer
                close(s.curr_rcv_fd);
                a.sin_addr.s_addr = s.connections[s.curr_rcv_fd - s.base_socket - 1].net_ip;
                fprintf(stderr, "Connection from %s:%d closed by peer\n",
                    inet_ntoa(a.sin_addr),
                    ntohs(s.connections[s.curr_rcv_fd - s.base_socket - 1].net_port));
                s.connections[s.curr_rcv_fd - s.base_socket - 1].net_ip = 0;
                if (s.curr_rcv_fd == s.max_fd) s.max_fd--;
                s.curr_rcv_fd = 0;
            }
            else
            {
                if (csoc_soc_proceedSend(&system, s.buff, r)) die_to(epilogue);
                s.curr_rcv_plen -= r;
                if (s.curr_rcv_plen == 0) s.curr_rcv_fd = 0;
            }
        }

        // Forwarding logic from SoC to internet: CHEADER
        const size_t rcvtot = sizeof(struct ipinfo) + sizeof(struct cheader);
        if (s.curr_snd_fd == 0 && csoc_soc_Peek(&system) >= rcvtot)
        {
            char buf[rcvtot];
            size_t r = csoc_soc_Recv(&system, buf, sizeof(buf));
            if (r != rcvtot) die_to(epilogue);

            struct ipinfo *ip = (struct ipinfo *)buf;
            struct cheader *ch = (struct cheader *)(ip + 1);

            for (int i = 0; i < s.max_fd - s.base_socket; i++)
            {
                if (s.connections[i].net_ip == ip->ip_addr &&
                    s.connections[i].net_port == ip->port)
                {
                    s.curr_snd_fd = s.base_socket + i + 1;
                    break;
                }
            }
            
            a.sin_family =  AF_INET;
            a.sin_addr.s_addr = ip->ip_addr;
            a.sin_port = ip->port;

            if (s.curr_snd_fd == 0 && s.max_fd - s.base_socket >= (int)COUNT_OF(s.connections))
            {
                fprintf(stderr, "No space to create the connection to %s:%u. Trashing next CMESSAGE.\n",
                    inet_ntoa(a.sin_addr), ntohs(a.sin_port));
                s.curr_snd_fd = s.trash_fd;
            }
            
            if (s.curr_snd_fd == 0)
            {
                // Create a new socket
                s.curr_snd_fd = socket(AF_INET, SOCK_STREAM, 0);
                if (s.curr_snd_fd < 0 ||
                    s.curr_snd_fd - s.base_socket - 1 >= (int)COUNT_OF(s.connections))
                    die_to(epilogue);
                if (connect(s.curr_snd_fd, (sockaddr *)&a, sizeof(a)))
                {
                    close(s.curr_snd_fd);
                    s.curr_snd_fd = s.trash_fd;
                    fprintf(stderr, "Failed to connect to %s:%u. Trashing next CMESSAGE.\n",
                        inet_ntoa(a.sin_addr), ntohs(a.sin_port));
                }
                else
                {
                    s.connections[s.curr_snd_fd - s.base_socket - 1].net_ip = a.sin_addr.s_addr;
                    s.connections[s.curr_snd_fd - s.base_socket - 1].net_port = a.sin_port;
                    fprintf(stderr, "Connected to %s:%u\n",
                        inet_ntoa(a.sin_addr), ntohs(a.sin_port));
                    if (s.curr_snd_fd > s.max_fd) s.max_fd = s.curr_snd_fd;
                }
            }
            
            s.curr_snd_plen = ntohl(ch->H.payload_len);
            if (send_all(s.curr_snd_fd, ch, sizeof(*ch)) != sizeof(*ch))
                die_to(epilogue);
            if (s.curr_snd_fd != s.trash_fd)
            {
                fprintf(stderr, "Sent CHEADER to %s:%u\n",
                    inet_ntoa(a.sin_addr), ntohs(a.sin_port));
            }
        }

        // Forwarding logic from SoC to internet: CPAYLOAD
        if (s.curr_snd_fd != 0)
        {
            size_t to_send = sizeof(s.buff) < s.curr_snd_plen ?
                sizeof(s.buff) : s.curr_snd_plen;
            to_send = csoc_soc_Recv(&system, s.buff, to_send);
            if (to_send > 0)
            {
                // Forward payload to the correct endpoint
                if(send_all(s.curr_snd_fd, s.buff, to_send) != (ssize_t)to_send)
                    die_to(epilogue);
                s.curr_snd_plen -= to_send;
                if (s.curr_snd_plen == 0)
                {
                    if (s.curr_snd_fd != s.trash_fd)
                    {
                        a.sin_addr.s_addr = s.connections[s.curr_snd_fd - s.base_socket - 1].net_ip;
                        a.sin_port = s.connections[s.curr_snd_fd - s.base_socket - 1].net_port;
                        fprintf(stderr, "Sent CMESSAGE to %s:%u\n",
                            inet_ntoa(a.sin_addr), ntohs(a.sin_port));
                    }
                    s.curr_snd_fd = 0;
                }
            }
        }
    }


epilogue:
    for (int i = s.base_socket; i <= s.max_fd; i++) close(i);
    csoc_soc_destroy(&system);
    csoc_ctx_destroy(&ctx);
    
    return 0;
}

#ifndef _SYS_SOCKET_H
#define _SYS_SOCKET_H
#include <sys/cdefs.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/uio.h>
__BEGIN_DECLS
#if defined(__alpha__) || defined(__mips__)
#define SOL_SOCKET	0xffff
#define SO_DEBUG	0x0001
#define SO_REUSEADDR	0x0004
#define SO_KEEPALIVE	0x0008
#define SO_DONTROUTE	0x0010
#define SO_BROADCAST	0x0020
#define SO_LINGER	0x0080
#define SO_OOBINLINE	0x0100
#define SO_REUSEPORT	0x0200
#define SO_TYPE		0x1008
#define SO_ERROR	0x1007
#define SO_SNDBUF	0x1001
#define SO_RCVBUF	0x1002
#define SO_NO_CHECK	11
#define SO_PRIORITY	12
#define SO_BSDCOMPAT	14
#define SO_PASSCRED	17
#define SO_PEERCRED	18
#ifdef __mips64__
#define SO_SECURITY_AUTHENTICATION		22
#define SO_SECURITY_ENCRYPTION_TRANSPORT	23
#define SO_SECURITY_ENCRYPTION_NETWORK		24
#else
#define SO_SECURITY_AUTHENTICATION		19
#define SO_SECURITY_ENCRYPTION_TRANSPORT	20
#define SO_SECURITY_ENCRYPTION_NETWORK		21
#endif
#define SO_BINDTODEVICE	25
#define SO_ATTACH_FILTER	26
#define SO_DETACH_FILTER	27
#define SO_GET_FILTER	SO_ATTACH_FILTER
#define SO_PEERNAME	28
#define SO_TIMESTAMP	29
#define SCM_TIMESTAMP	SO_TIMESTAMP
#define SO_PEERSEC	30
#define SO_PASSSEC	34
#define SO_TIMESTAMPNS	35
#define SCM_TIMESTAMPNS	SO_TIMESTAMPNS
#define SO_MARK			36
#define SO_TIMESTAMPING		37
#define SCM_TIMESTAMPING	SO_TIMESTAMPING
#define SO_RXQ_OVFL             40
#define SO_WIFI_STATUS		41
#define SCM_WIFI_STATUS		SO_WIFI_STATUS
#define SO_PEEK_OFF		42
#define SO_NOFCS		43
#define SO_LOCK_FILTER		44
#define SO_SELECT_ERR_QUEUE	45
#define SO_BUSY_POLL		46
#define SO_MAX_PACING_RATE	47
#define SO_BPF_EXTENSIONS	48
#define SO_INCOMING_CPU		49
#define SO_ATTACH_BPF		50
#define SO_DETACH_BPF		SO_DETACH_FILTER
#define SO_ATTACH_REUSEPORT_CBPF	51
#define SO_ATTACH_REUSEPORT_EBPF	52
#define SO_CNX_ADVICE		53
#define SCM_TIMESTAMPING_OPT_STATS	54
#define SO_MEMINFO		55
#define SO_INCOMING_NAPI_ID	56
#define SO_COOKIE		57
#define SCM_TIMESTAMPING_PKTINFO	58
#define SO_PEERGROUPS		59
#define SO_ZEROCOPY		60
#ifdef __alpha__
#define SO_SNDBUFFORCE	0x100a
#define SO_RCVBUFFORCE	0x100b
#define	SO_RCVLOWAT	0x1010
#define	SO_SNDLOWAT	0x1011
#define	SO_RCVTIMEO	0x1012
#define	SO_SNDTIMEO	0x1013
#define SO_ACCEPTCONN	0x1014
#else
#define SO_SNDBUFFORCE	31
#define SO_RCVBUFFORCE	33
#define SO_RCVLOWAT	0x1004
#define SO_SNDLOWAT	0x1003
#define SO_RCVTIMEO	0x1006
#define SO_SNDTIMEO	0x1005
#define SO_ACCEPTCONN	0x1009
#endif
#define SO_PROTOCOL	0x1028
#define SO_DOMAIN	0x1029
#define SO_STYLE	SO_TYPE 
#elif defined(__hppa__)
#define SOL_SOCKET	0xffff
#define SO_DEBUG	0x0001
#define SO_REUSEADDR	0x0004
#define SO_KEEPALIVE	0x0008
#define SO_DONTROUTE	0x0010
#define SO_BROADCAST	0x0020
#define SO_LINGER	0x0080
#define SO_OOBINLINE	0x0100
#define SO_REUSEPORT	0x0200
#define SO_SNDBUF	0x1001
#define SO_RCVBUF	0x1002
#define SO_SNDLOWAT	0x1003
#define SO_RCVLOWAT	0x1004
#define SO_SNDTIMEO	0x1005
#define SO_RCVTIMEO	0x1006
#define SO_ERROR	0x1007
#define SO_TYPE	0x1008
#define SO_SNDBUFFORCE	0x100a
#define SO_RCVBUFFORCE	0x100b
#define SO_PEERNAME	0x2000
#define SO_NO_CHECK	0x400b
#define SO_PRIORITY	0x400c
#define SO_BSDCOMPAT	0x400e
#define SO_PASSCRED	0x4010
#define SO_PEERCRED	0x4011
#define SO_TIMESTAMP	0x4012
#define SCM_TIMESTAMP   SO_TIMESTAMP
#define SO_TIMESTAMPNS	0x4013
#define SCM_TIMESTAMPNS	SO_TIMESTAMPNS
#define SO_SECURITY_AUTHENTICATION	0x4016
#define SO_SECURITY_ENCRYPTION_TRANSPORT	0x4017
#define SO_SECURITY_ENCRYPTION_NETWORK	0x4018
#define SO_BINDTODEVICE	0x4019
#define SO_ATTACH_FILTER	0x401a
#define SO_DETACH_FILTER	0x401b
#define SO_GET_FILTER		SO_ATTACH_FILTER
#define SO_ACCEPTCONN	0x401c
#define SO_PEERSEC		0x401d
#define SO_PASSSEC		0x401e
#define SO_MARK			0x401f
#define SO_TIMESTAMPING		0x4020
#define SCM_TIMESTAMPING	SO_TIMESTAMPING
#define SO_RXQ_OVFL             0x4021
#define SO_WIFI_STATUS		0x4022
#define SCM_WIFI_STATUS		SO_WIFI_STATUS
#define SO_PEEK_OFF		0x4023
#define SO_NOFCS		0x4024
#define SO_LOCK_FILTER		0x4025
#define SO_SELECT_ERR_QUEUE	0x4026
#define SO_BUSY_POLL		0x4027
#define SO_MAX_PACING_RATE	0x4028
#define SO_BPF_EXTENSIONS	0x4029
#define SO_INCOMING_CPU		0x402A
#define SO_ATTACH_BPF		0x402B
#define SO_DETACH_BPF		SO_DETACH_FILTER
#define SO_ATTACH_REUSEPORT_CBPF	0x402C
#define SO_ATTACH_REUSEPORT_EBPF	0x402D
#define SO_CNX_ADVICE		0x402E
#define SCM_TIMESTAMPING_OPT_STATS	0x402F
#define SO_MEMINFO		0x4030
#define SO_INCOMING_NAPI_ID	0x4031
#define SO_COOKIE		0x4032
#define SCM_TIMESTAMPING_PKTINFO	0x4033
#define SO_PEERGROUPS		0x4034
#define SO_ZEROCOPY		0x4035
#elif defined(__sparc__)
#define SOL_SOCKET	0xffff
#define SO_DEBUG	0x0001
#define SO_PASSCRED	0x0002
#define SO_REUSEADDR	0x0004
#define SO_KEEPALIVE	0x0008
#define SO_DONTROUTE	0x0010
#define SO_BROADCAST	0x0020
#define SO_PEERCRED	0x0040
#define SO_LINGER	0x0080
#define SO_OOBINLINE	0x0100
#define SO_REUSEPORT	0x0200
#define SO_BSDCOMPAT	0x0400
#define SO_RCVLOWAT	0x0800
#define SO_SNDLOWAT	0x1000
#define SO_RCVTIMEO	0x2000
#define SO_SNDTIMEO	0x4000
#define SO_ACCEPTCONN	0x8000
#define SO_DONTLINGER	(~SO_LINGER)  
#define SO_SNDBUF	0x1001
#define SO_RCVBUF	0x1002
#define SO_SNDBUFFORCE	0x100a
#define SO_RCVBUFFORCE	0x100b
#define SO_ERROR	0x1007
#define SO_TYPE		0x1008
#define SO_ATTACH_FILTER	0x001a
#define SO_DETACH_FILTER	0x001b
#define SO_GET_FILTER		SO_ATTACH_FILTER
#define SO_PEERNAME	0x001c
#define SO_TIMESTAMP	0x001d
#define SCM_TIMESTAMP	SO_TIMESTAMP
#define SO_PEERSEC		0x001e
#define SO_PASSSEC		0x001f
#define SO_TIMESTAMPNS		0x0021
#define SCM_TIMESTAMPNS		SO_TIMESTAMPNS
#define SO_MARK			0x0022
#define SO_TIMESTAMPING		0x0023
#define SCM_TIMESTAMPING	SO_TIMESTAMPING
#define SO_RXQ_OVFL             0x0024
#define SO_WIFI_STATUS		0x0025
#define SCM_WIFI_STATUS		SO_WIFI_STATUS
#define SO_PEEK_OFF		0x0026
#define SO_NOFCS		0x0027
#define SO_LOCK_FILTER		0x0028
#define SO_SELECT_ERR_QUEUE	0x0029
#define SO_BUSY_POLL		0x0030
#define SO_MAX_PACING_RATE	0x0031
#define SO_BPF_EXTENSIONS	0x0032
#define SO_INCOMING_CPU		0x0033
#define SO_ATTACH_BPF		0x0034
#define SO_DETACH_BPF		SO_DETACH_FILTER
#define SO_ATTACH_REUSEPORT_CBPF	0x0035
#define SO_ATTACH_REUSEPORT_EBPF	0x0036
#define SO_CNX_ADVICE		0x0037
#define SCM_TIMESTAMPING_OPT_STATS	0x0038
#define SO_MEMINFO		0x0039
#define SO_INCOMING_NAPI_ID	0x003a
#define SO_COOKIE		0x003b
#define SCM_TIMESTAMPING_PKTINFO	0x003c
#define SO_PEERGROUPS		0x003d
#define SO_ZEROCOPY		0x003e
#define SO_SECURITY_AUTHENTICATION              0x5001
#define SO_SECURITY_ENCRYPTION_TRANSPORT        0x5002
#define SO_SECURITY_ENCRYPTION_NETWORK          0x5004
#else
#define SOL_SOCKET	1
#define SO_DEBUG	1
#define SO_REUSEADDR	2
#define SO_TYPE		3
#define SO_ERROR	4
#define SO_DONTROUTE	5
#define SO_BROADCAST	6
#define SO_SNDBUF	7
#define SO_RCVBUF	8
#define SO_KEEPALIVE	9
#define SO_OOBINLINE	10
#define SO_NO_CHECK	11
#define SO_PRIORITY	12
#define SO_LINGER	13
#define SO_BSDCOMPAT	14
#define SO_REUSEPORT	15
#define SO_PASSCRED	16
#define SO_PEERCRED	17
#define SO_RCVLOWAT	18
#define SO_SNDLOWAT	19
#define SO_RCVTIMEO	20
#define SO_SNDTIMEO	21
#define SO_SECURITY_AUTHENTICATION		22
#define SO_SECURITY_ENCRYPTION_TRANSPORT	23
#define SO_SECURITY_ENCRYPTION_NETWORK		24
#define SO_BINDTODEVICE	25
#define SO_ATTACH_FILTER	26
#define SO_DETACH_FILTER	27
#define SO_GET_FILTER		SO_ATTACH_FILTER
#define SO_PEERNAME		28
#define SO_TIMESTAMP		29
#define SCM_TIMESTAMP		SO_TIMESTAMP
#define SO_ACCEPTCONN	30
#define SO_PEERSEC		31
#define SO_SNDBUFFORCE	32
#define SO_RCVBUFFORCE	33
#define SO_PASSSEC		34
#define SO_TIMESTAMPNS		35
#define SCM_TIMESTAMPNS		SO_TIMESTAMPNS
#define SO_MARK			36
#define SO_TIMESTAMPING		37
#define SCM_TIMESTAMPING	SO_TIMESTAMPING
#define SO_PROTOCOL		38
#define SO_DOMAIN		39
#define SO_RXQ_OVFL             40
#define SO_WIFI_STATUS		41
#define SCM_WIFI_STATUS	SO_WIFI_STATUS
#define SO_PEEK_OFF		42
#define SO_NOFCS		43
#define SO_LOCK_FILTER		44
#define SO_SELECT_ERR_QUEUE	45
#define SO_BUSY_POLL		46
#define SO_MAX_PACING_RATE	47
#define SO_BPF_EXTENSIONS	48
#define SO_INCOMING_CPU		49
#define SO_ATTACH_BPF		50
#define SO_DETACH_BPF		SO_DETACH_FILTER
#define SO_ATTACH_REUSEPORT_CBPF	51
#define SO_ATTACH_REUSEPORT_EBPF	52
#define SO_CNX_ADVICE		53
#define SCM_TIMESTAMPING_OPT_STATS	54
#define SO_MEMINFO		55
#define SO_INCOMING_NAPI_ID	56
#define SO_COOKIE		57
#define SCM_TIMESTAMPING_PKTINFO	58
#define SO_PEERGROUPS		59
#define SO_ZEROCOPY		60
#endif
#if defined(__hppa__) || defined(__alpha__)
#define SOCK_NONBLOCK 0x40000000
#else
#define SOCK_NONBLOCK O_NONBLOCK
#endif
#define SOCK_CLOEXEC O_CLOEXEC
#ifdef __mips__
#define SOCK_DGRAM	1		
#define SOCK_STREAM	2		
#else
#define SOCK_STREAM	1		
#define SOCK_DGRAM	2		
#endif
#define SOCK_RAW	3		
#define SOCK_RDM	4		
#define SOCK_SEQPACKET	5		
#define SOCK_DCCP	6		
#define SOCK_PACKET	10		
struct sockaddr {
  sa_family_t sa_family;
  char sa_data[14];
};
struct linger {
  int32_t l_onoff;
  int32_t l_linger;
};
struct msghdr {
  void* msg_name;		
  socklen_t msg_namelen;		
  struct iovec* msg_iov;	
  size_t msg_iovlen;		
  void* msg_control;		
  size_t msg_controllen;	
  uint32_t msg_flags;
};
struct cmsghdr {
  size_t cmsg_len;	
  int32_t cmsg_level;	
  int32_t cmsg_type;	
};
#define UIO_FASTIOV	8
#define UIO_MAXIOV	1024
#define SCM_RIGHTS	0x01	
#define SCM_CREDENTIALS	0x02	
#define SCM_CONNECT	0x03	
struct ucred {
  pid_t pid;
  uid_t uid;
  gid_t gid;
};
#define AF_UNSPEC	0
#define AF_UNIX		1	
#define AF_LOCAL	1	
#define AF_INET		2	
#define AF_AX25		3	
#define AF_IPX		4	
#define AF_APPLETALK	5	
#define AF_NETROM	6	
#define AF_BRIDGE	7	
#define AF_ATMPVC	8	
#define AF_X25		9	
#define AF_INET6	10	
#define AF_ROSE		11	
#define AF_DECnet	12	
#define AF_NETBEUI	13	
#define AF_SECURITY	14	
#define AF_KEY		15      
#define AF_NETLINK	16
#define AF_ROUTE	AF_NETLINK 
#define AF_PACKET	17	
#define AF_ASH		18	
#define AF_ECONET	19	
#define AF_ATMSVC	20	
#define AF_SNA		22	
#define AF_IRDA		23	
#define AF_PPPOX	24	
#define AF_WANPIPE	25	
#define AF_LLC		26	
#define AF_IB		27	
#define AF_MPLS		28	
#define AF_CAN		29	
#define AF_TIPC		30	
#define AF_BLUETOOTH	31	
#define AF_IUCV		32	
#define AF_RXRPC	33	
#define AF_ISDN		34	
#define AF_PHONET	35	
#define AF_IEEE802154	36	
#define AF_CAIF		37	
#define AF_ALG		38	
#define AF_NFC		39	
#define AF_VSOCK	40	
#define AF_KCM		41	
#define AF_QIPCRTR	42	
#define AF_SMC		43	
#define AF_MAX		44	
#define PF_UNSPEC	AF_UNSPEC
#define PF_UNIX		AF_UNIX
#define PF_LOCAL	AF_LOCAL
#define PF_INET		AF_INET
#define PF_AX25		AF_AX25
#define PF_IPX		AF_IPX
#define PF_APPLETALK	AF_APPLETALK
#define	PF_NETROM	AF_NETROM
#define PF_BRIDGE	AF_BRIDGE
#define PF_ATMPVC	AF_ATMPVC
#define PF_X25		AF_X25
#define PF_INET6	AF_INET6
#define PF_ROSE		AF_ROSE
#define PF_DECnet	AF_DECnet
#define PF_NETBEUI	AF_NETBEUI
#define PF_SECURITY	AF_SECURITY
#define PF_KEY		AF_KEY
#define PF_NETLINK	AF_NETLINK
#define PF_ROUTE	AF_ROUTE
#define PF_PACKET	AF_PACKET
#define PF_ASH		AF_ASH
#define PF_ECONET	AF_ECONET
#define PF_ATMSVC	AF_ATMSVC
#define PF_SNA		AF_SNA
#define PF_IRDA		AF_IRDA
#define PF_PPPOX	AF_PPPOX
#define PF_WANPIPE	AF_WANPIPE
#define PF_LLC		AF_LLC
#define PF_IB		AF_IB
#define PF_MPLS		AF_MPLS
#define PF_CAN		AF_CAN
#define PF_TIPC		AF_TIPC
#define PF_BLUETOOTH	AF_BLUETOOTH
#define PF_IUCV		AF_IUCV
#define PF_RXRPC	AF_RXRPC
#define PF_ISDN		AF_ISDN
#define PF_PHONET	AF_PHONET
#define PF_IEEE802154	AF_IEEE802154
#define PF_CAIF		AF_CAIF
#define PF_ALG		AF_ALG
#define PF_NFC		AF_NFC
#define PF_VSOCK	AF_VSOCK
#define PF_KCM		AF_KCM
#define PF_QIPCRTR	AF_QIPCRTR
#define PF_SMC		AF_SMC
#define PF_MAX		AF_MAX
#define SOMAXCONN	128
#define MSG_OOB		1
#define MSG_PEEK	2
#define MSG_DONTROUTE	4
#define MSG_TRYHARD     4       
#define MSG_CTRUNC	8
#define MSG_PROBE	0x10	
#define MSG_TRUNC	0x20
#define MSG_DONTWAIT	0x40	
#define MSG_EOR         0x80	
#define MSG_WAITALL	0x100	
#define MSG_FIN         0x200
#define MSG_SYN		0x400
#define MSG_CONFIRM	0x800	
#define MSG_RST		0x1000
#define MSG_ERRQUEUE	0x2000	
#define MSG_NOSIGNAL	0x4000	
#define MSG_MORE	0x8000	
#define MSG_WAITFORONE	0x10000	
#define MSG_SENDPAGE_NOTLAST 0x20000 
#define MSG_BATCH	0x40000 
#define MSG_EOF         MSG_FIN
#define MSG_ZEROCOPY	0x4000000	
#define MSG_FASTOPEN	0x20000000	
#define MSG_CMSG_CLOEXEC 0x40000000	
#define SOL_IP		0
#define SOL_TCP		6
#define SOL_UDP		17
#define SOL_IPV6	41
#define SOL_ICMPV6	58
#define SOL_SCTP	132
#define SOL_UDPLITE	136     
#define SOL_RAW		255
#define SOL_IPX		256
#define SOL_AX25	257
#define SOL_ATALK	258
#define SOL_NETROM	259
#define SOL_ROSE	260
#define SOL_DECNET	261
#define	SOL_X25		262
#define SOL_PACKET	263
#define SOL_ATM		264	
#define SOL_AAL		265	
#define SOL_IRDA        266
#define SOL_NETBEUI	267
#define SOL_LLC		268
#define SOL_DCCP	269
#define SOL_NETLINK	270
#define SOL_TIPC	271
#define SOL_RXRPC	272
#define SOL_PPPOL2TP	273
#define SOL_BLUETOOTH	274
#define SOL_PNPIPE	275
#define SOL_RDS		276
#define SOL_IUCV	277
#define SOL_CAIF	278
#define SOL_ALG		279
#define SOL_NFC		280
#define SOL_KCM		281
#define SOL_TLS		282
#define IPX_TYPE	1
#define CMSG_ALIGN(len) ( ((len)+sizeof(long)-1) & ~(sizeof(long)-1) )
#define __CMSG_NXTHDR(ctl, len, cmsg) __cmsg_nxthdr((ctl),(len),(cmsg))
#define CMSG_NXTHDR(mhdr, cmsg) cmsg_nxthdr((mhdr), (cmsg))
static inline struct cmsghdr* __cmsg_nxthdr(void *__ctl, size_t __size, struct cmsghdr *__cmsg)
{
  struct cmsghdr * __ptr;
  __ptr = (struct cmsghdr*)(((unsigned char *) __cmsg) +  CMSG_ALIGN(__cmsg->cmsg_len));
  if ((unsigned long)((char*)(__ptr+1) - (char *) __ctl) > __size)
    return (struct cmsghdr *)0;
  return __ptr;
}
static inline struct cmsghdr* cmsg_nxthdr (struct msghdr *__msg, struct cmsghdr *__cmsg)
{
  return __cmsg_nxthdr(__msg->msg_control, __msg->msg_controllen, __cmsg);
}
#define CMSG_DATA(cmsg)	((void *)((char *)(cmsg) + CMSG_ALIGN(sizeof(struct cmsghdr))))
#define CMSG_SPACE(len) (CMSG_ALIGN(sizeof(struct cmsghdr)) + CMSG_ALIGN(len))
#define CMSG_LEN(len) (CMSG_ALIGN(sizeof(struct cmsghdr)) + (len))
#define __CMSG_FIRSTHDR(ctl,len) ((len) >= sizeof(struct cmsghdr) ? \
				  (struct cmsghdr *)(ctl) : \
				  (struct cmsghdr *)NULL)
#define CMSG_FIRSTHDR(msg)	__CMSG_FIRSTHDR((msg)->msg_control, (msg)->msg_controllen)
struct sockaddr_storage {
  sa_family_t  ss_family;
  uint32_t  __ss_align;
  char __ss_padding[(128  - (2 * sizeof (uint32_t ))) ];
};
int socket(int domain, int type, int protocol) __THROW;
int accept(int s, struct sockaddr *addr, socklen_t *addrlen) __THROW;
int connect(int sockfd, const struct sockaddr *serv_addr, socklen_t addrlen) __THROW;
int bind(int sockfd, const struct sockaddr *my_addr, socklen_t addrlen) __THROW;
__writememsz__(2,3)
int recv(int s, void *buf, size_t len, int flags) __THROW;
__writememsz__(2,3)
int recvfrom(int s, void *buf, size_t len, int flags, struct sockaddr *from, socklen_t *fromlen) __THROW;
__writemem__(2)
int recvmsg(int s, struct msghdr *msg, int flags) __THROW;
__readmemsz__(2,3)
int send(int s, const void *msg, size_t len, int flags) __THROW;
__readmemsz__(2,3)
int sendto(int s, const void *msg, size_t len, int flags, const struct sockaddr *to, socklen_t tolen) __THROW;
__readmem__(2)
int sendmsg(int s, const struct msghdr *msg, int flags) __THROW;
int getpeername(int s, struct sockaddr *name, socklen_t *namelen) __THROW;
int getsockname(int  s , struct sockaddr * name , socklen_t * namelen) __THROW;
int getsockopt(int s, int level, int optname, void *optval, socklen_t *optlen) __THROW;
int setsockopt(int s, int level, int optname, const void *optval, socklen_t optlen) __THROW;
int listen(int s, int backlog) __THROW;
#define SHUT_RD 0
#define SHUT_WR 1
#define SHUT_RDWR 2
int shutdown(int s, int how) __THROW;
int socketpair(int d, int type, int protocol, int sv[2]) __THROW;
#ifdef _GNU_SOURCE
struct mmsghdr {
   struct msghdr msg_hdr;  
   unsigned int  msg_len;  
};
int recvmmsg(int sockfd, struct mmsghdr *msgvec, unsigned int vlen,
	     unsigned int flags, struct timespec *timeout) __THROW;
int sendmmsg(int sockfd, struct mmsghdr *msgvec, unsigned int vlen,
	     unsigned int flags);
#endif
#define NI_NOFQDN 1
#define NI_NUMERICHOST 2
#define NI_NAMEREQD 4
#define NI_NUMERICSERV 8
#define NI_DGRAM 16
struct addrinfo {
  int     ai_flags;
  int     ai_family;
  int     ai_socktype;
  int     ai_protocol;
  size_t  ai_addrlen;
  struct sockaddr *ai_addr;
  char   *ai_canonname;
  struct addrinfo *ai_next;
};
__writememsz__(3,4) __writememsz__(5,6)
int getnameinfo(const struct sockaddr *sa, socklen_t salen, char *host,
		size_t hostlen, char *serv, size_t servlen, int flags) __THROW;
int getaddrinfo(const char *node, const char *service, const struct
		addrinfo *hints, struct addrinfo **res) __THROW;
void freeaddrinfo(struct addrinfo *res) __THROW;
const char *gai_strerror(int errcode) __THROW;
#define EAI_FAMILY -1
#define EAI_SOCKTYPE -2
#define EAI_BADFLAGS -3
#define EAI_NONAME -4
#define EAI_SERVICE -5
#define EAI_ADDRFAMILY -6
#define EAI_NODATA -7
#define EAI_MEMORY -8
#define EAI_FAIL -9
#define EAI_AGAIN -10
#define EAI_SYSTEM -11
#define AI_NUMERICHOST 1
#define AI_CANONNAME 2
#define AI_PASSIVE 4
#define AI_NUMERICSERV 8
#define AI_ADDRCONFIG 16
#define AI_V4MAPPED 32
#define AI_ALL 64
#define SIOCINQ		FIONREAD
#define SIOCOUTQ	TIOCOUTQ
#define SIOCADDRT	0x890B		
#define SIOCDELRT	0x890C		
#define SIOCRTMSG	0x890D		
#define SIOCGIFNAME	0x8910		
#define SIOCSIFLINK	0x8911		
#define SIOCGIFCONF	0x8912		
#define SIOCGIFFLAGS	0x8913		
#define SIOCSIFFLAGS	0x8914		
#define SIOCGIFADDR	0x8915		
#define SIOCSIFADDR	0x8916		
#define SIOCGIFDSTADDR	0x8917		
#define SIOCSIFDSTADDR	0x8918		
#define SIOCGIFBRDADDR	0x8919		
#define SIOCSIFBRDADDR	0x891a		
#define SIOCGIFNETMASK	0x891b		
#define SIOCSIFNETMASK	0x891c		
#define SIOCGIFMETRIC	0x891d		
#define SIOCSIFMETRIC	0x891e		
#define SIOCGIFMEM	0x891f		
#define SIOCSIFMEM	0x8920		
#define SIOCGIFMTU	0x8921		
#define SIOCSIFMTU	0x8922		
#define SIOCSIFNAME	0x8923		
#define SIOCSIFHWADDR	0x8924		
#define SIOCGIFENCAP	0x8925		
#define SIOCSIFENCAP	0x8926
#define SIOCGIFHWADDR	0x8927		
#define SIOCGIFSLAVE	0x8929		
#define SIOCSIFSLAVE	0x8930
#define SIOCADDMULTI	0x8931		
#define SIOCDELMULTI	0x8932
#define SIOCGIFINDEX	0x8933		
#define SIOGIFINDEX	SIOCGIFINDEX	
#define SIOCSIFPFLAGS	0x8934		
#define SIOCGIFPFLAGS	0x8935
#define SIOCDIFADDR	0x8936		
#define SIOCSIFHWBROADCAST	0x8937	
#define SIOCGIFCOUNT	0x8938		
#define SIOCGIFBR	0x8940		
#define SIOCSIFBR	0x8941		
#define SIOCGIFTXQLEN	0x8942		
#define SIOCSIFTXQLEN	0x8943		
#define SIOCGIFDIVERT	0x8944		
#define SIOCSIFDIVERT	0x8945		
#define SIOCETHTOOL	0x8946		
#define SIOCDARP	0x8953		
#define SIOCGARP	0x8954		
#define SIOCSARP	0x8955		
#define SIOCDRARP	0x8960		
#define SIOCGRARP	0x8961		
#define SIOCSRARP	0x8962		
#define SIOCGIFMAP	0x8970		
#define SIOCSIFMAP	0x8971		
#define SIOCADDDLCI	0x8980		
#define SIOCDELDLCI	0x8981		
#define SIOCDEVPRIVATE	0x89F0		
#define _LINUX_SOCKET_H
__END_DECLS
#endif
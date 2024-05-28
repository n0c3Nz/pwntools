#ifndef _SYS_SOCKET_H_
#define	_SYS_SOCKET_H_
#include <sys/cdefs.h>
#include <sys/_types.h>
#include <sys/_iovec.h>
#include <machine/_align.h>
#if __BSD_VISIBLE
#ifndef _GID_T_DECLARED
typedef	__gid_t		gid_t;
#define	_GID_T_DECLARED
#endif
#ifndef _OFF_T_DECLARED
typedef	__off_t		off_t;
#define	_OFF_T_DECLARED
#endif
#ifndef _PID_T_DECLARED
typedef	__pid_t		pid_t;
#define	_PID_T_DECLARED
#endif
#endif
#ifndef _SA_FAMILY_T_DECLARED
typedef	__sa_family_t	sa_family_t;
#define	_SA_FAMILY_T_DECLARED
#endif
#ifndef _SOCKLEN_T_DECLARED
typedef	__socklen_t	socklen_t;
#define	_SOCKLEN_T_DECLARED
#endif
#ifndef _SSIZE_T_DECLARED
typedef	__ssize_t	ssize_t;
#define	_SSIZE_T_DECLARED
#endif
#if __BSD_VISIBLE
#ifndef _UID_T_DECLARED
typedef	__uid_t		uid_t;
#define	_UID_T_DECLARED
#endif
#endif
#define	SOCK_STREAM	1		
#define	SOCK_DGRAM	2		
#define	SOCK_RAW	3		
#if __BSD_VISIBLE
#define	SOCK_RDM	4		
#endif
#define	SOCK_SEQPACKET	5		
#define	SO_DEBUG	0x0001		
#define	SO_ACCEPTCONN	0x0002		
#define	SO_REUSEADDR	0x0004		
#define	SO_KEEPALIVE	0x0008		
#define	SO_DONTROUTE	0x0010		
#define	SO_BROADCAST	0x0020		
#if __BSD_VISIBLE
#define	SO_USELOOPBACK	0x0040		
#endif
#define	SO_LINGER	0x0080		
#define	SO_OOBINLINE	0x0100		
#if __BSD_VISIBLE
#define	SO_REUSEPORT	0x0200		
#define	SO_TIMESTAMP	0x0400		
#define	SO_NOSIGPIPE	0x0800		
#define	SO_ACCEPTFILTER	0x1000		
#define	SO_BINTIME	0x2000		
#endif
#define	SO_NO_OFFLOAD	0x4000		
#define	SO_NO_DDP	0x8000		
#define	SO_SNDBUF	0x1001		
#define	SO_RCVBUF	0x1002		
#define	SO_SNDLOWAT	0x1003		
#define	SO_RCVLOWAT	0x1004		
#define	SO_SNDTIMEO	0x1005		
#define	SO_RCVTIMEO	0x1006		
#define	SO_ERROR	0x1007		
#define	SO_TYPE		0x1008		
#if __BSD_VISIBLE
#define	SO_LABEL	0x1009		
#define	SO_PEERLABEL	0x1010		
#define	SO_LISTENQLIMIT	0x1011		
#define	SO_LISTENQLEN	0x1012		
#define	SO_LISTENINCQLEN	0x1013	
#define	SO_SETFIB	0x1014		
#define	SO_USER_COOKIE	0x1015		
#define	SO_PROTOCOL	0x1016		
#define	SO_PROTOTYPE	SO_PROTOCOL	
#endif
#if __BSD_VISIBLE
#define	SO_VENDOR	0x80000000
#endif
struct linger {
	int	l_onoff;		
	int	l_linger;		
};
#if __BSD_VISIBLE
struct accept_filter_arg {
	char	af_name[16];
	char	af_arg[256-16];
};
#endif
#define	SOL_SOCKET	0xffff		
#define	AF_UNSPEC	0		
#if __BSD_VISIBLE
#define	AF_LOCAL	AF_UNIX		
#endif
#define	AF_UNIX		1		
#define	AF_INET		2		
#if __BSD_VISIBLE
#define	AF_IMPLINK	3		
#define	AF_PUP		4		
#define	AF_CHAOS	5		
#define	AF_NETBIOS	6		
#define	AF_ISO		7		
#define	AF_OSI		AF_ISO
#define	AF_ECMA		8		
#define	AF_DATAKIT	9		
#define	AF_CCITT	10		
#define	AF_SNA		11		
#define AF_DECnet	12		
#define AF_DLI		13		
#define AF_LAT		14		
#define	AF_HYLINK	15		
#define	AF_APPLETALK	16		
#define	AF_ROUTE	17		
#define	AF_LINK		18		
#define	pseudo_AF_XTP	19		
#define	AF_COIP		20		
#define	AF_CNT		21		
#define pseudo_AF_RTIP	22		
#define	AF_IPX		23		
#define	AF_SIP		24		
#define	pseudo_AF_PIP	25		
#define	AF_ISDN		26		
#define	AF_E164		AF_ISDN		
#define	pseudo_AF_KEY	27		
#endif
#define	AF_INET6	28		
#if __BSD_VISIBLE
#define	AF_NATM		29		
#define	AF_ATM		30		
#define pseudo_AF_HDRCMPLT 31		
#define	AF_NETGRAPH	32		
#define	AF_SLOW		33		
#define	AF_SCLUSTER	34		
#define	AF_ARP		35
#define	AF_BLUETOOTH	36		
#define	AF_IEEE80211	37		
#define	AF_MAX		38
#define AF_VENDOR00 39
#define AF_VENDOR01 41
#define AF_VENDOR02 43
#define AF_VENDOR03 45
#define AF_VENDOR04 47
#define AF_VENDOR05 49
#define AF_VENDOR06 51
#define AF_VENDOR07 53
#define AF_VENDOR08 55
#define AF_VENDOR09 57
#define AF_VENDOR10 59
#define AF_VENDOR11 61
#define AF_VENDOR12 63
#define AF_VENDOR13 65
#define AF_VENDOR14 67
#define AF_VENDOR15 69
#define AF_VENDOR16 71
#define AF_VENDOR17 73
#define AF_VENDOR18 75
#define AF_VENDOR19 77
#define AF_VENDOR20 79
#define AF_VENDOR21 81
#define AF_VENDOR22 83
#define AF_VENDOR23 85
#define AF_VENDOR24 87
#define AF_VENDOR25 89
#define AF_VENDOR26 91
#define AF_VENDOR27 93
#define AF_VENDOR28 95
#define AF_VENDOR29 97
#define AF_VENDOR30 99
#define AF_VENDOR31 101
#define AF_VENDOR32 103
#define AF_VENDOR33 105
#define AF_VENDOR34 107
#define AF_VENDOR35 109
#define AF_VENDOR36 111
#define AF_VENDOR37 113
#define AF_VENDOR38 115
#define AF_VENDOR39 117
#define AF_VENDOR40 119
#define AF_VENDOR41 121
#define AF_VENDOR42 123
#define AF_VENDOR43 125
#define AF_VENDOR44 127
#define AF_VENDOR45 129
#define AF_VENDOR46 131
#define AF_VENDOR47 133
#endif
struct sockaddr {
	unsigned char	sa_len;		
	sa_family_t	sa_family;	
	char		sa_data[14];	
};
#if __BSD_VISIBLE
#define	SOCK_MAXADDRLEN	255		
struct sockproto {
	unsigned short	sp_family;		
	unsigned short	sp_protocol;		
};
#endif
#include <sys/_sockaddr_storage.h>
#if __BSD_VISIBLE
#define	PF_UNSPEC	AF_UNSPEC
#define	PF_LOCAL	AF_LOCAL
#define	PF_UNIX		PF_LOCAL	
#define	PF_INET		AF_INET
#define	PF_IMPLINK	AF_IMPLINK
#define	PF_PUP		AF_PUP
#define	PF_CHAOS	AF_CHAOS
#define	PF_NETBIOS	AF_NETBIOS
#define	PF_ISO		AF_ISO
#define	PF_OSI		AF_ISO
#define	PF_ECMA		AF_ECMA
#define	PF_DATAKIT	AF_DATAKIT
#define	PF_CCITT	AF_CCITT
#define	PF_SNA		AF_SNA
#define PF_DECnet	AF_DECnet
#define PF_DLI		AF_DLI
#define PF_LAT		AF_LAT
#define	PF_HYLINK	AF_HYLINK
#define	PF_APPLETALK	AF_APPLETALK
#define	PF_ROUTE	AF_ROUTE
#define	PF_LINK		AF_LINK
#define	PF_XTP		pseudo_AF_XTP	
#define	PF_COIP		AF_COIP
#define	PF_CNT		AF_CNT
#define	PF_SIP		AF_SIP
#define	PF_IPX		AF_IPX
#define PF_RTIP		pseudo_AF_RTIP	
#define PF_PIP		pseudo_AF_PIP
#define	PF_ISDN		AF_ISDN
#define	PF_KEY		pseudo_AF_KEY
#define	PF_INET6	AF_INET6
#define	PF_NATM		AF_NATM
#define	PF_ATM		AF_ATM
#define	PF_NETGRAPH	AF_NETGRAPH
#define	PF_SLOW		AF_SLOW
#define PF_SCLUSTER	AF_SCLUSTER
#define	PF_ARP		AF_ARP
#define	PF_BLUETOOTH	AF_BLUETOOTH
#define	PF_MAX		AF_MAX
#define NET_MAXID	AF_MAX
#define CTL_NET_NAMES { \
	{ 0, 0 }, \
	{ "unix", CTLTYPE_NODE }, \
	{ "inet", CTLTYPE_NODE }, \
	{ "implink", CTLTYPE_NODE }, \
	{ "pup", CTLTYPE_NODE }, \
	{ "chaos", CTLTYPE_NODE }, \
	{ "xerox_ns", CTLTYPE_NODE }, \
	{ "iso", CTLTYPE_NODE }, \
	{ "emca", CTLTYPE_NODE }, \
	{ "datakit", CTLTYPE_NODE }, \
	{ "ccitt", CTLTYPE_NODE }, \
	{ "ibm_sna", CTLTYPE_NODE }, \
	{ "decnet", CTLTYPE_NODE }, \
	{ "dec_dli", CTLTYPE_NODE }, \
	{ "lat", CTLTYPE_NODE }, \
	{ "hylink", CTLTYPE_NODE }, \
	{ "appletalk", CTLTYPE_NODE }, \
	{ "route", CTLTYPE_NODE }, \
	{ "link_layer", CTLTYPE_NODE }, \
	{ "xtp", CTLTYPE_NODE }, \
	{ "coip", CTLTYPE_NODE }, \
	{ "cnt", CTLTYPE_NODE }, \
	{ "rtip", CTLTYPE_NODE }, \
	{ "ipx", CTLTYPE_NODE }, \
	{ "sip", CTLTYPE_NODE }, \
	{ "pip", CTLTYPE_NODE }, \
	{ "isdn", CTLTYPE_NODE }, \
	{ "key", CTLTYPE_NODE }, \
	{ "inet6", CTLTYPE_NODE }, \
	{ "natm", CTLTYPE_NODE }, \
	{ "atm", CTLTYPE_NODE }, \
	{ "hdrcomplete", CTLTYPE_NODE }, \
	{ "netgraph", CTLTYPE_NODE }, \
	{ "snp", CTLTYPE_NODE }, \
	{ "scp", CTLTYPE_NODE }, \
}
#define NET_RT_DUMP	1		
#define NET_RT_FLAGS	2		
#define NET_RT_IFLIST	3		
#define	NET_RT_IFMALIST	4		
#define	NET_RT_IFLISTL	5		
#define	NET_RT_MAXID	6
#define CTL_NET_RT_NAMES { \
	{ 0, 0 }, \
	{ "dump", CTLTYPE_STRUCT }, \
	{ "flags", CTLTYPE_STRUCT }, \
	{ "iflist", CTLTYPE_STRUCT }, \
	{ "ifmalist", CTLTYPE_STRUCT }, \
	{ "iflistl", CTLTYPE_STRUCT }, \
}
#endif 
#define	SOMAXCONN	128
struct msghdr {
	void		*msg_name;		
	socklen_t	 msg_namelen;		
	struct iovec	*msg_iov;		
	int		 msg_iovlen;		
	void		*msg_control;		
	socklen_t	 msg_controllen;	
	int		 msg_flags;		
};
#define	MSG_OOB		0x1		
#define	MSG_PEEK	0x2		
#define	MSG_DONTROUTE	0x4		
#define	MSG_EOR		0x8		
#define	MSG_TRUNC	0x10		
#define	MSG_CTRUNC	0x20		
#define	MSG_WAITALL	0x40		
#define MSG_NOTIFICATION 0x2000         
#if __BSD_VISIBLE
#define	MSG_DONTWAIT	0x80		
#define	MSG_EOF		0x100		
#define	MSG_NBIO	0x4000		
#define	MSG_COMPAT      0x8000		
#endif
#ifdef _KERNEL
#define	MSG_SOCALLBCK   0x10000		
#endif
#if __BSD_VISIBLE
#define	MSG_NOSIGNAL	0x20000		
#endif
struct cmsghdr {
	socklen_t	cmsg_len;		
	int		cmsg_level;		
	int		cmsg_type;		
};
#if __BSD_VISIBLE
#define CMGROUP_MAX 16
struct cmsgcred {
	pid_t	cmcred_pid;		
	uid_t	cmcred_uid;		
	uid_t	cmcred_euid;		
	gid_t	cmcred_gid;		
	short	cmcred_ngroups;		
	gid_t	cmcred_groups[CMGROUP_MAX];	
};
struct sockcred {
	uid_t	sc_uid;			
	uid_t	sc_euid;		
	gid_t	sc_gid;			
	gid_t	sc_egid;		
	int	sc_ngroups;		
	gid_t	sc_groups[1];		
};
#define	SOCKCREDSIZE(ngrps) \
	(sizeof(struct sockcred) + (sizeof(gid_t) * ((ngrps) - 1)))
#endif 
#define	CMSG_DATA(cmsg)		((unsigned char *)(cmsg) + \
				 _ALIGN(sizeof(struct cmsghdr)))
#define	CMSG_NXTHDR(mhdr, cmsg)	\
	((char *)(cmsg) == NULL ? CMSG_FIRSTHDR(mhdr) : \
	    ((char *)(cmsg) + _ALIGN(((struct cmsghdr *)(cmsg))->cmsg_len) + \
	  _ALIGN(sizeof(struct cmsghdr)) > \
	    (char *)(mhdr)->msg_control + (mhdr)->msg_controllen) ? \
	    (struct cmsghdr *)0 : \
	    (struct cmsghdr *)(void *)((char *)(cmsg) + \
	    _ALIGN(((struct cmsghdr *)(cmsg))->cmsg_len)))
#define	CMSG_FIRSTHDR(mhdr) \
	((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? \
	 (struct cmsghdr *)(mhdr)->msg_control : \
	 (struct cmsghdr *)NULL)
#if __BSD_VISIBLE
#define	CMSG_SPACE(l)		(_ALIGN(sizeof(struct cmsghdr)) + _ALIGN(l))
#define	CMSG_LEN(l)		(_ALIGN(sizeof(struct cmsghdr)) + (l))
#endif
#ifdef _KERNEL
#define	CMSG_ALIGN(n)	_ALIGN(n)
#endif
#define	SCM_RIGHTS	0x01		
#if __BSD_VISIBLE
#define	SCM_TIMESTAMP	0x02		
#define	SCM_CREDS	0x03		
#define	SCM_BINTIME	0x04		
#endif
#if __BSD_VISIBLE
struct osockaddr {
	unsigned short sa_family;	
	char	sa_data[14];		
};
struct omsghdr {
	char	*msg_name;		
	int	msg_namelen;		
	struct	iovec *msg_iov;		
	int	msg_iovlen;		
	char	*msg_accrights;		
	int	msg_accrightslen;
};
#endif
#define	SHUT_RD		0		
#define	SHUT_WR		1		
#define	SHUT_RDWR	2		
#define PRU_FLUSH_RD     SHUT_RD
#define PRU_FLUSH_WR     SHUT_WR
#define PRU_FLUSH_RDWR   SHUT_RDWR
#if __BSD_VISIBLE
struct sf_hdtr {
	struct iovec *headers;	
	int hdr_cnt;		
	struct iovec *trailers;	
	int trl_cnt;		
};
#define	SF_NODISKIO     0x00000001
#define	SF_MNOWAIT	0x00000002
#define	SF_SYNC		0x00000004
#endif
#ifndef	_KERNEL
#include <sys/cdefs.h>
__BEGIN_DECLS
int	accept(int, struct sockaddr * __restrict, socklen_t * __restrict);
int	bind(int, const struct sockaddr *, socklen_t);
int	connect(int, const struct sockaddr *, socklen_t);
int	getpeername(int, struct sockaddr * __restrict, socklen_t * __restrict);
int	getsockname(int, struct sockaddr * __restrict, socklen_t * __restrict);
int	getsockopt(int, int, int, void * __restrict, socklen_t * __restrict);
int	listen(int, int);
ssize_t	recv(int, void *, size_t, int);
ssize_t	recvfrom(int, void *, size_t, int, struct sockaddr * __restrict, socklen_t * __restrict);
ssize_t	recvmsg(int, struct msghdr *, int);
ssize_t	send(int, const void *, size_t, int);
ssize_t	sendto(int, const void *,
	    size_t, int, const struct sockaddr *, socklen_t);
ssize_t	sendmsg(int, const struct msghdr *, int);
#if __BSD_VISIBLE
int	sendfile(int, int, off_t, size_t, struct sf_hdtr *, off_t *, int);
int	setfib(int);
#endif
int	setsockopt(int, int, int, const void *, socklen_t);
int	shutdown(int, int);
int	sockatmark(int);
int	socket(int, int, int);
int	socketpair(int, int, int, int *);
__END_DECLS
#endif 
#ifdef _KERNEL
struct socket;
struct tcpcb *so_sototcpcb(struct socket *so);
struct inpcb *so_sotoinpcb(struct socket *so);
struct sockbuf *so_sockbuf_snd(struct socket *);
struct sockbuf *so_sockbuf_rcv(struct socket *);
int so_state_get(const struct socket *);
void so_state_set(struct socket *, int);
int so_options_get(const struct socket *);
void so_options_set(struct socket *, int);
int so_error_get(const struct socket *);
void so_error_set(struct socket *, int);
int so_linger_get(const struct socket *);
void so_linger_set(struct socket *, int);
struct protosw *so_protosw_get(const struct socket *);
void so_protosw_set(struct socket *, struct protosw *);
void so_sorwakeup_locked(struct socket *so);
void so_sowwakeup_locked(struct socket *so);
void so_sorwakeup(struct socket *so);
void so_sowwakeup(struct socket *so);
void so_lock(struct socket *so);
void so_unlock(struct socket *so);
void so_listeners_apply_all(struct socket *so, void (*func)(struct socket *, void *), void *arg);
#endif
#endif 
#ifndef _SYS_UNISTD_H_
#define	_SYS_UNISTD_H_
#include <sys/cdefs.h>
#define	_POSIX_ADVISORY_INFO		200112L
#define	_POSIX_ASYNCHRONOUS_IO		0
#define	_POSIX_CHOWN_RESTRICTED		1
#define	_POSIX_CLOCK_SELECTION		(-1)
#define	_POSIX_CPUTIME			(-1)
#define	_POSIX_FSYNC			200112L
#define	_POSIX_IPV6			0
#define	_POSIX_JOB_CONTROL		1
#define	_POSIX_MAPPED_FILES		200112L
#define	_POSIX_MEMLOCK			(-1)
#define	_POSIX_MEMLOCK_RANGE		200112L
#define	_POSIX_MEMORY_PROTECTION	200112L
#define	_POSIX_MESSAGE_PASSING		200112L
#define	_POSIX_MONOTONIC_CLOCK		200112L
#define	_POSIX_NO_TRUNC			1
#define	_POSIX_PRIORITIZED_IO		(-1)
#define	_POSIX_PRIORITY_SCHEDULING	200112L
#define	_POSIX_RAW_SOCKETS		200112L
#define	_POSIX_REALTIME_SIGNALS		200112L
#define	_POSIX_SEMAPHORES		200112L
#define	_POSIX_SHARED_MEMORY_OBJECTS	200112L
#define	_POSIX_SPORADIC_SERVER		(-1)
#define	_POSIX_SYNCHRONIZED_IO		(-1)
#define	_POSIX_TIMEOUTS			200112L
#define	_POSIX_TIMERS			200112L
#define	_POSIX_TYPED_MEMORY_OBJECTS	(-1)
#define	_POSIX_VDISABLE			0xff
#if __XSI_VISIBLE
#define	_XOPEN_SHM			1
#define	_XOPEN_STREAMS			(-1)
#endif
#ifdef	_NOT_AVAILABLE
#define	_POSIX_SAVED_IDS	1 
#endif
#define	_POSIX_VERSION		200112L
#define	F_OK		0	
#define	X_OK		0x01	
#define	W_OK		0x02	
#define	R_OK		0x04	
#ifndef SEEK_SET
#define	SEEK_SET	0	
#define	SEEK_CUR	1	
#define	SEEK_END	2	
#endif
#if __BSD_VISIBLE
#define	SEEK_DATA	3	
#define	SEEK_HOLE	4	
#endif
#ifndef _POSIX_SOURCE
#define	L_SET		SEEK_SET
#define	L_INCR		SEEK_CUR
#define	L_XTND		SEEK_END
#endif
#define	_PC_LINK_MAX		 1
#define	_PC_MAX_CANON		 2
#define	_PC_MAX_INPUT		 3
#define	_PC_NAME_MAX		 4
#define	_PC_PATH_MAX		 5
#define	_PC_PIPE_BUF		 6
#define	_PC_CHOWN_RESTRICTED	 7
#define	_PC_NO_TRUNC		 8
#define	_PC_VDISABLE		 9
#if __POSIX_VISIBLE >= 199309
#define	_PC_ASYNC_IO		53
#define	_PC_PRIO_IO		54
#define	_PC_SYNC_IO		55
#endif
#if __POSIX_VISIBLE >= 200112
#define	_PC_ALLOC_SIZE_MIN	10
#define	_PC_FILESIZEBITS	12
#define	_PC_REC_INCR_XFER_SIZE	14
#define	_PC_REC_MAX_XFER_SIZE	15
#define	_PC_REC_MIN_XFER_SIZE	16
#define	_PC_REC_XFER_ALIGN	17
#define	_PC_SYMLINK_MAX		18
#endif
#if __BSD_VISIBLE
#define	_PC_ACL_EXTENDED	59
#define	_PC_ACL_PATH_MAX	60
#define	_PC_CAP_PRESENT		61
#define	_PC_INF_PRESENT		62
#define	_PC_MAC_PRESENT		63
#define	_PC_ACL_NFS4		64
#endif
#define	_PC_MIN_HOLE_SIZE	21
#if __BSD_VISIBLE
#define	RFNAMEG		(1<<0)	
#define	RFENVG		(1<<1)	
#define	RFFDG		(1<<2)	
#define	RFNOTEG		(1<<3)	
#define	RFPROC		(1<<4)	
#define	RFMEM		(1<<5)	
#define	RFNOWAIT	(1<<6)	
#define	RFCNAMEG	(1<<10)	
#define	RFCENVG		(1<<11)	
#define	RFCFDG		(1<<12)	
#define	RFTHREAD	(1<<13)	
#define	RFSIGSHARE	(1<<14)	
#define	RFLINUXTHPN	(1<<16)	
#define	RFSTOPPED	(1<<17)	
#define	RFHIGHPID	(1<<18)	
#define	RFTSIGZMB	(1<<19)	
#define	RFTSIGSHIFT	20	
#define	RFTSIGMASK	0xFF
#define	RFTSIGNUM(flags)	(((flags) >> RFTSIGSHIFT) & RFTSIGMASK)
#define	RFTSIGFLAGS(signum)	((signum) << RFTSIGSHIFT)
#define	RFPROCDESC	(1<<28)	
#define	RFPPWAIT	(1<<31)	
#define	RFFLAGS		(RFFDG | RFPROC | RFMEM | RFNOWAIT | RFCFDG | \
    RFTHREAD | RFSIGSHARE | RFLINUXTHPN | RFSTOPPED | RFHIGHPID | RFTSIGZMB | \
    RFPROCDESC | RFPPWAIT)
#define	RFKERNELONLY	(RFSTOPPED | RFHIGHPID | RFPPWAIT | RFPROCDESC)
#endif 
#endif 
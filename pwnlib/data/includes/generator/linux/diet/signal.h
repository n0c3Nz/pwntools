#ifndef _SIGNAL_H
#define _SIGNAL_H
#include <sys/cdefs.h>
__BEGIN_DECLS
#define __WANT_POSIX1B_SIGNALS__
#include <sys/types.h>
#include <endian.h>
#define NSIG		32
#ifdef __mips__
#define _NSIG		128
#else
#define _NSIG		65
#endif
#define SIGHUP		 1
#define SIGINT		 2
#define SIGQUIT		 3
#define SIGILL		 4
#define SIGTRAP		 5
#define SIGABRT		 6
#define SIGIOT		 6
#define SIGFPE		 8
#define SIGKILL		 9
#define SIGSEGV		11
#define SIGPIPE		13
#define SIGALRM		14
#define SIGTERM		15
#define SIGUNUSED	31
#if defined(__i386__) || defined(__x86_64__) || defined(__powerpc__) || defined(__arm__) \
	|| defined(__s390__) || defined(__ia64__) || defined(__powerpc64__) || defined(__aarch64__)
#define SIGBUS		 7
#define SIGUSR1		10
#define SIGUSR2		12
#define SIGSTKFLT	16
#define SIGCHLD		17
#define SIGCONT		18
#define SIGSTOP		19
#define SIGTSTP		20
#define SIGTTIN		21
#define SIGTTOU		22
#define SIGURG		23
#define SIGXCPU		24
#define SIGXFSZ		25
#define SIGVTALRM	26
#define SIGPROF		27
#define SIGWINCH	28
#define SIGIO		29
#define SIGPWR		30
#define SIGSYS		31
#elif defined(__alpha__) || defined(__sparc__)
#define SIGEMT		 7
#define SIGBUS		10
#define SIGSYS		12
#define SIGURG		16
#define SIGSTOP		17
#define SIGTSTP		18
#define SIGCONT		19
#define SIGCHLD		20
#define SIGTTIN		21
#define SIGTTOU		22
#define SIGIO		23
#define SIGXCPU		24
#define SIGXFSZ		25
#define SIGVTALRM	26
#define SIGPROF		27
#define SIGWINCH	28
#define SIGPWR		29
#define SIGUSR1		30
#define SIGUSR2		31
#if defined(__alpha__)
#define SIGINFO		SIGPWR
#endif
#elif defined(__mips__)
#define SIGEMT		 7
#define SIGBUS		10
#define SIGSYS		12
#define SIGUSR1		16
#define SIGUSR2		17
#define SIGCHLD		18
#define SIGPWR		19
#define SIGWINCH	20
#define SIGURG		21
#define SIGIO		22
#define SIGSTOP		23
#define SIGTSTP		24
#define SIGCONT		25
#define SIGTTIN		26
#define SIGTTOU		27
#define SIGVTALRM	28
#define SIGPROF		29
#define SIGXCPU		30
#define SIGXFSZ		31
#elif defined(__hppa__)
#define SIGSTKFLT	 7
#define SIGBUS		10
#define SIGXCPU		12
#define SIGUSR1		16
#define SIGUSR2		17
#define SIGCHLD		18
#define SIGPWR		19
#define SIGVTALRM	20
#define SIGPROF		21
#define SIGIO		22
#define SIGWINCH	23
#define SIGSTOP		24
#define SIGTSTP		25
#define SIGCONT		26
#define SIGTTIN		27
#define SIGTTOU		28
#define SIGURG		29
#define SIGXFSZ		30
#define SIGUNUSED	31
#define SIGRESERVE	SIGUNUSED
#define SIGSYS		31
#else
#error signal layout not yet known
#endif
#define SIGCLD		SIGCHLD
#define SIGPOLL		SIGIO
#define SIGLOST		SIGPWR
#define SIGRTMIN	32
#define SIGRTMAX	(_NSIG-1)
#if defined(__alpha__)
#define SA_ONSTACK	0x00000001
#define SA_RESTART	0x00000002
#define SA_NOCLDSTOP	0x00000004
#define SA_NODEFER	0x00000008
#define SA_RESETHAND	0x00000010
#define SA_NOCLDWAIT	0x00000020 
#define SA_SIGINFO	0x00000040
#define SA_INTERRUPT	0x20000000 
#elif defined(__hppa__)
#define SA_ONSTACK	0x00000001
#define SA_RESETHAND	0x00000004
#define SA_NOCLDSTOP	0x00000008
#define SA_SIGINFO	0x00000010
#define SA_NODEFER	0x00000020
#define SA_RESTART	0x00000040
#define SA_NOCLDWAIT	0x00000080 
#define _SA_SIGGFAULT	0x00000100 
#define SA_INTERRUPT	0x20000000 
#define SA_RESTORER	0x04000000 
#elif defined (__sparc__)
#define SV_SSTACK	1	
#define SV_INTR		2	
#define SV_RESET	4	
#define SV_IGNCHILD	8	
#define SA_NOCLDSTOP	SV_IGNCHILD
#define SA_STACK	SV_SSTACK
#define SA_ONSTACK	SV_SSTACK
#define SA_RESTART	SV_INTR
#define SA_RESETHAND	SV_RESET
#define SA_INTERRUPT	0x10
#define SA_NODEFER	0x20
#define SA_SHIRQ	0x40
#define SA_NOCLDWAIT	0x100	
#define SA_SIGINFO	0x200
#else
#if defined (__mips__)
#define SA_NOCLDSTOP	0x00000001
#define SA_SIGINFO	0x00000008
#define SA_NOCLDWAIT	0x00010000 
#else
#define SA_NOCLDSTOP	0x00000001
#define SA_NOCLDWAIT	0x00000002 
#define SA_SIGINFO	0x00000004
#endif
#if defined(__arm__)
#define SA_THIRTYTWO	0x02000000
#endif
#define SA_RESTORER	0x04000000
#define SA_ONSTACK	0x08000000
#define SA_RESTART	0x10000000
#define SA_INTERRUPT	0x20000000 
#define SA_NODEFER	0x40000000
#define SA_RESETHAND	0x80000000
#endif
#define SA_NOMASK	SA_NODEFER
#define SA_ONESHOT	SA_RESETHAND
#define SS_ONSTACK	1
#define SS_DISABLE	2
#define MINSIGSTKSZ	2048
#define SIGSTKSZ	8192
#if defined(__sparc__)
#define SIG_BLOCK	1
#define SIG_UNBLOCK	2
#define SIG_SETMASK	4
#elif defined(__alpha__) || defined(__mips__)
#define SIG_BLOCK	1
#define SIG_UNBLOCK	2
#define SIG_SETMASK	3
#else
#define SIG_BLOCK	0	
#define SIG_UNBLOCK	1	
#define SIG_SETMASK	2	
#endif
typedef int sig_atomic_t;
typedef void (*sighandler_t)(int);
#ifdef _BSD_SOURCE
typedef sighandler_t sig_t;
#endif
#ifdef _GNU_SOURCE
typedef sighandler_t __sighandler_t;	
#endif
#define SIG_DFL ((sighandler_t)0L)	
#define SIG_IGN ((sighandler_t)1L)	
#define SIG_ERR ((sighandler_t)-1L)	
typedef union sigval {
  int sival_int;
  void *sival_ptr;
} sigval_t;
#define SI_MAX_SIZE	128
#if __WORDSIZE == 64
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int32_t)) - 4)
#else
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int32_t)) - 3)
#endif
#ifdef __sparc_v9__
typedef int32_t __band_t;
#else
typedef long __band_t;
#endif
typedef struct siginfo {
  int32_t si_signo;
  int32_t si_errno;
  int32_t si_code;
  union {
    int32_t _pad[SI_PAD_SIZE];
    struct {
      pid_t _pid;		
      uid_t _uid;		
    } _kill;
    struct {
      uint32_t _timer1;
      uint32_t _timer2;
    } _timer;
    struct {
      pid_t _pid;		
      uid_t _uid;		
      sigval_t _sigval;
    } _rt;
    struct {
      pid_t _pid;		
      uid_t _uid;		
      int32_t _status;		
      clock_t _utime;
      clock_t _stime;
    } _sigchld;
    struct {
      void *_addr; 
    } _sigfault;
    struct {
      __band_t _band;	
      int32_t _fd;
    } _sigpoll;
  } _sifields;
} siginfo_t;
#define si_pid		_sifields._kill._pid
#define si_uid		_sifields._kill._uid
#define si_status	_sifields._sigchld._status
#define si_utime	_sifields._sigchld._utime
#define si_stime	_sifields._sigchld._stime
#define si_value	_sifields._rt._sigval
#define si_int		_sifields._rt._sigval.sival_int
#define si_ptr		_sifields._rt._sigval.sival_ptr
#define si_addr		_sifields._sigfault._addr
#define si_band		_sifields._sigpoll._band
#define si_fd		_sifields._sigpoll._fd
enum {
  SI_ASYNCNL = -6,		
# define SI_ASYNCNL	SI_ASYNCNL
  SI_SIGIO,			
# define SI_SIGIO	SI_SIGIO
  SI_ASYNCIO,			
# define SI_ASYNCIO	SI_ASYNCIO
  SI_MESGQ,			
# define SI_MESGQ	SI_MESGQ
  SI_TIMER,			
# define SI_TIMER	SI_TIMER
  SI_QUEUE,			
# define SI_QUEUE	SI_QUEUE
  SI_USER,			
# define SI_USER	SI_USER
  SI_KERNEL = 0x80		
#define SI_KERNEL	SI_KERNEL
};
enum {
  ILL_ILLOPC = 1,		
# define ILL_ILLOPC	ILL_ILLOPC
  ILL_ILLOPN,			
# define ILL_ILLOPN	ILL_ILLOPN
  ILL_ILLADR,			
# define ILL_ILLADR	ILL_ILLADR
  ILL_ILLTRP,			
# define ILL_ILLTRP	ILL_ILLTRP
  ILL_PRVOPC,			
# define ILL_PRVOPC	ILL_PRVOPC
  ILL_PRVREG,			
# define ILL_PRVREG	ILL_PRVREG
  ILL_COPROC,			
# define ILL_COPROC	ILL_COPROC
  ILL_BADSTK			
# define ILL_BADSTK	ILL_BADSTK
};
enum {
  FPE_INTDIV = 1,		
# define FPE_INTDIV	FPE_INTDIV
  FPE_INTOVF,			
# define FPE_INTOVF	FPE_INTOVF
  FPE_FLTDIV,			
# define FPE_FLTDIV	FPE_FLTDIV
  FPE_FLTOVF,			
# define FPE_FLTOVF	FPE_FLTOVF
  FPE_FLTUND,			
# define FPE_FLTUND	FPE_FLTUND
  FPE_FLTRES,			
# define FPE_FLTRES	FPE_FLTRES
  FPE_FLTINV,			
# define FPE_FLTINV	FPE_FLTINV
  FPE_FLTSUB			
# define FPE_FLTSUB	FPE_FLTSUB
};
enum {
  SEGV_MAPERR = 1,		
# define SEGV_MAPERR	SEGV_MAPERR
  SEGV_ACCERR			
# define SEGV_ACCERR	SEGV_ACCERR
};
enum {
  BUS_ADRALN = 1,		
# define BUS_ADRALN	BUS_ADRALN
  BUS_ADRERR,			
# define BUS_ADRERR	BUS_ADRERR
  BUS_OBJERR			
# define BUS_OBJERR	BUS_OBJERR
};
enum {
  TRAP_BRKPT = 1,		
# define TRAP_BRKPT	TRAP_BRKPT
  TRAP_TRACE			
# define TRAP_TRACE	TRAP_TRACE
};
enum {
  CLD_EXITED = 1,		
# define CLD_EXITED	CLD_EXITED
  CLD_KILLED,			
# define CLD_KILLED	CLD_KILLED
  CLD_DUMPED,			
# define CLD_DUMPED	CLD_DUMPED
  CLD_TRAPPED,			
# define CLD_TRAPPED	CLD_TRAPPED
  CLD_STOPPED,			
# define CLD_STOPPED	CLD_STOPPED
  CLD_CONTINUED			
# define CLD_CONTINUED	CLD_CONTINUED
};
enum {
  POLL_IN = 1,			
# define POLL_IN	POLL_IN
  POLL_OUT,			
# define POLL_OUT	POLL_OUT
  POLL_MSG,			
# define POLL_MSG	POLL_MSG
  POLL_ERR,			
# define POLL_ERR	POLL_ERR
  POLL_PRI,			
# define POLL_PRI	POLL_PRI
  POLL_HUP			
# define POLL_HUP	POLL_HUP
};
#define _SIGSET_WORDS	(1024 / (8 * sizeof (unsigned long int)))
typedef struct {
  unsigned long sig[_SIGSET_WORDS];
} sigset_t;
struct sigaction {
#if defined(__alpha__) || defined(__ia64__) || defined(__hppa__)
  union {
    sighandler_t _sa_handler;
    void (*_sa_sigaction)(int, siginfo_t*, void*);
  } _u;
  unsigned long sa_flags;
  sigset_t sa_mask;
#elif defined(__mips__)
  unsigned long sa_flags;
  union {
    sighandler_t _sa_handler;
    void (*_sa_sigaction)(int, siginfo_t*, void*);
  } _u;
  sigset_t sa_mask;
  void (*sa_restorer)(void);
  int32_t sa_resv[1];
#else	
  union {
    sighandler_t _sa_handler;
    void (*_sa_sigaction)(int, siginfo_t*, void*);
  } _u;
  unsigned long sa_flags;
  void (*sa_restorer)(void);
  sigset_t sa_mask;
#endif
};
#define sa_handler	_u._sa_handler
#define sa_sigaction	_u._sa_sigaction
#define SIGEV_SIGNAL    0       
#define SIGEV_NONE      1       
#define SIGEV_THREAD    2       
#define SIGEV_THREAD_ID 4       
#define SIGEV_MAX_SIZE  64
#ifndef SIGEV_PAD_SIZE
#define SIGEV_PAD_SIZE  ((SIGEV_MAX_SIZE/sizeof(int32_t)) - 3)
#endif
typedef struct sigevent {
  sigval_t sigev_value;
  int32_t sigev_signo;
  int32_t sigev_notify;
  union {
    int32_t _pad[SIGEV_PAD_SIZE];
    int32_t _tid;
    struct {
      void(*_function)(sigval_t);
      void*_attribute; 
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;
#define sigev_notify_function   _sigev_un._sigev_thread._function
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define sigev_notify_thread_id  _sigev_un._tid
typedef struct sigaltstack {
#if defined(__mips__)
  void *ss_sp;
  size_t ss_size;
  int32_t ss_flags;
#else
  void *ss_sp;
  int32_t ss_flags;
  size_t ss_size;
#endif
} stack_t;
int sigaltstack(const struct sigaltstack *newstack, struct sigaltstack *oldstack) __THROW;
int sigemptyset(sigset_t *set) __THROW;
int sigfillset(sigset_t *set) __THROW;
int sigaddset(sigset_t *set, int signum) __THROW;
int sigdelset(sigset_t *set, int signum) __THROW;
int sigismember(const sigset_t *set, int signo) __THROW;
int sigsuspend(const sigset_t *mask) __THROW;
int sigpending(sigset_t *set) __THROW;
int sigprocmask(int how, const sigset_t *set, sigset_t *oldset) __THROW;
#ifdef _GNU_SOURCE
int sigisemptyset(const sigset_t *set) __THROW __pure;
int sigorset(sigset_t *set, const sigset_t *left, const sigset_t *right) __THROW;
int sigandset(sigset_t *set, const sigset_t *left, const sigset_t *right) __THROW;
#endif
sighandler_t signal(int signum, sighandler_t action);
int raise (int sig) __THROW;
int kill(pid_t pid, int sig) __THROW;
int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact) __THROW;
#include <sys/time.h>
int sigtimedwait(const sigset_t *mask, siginfo_t *info, const struct timespec *ts) __THROW;
int sigqueueinfo(pid_t pid, int sig, siginfo_t *info) __THROW;
int siginterrupt(int sig, int flag) __THROW;
int killpg(pid_t pgrp, int sig) __THROW;
#define sigwaitinfo(m, i) sigtimedwait((m),(i),0)
int sigwait(const sigset_t* set,int* sig) __THROW;
extern const char *const* sys_siglist;
#include <sys/ucontext.h>
__END_DECLS
#endif
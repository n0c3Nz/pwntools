#ifndef _SYS_SIGNAL_H_
#define	_SYS_SIGNAL_H_
#include <sys/cdefs.h>
#include <sys/_types.h>
#include <sys/_sigset.h>
#include <machine/_limits.h>	
#include <machine/signal.h>	
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SIGHUP		1	
#endif
#define	SIGINT		2	
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SIGQUIT		3	
#endif
#define	SIGILL		4	
#if __XSI_VISIBLE
#define	SIGTRAP		5	
#endif
#define	SIGABRT		6	
#if __BSD_VISIBLE
#define	SIGIOT		SIGABRT	
#define	SIGEMT		7	
#endif
#define	SIGFPE		8	
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SIGKILL		9	
#endif
#if __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE
#define	SIGBUS		10	
#endif
#define	SIGSEGV		11	
#if __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE
#define	SIGSYS		12	
#endif
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SIGPIPE		13	
#define	SIGALRM		14	
#endif
#define	SIGTERM		15	
#if __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE
#define	SIGURG		16	
#endif
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SIGSTOP		17	
#define	SIGTSTP		18	
#define	SIGCONT		19	
#define	SIGCHLD		20	
#define	SIGTTIN		21	
#define	SIGTTOU		22	
#endif
#if __BSD_VISIBLE
#define	SIGIO		23	
#endif
#if __XSI_VISIBLE
#define	SIGXCPU		24	
#define	SIGXFSZ		25	
#define	SIGVTALRM	26	
#define	SIGPROF		27	
#endif
#if __BSD_VISIBLE
#define	SIGWINCH	28	
#define	SIGINFO		29	
#endif
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SIGUSR1		30	
#define	SIGUSR2		31	
#endif
#if __BSD_VISIBLE
#define	SIGTHR		32	
#define	SIGLWP		SIGTHR
#endif
#define	SIGRTMIN	65
#define	SIGRTMAX	126
#define	SIG_DFL		((__sighandler_t *)0)
#define	SIG_IGN		((__sighandler_t *)1)
#define	SIG_ERR		((__sighandler_t *)-1)
#define SIG_HOLD        ((__sighandler_t *)3)
typedef	void __sighandler_t(int);
#if __POSIX_VISIBLE || __XSI_VISIBLE
#ifndef _SIGSET_T_DECLARED
#define	_SIGSET_T_DECLARED
typedef	__sigset_t	sigset_t;
#endif
#endif
#if __POSIX_VISIBLE >= 199309 || __XSI_VISIBLE >= 500
union sigval {
	int	sival_int;
	void	*sival_ptr;
	int     sigval_int;
	void    *sigval_ptr;
};
#endif
#if __POSIX_VISIBLE >= 199309
struct sigevent {
	int	sigev_notify;		
	int	sigev_signo;		
	union sigval sigev_value;	
	union {
		__lwpid_t	_threadid;
		struct {
			void (*_function)(union sigval);
			void *_attribute; 
		} _sigev_thread;
		unsigned short _kevent_flags;
		long __spare__[8];
	} _sigev_un;
};
#if __BSD_VISIBLE
#define	sigev_notify_kqueue		sigev_signo
#define	sigev_notify_kevent_flags	_sigev_un._kevent_flags
#define	sigev_notify_thread_id		_sigev_un._threadid
#endif
#define	sigev_notify_function		_sigev_un._sigev_thread._function
#define	sigev_notify_attributes		_sigev_un._sigev_thread._attribute
#define	SIGEV_NONE	0		
#define	SIGEV_SIGNAL	1		
#define	SIGEV_THREAD	2		
#if __BSD_VISIBLE
#define	SIGEV_KEVENT	3		
#define	SIGEV_THREAD_ID	4		
#endif
#endif 
#if __POSIX_VISIBLE >= 199309 || __XSI_VISIBLE
typedef	struct __siginfo {
	int	si_signo;		
	int	si_errno;		
	int	si_code;		
	__pid_t	si_pid;			
	__uid_t	si_uid;			
	int	si_status;		
	void	*si_addr;		
	union sigval si_value;		
	union	{
		struct {
			int	_trapno;
		} _fault;
		struct {
			int	_timerid;
			int	_overrun;
		} _timer;
		struct {
			int	_mqd;
		} _mesgq;
		struct {
			long	_band;		
		} _poll;			
		struct {
			long	__spare1__;
			int	__spare2__[7];
		} __spare__;
	} _reason;
} siginfo_t;
#define si_trapno	_reason._fault._trapno
#define si_timerid	_reason._timer._timerid
#define si_overrun	_reason._timer._overrun
#define si_mqd		_reason._mesgq._mqd
#define si_band		_reason._poll._band
#define ILL_ILLOPC 	1	
#define ILL_ILLOPN 	2	
#define ILL_ILLADR 	3	
#define ILL_ILLTRP 	4	
#define ILL_PRVOPC 	5	
#define ILL_PRVREG 	6	
#define ILL_COPROC 	7	
#define ILL_BADSTK 	8	
#define BUS_ADRALN	1	
#define BUS_ADRERR	2	
#define BUS_OBJERR	3	
#define SEGV_MAPERR	1	
#define SEGV_ACCERR	2	
#define FPE_INTOVF	1	
#define FPE_INTDIV	2	
#define FPE_FLTDIV	3	
#define FPE_FLTOVF	4	
#define FPE_FLTUND	5	
#define FPE_FLTRES	6	
#define FPE_FLTINV	7	
#define FPE_FLTSUB	8	
#define TRAP_BRKPT	1	
#define TRAP_TRACE	2	
#define	TRAP_DTRACE	3	
#define CLD_EXITED	1	
#define CLD_KILLED	2	
#define CLD_DUMPED	3	
#define CLD_TRAPPED	4	
#define CLD_STOPPED	5	
#define CLD_CONTINUED	6	
#define POLL_IN		1	
#define POLL_OUT	2	
#define POLL_MSG	3	
#define POLL_ERR	4	
#define POLL_PRI	5	
#define POLL_HUP	6	
#endif
#if __POSIX_VISIBLE || __XSI_VISIBLE
struct __siginfo;
struct sigaction {
	union {
		void    (*__sa_handler)(int);
		void    (*__sa_sigaction)(int, struct __siginfo *, void *);
	} __sigaction_u;		
	int	sa_flags;		
	sigset_t sa_mask;		
};
#define	sa_handler	__sigaction_u.__sa_handler
#endif
#if __XSI_VISIBLE
#define	sa_sigaction	__sigaction_u.__sa_sigaction
#endif
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SA_NOCLDSTOP	0x0008	
#endif 
#if __XSI_VISIBLE
#define	SA_ONSTACK	0x0001	
#define	SA_RESTART	0x0002	
#define	SA_RESETHAND	0x0004	
#define	SA_NODEFER	0x0010	
#define	SA_NOCLDWAIT	0x0020	
#define	SA_SIGINFO	0x0040	
#endif
#if __BSD_VISIBLE
#define	NSIG		32	
#endif
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SI_NOINFO	0		
#define	SI_USER		0x10001		
#define	SI_QUEUE	0x10002		
#define	SI_TIMER	0x10003		
#define	SI_ASYNCIO	0x10004		
#define	SI_MESGQ	0x10005		
#define	SI_KERNEL	0x10006
#define	SI_LWP		0x10007		
#endif
#if __BSD_VISIBLE
#define	SI_UNDEFINED	0
#endif
#if __BSD_VISIBLE
typedef	__sighandler_t	*sig_t;	
typedef	void __siginfohandler_t(int, struct __siginfo *, void *);
#endif
#if __XSI_VISIBLE
#if __BSD_VISIBLE
typedef	struct sigaltstack {
#else
typedef	struct {
#endif
	char	*ss_sp;			
	__size_t ss_size;		
	int	ss_flags;		
} stack_t;
#define	SS_ONSTACK	0x0001	
#define	SS_DISABLE	0x0004	
#define	MINSIGSTKSZ	__MINSIGSTKSZ		
#define	SIGSTKSZ	(MINSIGSTKSZ + 32768)	
#endif
#if __BSD_VISIBLE
struct sigvec {
	__sighandler_t *sv_handler;	
	int	sv_mask;		
	int	sv_flags;		
};
#define	SV_ONSTACK	SA_ONSTACK
#define	SV_INTERRUPT	SA_RESTART	
#define	SV_RESETHAND	SA_RESETHAND
#define	SV_NODEFER	SA_NODEFER
#define	SV_NOCLDSTOP	SA_NOCLDSTOP
#define	SV_SIGINFO	SA_SIGINFO
#define	sv_onstack	sv_flags	
#endif
#if defined(_KERNEL) && defined(COMPAT_43) && \
    !defined(__i386__)
struct osigcontext {
	int _not_used;
};
#endif
#if __XSI_VISIBLE
struct sigstack {
	char	*ss_sp;			
	int	ss_onstack;		
};
#endif
#if __BSD_VISIBLE || __POSIX_VISIBLE > 0 && __POSIX_VISIBLE <= 200112
#define	sigmask(m)	(1 << ((m)-1))
#endif
#if __BSD_VISIBLE
#define	BADSIG		SIG_ERR
#endif
#if __POSIX_VISIBLE || __XSI_VISIBLE
#define	SIG_BLOCK	1	
#define	SIG_UNBLOCK	2	
#define	SIG_SETMASK	3	
#endif
__BEGIN_DECLS
__sighandler_t *signal(int, __sighandler_t *);
__END_DECLS
#endif 
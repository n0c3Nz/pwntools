#ifndef _SYS_FCNTL_H_
#define	_SYS_FCNTL_H_
#include <sys/cdefs.h>
#include <sys/_types.h>
#ifndef _MODE_T_DECLARED
typedef	__mode_t	mode_t;
#define	_MODE_T_DECLARED
#endif
#ifndef _OFF_T_DECLARED
typedef	__off_t		off_t;
#define	_OFF_T_DECLARED
#endif
#ifndef _PID_T_DECLARED
typedef	__pid_t		pid_t;
#define	_PID_T_DECLARED
#endif
#define	O_RDONLY	0x0000		
#define	O_WRONLY	0x0001		
#define	O_RDWR		0x0002		
#define	O_ACCMODE	0x0003		
#if __BSD_VISIBLE
#define	FREAD		0x0001
#define	FWRITE		0x0002
#endif
#define	O_NONBLOCK	0x0004		
#define	O_APPEND	0x0008		
#if __BSD_VISIBLE
#define	O_SHLOCK	0x0010		
#define	O_EXLOCK	0x0020		
#define	O_ASYNC		0x0040		
#define	O_FSYNC		0x0080		
#endif
#define	O_SYNC		0x0080		
#if __BSD_VISIBLE
#define	O_NOFOLLOW	0x0100		
#endif
#define	O_CREAT		0x0200		
#define	O_TRUNC		0x0400		
#define	O_EXCL		0x0800		
#ifdef _KERNEL
#define	FHASLOCK	0x4000		
#endif
#define	O_NOCTTY	0x8000		
#if __BSD_VISIBLE
#define	O_DIRECT	0x00010000
#endif
#if __BSD_VISIBLE
#define	O_DIRECTORY	0x00020000	
#define	O_EXEC		0x00040000	
#endif
#ifdef	_KERNEL
#define	FEXEC		O_EXEC
#endif
#if __POSIX_VISIBLE >= 200809
#define	O_TTY_INIT	0x00080000	
#define	O_CLOEXEC	0x00100000
#endif
#ifdef _KERNEL
#define	FFLAGS(oflags)	((oflags) + 1)
#define	OFLAGS(fflags)	((fflags) - 1)
#define	FMASK	(FREAD|FWRITE|FAPPEND|FASYNC|FFSYNC|FNONBLOCK|O_DIRECT|FEXEC)
#define	FCNTLFLAGS	(FAPPEND|FASYNC|FFSYNC|FNONBLOCK|FRDAHEAD|O_DIRECT)
#if defined(COMPAT_FREEBSD7) || defined(COMPAT_FREEBSD6) || \
    defined(COMPAT_FREEBSD5) || defined(COMPAT_FREEBSD4)
#define	FPOSIXSHM	O_NOFOLLOW
#undef FCNTLFLAGS
#define	FCNTLFLAGS	(FAPPEND|FASYNC|FFSYNC|FNONBLOCK|FPOSIXSHM|FRDAHEAD| \
			 O_DIRECT)
#endif
#endif
#if __BSD_VISIBLE
#define	FAPPEND		O_APPEND	
#define	FASYNC		O_ASYNC		
#define	FFSYNC		O_FSYNC		
#define	FNONBLOCK	O_NONBLOCK	
#define	FNDELAY		O_NONBLOCK	
#define	O_NDELAY	O_NONBLOCK	
#endif
#if __BSD_VISIBLE
#define	FRDAHEAD	O_CREAT
#endif
#if __BSD_VISIBLE
#define	AT_FDCWD		-100
#define	AT_EACCESS		0x100	
#define	AT_SYMLINK_NOFOLLOW	0x200   
#define	AT_SYMLINK_FOLLOW	0x400	
#define	AT_REMOVEDIR		0x800	
#endif
#define	F_DUPFD		0		
#define	F_GETFD		1		
#define	F_SETFD		2		
#define	F_GETFL		3		
#define	F_SETFL		4		
#if __BSD_VISIBLE || __XSI_VISIBLE || __POSIX_VISIBLE >= 200112
#define	F_GETOWN	5		
#define	F_SETOWN	6		
#endif
#if __BSD_VISIBLE
#define	F_OGETLK	7		
#define	F_OSETLK	8		
#define	F_OSETLKW	9		
#define	F_DUP2FD	10		
#endif
#define	F_GETLK		11		
#define	F_SETLK		12		
#define	F_SETLKW	13		
#if __BSD_VISIBLE
#define	F_SETLK_REMOTE	14		
#define	F_READAHEAD	15		
#define	F_RDAHEAD	16		
#endif
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200809
#define	F_DUPFD_CLOEXEC	17		
#endif
#if __BSD_VISIBLE
#define	F_DUP2FD_CLOEXEC 18		
#endif
#define	FD_CLOEXEC	1		
#define	F_RDLCK		1		
#define	F_UNLCK		2		
#define	F_WRLCK		3		
#if __BSD_VISIBLE
#define	F_UNLCKSYS	4		
#define	F_CANCEL	5		
#endif
#ifdef _KERNEL
#define	F_WAIT		0x010		
#define	F_FLOCK		0x020	 	
#define	F_POSIX		0x040	 	
#define	F_REMOTE	0x080		
#define	F_NOINTR	0x100		
#endif
struct flock {
	off_t	l_start;	
	off_t	l_len;		
	pid_t	l_pid;		
	short	l_type;		
	short	l_whence;	
	int	l_sysid;	
};
#if __BSD_VISIBLE
struct __oflock {
	off_t	l_start;	
	off_t	l_len;		
	pid_t	l_pid;		
	short	l_type;		
	short	l_whence;	
};
#endif
#if __BSD_VISIBLE
#define	LOCK_SH		0x01		
#define	LOCK_EX		0x02		
#define	LOCK_NB		0x04		
#define	LOCK_UN		0x08		
#endif
#if __POSIX_VISIBLE >= 200112
#define	POSIX_FADV_NORMAL	0	
#define	POSIX_FADV_RANDOM	1	
#define	POSIX_FADV_SEQUENTIAL	2	
#define	POSIX_FADV_WILLNEED	3	
#define	POSIX_FADV_DONTNEED	4	
#define	POSIX_FADV_NOREUSE	5	
#endif
#ifndef _KERNEL
__BEGIN_DECLS
int	open(const char *, int, ...);
int	creat(const char *, mode_t);
int	fcntl(int, int, ...);
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200809
int	openat(int, const char *, int, ...);
#endif
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112
int	posix_fadvise(int, off_t, off_t, int);
int	posix_fallocate(int, off_t, off_t);
#endif
#if __BSD_VISIBLE
int	flock(int, int);
#endif
__END_DECLS
#endif
#endif 
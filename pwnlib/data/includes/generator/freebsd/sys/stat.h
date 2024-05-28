#ifndef _SYS_STAT_H_
#define	_SYS_STAT_H_
#include <sys/cdefs.h>
#include <sys/_timespec.h>
#include <sys/_types.h>
#ifndef _BLKSIZE_T_DECLARED
typedef	__blksize_t	blksize_t;
#define	_BLKSIZE_T_DECLARED
#endif
#ifndef _BLKCNT_T_DECLARED
typedef	__blkcnt_t	blkcnt_t;
#define	_BLKCNT_T_DECLARED
#endif
#ifndef _DEV_T_DECLARED
typedef	__dev_t		dev_t;
#define	_DEV_T_DECLARED
#endif
#ifndef _FFLAGS_T_DECLARED
typedef	__fflags_t	fflags_t;
#define	_FFLAGS_T_DECLARED
#endif
#ifndef _GID_T_DECLARED
typedef	__gid_t		gid_t;
#define	_GID_T_DECLARED
#endif
#ifndef _INO_T_DECLARED
typedef	__ino_t		ino_t;
#define	_INO_T_DECLARED
#endif
#ifndef _MODE_T_DECLARED
typedef	__mode_t	mode_t;
#define	_MODE_T_DECLARED
#endif
#ifndef _NLINK_T_DECLARED
typedef	__nlink_t	nlink_t;
#define	_NLINK_T_DECLARED
#endif
#ifndef _OFF_T_DECLARED
typedef	__off_t		off_t;
#define	_OFF_T_DECLARED
#endif
#ifndef _UID_T_DECLARED
typedef	__uid_t		uid_t;
#define	_UID_T_DECLARED
#endif
#if !defined(_KERNEL) && __BSD_VISIBLE
#include <sys/time.h>
#endif
#ifdef _KERNEL
struct ostat {
	__uint16_t st_dev;		
	ino_t	  st_ino;		
	mode_t	  st_mode;		
	nlink_t	  st_nlink;		
	__uint16_t st_uid;		
	__uint16_t st_gid;		
	__uint16_t st_rdev;		
	__int32_t st_size;		
	struct	timespec st_atim;	
	struct	timespec st_mtim;	
	struct	timespec st_ctim;	
	__int32_t st_blksize;		
	__int32_t st_blocks;		
	fflags_t  st_flags;		
	__uint32_t st_gen;		
};
#endif
struct stat {
	__dev_t   st_dev;		
	ino_t	  st_ino;		
	mode_t	  st_mode;		
	nlink_t	  st_nlink;		
	uid_t	  st_uid;		
	gid_t	  st_gid;		
	__dev_t   st_rdev;		
	struct	timespec st_atim;	
	struct	timespec st_mtim;	
	struct	timespec st_ctim;	
	off_t	  st_size;		
	blkcnt_t st_blocks;		
	blksize_t st_blksize;		
	fflags_t  st_flags;		
	__uint32_t st_gen;		
	__int32_t st_lspare;
	struct timespec st_birthtim;	
	unsigned int :(8 / 2) * (16 - (int)sizeof(struct timespec));
	unsigned int :(8 / 2) * (16 - (int)sizeof(struct timespec));
};
#ifdef _KERNEL
struct nstat {
	__dev_t   st_dev;		
	ino_t	  st_ino;		
	__uint32_t st_mode;		
	__uint32_t st_nlink;		
	uid_t	  st_uid;		
	gid_t	  st_gid;		
	__dev_t   st_rdev;		
	struct	timespec st_atim;	
	struct	timespec st_mtim;	
	struct	timespec st_ctim;	
	off_t	  st_size;		
	blkcnt_t st_blocks;		
	blksize_t st_blksize;		
	fflags_t  st_flags;		
	__uint32_t st_gen;		
	struct timespec st_birthtim;	
	unsigned int :(8 / 2) * (16 - (int)sizeof(struct timespec));
	unsigned int :(8 / 2) * (16 - (int)sizeof(struct timespec));
};
#endif
#ifndef _KERNEL
#define	st_atime		st_atim.tv_sec
#define	st_mtime		st_mtim.tv_sec
#define	st_ctime		st_ctim.tv_sec
#if __BSD_VISIBLE
#define	st_birthtime		st_birthtim.tv_sec
#endif
#if __BSD_VISIBLE
#define	st_atimespec		st_atim
#define	st_mtimespec		st_mtim
#define	st_ctimespec		st_ctim
#define	st_birthtimespec	st_birthtim
#endif
#endif 
#define	S_ISUID	0004000			
#define	S_ISGID	0002000			
#if __BSD_VISIBLE
#define	S_ISTXT	0001000			
#endif
#define	S_IRWXU	0000700			
#define	S_IRUSR	0000400			
#define	S_IWUSR	0000200			
#define	S_IXUSR	0000100			
#if __BSD_VISIBLE
#define	S_IREAD		S_IRUSR
#define	S_IWRITE	S_IWUSR
#define	S_IEXEC		S_IXUSR
#endif
#define	S_IRWXG	0000070			
#define	S_IRGRP	0000040			
#define	S_IWGRP	0000020			
#define	S_IXGRP	0000010			
#define	S_IRWXO	0000007			
#define	S_IROTH	0000004			
#define	S_IWOTH	0000002			
#define	S_IXOTH	0000001			
#if __XSI_VISIBLE
#define	S_IFMT	 0170000		
#define	S_IFIFO	 0010000		
#define	S_IFCHR	 0020000		
#define	S_IFDIR	 0040000		
#define	S_IFBLK	 0060000		
#define	S_IFREG	 0100000		
#define	S_IFLNK	 0120000		
#define	S_IFSOCK 0140000		
#define	S_ISVTX	 0001000		
#endif
#if __BSD_VISIBLE
#define	S_IFWHT  0160000		
#endif
#define	S_ISDIR(m)	(((m) & 0170000) == 0040000)	
#define	S_ISCHR(m)	(((m) & 0170000) == 0020000)	
#define	S_ISBLK(m)	(((m) & 0170000) == 0060000)	
#define	S_ISREG(m)	(((m) & 0170000) == 0100000)	
#define	S_ISFIFO(m)	(((m) & 0170000) == 0010000)	
#if __POSIX_VISIBLE >= 200112
#define	S_ISLNK(m)	(((m) & 0170000) == 0120000)	
#define	S_ISSOCK(m)	(((m) & 0170000) == 0140000)	
#endif
#if __BSD_VISIBLE
#define	S_ISWHT(m)	(((m) & 0170000) == 0160000)	
#endif
#if __BSD_VISIBLE
#define	ACCESSPERMS	(S_IRWXU|S_IRWXG|S_IRWXO)	
#define	ALLPERMS	(S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define	DEFFILEMODE	(S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define S_BLKSIZE	512		
#define	UF_SETTABLE	0x0000ffff	
#define	UF_NODUMP	0x00000001	
#define	UF_IMMUTABLE	0x00000002	
#define	UF_APPEND	0x00000004	
#define UF_OPAQUE	0x00000008	
#define UF_NOUNLINK	0x00000010	
#define	SF_SETTABLE	0xffff0000	
#define	SF_ARCHIVED	0x00010000	
#define	SF_IMMUTABLE	0x00020000	
#define	SF_APPEND	0x00040000	
#define	SF_NOUNLINK	0x00100000	
#define	SF_SNAPSHOT	0x00200000	
#ifdef _KERNEL
#define	OPAQUE		(UF_OPAQUE)
#define	APPEND		(UF_APPEND | SF_APPEND)
#define	IMMUTABLE	(UF_IMMUTABLE | SF_IMMUTABLE)
#define	NOUNLINK	(UF_NOUNLINK | SF_NOUNLINK)
#endif
#endif 
#ifndef _KERNEL
__BEGIN_DECLS
#if __BSD_VISIBLE
int	chflags(const char *, unsigned long);
#endif
int	chmod(const char *, mode_t);
#if __BSD_VISIBLE
int	fchflags(int, unsigned long);
#endif
#if __POSIX_VISIBLE >= 200112
int	fchmod(int, mode_t);
#endif
#if __POSIX_VISIBLE >= 200809
int	fchmodat(int, const char *, mode_t, int);
#endif
int	fstat(int, struct stat *);
#if __BSD_VISIBLE
int	lchflags(const char *, int);
int	lchmod(const char *, mode_t);
#endif
#if __POSIX_VISIBLE >= 200112
int	lstat(const char * __restrict, struct stat * __restrict);
#endif
int	mkdir(const char *, mode_t);
int	mkfifo(const char *, mode_t);
#if !defined(_MKNOD_DECLARED) && __XSI_VISIBLE
int	mknod(const char *, mode_t, dev_t);
#define	_MKNOD_DECLARED
#endif
int	stat(const char * __restrict, struct stat * __restrict);
mode_t	umask(mode_t);
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200809
int	fstatat(int, const char *, struct stat *, int);
int	mkdirat(int, const char *, mode_t);
int	mkfifoat(int, const char *, mode_t);
#endif
#if __BSD_VISIBLE || __XSI_VISIBLE >= 700
int	mknodat(int, const char *, mode_t, dev_t);
#endif
__END_DECLS
#endif 
#endif 
#ifndef _FCNTL_H
#define _FCNTL_H
#include <sys/cdefs.h>
#include <endian.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/uio.h>
__BEGIN_DECLS
#define F_LINUX_SPECIFIC_BASE	1024
#if defined(__i386__) || defined(__s390__) || defined(__x86_64__) || defined(__ia64__)
#define O_ACCMODE	   0003
#define O_RDONLY	     00
#define O_WRONLY	     01
#define O_RDWR		     02
#define O_CREAT		   0100	
#define O_EXCL		   0200	
#define O_NOCTTY	   0400	
#define O_TRUNC		  01000	
#define O_APPEND	  02000
#define O_NONBLOCK	  04000
#define O_NDELAY	O_NONBLOCK
#define O_DSYNC		 010000
#define FASYNC		 020000	
#define O_DIRECT	 040000	
#define O_LARGEFILE	0100000
#define O_DIRECTORY	0200000	
#define O_NOFOLLOW	0400000 
#define O_NOATIME	01000000
#define O_CLOEXEC	02000000
#define O_SYNC		(O_DSYNC|04000000)
#define O_PATH		010000000
#define __O_TMPFILE	020000000
#define F_DUPFD		0	
#define F_GETFD		1	
#define F_SETFD		2	
#define F_GETFL		3	
#define F_SETFL		4	
#define F_GETLK		5
#define F_SETLK		6
#define F_SETLKW	7
#define F_SETOWN	8	
#define F_GETOWN	9	
#define F_SETSIG	10	
#define F_GETSIG	11	
#define F_GETLK64	12	
#define F_SETLK64	13
#define F_SETLKW64	14
#define FD_CLOEXEC	1	
#define F_RDLCK		0
#define F_WRLCK		1
#define F_UNLCK		2
#define F_EXLCK		4	
#define F_SHLCK		8	
#define F_INPROGRESS	16
#define LOCK_SH		1	
#define LOCK_EX		2	
#define LOCK_NB		4	
#define LOCK_UN		8	
#define LOCK_MAND	32	
#define LOCK_READ	64	
#define LOCK_WRITE	128	
#define LOCK_RW		192	
struct flock {
  int16_t l_type;
  int16_t l_whence;
  off_t l_start;
  off_t l_len;
  pid_t l_pid;
};
struct flock64 {
  int16_t l_type;
  int16_t l_whence;
  loff_t l_start;
  loff_t l_len;
  pid_t  l_pid;
};
#elif defined(__alpha__)
#define O_ACCMODE	  0003
#define O_RDONLY	    00
#define O_WRONLY	    01
#define O_RDWR		    02
#define O_CREAT		 01000	
#define O_TRUNC		 02000	
#define O_EXCL		 04000	
#define O_NOCTTY	010000	
#define O_NONBLOCK	 00004
#define O_APPEND	 00010
#define O_NDELAY	O_NONBLOCK
#define O_DSYNC		040000
#define FASYNC		020000	
#define O_DIRECTORY	0100000	
#define O_NOFOLLOW	0200000 
#define O_LARGEFILE	0400000 
#define O_DIRECT	02000000	
#define O_NOATIME	04000000
#define O_CLOEXEC	010000000
#define O_SYNC		(020000000|O_DSYNC)
#define O_PATH		040000000
#define __O_TMPFILE	0100000000
#define F_DUPFD		0	
#define F_GETFD		1	
#define F_SETFD		2	
#define F_GETFL		3	
#define F_SETFL		4       
#define F_GETLK		7
#define F_SETLK		8
#define F_SETLKW	9
#define F_SETOWN	5	
#define F_GETOWN	6	
#define F_SETSIG	10	
#define F_GETSIG	11	
#define FD_CLOEXEC	1	
#define F_RDLCK		1
#define F_WRLCK		2
#define F_UNLCK		8
#define F_EXLCK		16	
#define F_SHLCK		32	
#define F_INPROGRESS	64
#define LOCK_SH		1	
#define LOCK_EX		2	
#define LOCK_NB		4	
#define LOCK_UN		8	
#define LOCK_MAND      32      
#define LOCK_READ      64      
#define LOCK_WRITE     128     
#define LOCK_RW        192     
struct flock {
  int16_t l_type;
  int16_t l_whence;
  off_t l_start;
  off_t l_len;
  pid_t l_pid;
};
#elif defined(__mips__)
#define O_ACCMODE	0x0003
#define O_RDONLY	0x0000
#define O_WRONLY	0x0001
#define O_RDWR		0x0002
#define O_APPEND	0x0008
#define O_DSYNC		0x0010
#define O_NONBLOCK	0x0080
#define O_CREAT         0x0100	
#define O_TRUNC		0x0200	
#define O_EXCL		0x0400	
#define O_NOCTTY	0x0800	
#define FASYNC		0x1000	
#ifdef __mips64__
#define O_LARGEFILE	0
#else
#define O_LARGEFILE	0x2000	
#endif
#define O_SYNC		(0x4000|O_DSYNC)
#define O_DIRECT	0x8000	
#define O_DIRECTORY	0x10000	
#define O_NOFOLLOW	0x20000	
#define O_NOATIME	0x40000
#define O_CLOEXEC	0x80000
#define O_PATH		010000000
#define __O_TMPFILE	020000000
#define O_NDELAY	O_NONBLOCK
#define F_DUPFD		0	
#define F_GETFD		1	
#define F_SETFD		2	
#define F_GETFL		3	
#define F_SETFL		4	
#define F_GETLK		14
#define F_SETLK		6
#define F_SETLKW	7
#define F_SETOWN	24	
#define F_GETOWN	23	
#define F_SETSIG	10	
#define F_GETSIG	11	
#ifndef __mips64__
#define F_GETLK64	33	
#define F_SETLK64	34
#define F_SETLKW64	35
#endif
#define FD_CLOEXEC	1	
#define F_RDLCK		0
#define F_WRLCK		1
#define F_UNLCK		2
#define F_EXLCK		4	
#define F_SHLCK		8	
#define F_INPROGRESS	16
#define LOCK_SH		1	
#define LOCK_EX		2	
#define LOCK_NB		4	
#define LOCK_UN		8	
#define LOCK_MAND	32	
#define LOCK_READ	64	
#define LOCK_WRITE	128	
#define LOCK_RW		192	
#ifndef __mips64__
struct flock {
  int16_t l_type;
  int16_t l_whence;
  off_t l_start;
  off_t l_len;
  long  l_sysid;			
  pid_t l_pid;
  long  pad[4];			
};
struct flock64 {
  int16_t l_type;
  int16_t l_whence;
  loff_t l_start;
  loff_t l_len;
  pid_t l_pid;
};
#else
struct flock {
  int16_t l_type;
  int16_t l_whence;
  off_t l_start;
  off_t l_len;
  pid_t l_pid;
};
#define flock64 flock
#endif
#elif defined(__sparc__)
#define O_RDONLY	0x0000
#define O_WRONLY	0x0001
#define O_RDWR		0x0002
#define O_ACCMODE	0x0003
#define O_APPEND	0x0008
#define FASYNC		0x0040	
#define O_CREAT		0x0200	
#define O_TRUNC		0x0400	
#define O_EXCL		0x0800	
#define O_DSYNC		0x2000
#define O_NONBLOCK	0x4000
#define O_NDELAY	(0x0004 | O_NONBLOCK)
#define O_NOCTTY	0x8000	
#define O_DIRECTORY	0x10000	
#define O_NOFOLLOW	0x20000	
#define O_LARGEFILE	0x40000
#define O_DIRECT        0x100000 
#define O_NOATIME	0x200000
#define O_CLOEXEC	0x400000
#define O_SYNC		(0x800000|O_DSYNC)
#define O_PATH		0x1000000
#define __O_TMPFILE	0x2000000
#define F_DUPFD		0	
#define F_GETFD		1	
#define F_SETFD		2	
#define F_GETFL		3	
#define F_SETFL		4	
#define F_GETOWN	5	
#define F_SETOWN	6	
#define F_GETLK		7
#define F_SETLK		8
#define F_SETLKW	9
#define F_SETSIG	10	
#define F_GETSIG	11	
#define F_GETLK64	12	
#define F_SETLK64	13
#define F_SETLKW64	14
#define FD_CLOEXEC	1	
#define F_RDLCK		1
#define F_WRLCK		2
#define F_UNLCK		3
#define F_EXLCK		4	
#define F_SHLCK		8	
#define F_INPROGRESS	16
#define LOCK_SH		1	
#define LOCK_EX		2	
#define LOCK_NB		4	
#define LOCK_UN		8	
#define LOCK_MAND	32	
#define LOCK_READ	64	
#define LOCK_WRITE	128	
#define LOCK_RW		192	
struct flock {
  int16_t l_type;
  int16_t l_whence;
  off_t l_start;
  off_t l_len;
  pid_t l_pid;
  int16_t __unused;
};
#ifdef __arch64__
#define flock64 flock
#else
struct flock64 {
  int16_t l_type;
  int16_t l_whence;
  loff_t l_start;
  loff_t l_len;
  pid_t l_pid;
  int16_t __unused;
};
#endif
#elif defined(__powerpc__) || defined(__powerpc64__)
#define O_ACCMODE	   0003
#define O_RDONLY	     00
#define O_WRONLY	     01
#define O_RDWR		     02
#define O_CREAT		   0100	
#define O_EXCL		   0200	
#define O_NOCTTY	   0400	
#define O_TRUNC		  01000	
#define O_APPEND	  02000
#define O_NONBLOCK	  04000
#define O_NDELAY	O_NONBLOCK
#define O_DSYNC		 010000
#define FASYNC		 020000	
#define O_DIRECTORY      040000	
#define O_NOFOLLOW      0100000	
#define O_LARGEFILE     0200000
#define O_DIRECT	0400000	
#define O_NOATIME	01000000
#define O_CLOEXEC	02000000
#define O_SYNC		(O_DSYNC|04000000)
#define O_PATH		010000000
#define __O_TMPFILE	020000000
#define F_DUPFD		0	
#define F_GETFD		1	
#define F_SETFD		2	
#define F_GETFL		3	
#define F_SETFL		4	
#define F_GETLK		5
#define F_SETLK		6
#define F_SETLKW	7
#define F_SETOWN	8	
#define F_GETOWN	9	
#define F_SETSIG	10	
#define F_GETSIG	11	
#define F_GETLK64	12	
#define F_SETLK64	13
#define F_SETLKW64	14
#define FD_CLOEXEC	1	
#define F_RDLCK		0
#define F_WRLCK		1
#define F_UNLCK		2
#define F_EXLCK		4	
#define F_SHLCK		8	
#define F_INPROGRESS	16
#define LOCK_SH		1	
#define LOCK_EX		2	
#define LOCK_NB		4	
#define LOCK_UN		8	
#define LOCK_MAND	32	
#define LOCK_READ	64	
#define LOCK_WRITE	128	
#define LOCK_RW		192	
struct flock {
  int16_t l_type;
  int16_t l_whence;
  off_t l_start;
  off_t l_len;
  pid_t l_pid;
};
struct flock64 {
  int16_t l_type;
  int16_t l_whence;
  loff_t l_start;
  loff_t l_len;
  pid_t  l_pid;
};
#elif defined (__arm__) || defined(__aarch64__)
#define O_ACCMODE	   0003
#define O_RDONLY	     00
#define O_WRONLY	     01
#define O_RDWR		     02
#define O_CREAT		   0100	
#define O_EXCL		   0200	
#define O_NOCTTY	   0400	
#define O_TRUNC		  01000	
#define O_APPEND	  02000
#define O_NONBLOCK	  04000
#define O_NDELAY	O_NONBLOCK
#define O_DSYNC		 010000
#define FASYNC		 020000	
#define O_DIRECTORY	 040000	
#define O_NOFOLLOW	0100000	
#define O_DIRECT	0200000	
#ifdef __aarch64__
#define O_LARGEFILE	0
#else
#define O_LARGEFILE	0400000
#endif
#define O_NOATIME	01000000
#define O_CLOEXEC	02000000
#define O_SYNC		(O_DSYNC|04000000)
#define O_PATH		010000000
#define __O_TMPFILE	020000000
#define F_DUPFD		0	
#define F_GETFD		1	
#define F_SETFD		2	
#define F_GETFL		3	
#define F_SETFL		4	
#define F_GETLK		5
#define F_SETLK		6
#define F_SETLKW	7
#define F_SETOWN	8	
#define F_GETOWN	9	
#define F_SETSIG	10	
#define F_GETSIG	11	
#ifdef __arch64__
#define F_GETLK64	5
#define F_SETLK64	6
#define F_SETLKW64	7
#else
#define F_GETLK64	12	
#define F_SETLK64	13
#define F_SETLKW64	14
#endif
#define FD_CLOEXEC	1	
#define F_RDLCK		0
#define F_WRLCK		1
#define F_UNLCK		2
#define F_EXLCK		4	
#define F_SHLCK		8	
#define F_INPROGRESS	16
#define LOCK_SH		1	
#define LOCK_EX		2	
#define LOCK_NB		4	
#define LOCK_UN		8	
#define LOCK_MAND	32	
#define LOCK_READ	64	
#define LOCK_WRITE	128	
#define LOCK_RW		192	
struct flock {
  int16_t l_type;
  int16_t l_whence;
  off_t l_start;
  off_t l_len;
  pid_t l_pid;
};
struct flock64 {
  int16_t l_type;
  int16_t l_whence;
  loff_t l_start;
  loff_t l_len;
  pid_t  l_pid;
};
#elif defined(__hppa__)
#define O_RDONLY    00000000
#define O_WRONLY    00000001
#define O_RDWR      00000002
#define O_ACCMODE   00000003
#define O_APPEND    00000010
#define O_BLKSEEK   00000100 
#define O_CREAT     00000400 
#define O_TRUNC     00001000 
#define O_EXCL      00002000 
#define O_LARGEFILE 00004000
#define O_ASYNC     00020000
#define __O_SYNC      00100000
#define O_NONBLOCK  00200004 
#define O_NDELAY    O_NONBLOCK
#define O_NOCTTY    00400000 
#define O_DSYNC     01000000 
#define O_RSYNC     02000000 
#define O_NOATIME   04000000
#define O_CLOEXEC   010000000
#define O_DIRECTORY  00010000
#define O_DIRECT    00040000 
#define O_NOFOLLOW  00000200 
#define O_INVISIBLE 04000000 
#define O_PATH		020000000
#define __O_TMPFILE	040000000
#define O_SYNC		(__O_SYNC|O_DSYNC)
#define F_DUPFD     0   
#define F_GETFD     1   
#define F_SETFD     2   
#define F_GETFL     3   
#define F_SETFL     4   
#define F_GETLK     5   
#define F_SETLK     6   
#define F_SETLKW    7   
#define F_GETLK64   8   
#define F_SETLK64   9   
#define F_SETLKW64  10  
#define F_GETOWN    11 
#define F_SETOWN    12 
#define F_SETSIG    13 
#define F_GETSIG    14 
#define FD_CLOEXEC  1   
#define F_RDLCK     1   
#define F_WRLCK     2   
#define F_UNLCK     3   
#define F_EXLCK     4   
#define F_SHLCK     8   
#define F_INPROGRESS   16
#define LOCK_SH                1       
#define LOCK_EX                2       
#define LOCK_NB                4       
#define LOCK_UN                8       
#define LOCK_MAND      32      
#define LOCK_READ      64      
#define LOCK_WRITE     128     
#define LOCK_RW                192     
struct flock
{
    int16_t l_type;   
    int16_t l_whence; 
    off_t l_start;    
    off_t l_len;  
    pid_t l_pid;  
};
struct flock64
{
    int16_t l_type;   
    int16_t l_whence; 
    off64_t l_start;  
    off64_t l_len;    
    pid_t l_pid;  
};
#endif
#define O_TMPFILE (__O_TMPFILE | O_DIRECTORY)
#ifdef _GNU_SOURCE
#define F_SETLEASE	(F_LINUX_SPECIFIC_BASE + 0)
#define F_GETLEASE	(F_LINUX_SPECIFIC_BASE + 1)
#define F_CANCELLK	(F_LINUX_SPECIFIC_BASE + 5)
#define F_DUPFD_CLOEXEC	(F_LINUX_SPECIFIC_BASE + 6)
#define F_NOTIFY	(F_LINUX_SPECIFIC_BASE+2)
#define F_SETPIPE_SZ	(F_LINUX_SPECIFIC_BASE + 7)
#define F_GETPIPE_SZ	(F_LINUX_SPECIFIC_BASE + 8)
#define F_ADD_SEALS	(F_LINUX_SPECIFIC_BASE + 9)
#define F_GET_SEALS	(F_LINUX_SPECIFIC_BASE + 10)
#define F_SEAL_SEAL	0x0001	
#define F_SEAL_SHRINK	0x0002	
#define F_SEAL_GROW	0x0004	
#define F_SEAL_WRITE	0x0008	
#endif
extern int fcntl (int __fd, int __cmd, ...) __THROW;
#ifndef __NO_STAT64
extern int fcntl64 (int __fd, int __cmd, ...) __THROW;
extern int fstatat64(int dirfd, const char *pathname, struct stat64 *buf, int flags) __THROW;
#if defined _FILE_OFFSET_BITS && _FILE_OFFSET_BITS == 64
#define fcntl fcntl64
#define fstatat fstatat64
#endif
#endif
#if !defined(O_ASYNC) && defined(FASYNC)
#define O_ASYNC FASYNC
#endif
#if defined(_LINUX_SOURCE) || defined(_GNU_SOURCE)
ssize_t readahead(int fd, off64_t *offset, size_t count) __THROW;
#endif
#ifdef _GNU_SOURCE
enum {
  SPLICE_F_MOVE=1,	
#define SPLICE_F_MOVE SPLICE_F_MOVE
  SPLICE_F_NONBLOCK=2,	
#define SPLICE_F_NONBLOCK SPLICE_F_NONBLOCK
  SPLICE_F_MORE=4,	
#define SPLICE_F_MORE SPLICE_F_MORE
  SPLICE_F_GIFT=8	
#define SPLICE_F_GIFT SPLICE_F_GIFT
};
ssize_t tee(int fd_in, int fd_out, size_t len, unsigned int flags) __THROW;
#include <sys/uio.h>
ssize_t splice(int fd_in, loff_t *off_in, int fd_out, loff_t *off_out, size_t len, unsigned int flags) __THROW;
ssize_t vmsplice(int fd, const struct iovec *iov, unsigned long nr_segs, unsigned int flags) __THROW;
int sync_file_range(int fd, off64_t offset, off64_t nbytes, unsigned int flags) __THROW;
#define FALLOC_FL_KEEP_SIZE 1
int fallocate(int fd, int mode, loff_t offset, loff_t len) __THROW;
#define DN_ACCESS	0x00000001	
#define DN_MODIFY	0x00000002	
#define DN_CREATE	0x00000004	
#define DN_DELETE	0x00000008	
#define DN_RENAME	0x00000010	
#define DN_ATTRIB	0x00000020	
#define DN_MULTISHOT	0x80000000	
#endif
#define F_SETOWN_EX	15
#define F_GETOWN_EX	16
#define F_GETOWNER_UIDS	17
#define F_OFD_GETLK	36
#define F_OFD_SETLK	37
#define F_OFD_SETLKW	38
#define F_OWNER_TID	0
#define F_OWNER_PID	1
#define F_OWNER_PGRP	2
struct f_owner_ex {
	int	type;
	int	pid;
};
#define AT_FDCWD		-100    
#define AT_SYMLINK_NOFOLLOW	0x100   
#define AT_REMOVEDIR		0x200   
#define AT_SYMLINK_FOLLOW	0x400   
#define AT_NO_AUTOMOUNT		0x800	
#define AT_EMPTY_PATH		0x1000	
#define AT_EACCESS		0x200	
int openat(int dirfd, const char *pathname, int flags, ...) __THROW;
int futimesat(int dirfd, const char *pathname, const struct timeval times[2]) __THROW;
int unlinkat(int dirfd, const char *pathname, int flags) __THROW;
#if (defined(_XOPEN_SOURCE) && (_XOPEN_SOURCE - 0) >= 600) || defined(_POSIX_SOURCE)
#include "linux/fadvise.h"
int posix_fallocate(int fd, off64_t offset, off64_t len) __THROW;
int posix_fadvise(int fd, off64_t offset, off64_t len, int advice) __THROW;
#endif
__END_DECLS
#endif
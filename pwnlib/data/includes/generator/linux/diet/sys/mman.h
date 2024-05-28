#ifndef _SYS_MMAN_H
#define _SYS_MMAN_H
#include <sys/cdefs.h>
#include <sys/types.h>
#include <sys/stat.h>
__BEGIN_DECLS
#define MREMAP_MAYMOVE	1UL
#define MREMAP_FIXED	2UL
#define PROT_READ	0x1		
#define PROT_WRITE	0x2		
#define PROT_EXEC	0x4		
#define PROT_SEM	0x8		
#define PROT_NONE	0x0		
#define PROT_GROWSDOWN	0x01000000	
#define PROT_GROWSUP	0x02000000	
#define MAP_SHARED	0x01		
#define MAP_PRIVATE	0x02		
#define MAP_TYPE	0xf		
#define MADV_REMOVE		9
#define MADV_DONTFORK		10
#define MADV_DOFORK		11
#define MADV_MERGEABLE		12
#define MADV_UNMERGEABLE	13
#define MADV_HUGEPAGE		14
#define MADV_NOHUGEPAGE		15
#define MADV_DONTDUMP		16
#define MADV_DODUMP		17
#define MADV_HWPOISON		100
#define MADV_SOFT_OFFLINE	101
#define MLOCK_ONFAULT	1	
#if defined(__mips__)
#define MAP_FIXED	0x010		
#define MAP_NORESERVE	0x0400		
#define MAP_ANONYMOUS	0x0800		
#define MAP_GROWSDOWN	0x1000		
#define MAP_DENYWRITE	0x2000		
#define MAP_EXECUTABLE	0x4000		
#define MAP_LOCKED	0x8000		
#define MAP_POPULATE	0x10000
#define MAP_NONBLOCK	0x20000
#define MAP_STACK	0x40000
#define MAP_HUGETLB	0x80000
#define MS_ASYNC	0x0001		
#define MS_INVALIDATE	0x0002		
#define MS_SYNC		0x0004		
#define MCL_CURRENT	1		
#define MCL_FUTURE	2		
#define MCL_ONFAULT	4		
#define MADV_NORMAL	0x0		
#define MADV_RANDOM	0x1		
#define MADV_SEQUENTIAL	0x2		
#define MADV_WILLNEED	0x3		
#define MADV_DONTNEED	0x4		
#elif defined(__alpha__)
#define MAP_FIXED	0x100		
#define MAP_ANONYMOUS	0x10		
#define MAP_GROWSDOWN	0x1000		
#define MAP_DENYWRITE	0x2000		
#define MAP_EXECUTABLE	0x4000		
#define MAP_LOCKED	0x8000		
#define MAP_NORESERVE	0x10000		
#define MAP_POPULATE	0x20000
#define MAP_NONBLOCK	0x40000
#define MAP_STACK	0x80000
#define MAP_HUGETLB	0x100000
#define MS_ASYNC	1		
#define MS_SYNC		2		
#define MS_INVALIDATE	4		
#define MCL_CURRENT	 8192		
#define MCL_FUTURE	16384		
#define MCL_ONFAULT	32768		
#define MADV_NORMAL	0		
#define MADV_RANDOM	1		
#define MADV_SEQUENTIAL	2		
#define MADV_WILLNEED	3		
#define MADV_SPACEAVAIL	5		
#define MADV_DONTNEED	6		
#elif defined(__i386__) || defined(__s390__) || defined(__x86_64__) || defined(__arm__)
#define MAP_FIXED	0x10		
#define MAP_ANONYMOUS	0x20		
#define MAP_GROWSDOWN	0x0100		
#define MAP_DENYWRITE	0x0800		
#define MAP_EXECUTABLE	0x1000		
#define MAP_LOCKED	0x2000		
#define MAP_NORESERVE	0x4000		
#define MAP_POPULATE	0x8000
#define MAP_NONBLOCK	0x10000
#define MAP_STACK	0x20000
#define MAP_HUGETLB	0x40000
#define MS_ASYNC	1		
#define MS_INVALIDATE	2		
#define MS_SYNC		4		
#define MCL_CURRENT	1		
#define MCL_FUTURE	2		
#define MCL_ONFAULT	4		
#define MADV_NORMAL	0x0		
#define MADV_RANDOM	0x1		
#define MADV_SEQUENTIAL	0x2		
#define MADV_WILLNEED	0x3		
#define MADV_DONTNEED	0x4		
#elif defined(__sparc__) || defined (__powerpc__) || defined (__powerpc64__)
#define MAP_FIXED	0x10		
#define MAP_ANONYMOUS	0x20		
#define MAP_RENAME	MAP_ANONYMOUS	
#define MAP_NORESERVE	0x40		
#define MAP_INHERIT	0x80		
#define MAP_LOCKED	0x100		
#define _MAP_NEW	0x80000000	
#define MAP_GROWSDOWN	0x0100		
#define MAP_DENYWRITE	0x0800		
#define MAP_EXECUTABLE	0x1000		
#define MAP_POPULATE	0x8000
#define MAP_NONBLOCK	0x10000
#define MAP_STACK	0x20000
#define MAP_HUGETLB	0x40000
#define MS_ASYNC	1		
#define MS_INVALIDATE	2		
#define MS_SYNC		4		
#define MCL_CURRENT	0x2000		
#define MCL_FUTURE	0x4000		
#define MCL_ONFAULT	0x8000		
#define MADV_NORMAL	0x0		
#define MADV_RANDOM	0x1		
#define MADV_SEQUENTIAL	0x2		
#define MADV_WILLNEED	0x3		
#define MADV_DONTNEED	0x4		
#define MADV_FREE	0x5		
#elif defined(__aarch64__)
#define MAP_FIXED	0x10		
#define MAP_ANONYMOUS	0x20		
#define MAP_GROWSDOWN	0x00100		
#define MAP_DENYWRITE	0x00800		
#define MAP_EXECUTABLE	0x01000		
#define MAP_LOCKED	0x02000		
#define MAP_NORESERVE	0x04000		
#define MAP_POPULATE	0x08000		
#define MAP_NONBLOCK	0x10000		
#define MAP_STACK	0x20000		
#define MAP_HUGETLB	0x40000		
#define MS_ASYNC	1		
#define MS_INVALIDATE	2		
#define MS_SYNC		4		
#define MCL_CURRENT	1		
#define MCL_FUTURE	2		
#define MCL_ONFAULT	4		
#define MADV_NORMAL	 0	
#define MADV_RANDOM	 1	
#define MADV_SEQUENTIAL	 2	
#define MADV_WILLNEED	 3	
#define MADV_DONTNEED	 4	
#define MADV_REMOVE	 9	
#define MADV_DONTFORK	 10	
#define MADV_DOFORK	 11	
#define MADV_MERGEABLE	 12	
#define MADV_UNMERGEABLE 13	
#define MADV_HUGEPAGE	 14	
#define MADV_NOHUGEPAGE	 15	
#define MADV_DONTDUMP	 16	
#define MADV_DODUMP	 17	
#define MADV_HWPOISON	 100	
#elif defined(__hppa__)
#undef MAP_TYPE
#define MAP_TYPE	0x03	
#define MAP_FIXED	0x04	
#define MAP_ANONYMOUS	0x10	
#define MAP_DENYWRITE	0x0800	
#define MAP_EXECUTABLE	0x1000	
#define MAP_LOCKED	0x2000	
#define MAP_NORESERVE	0x4000	
#define MAP_GROWSDOWN	0x8000	
#define MAP_POPULATE	0x10000
#define MAP_NONBLOCK	0x20000
#define MAP_STACK	0x40000
#define MAP_HUGETLB	0x80000
#define MS_SYNC 	1	
#define MS_ASYNC	2	
#define MS_INVALIDATE	4	
#define MCL_CURRENT	1	
#define MCL_FUTURE	2
#define MCL_ONFAULT	4		
#define MADV_NORMAL	0	
#define MADV_RANDOM	1	
#define MADV_SEQUENTIAL 2	
#define MADV_WILLNEED	3	
#define MADV_DONTNEED	4	
#define MADV_SPACEAVAIL 5	
#define MADV_VPS_PURGE	6	
#define MADV_VPS_INHERIT 7	
#define MADV_4K_PAGES	12	
#define MADV_16K_PAGES	14	
#define MADV_64K_PAGES	16	
#define MADV_256K_PAGES 18	
#define MADV_1M_PAGES	20	
#define MADV_4M_PAGES	22	
#define MADV_16M_PAGES	24	
#define MADV_64M_PAGES	26	
#undef MADV_MERGEABLE
#undef MADV_UNMERGEABLE
#undef MADV_HUGEPAGE
#undef MADV_NOHUGEPAGE
#undef MADV_DONTDUMP
#undef MADV_DODUMP
#define MADV_MERGEABLE 65
#define MADV_UNMERGEABLE 66
#define MADV_HUGEPAGE 67
#define MADV_NOHUGEPAGE 68
#define MADV_DONTDUMP 69
#define MADV_DODUMP 70
#elif defined(__ia64__)
#define MAP_FIXED	0x10	
#define MAP_ANONYMOUS	0x20	
#define MAP_GROWSDOWN	0x0100	
#define MAP_GROWSUP	0x0200	
#define MAP_DENYWRITE	0x0800	
#define MAP_EXECUTABLE	0x1000	
#define MAP_LOCKED	0x2000	
#define MAP_NORESERVE	0x4000	
#define MAP_POPULATE	0x8000
#define MAP_NONBLOCK	0x10000
#define MAP_STACK	0x20000
#define MAP_HUGETLB	0x40000
#define MS_ASYNC	1	
#define MS_INVALIDATE	2	
#define MS_SYNC 	4	
#define MADV_NORMAL     0x0	
#define MADV_RANDOM     0x1	
#define MADV_SEQUENTIAL 0x2	
#define MADV_WILLNEED   0x3	
#define MADV_DONTNEED   0x4	
#endif
#define MAP_ANON	MAP_ANONYMOUS
#define MAP_FILE	0
#define MAP_FAILED      ((void *) -1)
__attribute__((__warn_unused_result__))
extern void *mmap (void *__addr, size_t __len, int __prot,
                   int __flags, int __fd, off_t __offset);
extern int munmap (void *__addr, size_t __len) __THROW;
extern int mprotect (void *__addr, size_t __len, int __prot) __THROW;
extern int msync (void *__addr, size_t __len, int __flags) __THROW;
__attribute__((__warn_unused_result__))
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
		     unsigned long __may_move) __THROW;
extern int mincore (void *__start, size_t __len, unsigned char *__vec);
__attribute__((__warn_unused_result__))
extern void *mmap64 (void *__addr, size_t __len, int __prot,
		     int __flags, int __fd, off64_t __offset) __THROW;
#ifndef __NO_STAT64
#if defined _FILE_OFFSET_BITS && _FILE_OFFSET_BITS == 64
#define mmap(a,b,c,d,e,f) mmap64(a,b,c,d,e,f)
#endif
#endif
__attribute__((__warn_unused_result__))
int mlockall(int flags) __THROW;
__attribute__((__warn_unused_result__))
int mlock(const void *addr, size_t len) __THROW;
int munlock(const void *addr, size_t len) __THROW;
int munlockall(void) __THROW;
__attribute__((__warn_unused_result__))
int mlock2(const void *addr, size_t len, int flags) __THROW;
int madvise(void *start, size_t length, int advice) __THROW;
#define POSIX_MADV_NORMAL MADV_NORMAL
#define POSIX_MADV_SEQUENTIAL MADV_SEQUENTIAL
#define POSIX_MADV_RANDOM MADV_RANDOM
#define POSIX_MADV_WILLNEED MADV_WILLNEED
#define POSIX_MADV_DONTNEED MADV_DONTNEED
#define posix_madvise(addr,len,advice) madvise(addr,len,advice)
__END_DECLS
#endif
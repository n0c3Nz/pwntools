#ifndef _SYS_MMAN_H_
#define _SYS_MMAN_H_
#include <sys/cdefs.h>
#include <sys/_types.h>
#if __BSD_VISIBLE
#define INHERIT_SHARE	0
#define INHERIT_COPY	1
#define INHERIT_NONE	2
#endif
#define	PROT_NONE	0x00	
#define	PROT_READ	0x01	
#define	PROT_WRITE	0x02	
#define	PROT_EXEC	0x04	
#define	MAP_SHARED	0x0001		
#define	MAP_PRIVATE	0x0002		
#if __BSD_VISIBLE
#define	MAP_COPY	MAP_PRIVATE	
#endif
#define	MAP_FIXED	 0x0010	
#if __BSD_VISIBLE
#define	MAP_RENAME	 0x0020	
#define	MAP_NORESERVE	 0x0040	
#define	MAP_RESERVED0080 0x0080	
#define	MAP_RESERVED0100 0x0100	
#define	MAP_HASSEMAPHORE 0x0200	
#define	MAP_STACK	 0x0400	
#define	MAP_NOSYNC	 0x0800 
#define	MAP_FILE	 0x0000	
#define	MAP_ANON	 0x1000	
#ifndef _KERNEL
#define	MAP_ANONYMOUS	 MAP_ANON 
#endif 
#define	MAP_NOCORE	 0x00020000 
#define	MAP_PREFAULT_READ 0x00040000 
#endif 
#if __POSIX_VISIBLE >= 199309
#define MCL_CURRENT	0x0001	
#define MCL_FUTURE	0x0002	
#endif
#define MAP_FAILED	((void *)-1)
#define	MS_SYNC		0x0000	
#define MS_ASYNC	0x0001	
#define MS_INVALIDATE	0x0002	
#define	_MADV_NORMAL	0	
#define	_MADV_RANDOM	1	
#define	_MADV_SEQUENTIAL 2	
#define	_MADV_WILLNEED	3	
#define	_MADV_DONTNEED	4	
#if __BSD_VISIBLE
#define	MADV_NORMAL	_MADV_NORMAL
#define	MADV_RANDOM	_MADV_RANDOM
#define	MADV_SEQUENTIAL _MADV_SEQUENTIAL
#define	MADV_WILLNEED	_MADV_WILLNEED
#define	MADV_DONTNEED	_MADV_DONTNEED
#define	MADV_FREE	5	
#define	MADV_NOSYNC	6	
#define	MADV_AUTOSYNC	7	
#define	MADV_NOCORE	8	
#define	MADV_CORE	9	
#define	MADV_PROTECT	10	
#define	MINCORE_INCORE	 	 0x1 
#define	MINCORE_REFERENCED	 0x2 
#define	MINCORE_MODIFIED	 0x4 
#define	MINCORE_REFERENCED_OTHER 0x8 
#define	MINCORE_MODIFIED_OTHER	0x10 
#define	MINCORE_SUPER		0x20 
#define	SHM_ANON		((char *)1)
#endif 
#if __POSIX_VISIBLE >= 200112
#define	POSIX_MADV_NORMAL	_MADV_NORMAL
#define	POSIX_MADV_RANDOM	_MADV_RANDOM
#define	POSIX_MADV_SEQUENTIAL	_MADV_SEQUENTIAL
#define	POSIX_MADV_WILLNEED	_MADV_WILLNEED
#define	POSIX_MADV_DONTNEED	_MADV_DONTNEED
#endif
#ifndef _MODE_T_DECLARED
typedef	__mode_t	mode_t;
#define	_MODE_T_DECLARED
#endif
#ifndef _OFF_T_DECLARED
typedef	__off_t		off_t;
#define	_OFF_T_DECLARED
#endif
#ifndef _SIZE_T_DECLARED
typedef	__size_t	size_t;
#define	_SIZE_T_DECLARED
#endif
#if defined(_KERNEL) || defined(_WANT_FILE)
#include <vm/vm.h>
struct file;
struct shmfd {
	size_t		shm_size;
	vm_object_t	shm_object;
	int		shm_refs;
	uid_t		shm_uid;
	gid_t		shm_gid;
	mode_t		shm_mode;
	int		shm_kmappings;
	struct timespec	shm_atime;
	struct timespec	shm_mtime;
	struct timespec	shm_ctime;
	struct timespec	shm_birthtime;
	struct label	*shm_label;		
	const char	*shm_path;
};
#endif
#ifdef _KERNEL
int	shm_mmap(struct shmfd *shmfd, vm_size_t objsize, vm_ooffset_t foff,
	    vm_object_t *obj);
int	shm_map(struct file *fp, size_t size, off_t offset, void **memp);
int	shm_unmap(struct file *fp, void *mem, size_t size);
void	shm_path(struct shmfd *shmfd, char *path, size_t size);
#else 
__BEGIN_DECLS
#if __BSD_VISIBLE
int	getpagesizes(size_t *, int);
int	madvise(void *, size_t, int);
int	mincore(const void *, size_t, char *);
int	minherit(void *, size_t, int);
#endif
int	mlock(const void *, size_t);
#ifndef _MMAP_DECLARED
#define	_MMAP_DECLARED
void *	mmap(void *, size_t, int, int, int, off_t);
#endif
int	mprotect(const void *, size_t, int);
int	msync(void *, size_t, int);
int	munlock(const void *, size_t);
int	munmap(void *, size_t);
#if __POSIX_VISIBLE >= 200112
int	posix_madvise(void *, size_t, int);
#endif
#if __POSIX_VISIBLE >= 199309
int	mlockall(int);
int	munlockall(void);
int	shm_open(const char *, int, mode_t);
int	shm_unlink(const char *);
#endif
__END_DECLS
#endif 
#endif 
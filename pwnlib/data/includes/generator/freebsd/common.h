#define	STDIN_FILENO	0	
#define	STDOUT_FILENO	1	
#define	STDERR_FILENO	2	
#define __BSD_VISIBLE 99999999
#define __POSIX_VISIBLE 99999999
#define __XSI_VISIBLE 99999999
#define INADDR_ANY 0
#define INADDR_BROADCAST 0xffffffff
#define INADDR_NONE 0xffffffff
#define INADDR_LOOPBACK 0x7f000001
#include <sys/errno.h>
#include <sys/fcntl.h>
#include <sys/mman.h>
#include <sys/signal.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <sys/unistd.h>
#ifndef _SYS_TIME_H
#define _SYS_TIME_H	1
#include <sys/cdefs.h>
#include <sys/types.h>
__BEGIN_DECLS
struct timespec {
  time_t tv_sec;	
  long tv_nsec;		
};
struct timeval {
  time_t tv_sec;	
  suseconds_t tv_usec;	
};
struct timezone {
  int tz_minuteswest;	
  int tz_dsttime;	
};
#include <sys/select.h>
#define	ITIMER_REAL	0
#define	ITIMER_VIRTUAL	1
#define	ITIMER_PROF	2
struct itimerspec {
  struct timespec it_interval;	
  struct timespec it_value;	
};
struct itimerval {
  struct timeval it_interval;	
  struct timeval it_value;	
};
#if defined _GNU_SOURCE || defined _BSD_SOURCE
typedef struct timezone *__timezone_ptr_t;
#else
typedef void *__timezone_ptr_t;
#endif
int getitimer(int which, struct itimerval *value) __THROW;
int setitimer(int which, const struct itimerval *value, struct itimerval *ovalue) __THROW;
int gettimeofday(struct timeval *tv, struct timezone *tz) __THROW;
int settimeofday(const struct timeval *tv , const struct timezone *tz) __THROW;
extern int adjtime (const struct timeval *delta, struct timeval *olddelta) __THROW;
struct tm {
  int tm_sec;			
  int tm_min;			
  int tm_hour;			
  int tm_mday;			
  int tm_mon;			
  int tm_year;			
  int tm_wday;			
  int tm_yday;			
  int tm_isdst;			
  long int tm_gmtoff;		
  const char *tm_zone;		
};
#ifdef _BSD_SOURCE
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define timerclear(x) ((x)->tv_sec=(x)->tv_usec=0)
#define timeradd(a,b,x) do { (x)->tv_sec=(a)->tv_sec+(b)->tv_sec; if (((x)->tv_usec=(a)->tv_usec+(b)->tv_usec)>=1000000) { ++(x)->tv_sec; (x)->tv_usec-=1000000; } } while (0)
#define timersub(a,b,x) do { (x)->tv_sec=(a)->tv_sec-(b)->tv_sec; if (((x)->tv_usec=(a)->tv_usec-(b)->tv_usec)<0) { --(x)->tv_sec; (x)->tv_usec+=1000000; } } while (0)
#define timerisset(x) ((x)->tv_sec || (x)->tv_usec)
#endif
int utimes(const char * filename, struct timeval * tvp) __THROW;
__END_DECLS
#endif
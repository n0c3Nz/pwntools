#ifndef _SYS_TYPES_H
#define _SYS_TYPES_H
#include <inttypes.h>
#include <stddef.h>
__BEGIN_DECLS
typedef unsigned long int blkcnt_t;	
typedef unsigned long int blksize_t;	
typedef unsigned long int clock_t;	
typedef uint64_t fsblkcnt_t;
typedef uint64_t fsfilcnt_t;
#if defined(__alpha__) || defined(__ia64__) || defined(__sparc64__) || defined(__s390x__) || defined(__aarch64__)
    typedef uint32_t dev_t;		
    typedef uint32_t gid_t;		
    typedef uint32_t mode_t;		
    typedef uint32_t nlink_t;		
    typedef uint32_t uid_t;		
#elif defined(__arm__) || defined(__i386__) || defined(__sparc__) || defined(__s390__) 
    typedef uint32_t dev_t;
    typedef uint16_t gid_t;
    typedef uint16_t mode_t;
    typedef uint16_t nlink_t;
    typedef uint16_t uid_t;
#elif defined(__hppa__)
    typedef uint32_t dev_t;
    typedef uint32_t gid_t;
    typedef uint16_t mode_t;
    typedef uint16_t nlink_t;
    typedef uint32_t uid_t;
#elif defined(__mips__)
    typedef uint32_t dev_t;
    typedef int32_t gid_t;
    typedef uint32_t mode_t;
    typedef int32_t nlink_t;
    typedef int32_t uid_t;
#elif defined(__powerpc__) && !defined(__powerpc64__)
    typedef uint32_t dev_t;
    typedef uint32_t gid_t;
    typedef uint32_t mode_t;
    typedef uint16_t nlink_t;
    typedef uint32_t uid_t;
#elif defined(__powerpc64__) || defined(__x86_64__)
    typedef unsigned long dev_t;
    typedef uint32_t gid_t;
    typedef uint32_t mode_t;
    typedef unsigned long nlink_t;
    typedef uint32_t uid_t;
#endif
typedef int32_t id_t;			
typedef unsigned long ino_t;		
typedef int32_t key_t;			
typedef int32_t pid_t;			
#ifdef __SIZE_TYPE__
#define unsigned signed
typedef __SIZE_TYPE__ ssize_t;
#undef unsigned
#else
typedef signed long ssize_t;		
#endif
#if (defined(__sparc__) && (__arch64__)) || defined(__sparcv9)
typedef signed int suseconds_t;		
typedef signed int useconds_t;		
#else
typedef signed long suseconds_t;	
typedef signed long useconds_t;		
#endif
#if defined(__x86_64__) && defined(__ILP32__)
typedef signed long long time_t;
#else
typedef signed long time_t;		
#endif
__extension__ typedef signed long long loff_t;	
__extension__ typedef signed long long off64_t;
#if defined _FILE_OFFSET_BITS && _FILE_OFFSET_BITS == 64
typedef off64_t off_t;
#else
#if defined(__x86_64__) && defined(__ILP32__)
typedef off64_t off_t;
#else
typedef signed long off_t;             
#endif
#endif
__extension__ typedef unsigned long long ino64_t;
__extension__ typedef signed long long blkcnt64_t;
typedef uint32_t uid32_t;
typedef uint32_t gid32_t;
typedef int32_t clockid_t;
typedef int32_t timer_t;
typedef long int fpos_t;
#define __socklen_t_defined
typedef uint32_t socklen_t;
typedef uint16_t sa_family_t;
#ifdef _BSD_SOURCE
typedef char* caddr_t __attribute_dontuse__;
typedef unsigned char u_char __attribute_dontuse__;
typedef unsigned short u_short __attribute_dontuse__;
typedef unsigned int u_int __attribute_dontuse__;
typedef unsigned char uchar __attribute_dontuse__;
typedef unsigned short ushort __attribute_dontuse__;
typedef unsigned int uint __attribute_dontuse__;
typedef unsigned long u_long __attribute_dontuse__;
typedef uint32_t n_long __attribute_dontuse__;
typedef uint32_t n_time __attribute_dontuse__;
typedef uint16_t n_short __attribute_dontuse__;
typedef unsigned long ulong __attribute_dontuse__;
typedef uint32_t nlong __attribute_dontuse__;
typedef uint32_t ntime __attribute_dontuse__;
typedef uint16_t nshort __attribute_dontuse__;
#if !defined(__STRICT_ANSI__) || __STDC_VERSION__ + 0 >= 199900L
typedef int64_t quad_t __attribute_dontuse__;
typedef uint64_t u_quad_t __attribute_dontuse__;
#endif
typedef long daddr_t __attribute_dontuse__;
typedef daddr_t __daddr_t __attribute_dontuse__;
#endif
#ifdef _GNU_SOURCE
typedef uint8_t u_int8_t __attribute_dontuse__;
typedef uint16_t u_int16_t __attribute_dontuse__;
typedef uint32_t u_int32_t __attribute_dontuse__;
#if !defined(__STRICT_ANSI__) || __STDC_VERSION__ + 0 >= 199900L
typedef uint64_t u_int64_t __attribute_dontuse__;
#endif
#endif
__END_DECLS
#endif
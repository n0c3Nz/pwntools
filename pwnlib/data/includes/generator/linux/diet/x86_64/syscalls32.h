#ifndef _ASM_X86_UNISTD_32_H
#define _ASM_X86_UNISTD_32_H
#define SYS32_restart_syscall      0
#define SYS32_exit		  1
#define SYS32_fork		  2
#define SYS32_read		  3
#define SYS32_write		  4
#define SYS32_open		  5
#define SYS32_close		  6
#define SYS32_waitpid		  7
#define SYS32_creat		  8
#define SYS32_link		  9
#define SYS32_unlink		 10
#define SYS32_execve		 11
#define SYS32_chdir		 12
#define SYS32_time		 13
#define SYS32_mknod		 14
#define SYS32_chmod		 15
#define SYS32_lchown		 16
#define SYS32_break		 17
#define SYS32_oldstat		 18
#define SYS32_lseek		 19
#define SYS32_getpid		 20
#define SYS32_mount		 21
#define SYS32_umount		 22
#define SYS32_setuid		 23
#define SYS32_getuid		 24
#define SYS32_stime		 25
#define SYS32_ptrace		 26
#define SYS32_alarm		 27
#define SYS32_oldfstat		 28
#define SYS32_pause		 29
#define SYS32_utime		 30
#define SYS32_stty		 31
#define SYS32_gtty		 32
#define SYS32_access		 33
#define SYS32_nice		 34
#define SYS32_ftime		 35
#define SYS32_sync		 36
#define SYS32_kill		 37
#define SYS32_rename		 38
#define SYS32_mkdir		 39
#define SYS32_rmdir		 40
#define SYS32_dup		 41
#define SYS32_pipe		 42
#define SYS32_times		 43
#define SYS32_prof		 44
#define SYS32_brk		 45
#define SYS32_setgid		 46
#define SYS32_getgid		 47
#define SYS32_signal		 48
#define SYS32_geteuid		 49
#define SYS32_getegid		 50
#define SYS32_acct		 51
#define SYS32_umount2		 52
#define SYS32_lock		 53
#define SYS32_ioctl		 54
#define SYS32_fcntl		 55
#define SYS32_mpx		 56
#define SYS32_setpgid		 57
#define SYS32_ulimit		 58
#define SYS32_oldolduname	 59
#define SYS32_umask		 60
#define SYS32_chroot		 61
#define SYS32_ustat		 62
#define SYS32_dup2		 63
#define SYS32_getppid		 64
#define SYS32_getpgrp		 65
#define SYS32_setsid		 66
#define SYS32_sigaction		 67
#define SYS32_sgetmask		 68
#define SYS32_ssetmask		 69
#define SYS32_setreuid		 70
#define SYS32_setregid		 71
#define SYS32_sigsuspend		 72
#define SYS32_sigpending		 73
#define SYS32_sethostname	 74
#define SYS32_setrlimit		 75
#define SYS32_getrlimit		 76   
#define SYS32_getrusage		 77
#define SYS32_gettimeofday	 78
#define SYS32_settimeofday	 79
#define SYS32_getgroups		 80
#define SYS32_setgroups		 81
#define SYS32_select		 82
#define SYS32_symlink		 83
#define SYS32_oldlstat		 84
#define SYS32_readlink		 85
#define SYS32_uselib		 86
#define SYS32_swapon		 87
#define SYS32_reboot		 88
#define SYS32_readdir		 89
#define SYS32_mmap		 90
#define SYS32_munmap		 91
#define SYS32_truncate		 92
#define SYS32_ftruncate		 93
#define SYS32_fchmod		 94
#define SYS32_fchown		 95
#define SYS32_getpriority	 96
#define SYS32_setpriority	 97
#define SYS32_profil		 98
#define SYS32_statfs		 99
#define SYS32_fstatfs		100
#define SYS32_ioperm		101
#define SYS32_socketcall		102
#define SYS32_syslog		103
#define SYS32_setitimer		104
#define SYS32_getitimer		105
#define SYS32_stat		106
#define SYS32_lstat		107
#define SYS32_fstat		108
#define SYS32_olduname		109
#define SYS32_iopl		110
#define SYS32_vhangup		111
#define SYS32_idle		112
#define SYS32_vm86old		113
#define SYS32_wait4		114
#define SYS32_swapoff		115
#define SYS32_sysinfo		116
#define SYS32_ipc		117
#define SYS32_fsync		118
#define SYS32_sigreturn		119
#define SYS32_clone		120
#define SYS32_setdomainname	121
#define SYS32_uname		122
#define SYS32_modify_ldt		123
#define SYS32_adjtimex		124
#define SYS32_mprotect		125
#define SYS32_sigprocmask	126
#define SYS32_create_module	127
#define SYS32_init_module	128
#define SYS32_delete_module	129
#define SYS32_get_kernel_syms	130
#define SYS32_quotactl		131
#define SYS32_getpgid		132
#define SYS32_fchdir		133
#define SYS32_bdflush		134
#define SYS32_sysfs		135
#define SYS32_personality	136
#define SYS32_afs_syscall	137 
#define SYS32_setfsuid		138
#define SYS32_setfsgid		139
#define SYS32__llseek		140
#define SYS32_getdents		141
#define SYS32__newselect		142
#define SYS32_flock		143
#define SYS32_msync		144
#define SYS32_readv		145
#define SYS32_writev		146
#define SYS32_getsid		147
#define SYS32_fdatasync		148
#define SYS32__sysctl		149
#define SYS32_mlock		150
#define SYS32_munlock		151
#define SYS32_mlockall		152
#define SYS32_munlockall		153
#define SYS32_sched_setparam		154
#define SYS32_sched_getparam		155
#define SYS32_sched_setscheduler		156
#define SYS32_sched_getscheduler		157
#define SYS32_sched_yield		158
#define SYS32_sched_get_priority_max	159
#define SYS32_sched_get_priority_min	160
#define SYS32_sched_rr_get_interval	161
#define SYS32_nanosleep		162
#define SYS32_mremap		163
#define SYS32_setresuid		164
#define SYS32_getresuid		165
#define SYS32_vm86		166
#define SYS32_query_module	167
#define SYS32_poll		168
#define SYS32_nfsservctl		169
#define SYS32_setresgid		170
#define SYS32_getresgid		171
#define SYS32_prctl              172
#define SYS32_rt_sigreturn	173
#define SYS32_rt_sigaction	174
#define SYS32_rt_sigprocmask	175
#define SYS32_rt_sigpending	176
#define SYS32_rt_sigtimedwait	177
#define SYS32_rt_sigqueueinfo	178
#define SYS32_rt_sigsuspend	179
#define SYS32_pread64		180
#define SYS32_pwrite64		181
#define SYS32_chown		182
#define SYS32_getcwd		183
#define SYS32_capget		184
#define SYS32_capset		185
#define SYS32_sigaltstack	186
#define SYS32_sendfile		187
#define SYS32_getpmsg		188	
#define SYS32_putpmsg		189	
#define SYS32_vfork		190
#define SYS32_ugetrlimit		191	
#define SYS32_mmap2		192
#define SYS32_truncate64		193
#define SYS32_ftruncate64	194
#define SYS32_stat64		195
#define SYS32_lstat64		196
#define SYS32_fstat64		197
#define SYS32_lchown32		198
#define SYS32_getuid32		199
#define SYS32_getgid32		200
#define SYS32_geteuid32		201
#define SYS32_getegid32		202
#define SYS32_setreuid32		203
#define SYS32_setregid32		204
#define SYS32_getgroups32	205
#define SYS32_setgroups32	206
#define SYS32_fchown32		207
#define SYS32_setresuid32	208
#define SYS32_getresuid32	209
#define SYS32_setresgid32	210
#define SYS32_getresgid32	211
#define SYS32_chown32		212
#define SYS32_setuid32		213
#define SYS32_setgid32		214
#define SYS32_setfsuid32		215
#define SYS32_setfsgid32		216
#define SYS32_pivot_root		217
#define SYS32_mincore		218
#define SYS32_madvise		219
#define SYS32_madvise1		219	
#define SYS32_getdents64		220
#define SYS32_fcntl64		221
#define SYS32_gettid		224
#define SYS32_readahead		225
#define SYS32_setxattr		226
#define SYS32_lsetxattr		227
#define SYS32_fsetxattr		228
#define SYS32_getxattr		229
#define SYS32_lgetxattr		230
#define SYS32_fgetxattr		231
#define SYS32_listxattr		232
#define SYS32_llistxattr		233
#define SYS32_flistxattr		234
#define SYS32_removexattr	235
#define SYS32_lremovexattr	236
#define SYS32_fremovexattr	237
#define SYS32_tkill		238
#define SYS32_sendfile64		239
#define SYS32_futex		240
#define SYS32_sched_setaffinity	241
#define SYS32_sched_getaffinity	242
#define SYS32_set_thread_area	243
#define SYS32_get_thread_area	244
#define SYS32_io_setup		245
#define SYS32_io_destroy		246
#define SYS32_io_getevents	247
#define SYS32_io_submit		248
#define SYS32_io_cancel		249
#define SYS32_fadvise64		250
#define SYS32_exit_group		252
#define SYS32_lookup_dcookie	253
#define SYS32_epoll_create	254
#define SYS32_epoll_ctl		255
#define SYS32_epoll_wait		256
#define SYS32_remap_file_pages	257
#define SYS32_set_tid_address	258
#define SYS32_timer_create	259
#define SYS32_timer_settime	(__NR_timer_create+1)
#define SYS32_timer_gettime	(__NR_timer_create+2)
#define SYS32_timer_getoverrun	(__NR_timer_create+3)
#define SYS32_timer_delete	(__NR_timer_create+4)
#define SYS32_clock_settime	(__NR_timer_create+5)
#define SYS32_clock_gettime	(__NR_timer_create+6)
#define SYS32_clock_getres	(__NR_timer_create+7)
#define SYS32_clock_nanosleep	(__NR_timer_create+8)
#define SYS32_statfs64		268
#define SYS32_fstatfs64		269
#define SYS32_tgkill		270
#define SYS32_utimes		271
#define SYS32_fadvise64_64	272
#define SYS32_vserver		273
#define SYS32_mbind		274
#define SYS32_get_mempolicy	275
#define SYS32_set_mempolicy	276
#define SYS32_mq_open 		277
#define SYS32_mq_unlink		(__NR_mq_open+1)
#define SYS32_mq_timedsend	(__NR_mq_open+2)
#define SYS32_mq_timedreceive	(__NR_mq_open+3)
#define SYS32_mq_notify		(__NR_mq_open+4)
#define SYS32_mq_getsetattr	(__NR_mq_open+5)
#define SYS32_kexec_load		283
#define SYS32_waitid		284
#define SYS32_add_key		286
#define SYS32_request_key	287
#define SYS32_keyctl		288
#define SYS32_ioprio_set		289
#define SYS32_ioprio_get		290
#define SYS32_inotify_init	291
#define SYS32_inotify_add_watch	292
#define SYS32_inotify_rm_watch	293
#define SYS32_migrate_pages	294
#define SYS32_openat		295
#define SYS32_mkdirat		296
#define SYS32_mknodat		297
#define SYS32_fchownat		298
#define SYS32_futimesat		299
#define SYS32_fstatat64		300
#define SYS32_unlinkat		301
#define SYS32_renameat		302
#define SYS32_linkat		303
#define SYS32_symlinkat		304
#define SYS32_readlinkat		305
#define SYS32_fchmodat		306
#define SYS32_faccessat		307
#define SYS32_pselect6		308
#define SYS32_ppoll		309
#define SYS32_unshare		310
#define SYS32_set_robust_list	311
#define SYS32_get_robust_list	312
#define SYS32_splice		313
#define SYS32_sync_file_range	314
#define SYS32_tee		315
#define SYS32_vmsplice		316
#define SYS32_move_pages		317
#define SYS32_getcpu		318
#define SYS32_epoll_pwait	319
#define SYS32_utimensat		320
#define SYS32_signalfd		321
#define SYS32_timerfd_create	322
#define SYS32_eventfd		323
#define SYS32_fallocate		324
#define SYS32_timerfd_settime	325
#define SYS32_timerfd_gettime	326
#define SYS32_signalfd4		327
#define SYS32_eventfd2		328
#define SYS32_epoll_create1	329
#define SYS32_dup3		330
#define SYS32_pipe2		331
#define SYS32_inotify_init1	332
#define SYS32_preadv		333
#define SYS32_pwritev		334
#define SYS32_rt_tgsigqueueinfo	335
#define SYS32_perf_event_open	336
#define SYS32_recvmmsg		337
#define SYS32_fanotify_init	338
#define SYS32_fanotify_mark	339
#define SYS32_prlimit64		340
#define SYS32_name_to_handle_at	341
#define SYS32_open_by_handle_at  342
#define SYS32_clock_adjtime	343
#define SYS32_syncfs             344
#define SYS32_sendmmsg		345
#define SYS32_setns		346
#define SYS32_process_vm_readv	347
#define SYS32_process_vm_writev	348
#endif 
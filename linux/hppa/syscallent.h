/*
 * Copyright (c) 2001 Hewlett-Packard, Matthew Wilcox
 * Copyright (c) 2001-2019 The strace developers.
 */

[  0] = { 0,	0,		SEN(restart_syscall),		"restart_syscall"	},
[  1] = { 1,	TP|SE,		SEN(exit),			"exit"			},
[  2] = { 0,	TP,		SEN(fork),			"fork"			},
[  3] = { 3,	TD,		SEN(read),			"read"			},
[  4] = { 3,	TD,		SEN(write),			"write"			},
[  5] = { 3,	TD|TF,		SEN(open),			"open"			},
[  6] = { 1,	TD,		SEN(close),			"close"			},
[  7] = { 3,	TP,		SEN(waitpid),			"waitpid"		},
[  8] = { 2,	TD|TF,		SEN(creat),			"creat"			},
[  9] = { 2,	TF,		SEN(link),			"link"			},
[ 10] = { 1,	TF,		SEN(unlink),			"unlink"		},
[ 11] = { 3,	TF|TP|TSD|SE|SI,	SEN(execve),			"execve"		},
[ 12] = { 1,	TF,		SEN(chdir),			"chdir"			},
[ 13] = { 1,	0,		SEN(time),			"time"			},
[ 14] = { 3,	TF,		SEN(mknod),			"mknod"			},
[ 15] = { 2,	TF,		SEN(chmod),			"chmod"			},
[ 16] = { 3,	TF,		SEN(chown),			"lchown"		},
[ 17] = { 3,	TN,		SEN(socket),			"socket"		},
[ 18] = { 2,	TF|TST|TSTA,	SEN(stat),			"stat"			},
[ 19] = { 3,	TD,		SEN(lseek),			"lseek"			},
[ 20] = { 0,	PU|NF,		SEN(getpid),			"getpid"		},
[ 21] = { 5,	TF,		SEN(mount),			"mount"			},
[ 22] = { 3,	TN,		SEN(bind),			"bind"			},
[ 23] = { 1,	TC,		SEN(setuid),			"setuid"		},
[ 24] = { 0,	TC|PU|NF,	SEN(getuid),			"getuid"		},
[ 25] = { 1,	0,		SEN(stime),			"stime"			},
[ 26] = { 4,	0,		SEN(ptrace),			"ptrace"		},
[ 27] = { 1,	0,		SEN(alarm),			"alarm"			},
[ 28] = { 2,	TD|TFST|TSTA,	SEN(fstat),			"fstat"			},
[ 29] = { 0,	TS,		SEN(pause),			"pause"			},
[ 30] = { 2,	TF,		SEN(utime),			"utime"			},
[ 31] = { 3,	TN,		SEN(connect),			"connect"		},
[ 32] = { 2,	TN,		SEN(listen),			"listen"		},
[ 33] = { 2,	TF,		SEN(access),			"access"		},
[ 34] = { 1,	0,		SEN(nice),			"nice"			},
[ 35] = { 3,	TN,		SEN(accept),			"accept"		},
[ 36] = { 0,	0,		SEN(sync),			"sync"			},
[ 37] = { 2,	TS,		SEN(kill),			"kill"			},
[ 38] = { 2,	TF,		SEN(rename),			"rename"		},
[ 39] = { 2,	TF,		SEN(mkdir),			"mkdir"			},
[ 40] = { 1,	TF,		SEN(rmdir),			"rmdir"			},
[ 41] = { 1,	TD,		SEN(dup),			"dup"			},
[ 42] = { 1,	TD,		SEN(pipe),			"pipe"			},
[ 43] = { 1,	0,		SEN(times),			"times"			},
[ 44] = { 3,	TN,		SEN(getsockname),		"getsockname"		},
[ 45] = { 1,	TM|SI,		SEN(brk),			"brk"			},
[ 46] = { 1,	TC,		SEN(setgid),			"setgid"		},
[ 47] = { 0,	TC|PU|NF,	SEN(getgid),			"getgid"		},
[ 48] = { 2,	TS,		SEN(signal),			"signal"		},
[ 49] = { 0,	TC|PU|NF,	SEN(geteuid),			"geteuid"		},
[ 50] = { 0,	TC|PU|NF,	SEN(getegid),			"getegid"		},
[ 51] = { 1,	TF,		SEN(acct),			"acct"			},
[ 52] = { 2,	TF,		SEN(umount2),			"umount2"		},
[ 53] = { 3,	TN,		SEN(getpeername),		"getpeername"		},
[ 54] = { 3,	TD,		SEN(ioctl),			"ioctl"			},
[ 55] = { 3,	TD,		SEN(fcntl),			"fcntl"			},
[ 56] = { 4,	TN,		SEN(socketpair),		"socketpair"		},
[ 57] = { 2,	0,		SEN(setpgid),			"setpgid"		},
[ 58] = { 4,	TN,		SEN(send),			"send"			},
[ 59] = { 1,	0,		SEN(uname),			"uname"			},
[ 60] = { 1,	NF,		SEN(umask),			"umask"			},
[ 61] = { 1,	TF,		SEN(chroot),			"chroot"		},
[ 62] = { 2,	TSFA,		SEN(ustat),			"ustat"			},
[ 63] = { 2,	TD,		SEN(dup2),			"dup2"			},
[ 64] = { 0,	PU|NF,		SEN(getppid),			"getppid"		},
[ 65] = { 0,	PU|NF,		SEN(getpgrp),			"getpgrp"		},
[ 66] = { 0,	0,		SEN(setsid),			"setsid"		},
[ 67] = { 2,	TF,		SEN(pivotroot),			"pivot_root"		},
[ 68] = { 0,	TS,		SEN(sgetmask),			"sgetmask"		},
[ 69] = { 1,	TS,		SEN(ssetmask),			"ssetmask"		},
[ 70] = { 2,	TC,		SEN(setreuid),			"setreuid"		},
[ 71] = { 2,	TC,		SEN(setregid),			"setregid"		},
[ 72] = { 3,	TM,		SEN(mincore),			"mincore"		},
[ 73] = { 1,	TS,		SEN(sigpending),		"sigpending"		},
[ 74] = { 2,	0,		SEN(sethostname),		"sethostname"		},
[ 75] = { 2,	0,		SEN(setrlimit),			"setrlimit"		},
[ 76] = { 2,	0,		SEN(getrlimit),			"getrlimit"		},
[ 77] = { 2,	0,		SEN(getrusage),			"getrusage"		},
[ 78] = { 2,	0,		SEN(gettimeofday),		"gettimeofday"		},
[ 79] = { 2,	0,		SEN(settimeofday),		"settimeofday"		},
[ 80] = { 2,	TC,		SEN(getgroups),			"getgroups"		},
[ 81] = { 2,	TC,		SEN(setgroups),			"setgroups"		},
[ 82] = { 6,	TN,		SEN(sendto),			"sendto"		},
[ 83] = { 2,	TF,		SEN(symlink),			"symlink"		},
[ 84] = { 2,	TF|TLST|TSTA,	SEN(lstat),			"lstat"			},
[ 85] = { 3,	TF,		SEN(readlink),			"readlink"		},
[ 86] = { 1,	TF,		SEN(uselib),			"uselib"		},
[ 87] = { 2,	TF,		SEN(swapon),			"swapon"		},
[ 88] = { 4,	0,		SEN(reboot),			"reboot"		},
[ 89] = { 6,	TD|TM|SI,	SEN(mmap_4koff),		"mmap2"			},
[ 90] = { 6,	TD|TM|SI,	SEN(mmap),			"mmap"			},
[ 91] = { 2,	TM|SI,		SEN(munmap),			"munmap"		},
[ 92] = { 2,	TF,		SEN(truncate),			"truncate"		},
[ 93] = { 2,	TD,		SEN(ftruncate),			"ftruncate"		},
[ 94] = { 2,	TD,		SEN(fchmod),			"fchmod"		},
[ 95] = { 3,	TD,		SEN(fchown),			"fchown"		},
[ 96] = { 2,	0,		SEN(getpriority),		"getpriority"		},
[ 97] = { 3,	0,		SEN(setpriority),		"setpriority"		},
[ 98] = { 4,	TN,		SEN(recv),			"recv"			},
[ 99] = { 2,	TF|TSF|TSFA,	SEN(statfs),			"statfs"		},
[100] = { 2,	TD|TFSF|TSFA,	SEN(fstatfs),			"fstatfs"		},
[101] = { 2,	TF|TST|TSTA,	SEN(stat64),			"stat64"		},
/* [102] - was socketcall */
[103] = { 3,	0,		SEN(syslog),			"syslog"		},
[104] = { 3,	0,		SEN(setitimer),			"setitimer"		},
[105] = { 2,	0,		SEN(getitimer),			"getitimer"		},
[106] = { 2,	TC,		SEN(capget),			"capget"		},
[107] = { 2,	TC,		SEN(capset),			"capset"		},
[108] = { 5,	TD,		SEN(pread),			"pread64"		},
[109] = { 5,	TD,		SEN(pwrite),			"pwrite64"		},
[110] = { 2,	TF,		SEN(getcwd),			"getcwd"		},
[111] = { 0,	0,		SEN(vhangup),			"vhangup"		},
[112] = { 2,	TD|TFST|TSTA,	SEN(fstat64),			"fstat64"		},
[113] = { 0,	TP,		SEN(vfork),			"vfork"			},
[114] = { 4,	TP,		SEN(wait4),			"wait4"			},
[115] = { 1,	TF,		SEN(swapoff),			"swapoff"		},
[116] = { 1,	0,		SEN(sysinfo),			"sysinfo"		},
[117] = { 2,	TN,		SEN(shutdown),			"shutdown"		},
[118] = { 1,	TD,		SEN(fsync),			"fsync"			},
[119] = { 3,	TM,		SEN(madvise),			"madvise"		},
[120] = { 5,	TP,		SEN(clone),			"clone"			},
[121] = { 2,	0,		SEN(setdomainname),		"setdomainname"		},
[122] = { 4,	TD|TN,		SEN(sendfile),			"sendfile"		},
[123] = { 6,	TN,		SEN(recvfrom),			"recvfrom"		},
[124] = { 1,	0,		SEN(adjtimex32),		"adjtimex"		},
[125] = { 3,	TM|SI,		SEN(mprotect),			"mprotect"		},
[126] = { 3,	TS,		SEN(sigprocmask),		"sigprocmask"		},
[127] = { 2,	0,		SEN(create_module),		"create_module"		},
[128] = { 3,	0,		SEN(init_module),		"init_module"		},
[129] = { 2,	0,		SEN(delete_module),		"delete_module"		},
[130] = { 1,	0,		SEN(get_kernel_syms),		"get_kernel_syms"	},
[131] = { 4,	TF,		SEN(quotactl),			"quotactl"		},
[132] = { 1,	0,		SEN(getpgid),			"getpgid"		},
[133] = { 1,	TD,		SEN(fchdir),			"fchdir"		},
[134] = { 2,	0,		SEN(bdflush),			"bdflush"		},
[135] = { 3,	0,		SEN(sysfs),			"sysfs"			},
[136] = { 1,	NF,		SEN(personality),		"personality"		},
[137] = { 5,	0,		SEN(afs_syscall),		"afs_syscall"		},
[138] = { 1,	TC|NF,		SEN(setfsuid),			"setfsuid"		},
[139] = { 1,	TC|NF,		SEN(setfsgid),			"setfsgid"		},
[140] = { 5,	TD,		SEN(llseek),			"_llseek"		},
[141] = { 3,	TD,		SEN(getdents),			"getdents"		},
[142] = { 5,	TD,		SEN(select),			"_newselect"		},
[143] = { 2,	TD,		SEN(flock),			"flock"			},
[144] = { 3,	TM,		SEN(msync),			"msync"			},
[145] = { 3,	TD,		SEN(readv),			"readv"			},
[146] = { 3,	TD,		SEN(writev),			"writev"		},
[147] = { 1,	0,		SEN(getsid),			"getsid"		},
[148] = { 1,	TD,		SEN(fdatasync),			"fdatasync"		},
[149] = { 1,	0,		SEN(sysctl),			"_sysctl"		},
[150] = { 2,	TM,		SEN(mlock),			"mlock"			},
[151] = { 2,	TM,		SEN(munlock),			"munlock"		},
[152] = { 1,	TM,		SEN(mlockall),			"mlockall"		},
[153] = { 0,	TM,		SEN(munlockall),		"munlockall"		},
[154] = { 2,	0,		SEN(sched_setparam),		"sched_setparam"	},
[155] = { 2,	0,		SEN(sched_getparam),		"sched_getparam"	},
[156] = { 3,	0,		SEN(sched_setscheduler),	"sched_setscheduler"	},
[157] = { 1,	0,		SEN(sched_getscheduler),	"sched_getscheduler"	},
[158] = { 0,	0,		SEN(sched_yield),		"sched_yield"		},
[159] = { 1,	0,		SEN(sched_get_priority_max),	"sched_get_priority_max"},
[160] = { 1,	0,		SEN(sched_get_priority_min),	"sched_get_priority_min"},
[161] = { 2,	0,		SEN(sched_rr_get_interval_time32),"sched_rr_get_interval"},
[162] = { 2,	0,		SEN(nanosleep_time32),		"nanosleep"		},
[163] = { 5,	TM|SI,		SEN(mremap),			"mremap"		},
[164] = { 3,	TC,		SEN(setresuid),			"setresuid"		},
[165] = { 3,	TC,		SEN(getresuid),			"getresuid"		},
[166] = { 2,	TS,		SEN(sigaltstack),		"sigaltstack"		},
[167] = { 5,	0,		SEN(query_module),		"query_module"		},
[168] = { 3,	TD,		SEN(poll_time32),		"poll"			},
[169] = { 3,	0,		SEN(nfsservctl),		"nfsservctl"		},
[170] = { 3,	TC,		SEN(setresgid),			"setresgid"		},
[171] = { 3,	TC,		SEN(getresgid),			"getresgid"		},
[172] = { 5,	TC,		SEN(prctl),			"prctl"			},
[173] = { 0,	TS,		SEN(rt_sigreturn),		"rt_sigreturn"		},
[174] = { 4,	TS,		SEN(rt_sigaction),		"rt_sigaction"		},
[175] = { 4,	TS,		SEN(rt_sigprocmask),		"rt_sigprocmask"	},
[176] = { 2,	TS,		SEN(rt_sigpending),		"rt_sigpending"		},
[177] = { 4,	TS,		SEN(rt_sigtimedwait_time32),	"rt_sigtimedwait"	},
[178] = { 3,	TS,		SEN(rt_sigqueueinfo),		"rt_sigqueueinfo"	},
[179] = { 2,	TS,		SEN(rt_sigsuspend),		"rt_sigsuspend"		},
[180] = { 3,	TF,		SEN(chown),			"chown"			},
[181] = { 5,	TN,		SEN(setsockopt),		"setsockopt"		},
[182] = { 5,	TN,		SEN(getsockopt),		"getsockopt"		},
[183] = { 3,	TN,		SEN(sendmsg),			"sendmsg"		},
[184] = { 3,	TN,		SEN(recvmsg),			"recvmsg"		},
[185] = { 3,	TI,		SEN(semop),			"semop"			},
[186] = { 3,	TI,		SEN(semget),			"semget"		},
[187] = { 4,	TI,		SEN(semctl),			"semctl"		},
[188] = { 4,	TI,		SEN(msgsnd),			"msgsnd"		},
[189] = { 5,	TI,		SEN(msgrcv),			"msgrcv"		},
[190] = { 2,	TI,		SEN(msgget),			"msgget"		},
[191] = { 3,	TI,		SEN(msgctl),			"msgctl"		},
[192] = { 3,	TI|TM|SI,	SEN(shmat),			"shmat"			},
[193] = { 1,	TI|TM|SI,	SEN(shmdt),			"shmdt"			},
[194] = { 3,	TI,		SEN(shmget),			"shmget"		},
[195] = { 3,	TI,		SEN(shmctl),			"shmctl"		},
[196] = { 5,	TN,		SEN(getpmsg),			"getpmsg"		},
[197] = { 5,	TN,		SEN(putpmsg),			"putpmsg"		},
[198] = { 2,	TF|TLST|TSTA,	SEN(lstat64),			"lstat64"		},
[199] = { 3,	TF,		SEN(truncate64),		"truncate64"		},
[200] = { 3,	TD,		SEN(ftruncate64),		"ftruncate64"		},
[201] = { 3,	TD,		SEN(getdents64),		"getdents64"		},
[202] = { 3,	TD,		SEN(fcntl64),			"fcntl64"		},
[203] = { 5,	0,		SEN(printargs),			"attrctl"		},
[204] = { 5,	0,		SEN(printargs),			"acl_get"		},
[205] = { 5,	0,		SEN(printargs),			"acl_set"		},
[206] = { 0,	PU|NF,		SEN(gettid),			"gettid"		},
[207] = { 4,	TD,		SEN(readahead),			"readahead"		},
[208] = { 2,	TS,		SEN(kill),			"tkill"			},
[209] = { 4,	TD|TN,		SEN(sendfile64),		"sendfile64"		},
[210] = { 6,	0,		SEN(futex_time32),		"futex"			},
[211] = { 3,	0,		SEN(sched_setaffinity),		"sched_setaffinity"	},
[212] = { 3,	0,		SEN(sched_getaffinity),		"sched_getaffinity"	},
[213] = { 5,	0,		SEN(printargs),			"set_thread_area"	},
[214] = { 5,	0,		SEN(printargs),			"get_thread_area"	},
[215] = { 2,	TM,		SEN(io_setup),			"io_setup"		},
[216] = { 1,	TM,		SEN(io_destroy),		"io_destroy"		},
[217] = { 5,	0,		SEN(io_getevents_time32),	"io_getevents"		},
[218] = { 3,	0,		SEN(io_submit),			"io_submit"		},
[219] = { 3,	0,		SEN(io_cancel),			"io_cancel"		},
[220] = { 5,	0,		SEN(printargs),			"alloc_hugepages"	},
[221] = { 1,	0,		SEN(printargs),			"free_hugepages"	},
[222] = { 1,	TP|SE,		SEN(exit),			"exit_group"		},
[223] = { 4,	0,		SEN(lookup_dcookie),		"lookup_dcookie"	},
[224] = { 1,	TD,		SEN(epoll_create),		"epoll_create"		},
[225] = { 4,	TD,		SEN(epoll_ctl),			"epoll_ctl"		},
[226] = { 4,	TD,		SEN(epoll_wait),		"epoll_wait"		},
[227] = { 5,	TM|SI,		SEN(remap_file_pages),		"remap_file_pages"	},
[228] = { 4,	TI,		SEN(semtimedop_time32),		"semtimedop"		},
[229] = { 4,	TD,		SEN(mq_open),			"mq_open"		},
[230] = { 1,	0,		SEN(mq_unlink),			"mq_unlink"		},
[231] = { 5,	TD,		SEN(mq_timedsend_time32),	"mq_timedsend"		},
[232] = { 5,	TD,		SEN(mq_timedreceive_time32),	"mq_timedreceive"	},
[233] = { 2,	TD,		SEN(mq_notify),			"mq_notify"		},
[234] = { 3,	TD,		SEN(mq_getsetattr),		"mq_getsetattr"		},
[235] = { 5,	TP,		SEN(waitid),			"waitid"		},
[236] = { 6,	TD,		SEN(fadvise64_64),		"fadvise64_64"		},
[237] = { 1,	0,		SEN(set_tid_address),		"set_tid_address"	},
[238] = { 5,	TF,		SEN(setxattr),			"setxattr"		},
[239] = { 5,	TF,		SEN(setxattr),			"lsetxattr"		},
[240] = { 5,	TD,		SEN(fsetxattr),			"fsetxattr"		},
[241] = { 4,	TF,		SEN(getxattr),			"getxattr"		},
[242] = { 4,	TF,		SEN(getxattr),			"lgetxattr"		},
[243] = { 4,	TD,		SEN(fgetxattr),			"fgetxattr"		},
[244] = { 3,	TF,		SEN(listxattr),			"listxattr"		},
[245] = { 3,	TF,		SEN(listxattr),			"llistxattr"		},
[246] = { 3,	TD,		SEN(flistxattr),		"flistxattr"		},
[247] = { 2,	TF,		SEN(removexattr),		"removexattr"		},
[248] = { 2,	TF,		SEN(removexattr),		"lremovexattr"		},
[249] = { 2,	TD,		SEN(fremovexattr),		"fremovexattr"		},
[250] = { 3,	0,		SEN(timer_create),		"timer_create"		},
[251] = { 4,	0,		SEN(timer_settime32),		"timer_settime"		},
[252] = { 2,	0,		SEN(timer_gettime32),		"timer_gettime"		},
[253] = { 1,	0,		SEN(timer_getoverrun),		"timer_getoverrun"	},
[254] = { 1,	0,		SEN(timer_delete),		"timer_delete"		},
[255] = { 2,	0,		SEN(clock_settime32),		"clock_settime"		},
[256] = { 2,	0,		SEN(clock_gettime32),		"clock_gettime"		},
[257] = { 2,	0,		SEN(clock_getres_time32),	"clock_getres"		},
[258] = { 4,	0,		SEN(clock_nanosleep_time32),	"clock_nanosleep"	},
[259] = { 3,	TS,		SEN(tgkill),			"tgkill"		},
[260] = { 6,	TM,		SEN(mbind),			"mbind"			},
[261] = { 5,	TM,		SEN(get_mempolicy),		"get_mempolicy"		},
[262] = { 3,	TM,		SEN(set_mempolicy),		"set_mempolicy"		},
[263] = { 5,	0,		SEN(vserver),			"vserver"		},
[264] = { 5,	0,		SEN(add_key),			"add_key"		},
[265] = { 4,	0,		SEN(request_key),		"request_key"		},
[266] = { 5,	0,		SEN(keyctl),			"keyctl"		},
[267] = { 3,	0,		SEN(ioprio_set),		"ioprio_set"		},
[268] = { 2,	0,		SEN(ioprio_get),		"ioprio_get"		},
[269] = { 0,	TD,		SEN(inotify_init),		"inotify_init"		},
[270] = { 3,	TD|TF,		SEN(inotify_add_watch),		"inotify_add_watch"	},
[271] = { 2,	TD,		SEN(inotify_rm_watch),		"inotify_rm_watch"	},
[272] = { 4,	TM,		SEN(migrate_pages),		"migrate_pages"		},
[273] = { 6,	TD,		SEN(pselect6_time32),		"pselect6"		},
[274] = { 5,	TD,		SEN(ppoll_time32),		"ppoll"			},
[275] = { 4,	TD|TF,		SEN(openat),			"openat"		},
[276] = { 3,	TD|TF,		SEN(mkdirat),			"mkdirat"		},
[277] = { 4,	TD|TF,		SEN(mknodat),			"mknodat"		},
[278] = { 5,	TD|TF,		SEN(fchownat),			"fchownat"		},
[279] = { 3,	TD|TF,		SEN(futimesat),			"futimesat"		},
[280] = { 4,	TD|TF|TFST|TSTA,SEN(fstatat64),			"fstatat64"		},
[281] = { 3,	TD|TF,		SEN(unlinkat),			"unlinkat"		},
[282] = { 4,	TD|TF,		SEN(renameat),			"renameat"		},
[283] = { 5,	TD|TF,		SEN(linkat),			"linkat"		},
[284] = { 3,	TD|TF,		SEN(symlinkat),			"symlinkat"		},
[285] = { 4,	TD|TF,		SEN(readlinkat),		"readlinkat"		},
[286] = { 3,	TD|TF,		SEN(fchmodat),			"fchmodat"		},
[287] = { 3,	TD|TF,		SEN(faccessat),			"faccessat"		},
[288] = { 1,	TP,		SEN(unshare),			"unshare"		},
[289] = { 2,	0,		SEN(set_robust_list),		"set_robust_list"	},
[290] = { 3,	0,		SEN(get_robust_list),		"get_robust_list"	},
[291] = { 6,	TD,		SEN(splice),			"splice"		},
[292] = { 6,	TD,		SEN(sync_file_range),		"sync_file_range"	},
[293] = { 4,	TD,		SEN(tee),			"tee"			},
[294] = { 4,	TD,		SEN(vmsplice),			"vmsplice"		},
[295] = { 6,	TM,		SEN(move_pages),		"move_pages"		},
[296] = { 3,	0,		SEN(getcpu),			"getcpu"		},
[297] = { 6,	TD,		SEN(epoll_pwait),		"epoll_pwait"		},
[298] = { 3,	TF|TSF|TSFA,	SEN(statfs64),			"statfs64"		},
[299] = { 3,	TD|TFSF|TSFA,	SEN(fstatfs64),			"fstatfs64"		},
[300] = { 4,	0,		SEN(kexec_load),		"kexec_load"		},
[301] = { 4,	TD|TF,		SEN(utimensat_time32),		"utimensat"		},
[302] = { 3,	TD|TS,		SEN(signalfd),			"signalfd"		},
[303] = { 4,	TD,		SEN(timerfd),			"timerfd"		},
[304] = { 1,	TD,		SEN(eventfd),			"eventfd"		},
[305] = { 6,	TD,		SEN(fallocate),			"fallocate"		},
[306] = { 2,	TD,		SEN(timerfd_create),		"timerfd_create"	},
[307] = { 4,	TD,		SEN(timerfd_settime32),		"timerfd_settime"	},
[308] = { 2,	TD,		SEN(timerfd_gettime32),		"timerfd_gettime"	},
[309] = { 4,	TD|TS,		SEN(signalfd4),			"signalfd4"		},
[310] = { 2,	TD,		SEN(eventfd2),			"eventfd2"		},
[311] = { 1,	TD,		SEN(epoll_create1),		"epoll_create1"		},
[312] = { 3,	TD,		SEN(dup3),			"dup3"			},
[313] = { 2,	TD,		SEN(pipe2),			"pipe2"			},
[314] = { 1,	TD,		SEN(inotify_init1),		"inotify_init1"		},
[315] = { 5,	TD,		SEN(preadv),			"preadv"		},
[316] = { 5,	TD,		SEN(pwritev),			"pwritev"		},
[317] = { 4,	TP|TS,		SEN(rt_tgsigqueueinfo),		"rt_tgsigqueueinfo"	},
[318] = { 5,	TD,		SEN(perf_event_open),		"perf_event_open"	},
[319] = { 5,	TN,		SEN(recvmmsg_time32),		"recvmmsg"		},
[320] = { 4,	TN,		SEN(accept4),			"accept4"		},
[321] = { 4,	0,		SEN(prlimit64),			"prlimit64"		},
[322] = { 2,	TD,		SEN(fanotify_init),		"fanotify_init"		},
[323] = { 6,	TD|TF,		SEN(fanotify_mark),		"fanotify_mark"		},
[324] = { 2,	0,		SEN(clock_adjtime32),		"clock_adjtime"		},
[325] = { 5,	TD|TF,		SEN(name_to_handle_at),		"name_to_handle_at"	},
[326] = { 3,	TD,		SEN(open_by_handle_at),		"open_by_handle_at"	},
[327] = { 1,	TD,		SEN(syncfs),			"syncfs"		},
[328] = { 2,	TD,		SEN(setns),			"setns"			},
[329] = { 4,	TN,		SEN(sendmmsg),			"sendmmsg"		},
[330] = { 6,	0,		SEN(process_vm_readv),		"process_vm_readv"	},
[331] = { 6,	0,		SEN(process_vm_writev),		"process_vm_writev"	},
[332] = { 5,	0,		SEN(kcmp),			"kcmp"			},
[333] = { 3,	TD,		SEN(finit_module),		"finit_module"		},
[334] = { 3,	0,		SEN(sched_setattr),		"sched_setattr"		},
[335] = { 4,	0,		SEN(sched_getattr),		"sched_getattr"		},
[336] = { 2,	TF,		SEN(utimes),			"utimes"		},
[337] = { 5,	TD|TF,		SEN(renameat2),			"renameat2"		},
[338] = { 3,	0,		SEN(seccomp),			"seccomp"		},
[339] = { 3,	0,		SEN(getrandom),			"getrandom"		},
[340] = { 2,	TD,		SEN(memfd_create),		"memfd_create"		},
[341] = { 3,	TD,		SEN(bpf),			"bpf"			},
[342] = { 5,	TD|TF|TP|TSD|SE|SI,	SEN(execveat),			"execveat"		},
[343] = { 2,	0,		SEN(membarrier),		"membarrier"		},
[344] = { 1,	TD,		SEN(userfaultfd),		"userfaultfd"		},
[345] = { 3,	TM,		SEN(mlock2),			"mlock2"		},
[346] = { 6,	TD,		SEN(copy_file_range),		"copy_file_range"	},
[347] = { 6,	TD,		SEN(preadv2),			"preadv2"		},
[348] = { 6,	TD,		SEN(pwritev2),			"pwritev2"		},
[349] = { 5,	TD|TF|TSTA,	SEN(statx),			"statx"			},
[350] = { 6,	0,		SEN(io_pgetevents_time32),	"io_pgetevents"		},
[351] = { 4,	TM|SI,		SEN(pkey_mprotect),		"pkey_mprotect"		},
[352] = { 2,	0,		SEN(pkey_alloc),		"pkey_alloc"		},
[353] = { 1,	0,		SEN(pkey_free),			"pkey_free"		},
[354] = { 4,	0,		SEN(rseq),			"rseq"			},
/* [355 ... 402] - reserved to sync up with other architectures */
#include "syscallent-common-32.h"
#include "syscallent-common.h"
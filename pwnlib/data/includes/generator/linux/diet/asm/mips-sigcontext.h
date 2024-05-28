#ifndef __mips64__
struct sigcontext {
	unsigned int       sc_regmask;		
	unsigned int       sc_status;
	unsigned long long sc_pc;
	unsigned long long sc_regs[32];
	unsigned long long sc_fpregs[32];	
	unsigned int       sc_ownedfp;
	unsigned int       sc_fpc_csr;		
	unsigned int       sc_fpc_eir;		
	unsigned int       sc_ssflags;		
	unsigned long long sc_mdhi;
	unsigned long long sc_mdlo;
	unsigned int       sc_cause;		
	unsigned int       sc_badvaddr;		
	unsigned long      sc_sigset[4];	
};
#else
struct sigcontext {
	unsigned long long sc_regs[32];
	unsigned long long sc_fpregs[32];
	unsigned long long sc_mdhi;
	unsigned long long sc_hi1;
	unsigned long long sc_hi2;
	unsigned long long sc_hi3;
	unsigned long long sc_mdlo;
	unsigned long long sc_lo1;
	unsigned long long sc_lo2;
	unsigned long long sc_lo3;
	unsigned long long sc_pc;
	unsigned int       sc_fpc_csr;
	unsigned int       sc_used_math;
	unsigned int       sc_dsp;
	unsigned int       sc_reserved;
};
#endif
struct sigcontext {
	unsigned long fault_address;
	unsigned long regs[31];
	unsigned long sp;
	unsigned long pc;
	unsigned long pstate;
	unsigned char __reserved[4096] __attribute__((__aligned__(16)));
};
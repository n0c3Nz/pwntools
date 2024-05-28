#define __SUNOS_MAXWIN   31
struct sigcontext {
	int sigc_onstack;      
	int sigc_mask;         
	int sigc_sp;           
	int sigc_pc;           
	int sigc_npc;          
	int sigc_psr;          
	int sigc_g1;           
	int sigc_o0;           
	int sigc_oswins;       
	char *sigc_spbuf[__SUNOS_MAXWIN];
	struct {
		unsigned long	locals[8];
		unsigned long	ins[8];
	} sigc_wbuf[__SUNOS_MAXWIN];
};
typedef struct {
	struct {
		unsigned long psr;
		unsigned long pc;
		unsigned long npc;
		unsigned long y;
		unsigned long u_regs[16]; 
	}		si_regs;
	int		si_mask;
} __siginfo_t;
typedef struct {
	unsigned   long si_float_regs [32];
	unsigned   long si_fsr;
	unsigned   long si_fpqdepth;
	struct {
		unsigned long *insn_addr;
		unsigned long insn;
	} si_fpqueue [16];
} __siginfo_fpu_t;
/*
#	setjmp.s	-	setjmp() and longjmp() routines for CodeWarrior C++ for PowerPC
#
#	Copyright � 2015 Freescale Semiconductor, Inc.  All Rights Reserved.
#
#  $Date: $
#  $Revision: $
#
#	THEORY OF OPERATION
#
#	The runtime support routines __setjmp() and longjmp() support the C <setjmp.h>
#	facilities. These routines are (finally) compatible with Apple's StdCLib.
#
#	__setjmp() captures the state of the program in a jmp_buf data structure
#	which has the following C definition:
#
#		typedef struct __jmp_buf {
#			unsigned long	PC;			//	0: saved PC
#			unsigned long	CR;			//	4: saved CR
#			unsigned long	SP;			//  8: saved SP
#			unsigned long	RTOC;		// 12: saved RTOC
#			unsigned long	reserved;	// 16: not used
#			unsigned long	GPRs[19];	// 20: saved r13-r31
#		} *__jmp_buf;
#
#	longjmp() restores the state, effecting a transfer back to the saved PC with
#	appropriate registers, stack, TOC, etc.
#
#	In <setjmp.h> the jmp_buf type must be defined as an array (per ANSI rules):
#
#		typedef long jmp_buf[62];
#
#	setjmp() and longjmp() are defined as follows:
#
#		int __setjmp(jmp_buf env);
#		#define setjmp(env) __setjmp(env)
#		void longjmp(jmp_buf env, int val);
#
#	Because __setjmp() needs to save the RTOC of the calling function, it
#	cannot be called across a fragment boundary. To ensure this, we omit
#	the TVector for setjmp() so that link errors will occur
#	if a fragment does not have a local copy of these routines.
#	(We can't omit the TVector for longjmp() because the Plum Hall suite
#	tests for it by taking its address, which requires a TVector)
#
*/
	.global __setjmp
	.global longjmp

	.text
__setjmp:
	se_mflr	5
	se_stw	5,0(3)
	mfcr	5
	se_stw	5,4(3)
#if __SPE__
	/* Save 64-bit registers  */
	evstdd	1,8(3)
	evstdd	2,16(3)
	evstdd	13,24(3)
	evstdd	14,32(3)
	evstdd	15,40(3)
	evstdd	16,48(3)
	evstdd	17,56(3)
	evstdd	18,64(3)
	evstdd	19,72(3)
	evstdd	20,80(3)
	evstdd	21,88(3)
	evstdd	22,96(3)
	evstdd	23,104(3)
	evstdd	24,112(3)
	evstdd	25,120(3)
	evstdd	26,128(3)
	evstdd	27,136(3)
	evstdd	28,144(3)
	evstdd	29,152(3)
	evstdd	30,160(3)
	evstdd	31,168(3)
#else
	se_stw	1,8(3)
	se_stw	2,12(3)
	e_stmw	13,16(3)
#endif

	se_li	3,0
	se_blr


longjmp:
#if __SPE__
	/* Restore 64-bit registers  */
	evldd	1,8(3)
	evldd	2,16(3)
	evldd	13,24(3)
	evldd	14,32(3)
	evldd	15,40(3)
	evldd	16,48(3)
	evldd	17,56(3)
	evldd	18,64(3)
	evldd	19,72(3)
	evldd	20,80(3)
	evldd	21,88(3)
	evldd	22,96(3)
	evldd	23,104(3)
	evldd	24,112(3)
	evldd	25,120(3)
	evldd	26,128(3)
	evldd	27,136(3)
	evldd	28,144(3)
	evldd	29,152(3)
	evldd	30,160(3)
#else
	e_lmw	13,16(3)
	se_lwz	2,12(3)
	se_lwz	1,8(3)
#endif
	se_lwz	5,4(3)
	mtcrf	255,5
	se_lwz	5,0(3)	
	se_mtlr	5

	se_mr	3,4
	se_cmpi	3,0
	se_bne	lab_end
	se_li	3,1
lab_end:
	se_blr

	.end

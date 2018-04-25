/* e200 Runtime Support Library
 * Copyright © 2015 Freescale Semiconductors. All rights reserved.
 *
 */


/*
 *	__start.c	-	entry-point for e200 programs
 *
 */
#include <string.h>
#include <stdlib.h>
#include <Runtime_configuration.h>

_EWL_BEGIN_EXTERN_C

#if SUPPORT_SEMIHOST_ARGC_ARGV
#define __MAX_CMDLINE_ARGS 10
static char *argv[__MAX_CMDLINE_ARGS] = { 0 };
#else
static char *argv[] = { 0 };
#endif

#if __GNUC__
#define __call_static_initializers __init_cpp
#endif
#if SUPPORT_SEMIHOST_ARGC_ARGV
extern int __argc_argv(char **, int);
#endif /* SUPPORT_SEMIHOST_ARGC_ARGV */

extern void __call_static_initializers(void);
extern int main(int, char **);

extern void __init_registers() EWL_WEAK;
extern void __init_hardware() EWL_WEAK;
extern void __init_user() EWL_WEAK;

#if defined(__SEMIHOSTING)
extern void __init_semihost(void) _EWL_WEAK;
#endif

#if SUPPORT_ROM_TO_RAM
extern void __copy_rom_sections_to_ram(void);
extern char __S_romp[];
#endif

extern void __init_registers()
{
}

extern void __init_hardware()
{
}

extern void __init_user()
{
}


static void zero_fill_bss(void)
{
	extern char __START_BSS[];
	extern char __END_BSS[];

	memset(__START_BSS, 0, (__END_BSS - __START_BSS));
}


void _start(void) _EWL_NAKED;
void _start(void)
{
		// Setup registers
		__init_registers();

		// setup hardware
		__init_hardware();

		//	zero-fill the .bss section
		zero_fill_bss();

#if SUPPORT_ROM_TO_RAM
		if (__S_romp)
			__copy_rom_sections_to_ram();
#endif

		//	call C++ static initializers
		__call_static_initializers();

		// initializations before main, user specific
		__init_user();

#if defined(__SEMIHOSTING)
		// semihost initializations
		__init_semihost();
#endif

		//	call main(argc, &argv)
#if SUPPORT_SEMIHOST_ARGC_ARGV
		exit(main(__argc_argv(argv, __MAX_CMDLINE_ARGS), argv));
#else
		exit(main(0, argv));
#endif

		//	should never get here
		while (1);

}

_EWL_END_EXTERN_C


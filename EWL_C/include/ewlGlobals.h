/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/16 11:52:46 $
 * $Revision: 1.1.2.2 $
 */

#ifndef _EWL_GLOBALS_H
#define _EWL_GLOBALS_H

#if defined(__COLDFIRE__)
    #include <coldfire/ansi_prefix.CF.h>        /* ColdFire */
#elif defined(__HC12__)
    #include <s12z/ansi_prefix.S12Z.h>          /* HC12Z */
#elif defined(__VSPA__)
    #include <vspa/ansi_prefix.VSPA.h>          /* VSPA */
#elif defined(__PPC_EABI__)
    #include <pa/ansi_prefix.PA_EABI.bare.h>    /* Embedded Power Architecture */
#elif defined(__m56800E__) || defined(__m56800__)
    #include <dsc/ansi_prefix_dsc.h>            /* DSC */
#elif defined (__arm) || defined(__arm__)
	#include <arm/ansi_prefix.ARM.h>			/* ARM */
#elif defined (_ENTERPRISE_C_) || defined (__STARCORE__)
	#include <sc/ansi_prefix_StarCore.h>		/* StarCore */
#elif defined (__INTEL__)
	#include <x86/ansi_prefix_winx86.h>			/* Windows x86 */
#else
    /* Unknown platform! */
    #error ewlGlobals.h could not include prefix file
#endif

#endif /* _EWL_GLOBALS_H */

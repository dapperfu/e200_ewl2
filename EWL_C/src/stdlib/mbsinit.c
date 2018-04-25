/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: $
 * $Revision: $
 */

/*
 *	Routines
 *	--------
 *		mbsinit
 */

#include <ansi_parms.h>
_MISRA_EXCEPTION_RULE_19_6()
#ifdef __STDC_WANT_LIB_EXT1__
/* enforce __STDC_WANT_LIB_EXT1__ support */
#undef __STDC_WANT_LIB_EXT1__
#endif
_MISRA_RESTORE()
#define __STDC_WANT_LIB_EXT1__ 1

#if _EWL_WIDE_CHAR

#include <ewl_misra_types.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#include <locale_api.h>
#include <mbstring.h>
#include <ewl_thread_local_data.h>

MISRA_ALLOW_POINTER_CASTS()

#if _EWL_C99
int_t _EWL_CDECL mbsinit(const mbstate_t * ps)
{
	if (ps == NULL) {
		MISRA_EXCEPTION_RULE_14_7()
		return (-1);
#if _AEABI_PORTABILITY_LEVEL
	} else if (ps->state1 == 0 && ps->state2 == 0) {
#else
	} else if (*ps == 0) {
#endif
		MISRA_EXCEPTION_RULE_14_7()
		return (1);
	} else {
		MISRA_EXCEPTION_RULE_14_7()
		return (0);
	}
}
#endif  /* _EWL_C99 */
#endif  /*  _EWL_WIDE_CHAR  */

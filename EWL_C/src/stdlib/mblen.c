/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:24 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		mblen
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

#include <errno.h>
#include <ewl_misra_types.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#include <ewl_thread_local_data.h>
#include <locale_api.h>
#include <mbstring.h>

MISRA_ALLOW_POINTER_CASTS()

int_t _EWL_CDECL mblen(const char_t *s, size_t n) {
  if (s && *s) {
    MISRA_QUIET_NULL_POINTER_ARG()
    MISRA_EXCEPTION_RULE_14_7()
    return (mbtowc(NULL, s, n));
  } else {
    MISRA_EXCEPTION_RULE_14_7()
    return (0);
  }
}

#endif /*  _EWL_WIDE_CHAR  */

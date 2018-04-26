/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:14:18 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		wcsncmp
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
MISRA_EXCEPTION_RULE_20_9()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

MISRA_ALLOW_POINTER_CASTS()

#pragma warn_possunwant off

/*
        This routine returns the length of the wide character string str
*/
size_t _EWL_CDECL(wcslen)(const wchar_t *str) {
  size_t len = (size_t)-1;

#if !defined(__POWERPC__)

  do {
    len++;
  } while (*str++);

#else

  wchar_t *p = (wchar_t *)str - 1;

  do {
    len++;
  } while (*++p);

#endif

  return (len);
}

#endif /* #if _EWL_WIDE_CHAR */

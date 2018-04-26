/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:14:18 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		wcsncpy
 *		wcsncpy_s
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

wchar_t *_EWL_CDECL wcsncpy(wchar_t *_EWL_RESTRICT dst,
                            const wchar_t *_EWL_RESTRICT src, size_t n) {
#if !defined(__POWERPC__)

  const wchar_t *p = src;
  wchar_t *q = dst;

  n++;

  while (--n) {
    MISRA_EXCEPTION_RULE_13_1()
    if (!(*q++ = *p++)) {
      while (--n) {
        *q++ = (wchar_t)0;
      }
      break;
    }
  }

#else

  const wchar_t *p = (const wchar_t *)src - 1;
  wchar_t *q = (wchar_t *)dst - 1;

  n++;

  while (--n) {
    MISRA_EXCEPTION_RULE_13_1()
    if (!(*++q = *++p)) {
      while (--n) {
        *++q = (wchar_t)0;
      }
      break;
    }
  }

#endif

  return (dst);
}

#endif /* #if _EWL_WIDE_CHAR */

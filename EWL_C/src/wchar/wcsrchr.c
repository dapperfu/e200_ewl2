/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:14:18 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *
 *		wcscoll
 *		wcsxfrm
 *
 *		wcschr
 *		wcsrchr
 *		wcsstr
 *
 *		wcsspn
 *		wcscspn
 *		wcspbrk
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

wchar_t *_EWL_CDECL wcsrchr(const wchar_t *str, wchar_t chr) {
#if !defined(__POWERPC__)

  const wchar_t *p = str;
  const wchar_t *q = 0;
  wchar_t c = chr;
  wchar_t ch;

  MISRA_EXCEPTION_RULE_13_1()
  while ((ch = *p++) != 0) {
    if (ch == c) {
      q = p - 1;
    }
  }

  if (q) {
    MISRA_EXCEPTION_RULE_14_7()
    return ((wchar_t *)q);
  }

  return (c ? 0 : (wchar_t *)(p - 1));

#else

  const wchar_t *p = str - 1;
  const wchar_t *q = 0;
  wchar_t c = chr;
  wchar_t ch;

  MISRA_EXCEPTION_RULE_13_1()
  while ((ch = *++p) != 0) {
    if (ch == c) {
      q = p;
    }
  }

  if (q) {
    MISRA_EXCEPTION_RULE_14_7()
    return ((wchar_t *)q);
  }

  return (c ? 0 : (wchar_t *)p);

#endif
}

#endif /* #if _EWL_WIDE_CHAR */

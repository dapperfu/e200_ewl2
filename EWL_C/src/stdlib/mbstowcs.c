/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:24 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		mbstowcs
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

size_t _EWL_CDECL mbstowcs(wchar_t *_EWL_RESTRICT pwcs,
                           const char_t *_EWL_RESTRICT s, size_t n) {
  size_t result;
  char_t *source;
  int_t count;
  size_t source_len;

  source_len = strlen(s);

  if (pwcs) {
    source = (char_t *)s;
    for (count = 0; count < (int_t)n; count++) {
      if (*source) {
        result = (size_t)mbtowc(pwcs++, source, source_len);
        if (result > 0U) {
          source += result;
          source_len -= result;
        } else {
          MISRA_EXCEPTION_RULE_14_7()
          return ((size_t)-1);
        }
      } else {
        *pwcs = (wchar_t)0;
        break;
      }
    }
  } else {
    count = 0;
  }

  return (size_t)count;
}

#endif /*  _EWL_WIDE_CHAR  */

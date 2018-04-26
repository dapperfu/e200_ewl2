/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: $
 * $Revision: $
 */

/*
 *	Routines
 *	--------
 *		wcsrtombs
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

#if _EWL_C99
size_t _EWL_CDECL wcsrtombs(char_t *_EWL_RESTRICT dst,
                            const wchar_t **_EWL_RESTRICT src, size_t len,
                            mbstate_t *_EWL_RESTRICT ps) {

  size_t chars_written = 0u;
  size_t result;
  char_t temp[MB_LEN_MAX];
  wchar_t *source;

  if (!*src) {
    MISRA_EXCEPTION_RULE_14_7()
    return (0u);
  }

  source = (wchar_t *)*src;
  while (chars_written <= len) {
    if (!*source) {
      if (dst != NULL) {
        *(dst + chars_written) = '\0';
        *src = NULL;
      }
      break;
    } else {
      result = wcrtomb(temp, *source++, ps);
      if ((chars_written + result) <= len) {
        strncpy(dst + chars_written, temp, result);
        chars_written += result;
        *src = source;
      } else {
        MISRA_EXCEPTION_RULE_14_6()
        break;
      }
    }
  }

  return (chars_written);
}

#endif /* _EWL_C99 */
#endif /*  _EWL_WIDE_CHAR  */

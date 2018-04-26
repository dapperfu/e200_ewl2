/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:23 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		wcrtomb_s
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
static int_t __unicode_to_UTF8_s(char_t *_EWL_RESTRICT s, size_t smax,
                                 wchar_t wchar) {
  int_t number_of_bytes;
  uint32_t wide_char;
  uchar_t *target_ptr;
  uchar_t first_byte_mark[6] = {0x00u, 0xc0u, 0xe0u, 0xf0u, 0xf8u, 0xfcu};

  wide_char = (uint32_t)wchar;

  if (wide_char < 0x00000080u) {
    number_of_bytes = 1;
  } else if (wide_char < 0x00000800u) {
    number_of_bytes = 2;
  } else if (wide_char < 0x00010000u) {
    number_of_bytes = 3;
  } else if (wide_char < 0x00200000u) {
    number_of_bytes = 4;
  } else if (wide_char < 0x04000000u) {
    number_of_bytes = 5;
  } else {
    number_of_bytes = 6;
  }

  target_ptr = (uchar_t *)s + number_of_bytes;

  switch (number_of_bytes) { /* Note: the cases are meant to fall through! */
  case 6:
    if (smax > 6U) {
      *--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
    } else {
      --target_ptr;
    }
    wide_char >>= 6;
    MISRA_EXCEPTION_RULE_15_2()
  case 5:
    if (smax > 5U) {
      *--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
    } else {
      --target_ptr;
    }
    wide_char >>= 6;
    MISRA_EXCEPTION_RULE_15_2()
  case 4:
    if (smax > 4U) {
      *--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
    } else {
      --target_ptr;
    }
    wide_char >>= 6;
    MISRA_EXCEPTION_RULE_15_2()
  case 3:
    if (smax > 3U) {
      *--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
    } else {
      --target_ptr;
    }
    wide_char >>= 6;
    MISRA_EXCEPTION_RULE_15_2()
  case 2:
    if (smax > 2U) {
      *--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
    } else {
      --target_ptr;
    }
    wide_char >>= 6;
    MISRA_EXCEPTION_RULE_15_2()
  case 1:
    *--target_ptr = ((uchar_t)wide_char | first_byte_mark[number_of_bytes - 1]);
    break;
  default:
    break;
  }

  return (number_of_bytes);
}

errno_t _EWL_CDECL wcrtomb_s(size_t *_EWL_RESTRICT retval,
                             char_t *_EWL_RESTRICT s, rsize_t smax, wchar_t wc,
                             mbstate_t *_EWL_RESTRICT ps) {
  char_t buf[MB_CUR_MAX + 1];
  char_t *use_s;
  rsize_t use_smax;

  if ((retval == NULL) || (ps == NULL) ||
      ((s != NULL) && (smax > (rsize_t)RSIZE_MAX))) {
    __ewl_runtime_constraint_violation_s(NULL, NULL, ERANGE);
    if (retval != NULL) {
      *retval = (size_t)-1;
    }
    if ((s != NULL) && (smax <= (rsize_t)RSIZE_MAX)) {
      s[0] = 0;
    }
    MISRA_EXCEPTION_RULE_14_7()
    return ERANGE;
  }

  if (s == NULL) {
    use_s = buf;
    use_smax = sizeof(buf);
  } else {
    use_s = s;
    use_smax = smax;
  }

  *retval = (size_t)__unicode_to_UTF8_s(use_s, use_smax, wc);

  return ENOERR;

  MISRA_EXCEPTION_RULE_16_7()
}

#endif /* _EWL_C99 */
#endif /*  _EWL_WIDE_CHAR  */

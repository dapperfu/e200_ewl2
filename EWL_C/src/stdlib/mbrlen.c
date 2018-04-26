/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:23 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		mbrlen
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

#if (_EWL_C99 && _EWL_WIDE_CHAR)
size_t _EWL_CDECL mbrlen(const char_t *_EWL_RESTRICT s, size_t n,
                         mbstate_t *_EWL_RESTRICT ps) {
  mbstate_t internal;
  mbstate_t *mbs = ps;

  return (mbrtowc(NULL, s, n, (mbs != NULL) ? mbs : &internal));
}

#endif /* _EWL_C99 */
#endif /*  _EWL_WIDE_CHAR  */

/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:41 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		strcpy_s
 */

#include <ansi_parms.h>
_MISRA_EXCEPTION_RULE_19_6()
#ifdef __STDC_WANT_LIB_EXT1__
/* enforce __STDC_WANT_LIB_EXT1__ support */
#undef __STDC_WANT_LIB_EXT1__
#endif
_MISRA_RESTORE()
#define __STDC_WANT_LIB_EXT1__ 1

#include <errno.h>
#include <ewl_misra_types.h>
#include <ewl_thread_local_data.h>
#include <stdlib.h>
#include <string.h>

MISRA_ALLOW_POINTER_CASTS()

#pragma warn_possunwant off

errno_t(strcpy_s)(char_t *_EWL_RESTRICT dst, rsize_t dst_max,
                  const char_t *_EWL_RESTRICT src) {
  if ((dst_max == 0U) || (dst == NULL) || (src == NULL) ||
      (dst_max > (rsize_t)RSIZE_MAX)) {
    __ewl_runtime_constraint_violation_s(NULL, NULL, ERANGE);
    MISRA_EXCEPTION_RULE_14_7()
    return ERANGE;
  }

  if (dst_max <= strnlen_s(src, dst_max)) {
    __ewl_runtime_constraint_violation_s(NULL, NULL, ERANGE);
    dst[0] = 0;
    MISRA_EXCEPTION_RULE_14_7()
    return ERANGE;
  }

  strcpy(dst, src);
  return ENOERR;
}

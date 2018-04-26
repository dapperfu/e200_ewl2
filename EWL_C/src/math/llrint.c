/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:06:19 $
 * $Revision: 1.1.2.1 $
 */

#include <ansi_parms.h>

#include <ewl_misra_types.h>

#if _EWL_FLOATING_POINT && _EWL_USES_SUN_DP_MATH_LIB && _EWL_LONGLONG

#include <errno.h>
#include <fenv.h>
#include <limits.h>
#include <math.h>

_EWL_IMP_EXP_C int64_t _EWL_MATH_CDECL _EWL_CANT_THROW llrint(f64_t x) {
/* domain or range error may occur */
#if _EWL_C99
  if (x > (f64_t)LONG_MAX) {
    MISRA_EXCEPTION_RULE_13_7()
    if ((uint_t)math_errhandling & (uint_t)MATH_ERRNO) {
      MISRA_EXCEPTION_RULE_20_5()
      errno = ERANGE;
    }
  }
#endif
  return ((int64_t)rint(x));
}

#endif /* _EWL_FLOATING_POINT && _EWL_USES_SUN_DP_MATH_LIB */

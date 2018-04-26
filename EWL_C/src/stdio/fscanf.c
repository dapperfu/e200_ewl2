/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:12:41 $
 * $Revision: 1.1.2.4 $
 */

/*	Routines
 *	--------
 *		fscanf
 */

#include <ansi_parms.h>
_MISRA_EXCEPTION_RULE_19_6()
#ifdef __STDC_WANT_LIB_EXT1__
/* enforce __STDC_WANT_LIB_EXT1__ support */
#undef __STDC_WANT_LIB_EXT1__
#endif
_MISRA_RESTORE()
#define __STDC_WANT_LIB_EXT1__ 1

#include <critical_regions.h>
#include <ewl_misra_types.h>
#include <stdarg.h>
#include <stdio.h>

#if _EWL_C99_PRINTF_SCANF && _EWL_WIDE_CHAR && _EWL_C99
#include <wchar.h>
#endif

MISRA_EXCEPTION_RULE_16_1()
int_t _EWL_CDECL fscanf(FILE *_EWL_RESTRICT file,
                        const char_t *_EWL_RESTRICT format, ...) {
  int_t retval;
  MISRA_QUIET_UNUSED_SYMBOL()
  critical_regions crtrgn;
  va_list args;

  if (file == stdin) {
    crtrgn = stdin_access;
  } else {
    crtrgn = files_access;
  }

  if (file == NULL) {
    MISRA_EXCEPTION_RULE_14_7()
    return (EOF);
  }

#if _EWL_C99_PRINTF_SCANF && _EWL_WIDE_CHAR && _EWL_C99
  if (fwide(file, -1) >= 0) {
    MISRA_EXCEPTION_RULE_14_7()
    return (EOF);
  }
#endif /* _EWL_C99_PRINTF_SCANF && _EWL_WIDE_CHAR && _EWL_C99 */

  va_start(args, format);

  __begin_critical_region(crtrgn);
  retval = __sformatter(__FileRead, (void *)file, format, args, 0);
  __end_critical_region(crtrgn);

  return (retval);
}

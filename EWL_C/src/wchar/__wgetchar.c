/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:14:14 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		__get_wchar
 */

#pragma ANSI_strict off

#include <ansi_parms.h>

#if _EWL_WIDE_CHAR

#pragma ANSI_strict reset

#include <ewl_misra_types.h>
MISRA_EXCEPTION_RULE_20_9()
#include <ansi_files.h>
#include <critical_regions.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

/*
        This function gets the wide character c
        from the input stream file,
        and returns (wint_t) c.
*/

wchar_t _EWL_CDECL __getwc(FILE *_file) {
  MISRA_EXCEPTION_RULE_11_4()
  struct _FILE *file = (struct _FILE *)_file;
  wchar_t c; /* wide char to hold the final result */

  if (fwide(_file, 1) <= 0) {
    MISRA_EXCEPTION_RULE_14_7()
    return (WEOF);
  }
  if (file->mode.file_kind == (uint_t)__console_file) {
    MISRA_EXCEPTION_RULE_14_7()
    return (__getwchar());
  }
  MISRA_EXCEPTION_RULE_11_4()
  if (__fread((char_t *)&c, sizeof(c), 1U, _file) == 0U) {
    MISRA_EXCEPTION_RULE_14_7()
    return WEOF;
  }
  return (c);
}

wchar_t _EWL_CDECL __getwchar(void) {
  wchar_t wch = (wchar_t)0; /* wide char to hold the final result */
  char_t mbbuffer[MB_LEN_MAX];
  char_t *mbbufptr = mbbuffer;
  int_t mbresult = -1;
  int_t mbstlen = 1;
  int_t i;

  for (i = 0; i < MB_LEN_MAX; i++) {
    mbbuffer[i] = 0x00;
  }
  if (fwide(stdin, 1) <= 0) {
    MISRA_EXCEPTION_RULE_14_7()
    return (WEOF);
  }
  /* __fread does not have threadsafety  */
  while (mbresult == -1) {
    if (__fread(mbbufptr++, (size_t)1, (size_t)mbstlen, stdin) == 0U) {
      MISRA_EXCEPTION_RULE_14_7()
      return WEOF;
    }
    mbresult = mbtowc(&wch, mbbuffer, (size_t)mbstlen);
    mbstlen++;
  }

  return (wch);
}

wchar_t _EWL_CDECL __fgetwc(FILE *file) {
  wchar_t c;

  /* __getwc calls __fread, which does not have threadsafety, to avoid nested
   * critical regions	*/
  c = __getwc(file);
  return (c);
}

#endif /* _EWL_WIDE_CHAR */

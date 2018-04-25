/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:23 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		wcsrtombs_s
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

#include <ewl_misra_types.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#include <locale_api.h>
#include <mbstring.h>
#include <ewl_thread_local_data.h>

MISRA_ALLOW_POINTER_CASTS()

#if _EWL_C99
errno_t _EWL_CDECL wcsrtombs_s(size_t * _EWL_RESTRICT retval, char_t * _EWL_RESTRICT dst, rsize_t dstmax, const wchar_t ** _EWL_RESTRICT src, rsize_t len, mbstate_t * _EWL_RESTRICT ps)
{

	size_t    chars_written = 0u;
	size_t    result;
	char_t    temp[MB_LEN_MAX];
	wchar_t * source;

	if ((retval == NULL) || (src == NULL) || (*src == NULL) || (ps == NULL) ||
	    ((dst != NULL) && ((len > (rsize_t)RSIZE_MAX) || (dstmax > (rsize_t)RSIZE_MAX) || (dstmax < len))))
	{
		__ewl_runtime_constraint_violation_s(NULL, NULL, ERANGE);
		if (retval != NULL) {
			*retval = (size_t)-1;
		}
		MISRA_EXCEPTION_RULE_14_7()
		return ERANGE;
	}

	if (!*src) {
		*retval = 0u;
		MISRA_EXCEPTION_RULE_14_7()
		return 0;
	}

	source = (wchar_t*)*src;
	while(chars_written <= len) {
		if (!*source) {
			if (dst) {
				*(dst + chars_written) = '\0';
				*src = NULL;
			}
			break;
		} else {
			result = wcrtomb(temp, *source++, ps);
			if ((chars_written + result) <= len) {
				if (dst) {
					strncpy(dst + chars_written, temp, result);
				}
				chars_written += result;
				*src = source;
			} else {
				MISRA_EXCEPTION_RULE_14_6()
				break;
			}
		}
	}

	*retval = chars_written;

	return 0;
}

#endif  /* _EWL_C99 */
#endif  /*  _EWL_WIDE_CHAR  */

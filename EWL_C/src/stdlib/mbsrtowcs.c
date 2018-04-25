/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:23 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		mbsrtowcs
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
size_t _EWL_CDECL mbsrtowcs(wchar_t * _EWL_RESTRICT dst, const char_t ** _EWL_RESTRICT src, size_t len, mbstate_t * _EWL_RESTRICT ps)
{
	const char_t *source;
	size_t  result;
	size_t 	count;
	size_t  source_len;
	wchar_t local_target;

	if(!*src) {
		MISRA_EXCEPTION_RULE_14_7()
		return (0u);
	}

	source_len = (dst == NULL) ? 50U: strlen(*src);
	source     = *src;

	for (count = 0u; count < len; count++) {
		if (*source) {
		   	result = mbrtowc((dst == NULL) ? &local_target : dst++, source, source_len, ps);
		   	if (result > 0U) {
		   		source += result;
		   		source_len -= result;
				*src = source;
		   	} else {
		   		break;
		   	}
		} else {
			if (dst != NULL) {
				*dst = (wchar_t)0;
				*src = NULL;
			}
	   		MISRA_EXCEPTION_RULE_14_6()
			break;
		}
	}

	return(count);
}

#endif  /* _EWL_C99 */
#endif  /*  _EWL_WIDE_CHAR  */

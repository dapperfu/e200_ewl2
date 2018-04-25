/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:13:23 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		wctomb_s
 *		wcrtomb
 *		wcrtomb_s
 *		mbsrtowcs
 *		mbsrtowcs_s
 *		wcsrtombs
 *		wcsrtombs_s
 *		mbstowcs
 *		mbstowcs_s
 *		wcstombs
 *		wcstombs_s
 *		mbsinit
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

static int_t is_utf8_complete(const char_t * str, size_t n)
{
	const uchar_t *s = (const uchar_t *)str;
	int_t i, encoded;

	if ((int_t)n <= 0) {			/* 0 or fewer characters do not form a valid multibyte character */
		MISRA_EXCEPTION_RULE_14_7()
		return(-1);
	}

	if (*s == 0x00U) {
		MISRA_EXCEPTION_RULE_14_7()
		return(0);
	}

	if ((*s & 0x80U) == 0x00U) {
		MISRA_EXCEPTION_RULE_14_7()
		return (1);
	} else if ((*s & 0xe0U) == 0xc0U) {
		encoded = 1;
	} else if ((*s & 0xf0U) == 0xe0U) {
		encoded = 2;
	} else if ((*s & 0xf8U) == 0xf0U) {
		encoded = 3;
	} else if ((*s & 0xfcU) == 0xf8U) {
		encoded = 4;
	} else if ((*s & 0xfeU) == 0xfcU) {
		encoded = 5;
	} else {
		MISRA_EXCEPTION_RULE_14_7()
		return (-1);
	}

	for (i = 0; i < encoded; i++) {
		if ((*(s+i+1) & 0xc0U) != 0x80U) {
			MISRA_EXCEPTION_RULE_14_7()
			return (-1);
		}
	}
	if ((int_t)n < (i + 1)) {
		MISRA_EXCEPTION_RULE_14_7()
		return (-2);
	}
	return (encoded+1);
}

int_t __utf8_to_unicode(wchar_t * pwc, const char_t * s, size_t n)
{

	int_t   i, number_of_bytes;
	int_t   check_byte_count;
	uchar_t *source;
	uchar_t pattern_chr = 0U;
	uint32_t result_chr = 0U;

	if (!s) {          /* We are assuming UTF-8 encoding so return 0 */
		MISRA_EXCEPTION_RULE_14_7()
		return(0);
	}

	if ((int_t)n <= 0) {			/* 0 or fewer characters do not form a valid multibyte character */
		MISRA_EXCEPTION_RULE_14_7()
		return(-1);
	}

	number_of_bytes = is_utf8_complete(s, n);
	if (number_of_bytes < 0) {
		MISRA_EXCEPTION_RULE_14_7()
		return (-1);
	}

	/* if we get this far, we have a valid UTF-8 encoding */
	source = (uchar_t *)s;
	switch (number_of_bytes) /* the cases are meant to drop through! */
	{
		case 6:
			pattern_chr = (*source & 0x03U);
			break;
		case 5:
			pattern_chr = (*source & 0x07U);
			break;
		case 4:
			pattern_chr = (*source & 0x0fU);
			break;
		case 3:
			pattern_chr = (*source & 0x1fU);
			break;
		case 2:
			pattern_chr = (*source & 0x3fU);
			break;
		case 1:
			pattern_chr = *source;
			break;
		default:
			break;
	}

	result_chr = pattern_chr;
	for (i = number_of_bytes - 1; i > 0; i--) {
		source++;
		result_chr <<= 6;
		pattern_chr = (*source & 0x7fU);
		result_chr |= pattern_chr;
	}

	if (result_chr == 0x00000000UL) {
		check_byte_count = 0;
	} else if (result_chr < 0x00000080UL) {
		check_byte_count = 1;
	} else if (result_chr < 0x00000800UL) {
		check_byte_count = 2;
	} else if (result_chr < 0x00010000UL) {
		check_byte_count = 3;
	} else if (result_chr < 0x00200000UL) {
		check_byte_count = 4;
	} else if (result_chr < 0x04000000UL) {
		check_byte_count = 5;
	} else {
		check_byte_count = 6;
	}

	if (check_byte_count != number_of_bytes) {
		MISRA_EXCEPTION_RULE_14_7()
		return(-1);
	}
	if (pwc) {
		*pwc = (wchar_t)result_chr;
	}

	return(number_of_bytes);
}

#if (_EWL_C99 && _EWL_WIDE_CHAR)

size_t _EWL_CDECL mbrtowc(wchar_t * _EWL_RESTRICT pwc, const char_t * _EWL_RESTRICT s, size_t n, mbstate_t * _EWL_RESTRICT ps)
{
	#pragma unused(ps)
	MISRA_QUIET_UNUSED_ARGS()

	int_t num_of_chars;

	if (s) {
		num_of_chars = is_utf8_complete(s, n);
		if ((num_of_chars != -1) && (num_of_chars != -2)) {
			if (pwc) {
				num_of_chars = __utf8_to_unicode(pwc, s, n);
			}
		} else if (num_of_chars == -1) {
			MISRA_EXCEPTION_RULE_20_5()
			errno = EILSEQ;
		} else {}
		MISRA_EXCEPTION_RULE_14_7()
		return (size_t)num_of_chars;
	} else {
		if (pwc) {
			*pwc = (wchar_t)0;
		}
	}
	return(0u);

	MISRA_EXCEPTION_RULE_16_7()
}

#endif  /* _EWL_C99 */
#endif  /*  _EWL_WIDE_CHAR  */

/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: $
 * $Revision: $
 */

/*
 *	Routines
 *	--------
 *		wcrtomb
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

int_t __unicode_to_UTF8(char_t * _EWL_RESTRICT s, wchar_t wchar)
{
	int_t    number_of_bytes;
	uint32_t wide_char;
	uchar_t	*target_ptr;
	uchar_t  first_byte_mark[6] = {0x00U, 0xc0U, 0xe0U, 0xf0U, 0xf8U, 0xfcU};

	if (!s) {          /* We are assuming UTF-8 encoding so return 0 */
		MISRA_EXCEPTION_RULE_14_7()
		return(0);
	}

	wide_char = (uint32_t)wchar;

	if (wide_char < 0x00000080UL) {
		number_of_bytes = 1;
	} else if (wide_char < 0x00000800UL) {
		number_of_bytes = 2;
	} else if (wide_char < 0x00010000UL) {
		number_of_bytes = 3;
	} else if (wide_char < 0x00200000UL) {
		number_of_bytes = 4;
	} else if (wide_char < 0x04000000UL) {
		number_of_bytes = 5;
	} else {
		number_of_bytes = 6;
	}

	target_ptr = (uchar_t *)s + number_of_bytes;

	switch (number_of_bytes)
	{				/* Note: the cases are meant to fall through! */
		case 6:
			*--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
			wide_char >>= 6;
			MISRA_EXCEPTION_RULE_15_2()
		case 5:
			*--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
			wide_char >>= 6;
			MISRA_EXCEPTION_RULE_15_2()
		case 4:
			*--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
			wide_char >>= 6;
			MISRA_EXCEPTION_RULE_15_2()
		case 3:
			*--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
			wide_char >>= 6;
			MISRA_EXCEPTION_RULE_15_2()
		case 2:
			*--target_ptr = (((uchar_t)wide_char & 0x003fu) | 0x80u);
			wide_char >>= 6;
			MISRA_EXCEPTION_RULE_15_2()
		case 1:
			*--target_ptr = ((uchar_t)wide_char | first_byte_mark[number_of_bytes - 1]);
			break;
		default: break;
	}

	return (number_of_bytes);
}

#if _EWL_C99
size_t _EWL_CDECL wcrtomb(char_t * _EWL_RESTRICT s, wchar_t wc, mbstate_t * _EWL_RESTRICT ps)
{
	#pragma unused(ps)
	MISRA_QUIET_UNUSED_ARGS()

	if (!s) {
		MISRA_EXCEPTION_RULE_14_7()
		return(1u);
	}

	return(size_t)__unicode_to_UTF8(s, wc);

	MISRA_EXCEPTION_RULE_16_7()
}

#endif  /* _EWL_C99 */
#endif  /*  _EWL_WIDE_CHAR  */

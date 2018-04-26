/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 15:39:38 $
 * $Revision: 1.1 $
 */

#ifndef _EWL_CPP_STD_STDLIB_H
#define _EWL_CPP_STD_STDLIB_H

#ifdef __cplusplus

namespace std {

using ::abort;
using ::atexit;
using ::exit;
using ::size_t;
#if _EWL_C99
#if _EWL_OS_X_VERSION > 3
using ::_Exit;
#endif /* _EWL_OS_X_VERSION > 3 */
#endif /* _EWL_C99 */
using ::atol;
using ::calloc;
using ::free;
using ::getenv;
using ::malloc;
using ::realloc;
using ::system;
#if _EWL_LONGLONG
#if _EWL_C99
#if _EWL_OS_X_VERSION > 3
using ::atoll;
#endif /* _EWL_OS_X_VERSION > 3 */
#endif /* _EWL_C99 */
#endif /* _EWL_LONGLONG */
#ifndef _EWL_NO_MATH_LIB
using ::atof;
using ::strtod;
#if _EWL_OS_X_VERSION > 3
using ::strtold;
#if _EWL_C99
using ::strtof;
#endif /* _EWL_C99 */
#endif /* _EWL_OS_X_VERSION > 3 */
#endif /* _EWL_NO_MATH_LIB */
using ::atoi;
using ::strtol;
using ::strtoul;
#if _EWL_LONGLONG
#if _EWL_C99
#if _EWL_OS_X_VERSION > 1
using ::strtoll;
using ::strtoull;
#endif /* _EWL_OS_X_VERSION > 1 */
#endif /* _EWL_C99 */
#endif /* _EWL_LONGLONG */
#if _EWL_WIDE_CHAR
using ::mblen;
using ::mbstowcs;
using ::mbtowc;
using ::wcstombs;
using ::wctomb;
#endif /* _EWL_WIDE_CHAR */
using ::abs;
using ::bsearch;
using ::div;
using ::div_t;
using ::labs;
using ::ldiv_t;
using ::qsort;
#if _EWL_LONGLONG
#if _EWL_C99
#if _EWL_OS_X_VERSION > 3
using ::llabs;
using ::lldiv;
using ::lldiv_t;
#endif /* _EWL_OS_X_VERSION > 3 */
#endif /* _EWL_C99 */
#endif /* _EWL_LONGLONG */
using ::ldiv;
using ::rand;
using ::srand;
#if 0 /* Do not include AltiVec extensions when using non-EWL C */
#if __VEC__
	using ::vec_calloc;
	using ::vec_free;
	using ::vec_malloc;
	using ::vec_realloc;
#endif /* __VEC__ */
#endif /* 0 */
#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__
using ::bsearch_s;
using ::errno_t;
using ::getenv_s;
using ::qsort_s;
using ::rsize_t;
#if _EWL_WIDE_CHAR
using ::mbstowcs_s;
using ::wcstombs_s;
using ::wctomb_s;
#endif /* _EWL_WIDE_CHAR */
#endif /* __STDC_WANT_LIB_EXT1__ */

} /* namespace std */

#endif /* __cplusplus */

#endif /* _EWL_CPP_STD_STDLIB_H */

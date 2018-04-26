/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 15:39:39 $
 * $Revision: 1.1 $
 */

#ifndef _EWL_STDLIB_H
#define _EWL_STDLIB_H

#include <ansi_parms.h>

#if !_EWL_USING_CW_C_HEADERS_
#error You must have the non-EWL C header file access path before the EWL access path
#else

#include <cstdlib>

#if defined(__cplusplus) && defined(_EWL_USING_NAMESPACE)
using std::abort;
using std::atexit;
using std::exit;
using std::size_t;
#if _EWL_C99
using std::_Exit;
#endif /* _EWL_C99 */
using std::calloc;
using std::free;
using std::getenv;
using std::malloc;
using std::realloc;
using std::system;
#if _EWL_FLOATING_POINT
using std::atof;
#endif
using std::atoi;
using std::atol;
#if _EWL_LONGLONG
#if _EWL_C99
using std::atoll;
#endif /* _EWL_C99 */
#endif /* _EWL_LONGLONG */
#if _EWL_FLOATING_POINT
using std::strtod;
using std::strtold;
#if _EWL_C99
using std::strtof;
#endif /* _EWL_C99 */
#endif /* _EWL_FLOATING_POINT */
using std::strtol;
using std::strtoul;
#if _EWL_LONGLONG
#if _EWL_C99
using std::strtoll;
using std::strtoull;
#endif /* _EWL_C99 */
#endif /* _EWL_LONGLONG */
#if _EWL_WIDE_CHAR
using std::mblen;
using std::mbstowcs;
using std::mbtowc;
using std::wcstombs;
using std::wctomb;
#endif /* _EWL_WIDE_CHAR */
using std::abs;
using std::bsearch;
using std::div;
using std::div_t;
using std::labs;
using std::ldiv_t;
using std::qsort;
#if _EWL_LONGLONG
#if _EWL_C99
using std::llabs;
using std::lldiv;
using std::lldiv_t;
#endif /* _EWL_C99 */
#endif /* _EWL_LONGLONG */
using std::ldiv;
using std::rand;
using std::srand;
#if __VEC__
using std::vec_calloc;
using std::vec_free;
using std::vec_malloc;
using std::vec_realloc;
#endif /* __VEC__ */
#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__
using std::bsearch_s;
using std::errno_t;
using std::getenv_s;
using std::qsort_s;
using std::rsize_t;
#if _EWL_WIDE_CHAR
using std::mbstowcs_s;
using std::wcstombs_s;
using std::wctomb_s;
#endif /* _EWL_WIDE_CHAR */
#endif /* __STDC_WANT_LIB_EXT1__ */
#endif /* defined(__cplusplus) && defined(_EWL_USING_NAMESPACE) */

#endif /* _EWL_USING_CW_C_HEADERS_ */

#endif /* _EWL_STDLIB_H */

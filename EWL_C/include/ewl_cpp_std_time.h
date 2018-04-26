/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 15:39:38 $
 * $Revision: 1.1 $
 */

#ifndef _EWL_CPP_STD_TIME_H
#define _EWL_CPP_STD_TIME_H

#ifdef __cplusplus

namespace std {

using ::size_t;

#if _EWL_CLOCK_T_AVAILABLE
using ::clock_t;
#endif /* _EWL_CLOCK_T_AVAILABLE */

#if _EWL_TIME_T_AVAILABLE
using ::time_t;
#endif /* _EWL_TIME_T_AVAILABLE */

#if _EWL_FLOATING_POINT
using ::difftime;
#endif /* _EWL_FLOATING_POINT */

#if _EWL_OS_TIME_SUPPORT
using ::asctime;
using ::clock;
using ::ctime;
using ::gmtime;
using ::localtime;
using ::mktime;
using ::strftime;
using ::time;
using ::tm;

#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__
using ::asctime_s;
using ::ctime_s;
using ::errno_t;
using ::gmtime_s;
using ::localtime_s;
using ::rsize_t;
#endif /* __STDC_WANT_LIB_EXT1__ */

#endif /* _EWL_OS_TIME_SUPPORT */

} /* namespace std */

#endif /* __cplusplus */

#endif /* _EWL_CPP_STD_TIME_H */

/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:39 $
 * $Revision: 1.1 $
 */

// WARNING
//
// stringfwd.h is a non-standard, non-portable header.
//
// WARNING

#ifndef _STRINGFWD_H
#define _STRINGFWD_H

#include <stringfwd>

#ifndef _EWL_NO_CPP_NAMESPACE

using std::allocator;
using std::basic_string;
using std::char_traits;
using std::string;
#ifndef _EWL_NO_WCHART_CPP_SUPPORT
using std::wstring;
#endif

#endif // _EWL_NO_CPP_NAMESPACE

#endif // _STRINGFWD_H

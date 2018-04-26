/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:38 $
 * $Revision: 1.1 $
 */

#ifndef _IOSTREAM_H
#define _IOSTREAM_H

#include <ios.h>
#include <iostream>
#include <istream.h>
#include <ostream.h>
#include <streambuf.h>

#ifndef _EWL_NO_CPP_NAMESPACE
#ifndef _EWL_NO_IO
using std::cerr;
using std::cin;
using std::clog;
using std::cout;
#ifndef _EWL_NO_WCHART_CPP_SUPPORT
using std::wcerr;
using std::wcin;
using std::wclog;
using std::wcout;
#endif // _EWL_NO_WCHART_CPP_SUPPORT
#endif // _EWL_NO_IO
#endif // _EWL_NO_CPP_NAMESPACE

#endif // _IOSTREAM_H

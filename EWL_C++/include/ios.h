/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:38 $
 * $Revision: 1.1 $
 */

#ifndef _IOS_H
#define _IOS_H

#include <ios>

#ifndef _EWL_NO_CPP_NAMESPACE
#ifndef _EWL_NO_IO
using std::basic_ios;
using std::fpos;
using std::ios;
using std::ios_base;
using std::streamoff;
using std::streamsize;
#ifndef _EWL_NO_WCHART_CPP_SUPPORT
using std::wios;
#endif
using std::boolalpha;
using std::dec;
using std::fixed;
using std::hex;
using std::internal;
using std::left;
using std::noboolalpha;
using std::noshowbase;
using std::noshowpoint;
using std::noshowpos;
using std::noskipws;
using std::nouppercase;
using std::oct;
using std::right;
using std::scientific;
using std::showbase;
using std::showpoint;
using std::showpos;
using std::skipws;
using std::uppercase;
#endif // _EWL_NO_IO
#endif // _EWL_NO_CPP_NAMESPACE

#endif // _IOS_H

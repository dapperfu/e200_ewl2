/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:38 $
 * $Revision: 1.1 $
 */

#ifndef _ISTREAM_H
#define _ISTREAM_H

#include <istream>

#ifndef _EWL_NO_CPP_NAMESPACE
#ifndef _EWL_NO_IO
using std::basic_iostream;
using std::basic_istream;
using std::iostream;
using std::istream;
#ifndef _EWL_NO_WCHART_CPP_SUPPORT
using std::wiostream;
using std::wistream;
using std::ws;
#endif // _EWL_NO_WCHART_CPP_SUPPORT
#endif // _EWL_NO_IO
#endif // _EWL_NO_CPP_NAMESPACE

#endif // _ISTREAM_H

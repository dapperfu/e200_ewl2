/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:38 $
 * $Revision: 1.1 $
 */

#ifndef _IOSFWD_H
#define _IOSFWD_H

#include <iosfwd>

#ifndef _EWL_NO_CPP_NAMESPACE
using std::allocator;
using std::char_traits;
#ifndef _EWL_NO_IO
using std::basic_filebuf;
using std::basic_fstream;
using std::basic_ifstream;
using std::basic_ios;
using std::basic_iostream;
using std::basic_istream;
using std::basic_istringstream;
using std::basic_ofstream;
using std::basic_ostream;
using std::basic_ostringstream;
using std::basic_streambuf;
using std::basic_stringbuf;
using std::basic_stringstream;
using std::filebuf;
using std::fpos;
using std::fstream;
using std::ifstream;
using std::ios;
using std::iostream;
using std::istream;
using std::istreambuf_iterator;
using std::istringstream;
using std::ofstream;
using std::ostream;
using std::ostreambuf_iterator;
using std::ostringstream;
using std::streambuf;
using std::streampos;
using std::stringbuf;
using std::stringstream;
#ifndef _EWL_NO_WCHART_CPP_SUPPORT
using std::wfilebuf;
using std::wfstream;
using std::wifstream;
using std::wios;
using std::wiostream;
using std::wistream;
using std::wistringstream;
using std::wofstream;
using std::wostream;
using std::wostringstream;
using std::wstreambuf;
using std::wstreampos;
using std::wstringbuf;
using std::wstringstream;
#endif // _EWL_NO_WCHART_CPP_SUPPORT
#endif // _EWL_NO_IO
#endif // _EWL_NO_CPP_NAMESPACE

#endif // _IOSFWD_H

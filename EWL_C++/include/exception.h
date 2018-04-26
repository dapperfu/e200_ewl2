/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:37 $
 * $Revision: 1.1 $
 */

// exception.h

#ifndef _EXCEPTION_H
#define _EXCEPTION_H

#include <exception>

#ifndef _EWL_NO_CPP_NAMESPACE
using std::bad_exception;
using std::exception;
using std::set_unexpected;
using std::unexpected;
using std::unexpected_handler;
#ifndef _EWL_NO_UNCAUGHT_EXCEPTION
using std::uncaught_exception;
#endif
using std::set_terminate;
using std::terminate;
using std::terminate_handler;
#endif // _EWL_NO_CPP_NAMESPACE

#endif // _EXCEPTION_H

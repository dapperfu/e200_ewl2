/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:38 $
 * $Revision: 1.1 $
 */

#ifndef _IOMANIP_H
#define _IOMANIP_H

#include <iomanip>

#ifndef _EWL_NO_CPP_NAMESPACE
#ifndef _EWL_NO_IO
using std::resetiosflags;
using std::setbase;
using std::setfill;
using std::setiosflags;
using std::setprecision;
using std::setw;
#endif // _EWL_NO_IO
#endif // _EWL_NO_CPP_NAMESPACE

#endif // _IOMANIP_H

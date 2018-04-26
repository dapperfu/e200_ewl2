/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:40 $
 * $Revision: 1.1 $
 */

#ifndef _UTILITY_H
#define _UTILITY_H

#include <utility>

#ifndef _EWL_NO_CPP_NAMESPACE
using std::make_pair;
using std::pair;
using namespace std::rel_ops;
namespace std {
using namespace rel_ops;
}
#endif // _EWL_NO_CPP_NAMESPACE

#endif // _UTILITY_H

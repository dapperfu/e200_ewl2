/* EWL
 * Copyright © 1995-2009 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2012/06/01 21:11:38 $
 * $Revision: 1.1 $
 */

#ifndef _ITERATOR_H
#define _ITERATOR_H

#include <iterator>

#ifndef _EWL_NO_CPP_NAMESPACE
using std::advance;
using std::back_insert_iterator;
using std::back_inserter;
using std::bidirectional_iterator_tag;
using std::distance;
using std::forward_iterator_tag;
using std::front_insert_iterator;
using std::front_inserter;
using std::input_iterator_tag;
using std::insert_iterator;
using std::inserter;
using std::iterator;
using std::iterator_traits;
using std::output_iterator_tag;
using std::random_access_iterator_tag;
using std::reverse_iterator;
#ifndef _EWL_NO_IO
using std::istream_iterator;
using std::istreambuf_iterator;
using std::ostream_iterator;
using std::ostreambuf_iterator;
#endif // _EWL_NO_IO
#endif // _EWL_NO_CPP_NAMESPACE        // hh 971207 Added backward compatibility

#endif // _ITERATOR_H                 // hh 971207 added standard include guards

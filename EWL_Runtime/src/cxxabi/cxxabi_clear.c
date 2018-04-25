/* Metrowerks Runtime Library
 * Copyright © 2004-2005 Metrowerks Corporation.  All rights reserved.
 *
 * Purpose:  Implementation of the portable Itanium C++ ABI
 *           see http://www.codesourcery.com/cxx-abi/
 *
 * $Date: 2013/04/15 14:26:20 $
 * $Revision: 1.1.2.1 $
 */

#include <stddef.h>

extern void *__clear(void *ptr,size_t size);
extern void *__clear(void *ptr,size_t size)
{
	char *cptr;

	if((cptr=(char *)ptr)!=NULL)
	{
		for(; size!=0; --size, ++cptr)
		{
			*cptr=0;
		}
	}
	return ptr;
}

/* EWL
 * Copyright © 1995-2007 Freescale Corporation.  All rights reserved.
 *
 * $Date: 2013/04/15 14:14:15 $
 * $Revision: 1.1.2.1 $
 */

/*
 *	Routines
 *	--------
 *		__get_wchar
 */

#pragma ANSI_strict off

#include <ansi_parms.h>

#if _EWL_WIDE_CHAR

#pragma ANSI_strict reset

#include <ewl_misra_types.h>
MISRA_EXCEPTION_RULE_20_9()
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <ansi_files.h>
#include <wchar.h>
#include <critical_regions.h>

/*
	getwc

	Description

	If the next wide character is present from the input
	stream pointed to by file, then fgetwc function obtains
	that wide character and advances the associated file
	position indicator for the stream (if defined).


	Returns

	The fgetwc function returns the next wide character
	from the input stream pointed to by file. If the stream
	as at end-of-file, then ind-of-file indicator for the stream
	is set and fgetwc returns WEOF.
*/


/*
	This function is the same at getwc.
*/

wchar_t	_EWL_CDECL getwc(FILE * _file)
{
	MISRA_EXCEPTION_RULE_11_4()
	struct _FILE * file = (struct _FILE *)_file;
	wchar_t c;
	MISRA_QUIET_UNUSED_SYMBOL()
	critical_regions crtrgn;
	if (file->mode.file_kind == (uint_t)__console_file) {
		crtrgn = stdin_access;
	} else {
		crtrgn = files_access;
	}

  	__begin_critical_region(crtrgn);
	c = __fgetwc(_file);
  	__end_critical_region(crtrgn);

	return(c);
}

wchar_t	_EWL_CDECL fgetwc(FILE * file)
{
	wchar_t	c;

  	/* getwc calls fread, which has threadsafety, adding critical regions here would
  	   lead to deadlock 	*/
	c = getwc(file);
	return(c);
}


#endif /* _EWL_WIDE_CHAR */

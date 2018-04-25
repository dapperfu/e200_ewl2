#define __sformatter __sformatter_s_FPLL

#if !defined(__m56800E__) || __option(slld)

#define _EWL_FLOATING_POINT_PRINTF_SCANF 1
#define _EWL_LONGLONG_PRINTF_SCANF 1
#define _EWL_USES_SUN_MATH_LIB 1

#include <stdio/__scanformat.c>
#endif

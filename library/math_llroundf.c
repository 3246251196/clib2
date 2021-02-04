/*
 * Experimental: Not a part of clib2 from Olaf Barthel
 */

#ifndef _MATH_HEADERS_H
#include "math_headers.h"
#endif /* _MATH_HEADERS_H */

#if LDBL_MANT_DIG == DBL_MANT_DIG && LDBL_MAX_EXP == DBL_MANT_DIG

/****************************************************************************/

long long int
llroundf(float x)
{
    return roundf(x);
}

/****************************************************************************/

#endif /* LDBL_MANT_DIG == DBL_MANT_DIG && LDBL_MAX_EXP == DBL_MANT_DIG */

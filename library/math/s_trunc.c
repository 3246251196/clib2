/*
 * $Id: math_s_trunc.c,v 1.4 2023-07-18 12:04:24 clib2devs Exp $
*/

#ifndef _MATH_HEADERS_H
#include "math_headers.h"
#endif /* _MATH_HEADERS_H */

static const double huge = 1.0e300;

double
trunc(double x) {
    int32_t i0, i1, j0;
    uint32_t i;
    EXTRACT_WORDS(i0, i1, x);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {    /* raise inexact if x != 0 */
            if (huge + x > 0.0) {/* |x|<1, so return 0*sign(x) */
                i0 &= 0x80000000U;
                i1 = 0;
            }
        } else {
            i = (0x000fffff) >> j0;
            if (((i0 & i) | i1) == 0) return x; /* x is integral */
            if (huge + x > 0.0) {    /* raise inexact flag */
                i0 &= (~i);
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) return x + x;    /* inf or NaN */
        else return x;        /* x is integral */
    } else {
        i = ((uint32_t)(0xffffffff)) >> (j0 - 20);
        if ((i1 & i) == 0) return x;    /* x is integral */
        if (huge + x > 0.0)        /* raise inexact flag */
            i1 &= (~i);
    }
    INSERT_WORDS(x, i0, i1);
    return x;
}

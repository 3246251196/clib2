/*
 * $Id: math_s_truncl.c,v 1.0 2023-07-18 12:04:24 clib2devs Exp $
*/

#ifndef _MATH_HEADERS_H
#include "math_headers.h"
#endif /* _MATH_HEADERS_H */

long double
truncl(long double x) {
    return trunc(x);
}


/* @(#)e_scalb.c 5.1 93/09/24 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

/*
 * scalb(x, fn) is provide for
 * passing various standard test suite. One
 * should use scalbn() instead.
 */

#include "fdlibm.h"

#ifndef _DOUBLE_IS_32BITS

double
scalb(double x, double fn)
{
    if (isnan(x) || isnan(fn))
        return x * fn;
    if (!finite(fn)) {
        if (fn > 0.0)
            return x * fn;
        else
            return x / (-fn);
    }
    if (rint(fn) != fn)
        return (fn - fn) / (fn - fn);
#if INT_MAX == 32767
    if (fn > 65000.0)
        return scalbln(x, 65000);
    if (-fn > 65000.0)
        return scalbln(x, -65000);
#else
    if (fn > 65000.0)
        return scalbn(x, 65000);
    if (-fn > 65000.0)
        return scalbn(x, -65000);
#endif
    return scalbn(x, (int)fn);
}

#endif /* defined(_DOUBLE_IS_32BITS) */
/*
 * $Id: fenv.h,v 1.5 2022-03-09 19:09:00 clib2devs Exp $
*/

#ifndef _FENV_H
#define _FENV_H

#include <stdint.h>
#include <features.h>
#include <endian.h>

#ifndef	__fenv_static
#define	__fenv_static	static
#endif

typedef uint32_t fenv_t;
typedef uint32_t fexcept_t;

/* Exception flags */
#define    FE_INEXACT      0x02000000
#define    FE_DIVBYZERO    0x04000000
#define    FE_UNDERFLOW    0x08000000
#define    FE_OVERFLOW     0x10000000
#define    FE_INVALID      0x20000000    /* all types of invalid FP ops */

/*
 * The PowerPC architecture has extra invalid flags that indicate the
 * specific type of invalid operation occurred.  These flags may be
 * tested, set, and cleared---but not masked---separately.  All of
 * these bits are cleared when FE_INVALID is cleared, but only
 * FE_VXSOFT is set when FE_INVALID is explicitly set in software.
 */
#define    FE_VXCVI    0x00000100    /* invalid integer convert */
#define    FE_VXSQRT   0x00000200    /* square root of a negative */
#define    FE_VXSOFT   0x00000400    /* software-requested exception */
#define    FE_VXVC     0x00080000    /* ordered comparison involving NaN */
#define    FE_VXIMZ    0x00100000    /* inf * 0 */
#define    FE_VXZDZ    0x00200000    /* 0 / 0 */
#define    FE_VXIDI    0x00400000    /* inf / inf */
#define    FE_VXISI    0x00800000    /* inf - inf */
#define    FE_VXSNAN   0x01000000    /* operation on a signalling NaN */
#define    FE_ALL_INVALID    (FE_VXCVI | FE_VXSQRT | FE_VXSOFT | FE_VXVC | \
             FE_VXIMZ | FE_VXZDZ | FE_VXIDI | FE_VXISI | \
             FE_VXSNAN | FE_INVALID)
#define    FE_ALL_EXCEPT    (FE_DIVBYZERO | FE_INEXACT | \
             FE_ALL_INVALID | FE_OVERFLOW | FE_UNDERFLOW)

/* Rounding modes */
#define    FE_TONEAREST    0x0000
#define    FE_TOWARDZERO   0x0001
#define    FE_UPWARD       0x0002
#define    FE_DOWNWARD     0x0003
#define    _ROUND_MASK    (FE_TONEAREST | FE_DOWNWARD | FE_UPWARD | FE_TOWARDZERO)

__BEGIN_DECLS

/* Default floating-point environment */
extern const fenv_t __fe_dfl_env;
#define FE_DFL_ENV (&__fe_dfl_env)

/* We need to be able to map status flag positions to mask flag positions */
#define _FPUSW_SHIFT    22
#define _ENABLE_MASK    ((FE_DIVBYZERO | FE_INEXACT | FE_INVALID | FE_OVERFLOW | FE_UNDERFLOW) >> _FPUSW_SHIFT)

#ifndef _SOFT_FLOAT
#ifdef __SPE__
#define	__mffs(__env) \
	__asm __volatile("mfspr %0, 512" : "=r" ((__env)->__bits.__reg))
#define	__mtfsf(__env) \
	__asm __volatile("mtspr 512,%0;isync" :: "r" ((__env).__bits.__reg))
#else
#define	__mffs(__env) \
	__asm __volatile("mffs %0" : "=f" ((__env)->__d))
#define	__mtfsf(__env) \
	__asm __volatile("mtfsf 255,%0" :: "f" ((__env).__d))
#endif
#else
#define	__mffs(__env)
#define	__mtfsf(__env)
#endif

union __fpscr {
    double __d;
    struct {
#if __BYTE_ORDER__ == LITTLE_ENDIAN
        fenv_t __reg;
        uint32_t __junk;
#else
        uint32_t __junk;
		fenv_t __reg;
#endif
    } __bits;
};

__fenv_static inline int
feclearexcept(int __excepts)
{
    union __fpscr __r;

    if (__excepts & FE_INVALID)
        __excepts |= FE_ALL_INVALID;
    __mffs(&__r);
    __r.__bits.__reg &= ~__excepts;
    __mtfsf(__r);
    return (0);
}

__fenv_static inline int
fegetexceptflag(fexcept_t *__flagp, int __excepts)
{
    union __fpscr __r;

    __mffs(&__r);
    *__flagp = __r.__bits.__reg & __excepts;
    return (0);
}

__fenv_static inline int
fesetexceptflag(const fexcept_t *__flagp, int __excepts)
{
    union __fpscr __r;

    if (__excepts & FE_INVALID)
        __excepts |= FE_ALL_INVALID;
    __mffs(&__r);
    __r.__bits.__reg &= ~__excepts;
    __r.__bits.__reg |= *__flagp & __excepts;
    __mtfsf(__r);
    return (0);
}

#ifdef __SPE__
extern int	feraiseexcept(int __excepts);
#else
__fenv_static inline int
feraiseexcept(int __excepts)
{
    union __fpscr __r;

    if (__excepts & FE_INVALID)
        __excepts |= FE_VXSOFT;
    __mffs(&__r);
    __r.__bits.__reg |= __excepts;
    __mtfsf(__r);
    return (0);
}
#endif

__fenv_static inline int
fetestexcept(int __excepts)
{
    union __fpscr __r;

    __mffs(&__r);
    return (__r.__bits.__reg & __excepts);
}

__fenv_static inline int
fegetround(void)
{
    union __fpscr __r;

    __mffs(&__r);
    return (__r.__bits.__reg & _ROUND_MASK);
}

__fenv_static inline int
fesetround(int __round)
{
    union __fpscr __r;

    if (__round & ~_ROUND_MASK)
        return (-1);
    __mffs(&__r);
    __r.__bits.__reg &= ~_ROUND_MASK;
    __r.__bits.__reg |= __round;
    __mtfsf(__r);
    return (0);
}

__fenv_static inline int
fegetenv(fenv_t *__envp)
{
    union __fpscr __r;

    __mffs(&__r);
    *__envp = __r.__bits.__reg;
    return (0);
}

__fenv_static inline int
feholdexcept(fenv_t *__envp)
{
    union __fpscr __r;

    __mffs(&__r);
    *__envp = __r.__bits.__reg;
    __r.__bits.__reg &= ~(FE_ALL_EXCEPT | _ENABLE_MASK);
    __mtfsf(__r);
    return (0);
}

__fenv_static inline int
fesetenv(const fenv_t *__envp)
{
    union __fpscr __r;

    __r.__bits.__reg = *__envp;
    __mtfsf(__r);
    return (0);
}

__fenv_static inline int
feupdateenv(const fenv_t *__envp)
{
    union __fpscr __r;

    __mffs(&__r);
    __r.__bits.__reg &= FE_ALL_EXCEPT;
    __r.__bits.__reg |= *__envp;
    __mtfsf(__r);
    return (0);
}

__fenv_static inline int
feenableexcept(int __mask)
{
	union __fpscr __r;
	fenv_t __oldmask;

	__mffs(&__r);
	__oldmask = __r.__bits.__reg;
	__r.__bits.__reg |= (__mask & FE_ALL_EXCEPT) >> _FPUSW_SHIFT;
	__mtfsf(__r);
	return ((__oldmask & _ENABLE_MASK) << _FPUSW_SHIFT);
}

__fenv_static inline int
fedisableexcept(int __mask)
{
	union __fpscr __r;
	fenv_t __oldmask;

	__mffs(&__r);
	__oldmask = __r.__bits.__reg;
	__r.__bits.__reg &= ~((__mask & FE_ALL_EXCEPT) >> _FPUSW_SHIFT);
	__mtfsf(__r);
	return ((__oldmask & _ENABLE_MASK) << _FPUSW_SHIFT);
}

/* We currently provide no external definition of fegetexcept(). */
static inline int
fegetexcept(void)
{
	union __fpscr __r;

	__mffs(&__r);
	return ((__r.__bits.__reg & _ENABLE_MASK) << _FPUSW_SHIFT);
}

__END_DECLS

#endif /* _FENV_H */

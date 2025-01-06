#ifndef GSL_COMMON_H
#define GSL_COMMON_H

// Maximum of two values
#define GSL_MAX(a, b) ((a) > (b) ? (a) : (b))

// Minimum of two values
#define GSL_MIN(a, b) ((a) < (b) ? (a) : (b))

// Maximum double value
#define GSL_MAX_DBL DBL_MAX

// Minimum double value
#define GSL_MIN_DBL DBL_MIN

// Maximum integer value
#define GSL_MAX_INT INT_MAX

// Minimum integer value
#define GSL_MIN_INT INT_MIN

// Maximum long double value
#define GSL_MAX_LDBL LDBL_MAX

// Minimum long double value
#define GSL_MIN_LDBL LDBL_MIN

// Absolute value
#define GSL_ABS(x) ((x) < 0 ? -(x) : (x))

// Square of a number
#define GSL_SQR(x) ((x) * (x))

// Cube of a number
#define GSL_CUBE(x) ((x) * (x) * (x))

// Power of a number
#define GSL_POW(x, y) (pow((x), (y)))

// Hypotenuse of a right-angled triangle
#define GSL_HYPOT(x, y) (hypot((x), (y)))

// Logarithm base 2
#define GSL_LOG2(x) (log2((x)))

// Logarithm base 10
#define GSL_LOG10(x) (log10((x)))

// Natural logarithm
#define GSL_LOG(x) (log((x)))

// Exponential function
#define GSL_EXP(x) (exp((x)))

// Square root
#define GSL_SQRT(x) (sqrt((x)))

// Sine function
#define GSL_SIN(x) (sin((x)))

// Cosine function
#define GSL_COS(x) (cos((x)))

// Tangent function
#define GSL_TAN(x) (tan((x)))

// Arcsine function
#define GSL_ASIN(x) (asin((x)))

// Arccosine function
#define GSL_ACOS(x) (acos((x)))

// Arctangent function
#define GSL_ATAN(x) (atan((x)))

// Hyperbolic sine function
#define GSL_SINH(x) (sinh((x)))

// Hyperbolic cosine function
#define GSL_COSH(x) (cosh((x)))

// Hyperbolic tangent function
#define GSL_TANH(x) (tanh((x)))

// Absolute difference
#define GSL_ABS_DIFF(a, b) (GSL_ABS((a) - (b)))

// Check if a number is odd
#define GSL_IS_ODD(n)  ((n) & 1)

// Check if a number is even
#define GSL_IS_EVEN(n) (!(GSL_IS_ODD(n)))

// Sign function
#define GSL_SIGN(x) ((x) >= 0.0 ? 1 : -1)

/* Return nonzero if x is a real number, i.e. non NaN or infinite. */
#define GSL_IS_REAL(x) (gsl_finite(x))

#endif // GSL_COMMON_H
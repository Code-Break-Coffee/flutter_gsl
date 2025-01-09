#include "gsl_common.h"
#include "math.h"

/* gsl_finite is a wrapper for the standard library function isfinite */
int gsl_finite(double x) {
    return isfinite(x);
}
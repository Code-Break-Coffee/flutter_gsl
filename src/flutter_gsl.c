#include "flutter_gsl.h"

// Bessel functions
double gsl_bessel_j0(double x) {
    return gsl_sf_bessel_J0(x);
}

double gsl_bessel_j1(double x) {
    return gsl_sf_bessel_J1(x);
}

double gsl_bessel_y0(double x) {
    return gsl_sf_bessel_Y0(x);
}

double gsl_bessel_y1(double x) {
    return gsl_sf_bessel_Y1(x);
}


double gsl_bessel_sin(double x){
    return gsl_sf_sin(x);
}

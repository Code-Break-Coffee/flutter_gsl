#include "gsl_special_func.h"

// Function definitions

double sf_bessel_J0(double x) {
    return gsl_sf_bessel_J0(x);
}

double sf_bessel_J1(double x) {
    return gsl_sf_bessel_J1(x);
}

double sf_bessel_j0(double x) {
    return gsl_sf_bessel_j0(x);
}

double sf_bessel_j1(double x) {
    return gsl_sf_bessel_j1(x);
}

double sf_bessel_j2(double x) {
    return gsl_sf_bessel_j2(x);
}

double sf_bessel_Y0(double x) {
    return gsl_sf_bessel_Y0(x);
}

double sf_bessel_Y1(double x) {
    return gsl_sf_bessel_Y1(x);
}

double sf_bessel_y0(double x) {
    return gsl_sf_bessel_y0(x);
}

double sf_bessel_y1(double x) {
    return gsl_sf_bessel_y1(x);
}

double sf_bessel_y2(double x) {
    return gsl_sf_bessel_y2(x);
}

double sf_bessel_Jn(int n, double x) {
    return gsl_sf_bessel_Jn(n, x);
}

double sf_bessel_Yn(int n, double x) {
    return gsl_sf_bessel_Yn(n, x);
}

double sf_bessel_i0(double x) {
    return gsl_sf_bessel_I0(x);
}

double sf_bessel_i1(double x) {
    return gsl_sf_bessel_I1(x);
}

double sf_bessel_in(int n, double x) {
    return gsl_sf_bessel_In(n, x);
}

double sf_bessel_k0(double x) {
    return gsl_sf_bessel_K0(x);
}

double sf_bessel_k1(double x) {
    return gsl_sf_bessel_K1(x);
}

double sf_bessel_kn(int n, double x) {
    return gsl_sf_bessel_Kn(n, x);
}

double sf_bessel_j0_scaled(double x) {
    return gsl_sf_bessel_j0_scaled(x);
}

double sf_bessel_j1_scaled(double x) {
    return gsl_sf_bessel_j1_scaled(x);
}

double sf_bessel_jn_scaled(int n, double x) {
    return gsl_sf_bessel_Jn_scaled(n, x);
}

double sf_bessel_y0_scaled(double x) {
    return gsl_sf_bessel_Y0_scaled(x);
}

double sf_bessel_y1_scaled(double x) {
    return gsl_sf_bessel_Y1_scaled(x);
}

double sf_bessel_yn_scaled(int n, double x) {
    return gsl_sf_bessel_Yn_scaled(n, x);
}

double sf_bessel_i0_scaled(double x) {
    return gsl_sf_bessel_I0_scaled(x);
}

double sf_bessel_i1_scaled(double x) {
    return gsl_sf_bessel_I1_scaled(x);
}

double sf_bessel_in_scaled(int n, double x) {
    return gsl_sf_bessel_In_scaled(n, x);
}

double sf_bessel_k0_scaled(double x) {
    return gsl_sf_bessel_K0_scaled(x);
}

double sf_bessel_k1_scaled(double x) {
    return gsl_sf_bessel_K1_scaled(x);
}

double sf_bessel_kn_scaled(int n, double x) {
    return gsl_sf_bessel_Kn_scaled(n, x);
}

double sf_bessel_Jnu(double nu, double x) {
    return gsl_sf_bessel_Jnu(nu, x);
}

double sf_bessel_Ynu(double nu, double x) {
    return gsl_sf_bessel_Ynu(nu, x);
}

double sf_bessel_Inu(double nu, double x) {
    return gsl_sf_bessel_Inu(nu, x);
}

double sf_bessel_Knu(double nu, double x) {
    return gsl_sf_bessel_Knu(nu, x);
}

double sf_bessel_Jnu_scaled(double nu, double x) {
    return gsl_sf_bessel_Jnu_scaled(nu, x);
}

double sf_bessel_Ynu_scaled(double nu, double x) {
    return gsl_sf_bessel_Ynu_scaled(nu, x);
}

double sf_bessel_Inu_scaled(double nu, double x) {
    return gsl_sf_bessel_Inu_scaled(nu, x);
}

double sf_bessel_Knu_scaled(double nu, double x) {
    return gsl_sf_bessel_Knu_scaled(nu, x);
}

double sf_bessel_zero_J0(unsigned int s) {
    return gsl_sf_bessel_zero_J0(s);
}

double sf_bessel_zero_J1(unsigned int s) {
    return gsl_sf_bessel_zero_J1(s);
}

double sf_bessel_zero_Jnu(double nu, unsigned int s) {
    return gsl_sf_bessel_zero_Jnu(nu, s);
}
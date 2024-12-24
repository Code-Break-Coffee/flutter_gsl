//#include "flutter_gsl.h"
//
//// A very short-lived native function.
////
//// For very short-lived functions, it is fine to call them on the main isolate.
//// They will block the Dart execution while running the native function, so
//// only do this for native functions which are guaranteed to be short-lived.
//FFI_PLUGIN_EXPORT int sum(int a, int b) { return a + b; }
//
//// A longer-lived native function, which occupies the thread calling it.
////
//// Do not call these kind of native functions in the main isolate. They will
//// block Dart execution. This will cause dropped frames in Flutter applications.
//// Instead, call these native functions on a separate isolate.
//FFI_PLUGIN_EXPORT int sum_long_running(int a, int b) {
//  // Simulate work.
//#if _WIN32
//  Sleep(5000);
//#else
//  usleep(5000 * 1000);
//#endif
//  return a + b;
//}

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

// Gamma functions
double gsl_sf_gamma(double x) {
    return gsl_sf_gamma(x);
}

double gsl_sf_lngamma(double x) {
    return gsl_sf_lngamma(x);
}

double gsl_sf_gammastar(double x) {
    return gsl_sf_gammastar(x);
}

// Psi (digamma) functions
double gsl_sf_psi(double x) {
    return gsl_sf_psi(x);
}

double gsl_sf_psi_1(double x) {
    return gsl_sf_psi_1(x);
}

// Exponential functions
double gsl_sf_exp(double x) {
    return gsl_sf_exp(x);
}

double gsl_sf_expm1(double x) {
    return gsl_sf_expm1(x);
}

// Logarithm functions
double gsl_sf_log(double x) {
    return gsl_sf_log(x);
}

double gsl_sf_log1p(double x) {
    return gsl_sf_log_1p(x);
}

// Trigonometric functions
double gsl_sf_sin(double x) {
    return gsl_sf_sin(x);
}

double gsl_sf_cos(double x) {
    return gsl_sf_cos(x);
}

double gsl_sf_tan(double x) {
    return gsl_sf_tan(x);
}

// Hypergeometric functions
double gsl_sf_hyperg_0F1(double a, double x) {
    return gsl_sf_hyperg_0F1(a, x);
}

double gsl_sf_hyperg_1F1(double a, double b, double x) {
    return gsl_sf_hyperg_1F1(a, b, x);
}

double gsl_sf_hyperg_2F1(double a, double b, double c, double x) {
    return gsl_sf_hyperg_2F1(a, b, c, x);
}

// Elliptic integrals
double gsl_sf_ellint_Kcomp(double k, double mode) {
    return gsl_sf_ellint_Kcomp(k, mode);
}

double gsl_sf_ellint_Ecomp(double k, double mode) {
    return gsl_sf_ellint_Ecomp(k, mode);
}

// Airy functions
double gsl_sf_airy_Ai(double x, gsl_mode_t mode) {
    return gsl_sf_airy_Ai(x, mode);
}

double gsl_sf_airy_Bi(double x, gsl_mode_t mode) {
    return gsl_sf_airy_Bi(x, mode);
}

// Hermite polynomials
double gsl_sf_hermite_H(int n, double x) {
    return gsl_sf_hermite_H(n, x);
}

// Laguerre polynomials
double gsl_sf_laguerre_n(int n, double x) {
    return gsl_sf_laguerre_n(n, x);
}

// Legendre polynomials
double gsl_sf_legendre_P(int l, double x) {
    return gsl_sf_legendre_P(l, x);
}

// Zeta functions
double gsl_sf_zeta(double s) {
    return gsl_sf_zeta(s);
}

double gsl_sf_hzeta(double s, double q) {
    return gsl_sf_hzeta(s, q);
}

// Dawson function
double gsl_sf_dawson(double x) {
    return gsl_sf_dawson(x);
}

// Debye functions
double gsl_sf_debye_1(double x) {
    return gsl_sf_debye_1(x);
}

double gsl_sf_debye_2(double x) {
    return gsl_sf_debye_2(x);
}

// Fermi-Dirac functions
double gsl_sf_fermi_dirac_m1(double x) {
    return gsl_sf_fermi_dirac_m1(x);
}

double gsl_sf_fermi_dirac_0(double x) {
    return gsl_sf_fermi_dirac_0(x);
}

// Transport functions
double gsl_sf_transport_2(double x) {
    return gsl_sf_transport_2(x);
}

double gsl_sf_transport_3(double x) {
    return gsl_sf_transport_3(x);
}

// Coupling coefficients
double gsl_sf_coupling_3j(int two_j1, int two_j2, int two_j3, int two_m1, int two_m2, int two_m3) {
    return gsl_sf_coupling_3j(two_j1, two_j2, two_j3, two_m1, two_m2, two_m3);
}

double gsl_sf_coupling_6j(int two_j1, int two_j2, int two_j3, int two_l1, int two_l2, int two_l3) {
    return gsl_sf_coupling_6j(two_j1, two_j2, two_j3, two_l1, two_l2, two_l3);
}

double gsl_sf_coupling_9j(int two_j1, int two_j2, int two_j3, int two_l1, int two_l2, int two_l3, int two_s1, int two_s2, int two_s3) {
    return gsl_sf_coupling_9j(two_j1, two_j2, two_j3, two_l1, two_l2, two_l3, two_s1, two_s2, two_s3);
}

// Clausen function
double gsl_sf_clausen(double x) {
    return gsl_sf_clausen(x);
}

// Dilogarithm function
double gsl_sf_dilog(double x) {
    return gsl_sf_dilog(x);
}

// Error functions
double gsl_sf_erf(double x) {
    return gsl_sf_erf(x);
}

double gsl_sf_erfc(double x) {
    return gsl_sf_erfc(x);
}

// Exponential integrals
double gsl_sf_expint_E1(double x) {
    return gsl_sf_expint_E1(x);
}

double gsl_sf_expint_E2(double x) {
    return gsl_sf_expint_E2(x);
}

// Lambert W function
double gsl_sf_lambert_W0(double x) {
    return gsl_sf_lambert_W0(x);
}

double gsl_sf_lambert_Wm1(double x) {
    return gsl_sf_lambert_Wm1(x);
}

// Synchrotron functions
double gsl_sf_synchrotron_1(double x) {
    return gsl_sf_synchrotron_1(x);
}

double gsl_sf_synchrotron_2(double x) {
    return gsl_sf_synchrotron_2(x);
}
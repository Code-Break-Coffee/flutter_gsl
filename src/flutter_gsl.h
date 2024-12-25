#ifndef FLUTTER_GSL_H
#define FLUTTER_GSL_H

#include <gsl/gsl_sf_bessel.h>
#include <gsl/gsl_sf_gamma.h>
#include <gsl/gsl_sf_psi.h>
#include <gsl/gsl_sf_exp.h>
#include <gsl/gsl_sf_log.h>
#include <gsl/gsl_sf_trig.h>
#include <gsl/gsl_sf_hyperg.h>
#include <gsl/gsl_sf_ellint.h>
#include <gsl/gsl_sf_airy.h>
#include <gsl/gsl_sf_hermite.h>
#include <gsl/gsl_sf_laguerre.h>
#include <gsl/gsl_sf_legendre.h>
#include <gsl/gsl_sf_zeta.h>
#include <gsl/gsl_sf_dawson.h>
#include <gsl/gsl_sf_debye.h>
#include <gsl/gsl_sf_fermi_dirac.h>
#include <gsl/gsl_sf_transport.h>
#include <gsl/gsl_sf_coupling.h>
#include <gsl/gsl_sf_clausen.h>
#include <gsl/gsl_sf_dilog.h>
#include <gsl/gsl_sf_erf.h>
#include <gsl/gsl_sf_expint.h>
#include <gsl/gsl_sf_hyperg.h>
#include <gsl/gsl_sf_lambert.h>
#include <gsl/gsl_sf_synchrotron.h>
#include <gsl/gsl_sf_trig.h>
//#include <gsl/gsl_sf_zetafunc.h>

// Bessel functions
double gsl_bessel_j0(double x);
double gsl_bessel_j1(double x);
double gsl_bessel_y0(double x);
double gsl_bessel_y1(double x);

// Gamma functions
double gsl_sf_gamma(double x);
double gsl_sf_lngamma(double x);
double gsl_sf_gammastar(double x);

// Psi (digamma) functions
double gsl_sf_psi(double x);
double gsl_sf_psi_1(double x);

// Exponential functions
double gsl_sf_exp(double x);
double gsl_sf_expm1(double x);

// Logarithm functions
double gsl_sf_log(double x);
double gsl_sf_log1p(double x);

// Trigonometric functions
double gsl_sf_sin(double x);
double gsl_sf_cos(double x);
double gsl_sf_tan(double x);

// Hypergeometric functions
double gsl_sf_hyperg_0F1(double a, double x);
double gsl_sf_hyperg_1F1(double a, double b, double x);
double gsl_sf_hyperg_2F1(double a, double b, double c, double x);

// Elliptic integrals
double gsl_sf_ellint_Kcomp(double k, double mode);
double gsl_sf_ellint_Ecomp(double k, double mode);

// Airy functions
double gsl_sf_airy_Ai(double x, gsl_mode_t mode);
double gsl_sf_airy_Bi(double x, gsl_mode_t mode);

// Hermite polynomials
double gsl_sf_hermite_H(int n, double x);

// Laguerre polynomials
double gsl_sf_laguerre_n(int n, double x);

// Legendre polynomials
double gsl_sf_legendre_P(int l, double x);

// Zeta functions
double gsl_sf_zeta(double s);
double gsl_sf_hzeta(double s, double q);

// Dawson function
double gsl_sf_dawson(double x);

// Debye functions
double gsl_sf_debye_1(double x);
double gsl_sf_debye_2(double x);

// Fermi-Dirac functions
double gsl_sf_fermi_dirac_m1(double x);
double gsl_sf_fermi_dirac_0(double x);

// Transport functions
double gsl_sf_transport_2(double x);
double gsl_sf_transport_3(double x);

// Coupling coefficients
double gsl_sf_coupling_3j(int two_j1, int two_j2, int two_j3, int two_m1, int two_m2, int two_m3);
double gsl_sf_coupling_6j(int two_j1, int two_j2, int two_j3, int two_l1, int two_l2, int two_l3);
double gsl_sf_coupling_9j(int two_j1, int two_j2, int two_j3, int two_l1, int two_l2, int two_l3, int two_s1, int two_s2, int two_s3);

// Clausen function
double gsl_sf_clausen(double x);

// Dilogarithm function
double gsl_sf_dilog(double x);

// Error functions
double gsl_sf_erf(double x);
double gsl_sf_erfc(double x);

// Exponential integrals
double gsl_sf_expint_E1(double x);
double gsl_sf_expint_E2(double x);

// Lambert W function
double gsl_sf_lambert_W0(double x);
double gsl_sf_lambert_Wm1(double x);

// Synchrotron functions
double gsl_sf_synchrotron_1(double x);
double gsl_sf_synchrotron_2(double x);

#endif // FLUTTER_GSL_H
//#include <stdint.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//#if _WIN32
//#include <windows.h>
//#else
//#include <pthread.h>
//#include <unistd.h>
//#endif
//
//#if _WIN32
//#define FFI_PLUGIN_EXPORT __declspec(dllexport)
//#else
//#define FFI_PLUGIN_EXPORT
//#endif
//
//// A very short-lived native function.
////
//// For very short-lived functions, it is fine to call them on the main isolate.
//// They will block the Dart execution while running the native function, so
//// only do this for native functions which are guaranteed to be short-lived.
//FFI_PLUGIN_EXPORT int sum(int a, int b);
//
//// A longer lived native function, which occupies the thread calling it.
////
//// Do not call these kind of native functions in the main isolate. They will
//// block Dart execution. This will cause dropped frames in Flutter applications.
//// Instead, call these native functions on a separate isolate.
//FFI_PLUGIN_EXPORT int sum_long_running(int a, int b);

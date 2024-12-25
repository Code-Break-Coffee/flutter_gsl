#ifndef FLUTTER_GSL_H
#define FLUTTER_GSL_H

//#include <gsl/gsl_sf_bessel.h>
//#include <gsl/gsl_sf_gamma.h>
//#include <gsl/gsl_sf_psi.h>
//#include <gsl/gsl_sf_exp.h>
//#include <gsl/gsl_sf_log.h>
//#include <gsl/gsl_sf_trig.h>
//#include <gsl/gsl_sf_hyperg.h>
//#include <gsl/gsl_sf_ellint.h>
//#include <gsl/gsl_sf_airy.h>
//#include <gsl/gsl_sf_hermite.h>
//#include <gsl/gsl_sf_laguerre.h>
//#include <gsl/gsl_sf_legendre.h>
//#include <gsl/gsl_sf_zeta.h>
//#include <gsl/gsl_sf_dawson.h>
//#include <gsl/gsl_sf_debye.h>
//#include <gsl/gsl_sf_fermi_dirac.h>
//#include <gsl/gsl_sf_transport.h>
//#include <gsl/gsl_sf_coupling.h>
//#include <gsl/gsl_sf_clausen.h>
//#include <gsl/gsl_sf_dilog.h>
//#include <gsl/gsl_sf_erf.h>
//#include <gsl/gsl_sf_expint.h>
//#include <gsl/gsl_sf_hyperg.h>
//#include <gsl/gsl_sf_lambert.h>
//#include <gsl/gsl_sf_synchrotron.h>
//#include <gsl/gsl_sf_trig.h>
//#include <gsl/gsl_sf_zetafunc.h>

//#include "gsl_sf_bessel.h"

// Bessel functions
double gsl_bessel_j0(double x);
double gsl_bessel_j1(double x);
double gsl_bessel_y0(double x);
double gsl_bessel_y1(double x);

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

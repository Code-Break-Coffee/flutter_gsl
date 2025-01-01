#ifndef FLUTTER_GSL_H
#define FLUTTER_GSL_H

// Bessel functions
double gsl_bessel_j0(double x);
double gsl_bessel_j1(double x);
double gsl_bessel_y0(double x);
double gsl_bessel_y1(double x);

// Trigonometric functions
double gsl_sf_sin(double x);
double gsl_sf_cos(double x);
double gsl_sf_tan(double x);
double gsl_sf_sec(double x);
double gsl_sf_csc(double x);
double gsl_sf_cot(double x);

// Inverse trigonometric functions
double gsl_sf_asin(double x);
double gsl_sf_acos(double x);
double gsl_sf_atan(double x);
double gsl_sf_acosh(double x);
double gsl_sf_asinh(double x);
double gsl_sf_atanh(double x);

// Hyperbolic functions
double gsl_sf_sinh(double x);
double gsl_sf_cosh(double x);
double gsl_sf_tanh(double x);
double gsl_sf_sech(double x);
double gsl_sf_csch(double x);
double gsl_sf_coth(double x);

// Elliptic functions
double gsl_sf_ellint_Kcomp(double k);
double gsl_sf_ellint_Ecomp(double k);
double gsl_sf_ellint_Pcomp(double k, double n);
double gsl_sf_ellint_Dcomp(double k, double n);

// Special functions
double gsl_sf_airy_Ai(double x);
double gsl_sf_airy_Bi(double x);
double gsl_sf_airy_Ai_scaled(double x);
double gsl_sf_airy_Bi_scaled(double x);
double gsl_sf_airy_Ai_deriv(double x);
double gsl_sf_airy_Bi_deriv(double x);
double gsl_sf_airy_Ai_deriv_scaled(double x);
double gsl_sf_airy_Bi_deriv_scaled(double x);
double gsl_sf_airy_zero_Ai(unsigned int n);
double gsl_sf_airy_zero_Bi(unsigned int n);
double gsl_sf_airy_zero_Ai_deriv(unsigned int n);
double gsl_sf_airy_zero_Bi_deriv(unsigned int n);
double gsl_sf_airy_zero_Ai_deriv_scaled(unsigned int n);
double gsl_sf_airy_zero_Bi_deriv_scaled(unsigned int n);

// Bessel function of the first kind
double gsl_sf_bessel_J0(double x);
double gsl_sf_bessel_J1(double x);

// Bessel function of the second kind
double gsl_sf_bessel_Y0(double x);
double gsl_sf_bessel_Y1(double x);

// Legendre functions
double gsl_sf_legendre_Plm(double l, double m, double x);
double gsl_sf_legendre_sphPlm(double l, double m, double x);
double gsl_sf_legendre_Plm_deriv(double l, double m, double x);
double gsl_sf_legendre_sphPlm_deriv(double l, double m, double x);

// Chebyshev polynomials of the first kind
double gsl_sf_chebyshev_T0(double x);
double gsl_sf_chebyshev_T1(double x);
double gsl_sf_chebyshev_Tn(int n, double x);

// Chebyshev polynomials of the second kind
double gsl_sf_chebyshev_U0(double x);
double gsl_sf_chebyshev_U1(double x);
double gsl_sf_chebyshev_Un(int n, double x);

// Chebyshev polynomials of the third kind
double gsl_sf_chebyshev_Vn(int n, double x);

// Hankel functions
double gsl_sf_hankel_H0(double x);
double gsl_sf_hankel_H1(double x);
double gsl_sf_hankel_H2(double x);
double gsl_sf_hankel_H3(double x);

// Legendre functions of high degree
double gsl_sf_legendre_Plm_e(double l, double m, double x);
double gsl_sf_legendre_Plm_deriv_e(double l, double m, double x);
double gsl_sf_legendre_sphPlm_e(double l, double m, double x);
double gsl_sf_legendre_sphPlm_deriv_e(double l, double m, double x);

// Spherical harmonics
double gsl_sf_legendre_sphPlm_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_deriv_array(int lmax, double x, double *result);

// Bessel functions of integer order
double gsl_sf_bessel_Jn(int n, double x);
double gsl_sf_bessel_Yn(int n, double x);
double gsl_sf_bessel_In(int n, double x);
double gsl_sf_bessel_Kn(int n, double x);

// Legendre functions of integer order with error handling
double gsl_sf_legendre_Plm_e_array(int lmax, double x, double *result);
double gsl_sf_legendre_Plm_deriv_e_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_e_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_deriv_e_array(int lmax, double x, double *result);

// Legendre functions of integer order with array versions
double gsl_sf_legendre_Plm_array(int lmax, double x, double *result);
double gsl_sf_legendre_Plm_deriv_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_deriv_array(int lmax, double x, double *result);

// Bessel functions of complex order
double gsl_sf_bessel_Jnu(double nu, double x);
double gsl_sf_bessel_Ynu(double nu, double x);
double gsl_sf_bessel_Inu(double nu, double x);
double gsl_sf_bessel_Knu(double nu, double x);


// Exponential and logarithmic functions
double gsl_sf_exp(double x);
double gsl_sf_log(double x);

// Gamma functions
double gsl_sf_gamma(double x);
double gsl_sf_lngamma(double x);

// Error functions
double gsl_sf_erf(double x);
double gsl_sf_erfc(double x);
double gsl_sf_hazard(double x);

// Bessel functions of complex order with error handling
double gsl_sf_bessel_Jnu_e(double nu, double x);
double gsl_sf_bessel_Ynu_e(double nu, double x);
double gsl_sf_bessel_Inu_e(double nu, double x);
double gsl_sf_bessel_Knu_e(double nu, double x);

// Bessel functions of complex order with array versions
double gsl_sf_bessel_Jnu_array(int nmax, double nu, double x, double *result);
double gsl_sf_bessel_Ynu_array(int nmax, double nu, double x, double *result);
double gsl_sf_bessel_Inu_array(int nmax, double nu, double x, double *result);
double gsl_sf_bessel_Knu_array(int nmax, double nu, double x, double *result);

// Bessel functions of complex order with error handling and array versions
double gsl_sf_bessel_Jnu_e_array(int nmax, double nu, double x, double *result);
double gsl_sf_bessel_Ynu_e_array(int nmax, double nu, double x, double *result);
double gsl_sf_bessel_Inu_e_array(int nmax, double nu, double x, double *result);
double gsl_sf_bessel_Knu_e_array(int nmax, double nu, double x, double *result);

// Legendre functions of complex order with error handling and array versions
double gsl_sf_legendre_Plm_e_array(int lmax, double x, double *result);
double gsl_sf_legendre_Plm_deriv_e_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_e_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_deriv_e_array(int lmax, double x, double *result);

// Legendre functions of complex order with array versions
double gsl_sf_legendre_Plm_array(int lmax, double x, double *result);
double gsl_sf_legendre_Plm_deriv_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_deriv_array(int lmax, double x, double *result);

// Special functions
double gsl_sf_airy_Ai(double x);
double gsl_sf_airy_Bi(double x);
double gsl_sf_airy_Ai_scaled(double x);
double gsl_sf_airy_Bi_scaled(double x);
double gsl_sf_airy_Ai_deriv(double x);
double gsl_sf_airy_Bi_deriv(double x);
double gsl_sf_airy_Ai_deriv_scaled(double x);
double gsl_sf_airy_Bi_deriv_scaled(double x);
double gsl_sf_airy_zero_Ai(unsigned int n);
double gsl_sf_airy_zero_Bi(unsigned int n);
double gsl_sf_airy_zero_Ai_deriv(unsigned int n);
double gsl_sf_airy_zero_Bi_deriv(unsigned int n);
double gsl_sf_airy_zero_Ai_deriv_scaled(unsigned int n);
double gsl_sf_airy_zero_Bi_deriv_scaled(unsigned int n);

// Error handling
double gsl_error_handler(const char *reason, const char *file, int line, int gsl_errno);

// Precision
double gsl_set_error_handler_off();
double gsl_set_error_handler_on();
double gsl_set_error_handler(double (*handler)(const char *reason, const char *file, int line, int gsl_errno));

// Memory allocation
double gsl_set_memory_handler_off();
double gsl_set_memory_handler_on();
double gsl_set_memory_handler(void *(*alloc)(size_t n), void (*free)(void *p));


// Constants
extern const double GSL_CONST_PI;
extern const double GSL_CONST_E;
extern const double GSL_CONST_LOG_2;
extern const double GSL_CONST_LOG_10;
extern const double GSL_CONST_SQRT_2;
extern const double GSL_CONST_SQRT_3;
extern const double GSL_CONST_SQRT_1_2;
extern const double GSL_CONST_SQRT_1_3;
extern const double GSL_CONST_SQRT_2_PI;
extern const double GSL_CONST_SQRT_PI;
extern const double GSL_CONST_SQRT_2_PI_INV;
extern const double GSL_CONST_SQRT_PI_INV;
extern const double GSL_CONST_LOG_PI;
extern const double GSL_CONST_LOG_2_PI;
extern const double GSL_CONST_LOG_PI_2;
extern const double GSL_CONST_LOG_E;
extern const double GSL_CONST_LOG_10_INV;
extern const double GSL_CONST_LOG_2_INV;
extern const double GSL_CONST_LOG_PI_INV;
extern const double GSL_CONST_LOG_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_INV;
extern const double GSL_CONST_LOG_E_INV;
extern const double GSL_CONST_LOG_10_INV;
extern const double GSL_CONST_LOG_2_10;
extern const double GSL_CONST_LOG_10_2;
extern const double GSL_CONST_LOG_2_E;
extern const double GSL_CONST_LOG_E_2;
extern const double GSL_CONST_LOG_PI_10;
extern const double GSL_CONST_LOG_10_PI;
extern const double GSL_CONST_LOG_PI_E;
extern const double GSL_CONST_LOG_E_PI;
extern const double GSL_CONST_LOG_2_PI_10;
extern const double GSL_CONST_LOG_10_PI_2;
extern const double GSL_CONST_LOG_2_PI_E;
extern const double GSL_CONST_LOG_E_2_PI;
extern const double GSL_CONST_LOG_PI_2_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_10_INV;
extern const double GSL_CONST_LOG_10_2_PI_INV;
extern const double GSL_CONST_LOG_PI_E_2_INV;
extern const double GSL_CONST_LOG_E_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_10_INV;
extern const double GSL_CONST_LOG_10_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_E;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E;
extern const double GSL_CONST_LOG_E_2_PI;
extern const double GSL_CONST_LOG_PI_2_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_10_INV;
extern const double GSL_CONST_LOG_10_2_PI_INV;
extern const double GSL_CONST_LOG_PI_E_2_INV;
extern const double GSL_CONST_LOG_E_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_10_INV;
extern const double GSL_CONST_LOG_10_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_E;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E;
extern const double GSL_CONST_LOG_E_2_PI;
extern const double GSL_CONST_LOG_PI_2_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_10_INV;
extern const double GSL_CONST_LOG_10_2_PI_INV;
extern const double GSL_CONST_LOG_PI_E_2_INV;
extern const double GSL_CONST_LOG_E_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_10_INV;
extern const double GSL_CONST_LOG_10_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_E;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E;
extern const double GSL_CONST_LOG_E_2_PI;
extern const double GSL_CONST_LOG_PI_2_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_10_INV;
extern const double GSL_CONST_LOG_10_2_PI_INV;
extern const double GSL_CONST_LOG_PI_E_2_INV;
extern const double GSL_CONST_LOG_E_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_10_INV;
extern const double GSL_CONST_LOG_10_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_E;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E;
extern const double GSL_CONST_LOG_E_2_PI;
extern const double GSL_CONST_LOG_PI_2_10;
extern const double GSL_CONST_LOG_10_2_PI;
extern const double GSL_CONST_LOG_PI_E_2;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_10_INV;
extern const double GSL_CONST_LOG_10_2_PI_INV;
extern const double GSL_CONST_LOG_PI_E_2_INV;
extern const double GSL_CONST_LOG_E_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_10_INV;
extern const double GSL_CONST_LOG_10_PI_2_INV;
extern const double GSL_CONST_LOG_2_PI_E_INV;
extern const double GSL_CONST_LOG_E_2_PI_INV;
extern const double GSL_CONST_LOG_PI_2_E;
extern const double GSL_CONST_LOG_E_PI_2;
extern const double GSL_CONST_LOG_2_PI_10;
extern const double GSL_CONST_LOG_10_2_PI;

// Physical constants
extern const double GSL_CONST_BOLTZMANN;
extern const double GSL_CONST_AVOGADRO;
extern const double GSL_CONST_ELECTRON_MASS;
extern const double GSL_CONST_PROTON_MASS;
extern const double GSL_CONST_NEWTON;
extern const double GSL_CONST_JOULE;
extern const double GSL_CONST_WATT;
extern const double GSL_CONST_HENRY;
extern const double GSL_CONST_CELSIUS;
extern const double GSL_CONST_FARAD;
extern const double GSL_CONST_COULOMB;
extern const double GSL_CONST_AMPERE;
extern const double GSL_CONST_VOLT;
extern const double GSL_CONST_OHM;
extern const double GSL_CONST_SIEMENS;
extern const double GSL_CONST_WEBER;
extern const double GSL_CONST_TESLA;
extern const double GSL_CONST_LUMEN;
extern const double GSL_CONST_LUX;
extern const double GSL_CONST_BECQUEREL;
extern const double GSL_CONST_INCH;
extern const double GSL_CONST_FOOT;
extern const double GSL_CONST_YARD;
extern const double GSL_CONST_MILE;
extern const double GSL_CONST_NAUTICAL_MILE;
extern const double GSL_CONST_FATHOM;
extern const double GSL_CONST_MIL;
extern const double GSL_CONST_POINT;
extern const double GSL_CONST_TEXPOINT;
extern const double GSL_CONST_MICRON;
extern const double GSL_CONST_ANGSTROM;
extern const double GSL_CONST_LIGHT_YEAR;
extern const double GSL_CONST_PARSEC;
extern const double GSL_CONST_ASTRONOMICAL_UNIT;

// MKSA units
extern const double GSL_CONST_MKSA_SPEED_OF_LIGHT;
extern const double GSL_CONST_MKSA_GRAVITATIONAL_CONSTANT;
extern const double GSL_CONST_MKSA_PLANCKS_CONSTANT_H;
extern const double GSL_CONST_MKSA_BOLTZMANN;
extern const double GSL_CONST_MKSA_ELECTRON_CHARGE;
extern const double GSL_CONST_MKSA_MOLAR_GAS;
extern const double GSL_CONST_MKSA_FARADAY;
extern const double GSL_CONST_MKSA_AVOGADRO;
extern const double GSL_CONST_MKSA_GAS;
extern const double GSL_CONST_MKSA_VACUUM_PERMITTIVITY;
extern const double GSL_CONST_MKSA_VACUUM_PERMEABILITY;
extern const double GSL_CONST_MKSA_ELECTRON_MASS;
extern const double GSL_CONST_MKSA_PROTON_MASS;
extern const double GSL_CONST_MKSA_NEWTON;
extern const double GSL_CONST_MKSA_JOULE;
extern const double GSL_CONST_MKSA_WATT;
extern const double GSL_CONST_MKSA_HENRY;
extern const double GSL_CONST_MKSA_CELSIUS;
extern const double GSL_CONST_MKSA_FARAD;
extern const double GSL_CONST_MKSA_COULOMB;
extern const double GSL_CONST_MKSA_AMPERE;
extern const double GSL_CONST_MKSA_VOLT;
extern const double GSL_CONST_MKSA_OHM;
extern const double GSL_CONST_MKSA_SIEMENS;
extern const double GSL_CONST_MKSA_WEBER;
extern const double GSL_CONST_MKSA_TESLA;
extern const double GSL_CONST_MKSA_LUMEN;
extern const double GSL_CONST_MKSA_LUX;
extern const double GSL_CONST_MKSA_BECQUEREL;
extern const double GSL_CONST_MKSA_INCH;
extern const double GSL_CONST_MKSA_FOOT;
extern const double GSL_CONST_MKSA_YARD;
extern const double GSL_CONST_MKSA_MILE;
extern const double GSL_CONST_MKSA_NAUTICAL_MILE;
extern const double GSL_CONST_MKSA_FATHOM;
extern const double GSL_CONST_MKSA_MIL;
extern const double GSL_CONST_MKSA_POINT;
extern const double GSL_CONST_MKSA_TEXPOINT;
extern const double GSL_CONST_MKSA_MICRON;
extern const double GSL_CONST_MKSA_ANGSTROM;
extern const double GSL_CONST_MKSA_LIGHT_YEAR;
extern const double GSL_CONST_MKSA_PARSEC;
extern const double GSL_CONST_MKSA_ASTRONOMICAL_UNIT;

#endif // GSL_CONFIG_H


#endif // FLUTTER_GSL_H

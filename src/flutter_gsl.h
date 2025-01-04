#ifndef FLUTTER_GSL_H
#define FLUTTER_GSL_H

// Constants    ----------------------------------------------------------------

// Physical Constants
extern const double GSL_CONST_MKSA_SPEED_OF_LIGHT;
extern const double GSL_CONST_MKSA_GRAVITATIONAL_CONSTANT;
extern const double GSL_CONST_MKSA_PLANCKS_CONSTANT_H;
extern const double GSL_CONST_MKSA_PLANCKS_CONSTANT_HBAR;
extern const double GSL_CONST_MKSA_BOLTZMANN;
extern const double GSL_CONST_MKSA_STEFAN_BOLTZMANN_CONSTANT;
extern const double GSL_CONST_MKSA_THOMSON_CROSS_SECTION;
extern const double GSL_CONST_NUM_AVOGADRO;
extern const double GSL_CONST_NUM_FINE_STRUCTURE;

// Units of Measurement
extern const double GSL_CONST_MKSA_ACRE;
extern const double GSL_CONST_MKSA_ANGSTROM;
extern const double GSL_CONST_MKSA_ASTRONOMICAL_UNIT;
extern const double GSL_CONST_MKSA_BAR;
extern const double GSL_CONST_MKSA_BARN;
extern const double GSL_CONST_MKSA_BOHR_MAGNETON;
extern const double GSL_CONST_MKSA_BOHR_RADIUS;
extern const double GSL_CONST_MKSA_BTU;
extern const double GSL_CONST_MKSA_CALORIE;
extern const double GSL_CONST_MKSA_CANADIAN_GALLON;
extern const double GSL_CONST_MKSA_CARAT;
extern const double GSL_CONST_MKSA_CURIE;
extern const double GSL_CONST_MKSA_DAY;
extern const double GSL_CONST_MKSA_DEBYE;
extern const double GSL_CONST_MKSA_DYNE;
extern const double GSL_CONST_MKSA_ELECTRON_CHARGE;
extern const double GSL_CONST_MKSA_ELECTRON_MAGNETIC_MOMENT;
extern const double GSL_CONST_MKSA_ELECTRON_VOLT;
extern const double GSL_CONST_MKSA_ERG;
extern const double GSL_CONST_MKSA_FARADAY;
extern const double GSL_CONST_MKSA_FATHOM;
extern const double GSL_CONST_MKSA_FOOT;
extern const double GSL_CONST_MKSA_FOOTCANDLE;
extern const double GSL_CONST_MKSA_FOOTLAMBERT;
extern const double GSL_CONST_MKSA_GAUSS;
extern const double GSL_CONST_MKSA_GRAM_FORCE;
extern const double GSL_CONST_MKSA_GRAV_ACCEL;
extern const double GSL_CONST_MKSA_HECTARE;
extern const double GSL_CONST_MKSA_HORSEPOWER;
extern const double GSL_CONST_MKSA_HOUR;
extern const double GSL_CONST_MKSA_INCH;
extern const double GSL_CONST_MKSA_INCH_OF_MERCURY;
extern const double GSL_CONST_MKSA_INCH_OF_WATER;
extern const double GSL_CONST_MKSA_JOULE;
extern const double GSL_CONST_MKSA_KILOMETERS_PER_HOUR;
extern const double GSL_CONST_MKSA_KILOPOUND_FORCE;
extern const double GSL_CONST_MKSA_KNOT;
extern const double GSL_CONST_MKSA_LAMBERT;
extern const double GSL_CONST_MKSA_LIGHT_YEAR;
extern const double GSL_CONST_MKSA_LITER;
extern const double GSL_CONST_MKSA_LUMEN;
extern const double GSL_CONST_MKSA_LUX;
extern const double GSL_CONST_MKSA_MASS_ELECTRON;
extern const double GSL_CONST_MKSA_MASS_MUON;
extern const double GSL_CONST_MKSA_MASS_NEUTRON;
extern const double GSL_CONST_MKSA_MASS_PROTON;
extern const double GSL_CONST_MKSA_METER_OF_MERCURY;
extern const double GSL_CONST_MKSA_METRIC_TON;
extern const double GSL_CONST_MKSA_MICRON;
extern const double GSL_CONST_MKSA_MIL;
extern const double GSL_CONST_MKSA_MILE;
extern const double GSL_CONST_MKSA_MILES_PER_HOUR;
extern const double GSL_CONST_MKSA_MINUTE;
extern const double GSL_CONST_MKSA_MOLAR_GAS;
extern const double GSL_CONST_MKSA_NAUTICAL_MILE;
extern const double GSL_CONST_MKSA_NEWTON;
extern const double GSL_CONST_MKSA_NUCLEAR_MAGNETON;
extern const double GSL_CONST_MKSA_OUNCE_MASS;
extern const double GSL_CONST_MKSA_PARSEC;
extern const double GSL_CONST_MKSA_PHOT;
extern const double GSL_CONST_MKSA_PINT;
extern const double GSL_CONST_MKSA_POINT;
extern const double GSL_CONST_MKSA_POISE;
extern const double GSL_CONST_MKSA_POUND_FORCE;
extern const double GSL_CONST_MKSA_POUND_MASS;
extern const double GSL_CONST_MKSA_POUNDAL;
extern const double GSL_CONST_MKSA_PROTON_MAGNETIC_MOMENT;
extern const double GSL_CONST_MKSA_PSI;
extern const double GSL_CONST_MKSA_QUART;
extern const double GSL_CONST_MKSA_RAD;
extern const double GSL_CONST_MKSA_ROENTGEN;
extern const double GSL_CONST_MKSA_RYDBERG;
extern const double GSL_CONST_MKSA_SOLAR_MASS;
extern const double GSL_CONST_MKSA_STANDARD_GAS_VOLUME;
extern const double GSL_CONST_MKSA_STD_ATMOSPHERE;
extern const double GSL_CONST_MKSA_STILB;
extern const double GSL_CONST_MKSA_STOKES;
extern const double GSL_CONST_MKSA_TEXPOINT;
extern const double GSL_CONST_MKSA_THERM;
extern const double GSL_CONST_MKSA_TON;
extern const double GSL_CONST_MKSA_TORR;
extern const double GSL_CONST_MKSA_TROY_OUNCE;
extern const double GSL_CONST_MKSA_UK_GALLON;
extern const double GSL_CONST_MKSA_UK_TON;
extern const double GSL_CONST_MKSA_UNIFIED_ATOMIC_MASS;
extern const double GSL_CONST_MKSA_US_GALLON;
extern const double GSL_CONST_MKSA_VACUUM_PERMEABILITY;
extern const double GSL_CONST_MKSA_VACUUM_PERMITTIVITY;
extern const double GSL_CONST_MKSA_WEEK;
extern const double GSL_CONST_MKSA_YARD;

// Mathematical Constants
extern const double M_E;
extern const double M_LOG2E;
extern const double M_LOG10E;
extern const double M_SQRT2;
extern const double M_SQRT1_2;
extern const double M_SQRT3;
extern const double M_PI;
extern const double M_PI_2;
extern const double M_PI_4;
extern const double M_SQRTPI;
extern const double M_2_SQRTPI;
extern const double M_1_PI;
extern const double M_2_PI;
extern const double M_LN10;
extern const double M_LN2;
extern const double M_LNPI;
extern const double M_EULER;

// Special Values
extern const double GSL_IEEE_MODE;
extern const double GSL_IMAG;
extern const double GSL_REAL;
extern const double GSL_NAN;
extern const double GSL_NEGINF;
extern const double GSL_POSINF;
extern const double GSL_ERROR_VAL;
extern const double GSL_ERROR;
extern const double GSL_RNG_SEED;
extern const double GSL_RNG_TYPE;
extern const double GSL_RANGE_CHECK_OFF;
extern const double GSL_SET_COMPLEX;
extern const double GSL_SIGN;

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

// Legendre functions of complex order with array versions
double gsl_sf_legendre_Plm_array(int lmax, double x, double *result);
double gsl_sf_legendre_Plm_deriv_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_array(int lmax, double x, double *result);
double gsl_sf_legendre_sphPlm_deriv_array(int lmax, double x, double *result);

// Error handling
double gsl_error_handler(const char *reason, const char *file, int line, int gsl_errno);

// Precision
double gsl_set_error_handler_off();
double gsl_set_error_handler_on();
double gsl_set_error_handler(double (*handler)(const char *reason, const char *file, int line, int gsl_errno));



#endif // FLUTTER_GSL_H

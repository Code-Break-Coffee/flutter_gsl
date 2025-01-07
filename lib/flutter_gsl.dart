import 'dart:ffi';
import 'dart:io';

import 'flutter_gsl_bindings_generated.dart';


const String _libName = 'flutter_gsl';

/// The dynamic library in which the symbols for [Bindings] can be found.
final DynamicLibrary _dylib = () {

  if (Platform.isMacOS || Platform.isIOS) {
    return DynamicLibrary.open('$_libName.framework/$_libName');
  }
  if (Platform.isAndroid || Platform.isLinux) {
    // return DynamicLibrary.open('lib$_libName.so');
    try {
      return DynamicLibrary.open('lib$_libName.so');
    } catch (e) {
      print('Error loading library: $e');
      rethrow;
    }
  }
  if (Platform.isWindows) {
    return DynamicLibrary.open('$_libName.dll');
  }
  throw UnsupportedError('Unknown platform: ${Platform.operatingSystem}');
}();

final flutter_gsl _bindings = flutter_gsl(_dylib);

double gslBesselJ0(double x) => _bindings.gsl_bessel_j0(x);

double gslSin(double x) => _bindings.gsl_sf_sin(x);

double g() => _bindings.GSL_CONST_MKSA_BOHR_MAGNETON;

double sin(double x) => _bindings.gsl_sf_sin(x);



#include <Rcpp.h>
#include <Rinternals.h>
#include <stdint.h>



// Import C headers for rust API
// #include "myrustlib/api.h"


#ifdef __cplusplus
extern "C" {
#endif

char * string_from_rust();
int32_t random_number();
void run_threads();

#ifdef __cplusplus
}
#endif

using namespace Rcpp;

// Actual Wrappers

// [[Rcpp::export]]
SEXP hello_wrapper(){
  return Rf_ScalarString(Rf_mkCharCE(string_from_rust(), CE_UTF8));
}

// [[Rcpp::export]]
int32_t random_wrapper(){
  return random_number();
}

// [[Rcpp::export]]
void threads_wapper(){
  run_threads();
}

// // Standard R package stuff
// static const R_CallMethodDef CallEntries[] = {
//   {"hello_wrapper", (DL_FUNC) &hello_wrapper, 0},
//   {"random_wrapper", (DL_FUNC) &random_wrapper, 0},
//   {"threads_wapper", (DL_FUNC) &threads_wapper, 0},
//   {NULL, NULL, 0}
// };

// void R_init_hellorust(DllInfo *dll) {
//   R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
//   R_useDynamicSymbols(dll, FALSE);
// }

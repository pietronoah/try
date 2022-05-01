#include "gen.h"

/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) gen_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_f1 CASADI_PREFIX(f1)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s1[9] = {2, 2, 0, 2, 4, 0, 1, 0, 1};

/* Function:(i0[2])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2, a3;
  a0=arg[0]? arg[0][0] : 0;
  a1=casadi_sq(a0);
  a2=arg[0]? arg[0][1] : 0;
  a1=(a1+a2);
  a3=14.;
  a1=(a1-a3);
  if (res[0]!=0) res[0][0]=a1;
  a1=casadi_sq(a0);
  a0=(a0*a1);
  a1=3.;
  a2=casadi_sq(a2);
  a1=(a1*a2);
  a0=(a0-a1);
  a1=2.;
  a0=(a0-a1);
  if (res[0]!=0) res[0][1]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int Function(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Function_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Function_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Function_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Function_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Function_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Function_incref(void) {
}

CASADI_SYMBOL_EXPORT void Function_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Function_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int Function_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real Function_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Function_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Function_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Function_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Function_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Function_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

/* Function_jacobian:(i0[2])->(o0[2x2]) */
static int casadi_f1(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2;
  a0=arg[0]? arg[0][0] : 0;
  a1=(a0+a0);
  if (res[0]!=0) res[0][0]=a1;
  a1=casadi_sq(a0);
  a2=(a0+a0);
  a0=(a0*a2);
  a1=(a1+a0);
  if (res[0]!=0) res[0][1]=a1;
  a1=1.;
  if (res[0]!=0) res[0][2]=a1;
  a1=3.;
  a0=arg[0]? arg[0][1] : 0;
  a0=(a0+a0);
  a1=(a1*a0);
  a1=(-a1);
  if (res[0]!=0) res[0][3]=a1;
  return 0;
}

CASADI_SYMBOL_EXPORT int Function_jacobian(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f1(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Function_jacobian_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Function_jacobian_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Function_jacobian_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Function_jacobian_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Function_jacobian_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Function_jacobian_incref(void) {
}

CASADI_SYMBOL_EXPORT void Function_jacobian_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Function_jacobian_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int Function_jacobian_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real Function_jacobian_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Function_jacobian_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Function_jacobian_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Function_jacobian_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Function_jacobian_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Function_jacobian_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
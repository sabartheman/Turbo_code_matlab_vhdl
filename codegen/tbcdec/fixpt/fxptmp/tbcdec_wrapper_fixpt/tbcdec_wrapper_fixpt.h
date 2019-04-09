/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_wrapper_fixpt.h
 *
 * Code generation for function 'tbcdec_wrapper_fixpt'
 *
 */

#ifndef TBCDEC_WRAPPER_FIXPT_H
#define TBCDEC_WRAPPER_FIXPT_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void tbcdec_wrapper_fixpt(const emlrtStack *sp, const real_T r1[8], const
  real_T r2[8], const real_T r3[8], real_T iter, const real_T intlv[8], real_T
  Lc, real_T dec_out[8], real_T LLR[8]);

#endif

/* End of code generation (tbcdec_wrapper_fixpt.h) */

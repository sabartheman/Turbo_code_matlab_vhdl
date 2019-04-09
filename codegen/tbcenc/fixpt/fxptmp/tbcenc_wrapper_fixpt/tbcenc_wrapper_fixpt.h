/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcenc_wrapper_fixpt.h
 *
 * Code generation for function 'tbcenc_wrapper_fixpt'
 *
 */

#ifndef TBCENC_WRAPPER_FIXPT_H
#define TBCENC_WRAPPER_FIXPT_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "tbcenc_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void tbcenc_wrapper_fixpt(const emlrtStack *sp, const real_T msg_in[8],
  const real_T intlv[8], boolean_T output1[8], boolean_T output2[8], boolean_T
  output3[8]);

#endif

/* End of code generation (tbcenc_wrapper_fixpt.h) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_fixpt.h
 *
 * Code generation for function 'tbcdec_fixpt'
 *
 */

#ifndef TBCDEC_FIXPT_H
#define TBCDEC_FIXPT_H

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
extern void replacement_custom_exp_init(void);
extern void replacement_custom_log_init(void);
extern void tbcdec_fixpt(const emlrtStack *sp, const int16_T r1_1[8], const
  int16_T r2_1[8], const int16_T r3[8], uint8_T iter, const uint8_T intlv[8],
  uint16_T Lc, int8_T dec_out[8], int16_T LLR[8]);

#endif

/* End of code generation (tbcdec_fixpt.h) */

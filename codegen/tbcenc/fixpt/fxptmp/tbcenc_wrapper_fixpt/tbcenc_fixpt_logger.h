/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcenc_fixpt_logger.h
 *
 * Code generation for function 'tbcenc_fixpt_logger'
 *
 */

#ifndef TBCENC_FIXPT_LOGGER_H
#define TBCENC_FIXPT_LOGGER_H

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
extern void b_tbcenc_fixpt_logger(const emlrtStack *sp, const uint8_T
  varargin_1[8], const uint8_T varargin_2[8], const boolean_T varargin_3[8],
  const boolean_T varargin_4[8], const boolean_T varargin_5[8]);
extern void intlv_TB_logger_free(void);
extern void intlv_TB_logger_init(const emlrtStack *sp);
extern void iterCount_not_empty_init(void);
extern void msg_in_TB_logger_free(void);
extern void msg_in_TB_logger_init(const emlrtStack *sp);
extern void output1_TB_logger_free(void);
extern void output1_TB_logger_init(const emlrtStack *sp);
extern void output2_TB_logger_free(void);
extern void output2_TB_logger_init(const emlrtStack *sp);
extern void output3_TB_logger_free(void);
extern void output3_TB_logger_init(const emlrtStack *sp);
extern void tbcenc_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData);
extern void tbcenc_fixpt_logger_init(void);

#endif

/* End of code generation (tbcenc_fixpt_logger.h) */

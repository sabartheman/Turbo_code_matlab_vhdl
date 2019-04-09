/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_fixpt_logger.h
 *
 * Code generation for function 'tbcdec_fixpt_logger'
 *
 */

#ifndef TBCDEC_FIXPT_LOGGER_H
#define TBCDEC_FIXPT_LOGGER_H

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
extern void LLR_TB_logger_free(void);
extern void LLR_TB_logger_init(const emlrtStack *sp);
extern void Lc_TB_logger_free(void);
extern void Lc_TB_logger_init(const emlrtStack *sp);
extern void b_tbcdec_fixpt_logger(const emlrtStack *sp, const int16_T
  varargin_1[8], const int16_T varargin_2[8], const int16_T varargin_3[8],
  uint8_T varargin_4, const uint8_T varargin_5[8], uint16_T varargin_6, const
  int8_T varargin_7[8], const int16_T varargin_8[8]);
extern void dec_out_TB_logger_free(void);
extern void dec_out_TB_logger_init(const emlrtStack *sp);
extern void intlv_TB_logger_free(void);
extern void intlv_TB_logger_init(const emlrtStack *sp);
extern void iterCount_not_empty_init(void);
extern void iter_TB_logger_free(void);
extern void iter_TB_logger_init(const emlrtStack *sp);
extern void r1_1_TB_logger_free(void);
extern void r1_1_TB_logger_init(const emlrtStack *sp);
extern void r2_1_TB_logger_free(void);
extern void r2_1_TB_logger_init(const emlrtStack *sp);
extern void r3_TB_logger_free(void);
extern void r3_TB_logger_init(const emlrtStack *sp);
extern void tbcdec_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData);
extern void tbcdec_fixpt_logger_init(void);

#endif

/* End of code generation (tbcdec_fixpt_logger.h) */

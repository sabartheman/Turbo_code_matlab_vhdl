/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_wrapper_fixpt_hdl_mex_terminate.c
 *
 * Code generation for function 'tbcdec_wrapper_fixpt_hdl_mex_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcdec_fixpt_logger.h"
#include "tbcdec_wrapper_fixpt.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_tbcdec_wrapper_fixpt_hdl_mex_mex.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_data.h"

/* Function Definitions */
void tbcdec_wrapper_fixpt_hdl_mex_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  LLR_TB_logger_free();
  dec_out_TB_logger_free();
  Lc_TB_logger_free();
  intlv_TB_logger_free();
  iter_TB_logger_free();
  r3_TB_logger_free();
  r2_1_TB_logger_free();
  r1_1_TB_logger_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
  emlrtDestroyArray(&d_eml_mx);
  emlrtDestroyArray(&e_eml_mx);
  emlrtDestroyArray(&f_eml_mx);
  emlrtDestroyArray(&g_eml_mx);
}

void tbcdec_wrapper_fixpt_hdl_mex_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (tbcdec_wrapper_fixpt_hdl_mex_terminate.c) */

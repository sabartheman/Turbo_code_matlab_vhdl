/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcenc_wrapper_fixpt_hdl_mex_terminate.c
 *
 * Code generation for function 'tbcenc_wrapper_fixpt_hdl_mex_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcenc_fixpt_logger.h"
#include "tbcenc_wrapper_fixpt.h"
#include "tbcenc_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_tbcenc_wrapper_fixpt_hdl_mex_mex.h"
#include "tbcenc_wrapper_fixpt_hdl_mex_data.h"

/* Function Definitions */
void tbcenc_wrapper_fixpt_hdl_mex_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  output3_TB_logger_free();
  output2_TB_logger_free();
  output1_TB_logger_free();
  intlv_TB_logger_free();
  msg_in_TB_logger_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
}

void tbcenc_wrapper_fixpt_hdl_mex_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (tbcenc_wrapper_fixpt_hdl_mex_terminate.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_tbcdec_wrapper_fixpt_hdl_mex_mex.c
 *
 * Code generation for function '_coder_tbcdec_wrapper_fixpt_hdl_mex_mex'
 *
 */

/* Include files */
#include "tbcdec_fixpt_logger.h"
#include "tbcdec_wrapper_fixpt.h"
#include "_coder_tbcdec_wrapper_fixpt_hdl_mex_mex.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_tbcdec_wrapper_fixpt_hdl_mex_api.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_initialize.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[2] = { "tbcdec_wrapper_fixpt",
  "tbcdec_fixpt_logger" };

/* Function Declarations */
static void c_tbcdec_wrapper_fixpt_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[6]);
static void tbcdec_fixpt_logger_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs);

/* Function Definitions */
static void c_tbcdec_wrapper_fixpt_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[6])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        20, "tbcdec_wrapper_fixpt");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "tbcdec_wrapper_fixpt");
  }

  /* Call the function. */
  tbcdec_wrapper_fixpt_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

static void tbcdec_fixpt_logger_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs)
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        19, "tbcdec_fixpt_logger");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "tbcdec_fixpt_logger");
  }

  /* Call the function. */
  tbcdec_fixpt_logger_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(tbcdec_wrapper_fixpt_hdl_mex_atexit);

  /* Module initialization. */
  tbcdec_wrapper_fixpt_hdl_mex_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 2)) {
   case 0:
    c_tbcdec_wrapper_fixpt_mexFunct(nlhs, plhs, nrhs - 1, *(const mxArray *(*)[6])
      &prhs[1]);
    break;

   case 1:
    tbcdec_fixpt_logger_mexFunction(nlhs, plhs, nrhs - 1);
    break;
  }

  /* Module termination. */
  tbcdec_wrapper_fixpt_hdl_mex_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_tbcdec_wrapper_fixpt_hdl_mex_mex.c) */

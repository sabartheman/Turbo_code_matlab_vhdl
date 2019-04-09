/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_tbcenc_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_tbcenc_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcenc_fixpt_logger.h"
#include "tbcenc_wrapper_fixpt.h"
#include "_coder_tbcenc_wrapper_fixpt_hdl_mex_api.h"
#include "tbcenc_wrapper_fixpt_hdl_mex_emxutil.h"
#include "tbcenc_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo s_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_tbcenc_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8];
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8];
static const mxArray *c_emlrt_marshallOut(const emxArray_uint8_T *u);
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *msg_in,
  const char_T *identifier))[8];
static const mxArray *emlrt_marshallOut(const boolean_T u[8]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8]
{
  real_T (*y)[8];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  struct0_T u)
{
  const mxArray *y;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[2] = { "msg_in", "intlv" };

  const mxArray *c_y;
  static const char * sv2[3] = { "output1", "output2", "output3" };

  const mxArray *m6;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv1));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray",
    c_emlrt_marshallOut(u.inputs.msg_in), true, false));
  emlrtSetFieldR2017b(b_y, 0, "msg_in", c_y, 0);
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, c_eml_mx, "simulinkarray",
    c_emlrt_marshallOut(u.inputs.intlv), true, false));
  emlrtSetFieldR2017b(b_y, 0, "intlv", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 3, sv2));
  emlrtSetFieldR2017b(b_y, 0, "output1", d_emlrt_marshallOut(u.outputs.output1),
                      0);
  emlrtSetFieldR2017b(b_y, 0, "output2", d_emlrt_marshallOut(u.outputs.output2),
                      1);
  emlrtSetFieldR2017b(b_y, 0, "output3", d_emlrt_marshallOut(u.outputs.output3),
                      2);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  b_y = NULL;
  m6 = emlrtCreateDoubleScalar(u.iterCount);
  emlrtAssign(&b_y, m6);
  emlrtSetFieldR2017b(y, 0, "iterCount", b_y, 2);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8]
{
  real_T (*ret)[8];
  static const int32_T dims[2] = { 1, 8 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[8])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static const mxArray *c_emlrt_marshallOut(const emxArray_uint8_T *u)
{
  const mxArray *y;
  const mxArray *m7;
  uint8_T *pData;
  int32_T i15;
  int32_T i;
  y = NULL;
  m7 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxUINT8_CLASS,
    mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m7);
  i15 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i15] = u->data[i];
    i15++;
  }

  emlrtAssign(&y, m7);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m8;
  real_T *pData;
  int32_T i16;
  int32_T i;
  y = NULL;
  m8 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m8);
  i16 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i16] = u->data[i];
    i16++;
  }

  emlrtAssign(&y, m8);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *msg_in,
  const char_T *identifier))[8]
{
  real_T (*y)[8];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(msg_in), &thisId);
  emlrtDestroyArray(&msg_in);
  return y;
}
  static const mxArray *emlrt_marshallOut(const boolean_T u[8])
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv5[2] = { 0, 0 };

  static const int32_T iv6[2] = { 1, 8 };

  y = NULL;
  m5 = emlrtCreateLogicalArray(2, iv5);
  emlrtMxSetData((mxArray *)m5, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m5, iv6, 2);
  emlrtAssign(&y, m5);
  return y;
}

void tbcenc_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T loggedData;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &loggedData, &s_emlrtRTEI, true);

  /* Invoke the target function */
  tbcenc_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void tbcenc_wrapper_fixpt_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[3])
{
  boolean_T (*output1)[8];
  boolean_T (*output2)[8];
  boolean_T (*output3)[8];
  real_T (*msg_in)[8];
  real_T (*intlv)[8];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  output1 = (boolean_T (*)[8])mxMalloc(sizeof(boolean_T [8]));
  output2 = (boolean_T (*)[8])mxMalloc(sizeof(boolean_T [8]));
  output3 = (boolean_T (*)[8])mxMalloc(sizeof(boolean_T [8]));

  /* Marshall function inputs */
  msg_in = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "msg_in");
  intlv = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "intlv");

  /* Invoke the target function */
  tbcenc_wrapper_fixpt(&st, *msg_in, *intlv, *output1, *output2, *output3);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*output1);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*output2);
  }

  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*output3);
  }
}

/* End of code generation (_coder_tbcenc_wrapper_fixpt_hdl_mex_api.c) */

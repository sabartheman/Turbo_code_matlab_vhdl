/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_tbcdec_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_tbcdec_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcdec_fixpt_logger.h"
#include "tbcdec_wrapper_fixpt.h"
#include "_coder_tbcdec_wrapper_fixpt_hdl_mex_api.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_emxutil.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo y_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_tbcdec_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8];
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T *
  u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iter,
  const char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_int16_T *u);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_uint8_T *u);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *intlv,
  const char_T *identifier))[8];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *r1, const
  char_T *identifier))[8];
static const mxArray *emlrt_marshallOut(const real_T u[8]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8];
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8]
{
  real_T (*y)[8];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  struct0_T *u)
{
  const mxArray *y;
  emxArray_int16_T *b_u;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[6] = { "r1_1", "r2_1", "r3", "iter", "intlv", "Lc" };

  const mxArray *c_y;
  int32_T i220;
  int32_T loop_ub;
  const mxArray *d_y;
  const mxArray *m3;
  int16_T *pData;
  emxArray_uint16_T *c_u;
  const mxArray *m4;
  uint16_T *b_pData;
  emxArray_int8_T *d_u;
  static const char * sv2[2] = { "dec_out", "LLR" };

  const mxArray *m5;
  int8_T *c_pData;
  emxArray_int16_T *e_u;
  const mxArray *m6;
  int16_T *d_pData;
  const mxArray *m7;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int16_T(sp, &b_u, 1, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 6, sv1));
  c_y = NULL;
  i220 = b_u->size[0];
  b_u->size[0] = u->inputs.r1_1->size[0];
  emxEnsureCapacity_int16_T(sp, b_u, i220, (emlrtRTEInfo *)NULL);
  loop_ub = u->inputs.r1_1->size[0];
  for (i220 = 0; i220 < loop_ub; i220++) {
    b_u->data[i220] = u->inputs.r1_1->data[i220];
  }

  d_y = NULL;
  m3 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxINT16_CLASS,
    mxREAL);
  pData = (int16_T *)emlrtMxGetData(m3);
  i220 = 0;
  loop_ub = 0;
  emxFree_int16_T(&b_u);
  while (loop_ub < u->inputs.r1_1->size[0]) {
    pData[i220] = u->inputs.r1_1->data[loop_ub];
    i220++;
    loop_ub++;
  }

  emxInit_uint16_T(sp, &c_u, 2, (emlrtRTEInfo *)NULL, true);
  emlrtAssign(&d_y, m3);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray",
    d_y, true, false));
  emlrtSetFieldR2017b(b_y, 0, "r1_1", c_y, 0);
  emlrtSetFieldR2017b(b_y, 0, "r2_1", c_emlrt_marshallOut(sp, u->inputs.r2_1), 1);
  emlrtSetFieldR2017b(b_y, 0, "r3", c_emlrt_marshallOut(sp, u->inputs.r3), 2);
  emlrtSetFieldR2017b(b_y, 0, "iter", d_emlrt_marshallOut(sp, u->inputs.iter), 3);
  emlrtSetFieldR2017b(b_y, 0, "intlv", d_emlrt_marshallOut(sp, u->inputs.intlv),
                      4);
  c_y = NULL;
  i220 = c_u->size[0] * c_u->size[1];
  c_u->size[0] = 1;
  c_u->size[1] = u->inputs.Lc->size[1];
  emxEnsureCapacity_uint16_T(sp, c_u, i220, (emlrtRTEInfo *)NULL);
  loop_ub = u->inputs.Lc->size[0] * u->inputs.Lc->size[1];
  for (i220 = 0; i220 < loop_ub; i220++) {
    c_u->data[i220] = u->inputs.Lc->data[i220];
  }

  d_y = NULL;
  m4 = emlrtCreateNumericArray(2, *(int32_T (*)[2])c_u->size, mxUINT16_CLASS,
    mxREAL);
  b_pData = (uint16_T *)emlrtMxGetData(m4);
  i220 = 0;
  loop_ub = 0;
  emxFree_uint16_T(&c_u);
  while (loop_ub < u->inputs.Lc->size[1]) {
    b_pData[i220] = u->inputs.Lc->data[loop_ub];
    i220++;
    loop_ub++;
  }

  emxInit_int8_T(sp, &d_u, 2, (emlrtRTEInfo *)NULL, true);
  emlrtAssign(&d_y, m4);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, e_eml_mx, "simulinkarray",
    d_y, true, false));
  emlrtSetFieldR2017b(b_y, 0, "Lc", c_y, 5);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv2));
  c_y = NULL;
  i220 = d_u->size[0] * d_u->size[1];
  d_u->size[0] = 1;
  d_u->size[1] = u->outputs.dec_out->size[1];
  emxEnsureCapacity_int8_T(sp, d_u, i220, (emlrtRTEInfo *)NULL);
  loop_ub = u->outputs.dec_out->size[0] * u->outputs.dec_out->size[1];
  for (i220 = 0; i220 < loop_ub; i220++) {
    d_u->data[i220] = u->outputs.dec_out->data[i220];
  }

  d_y = NULL;
  m5 = emlrtCreateNumericArray(2, *(int32_T (*)[2])d_u->size, mxINT8_CLASS,
    mxREAL);
  c_pData = (int8_T *)emlrtMxGetData(m5);
  i220 = 0;
  loop_ub = 0;
  emxFree_int8_T(&d_u);
  while (loop_ub < u->outputs.dec_out->size[1]) {
    c_pData[i220] = u->outputs.dec_out->data[loop_ub];
    i220++;
    loop_ub++;
  }

  emxInit_int16_T(sp, &e_u, 2, (emlrtRTEInfo *)NULL, true);
  emlrtAssign(&d_y, m5);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, f_eml_mx, "simulinkarray",
    d_y, true, false));
  emlrtSetFieldR2017b(b_y, 0, "dec_out", c_y, 0);
  c_y = NULL;
  i220 = e_u->size[0] * e_u->size[1];
  e_u->size[0] = 1;
  e_u->size[1] = u->outputs.LLR->size[1];
  emxEnsureCapacity_int16_T(sp, e_u, i220, (emlrtRTEInfo *)NULL);
  loop_ub = u->outputs.LLR->size[0] * u->outputs.LLR->size[1];
  for (i220 = 0; i220 < loop_ub; i220++) {
    e_u->data[i220] = u->outputs.LLR->data[i220];
  }

  d_y = NULL;
  m6 = emlrtCreateNumericArray(2, *(int32_T (*)[2])e_u->size, mxINT16_CLASS,
    mxREAL);
  d_pData = (int16_T *)emlrtMxGetData(m6);
  i220 = 0;
  loop_ub = 0;
  emxFree_int16_T(&e_u);
  while (loop_ub < u->outputs.LLR->size[1]) {
    d_pData[i220] = u->outputs.LLR->data[loop_ub];
    i220++;
    loop_ub++;
  }

  emlrtAssign(&d_y, m6);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, g_eml_mx, "simulinkarray",
    d_y, true, false));
  emlrtSetFieldR2017b(b_y, 0, "LLR", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  b_y = NULL;
  m7 = emlrtCreateDoubleScalar(u->iterCount);
  emlrtAssign(&b_y, m7);
  emlrtSetFieldR2017b(y, 0, "iterCount", b_y, 2);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iter,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(iter), &thisId);
  emlrtDestroyArray(&iter);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_int16_T *u)
{
  const mxArray *y;
  emxArray_int16_T *b_u;
  int32_T i221;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m8;
  int16_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int16_T(sp, &b_u, 1, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  i221 = b_u->size[0];
  b_u->size[0] = u->size[0];
  emxEnsureCapacity_int16_T(sp, b_u, i221, (emlrtRTEInfo *)NULL);
  loop_ub = u->size[0];
  for (i221 = 0; i221 < loop_ub; i221++) {
    b_u->data[i221] = u->data[i221];
  }

  b_y = NULL;
  m8 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxINT16_CLASS,
    mxREAL);
  pData = (int16_T *)emlrtMxGetData(m8);
  i221 = 0;
  loop_ub = 0;
  emxFree_int16_T(&b_u);
  while (loop_ub < u->size[0]) {
    pData[i221] = u->data[loop_ub];
    i221++;
    loop_ub++;
  }

  emlrtAssign(&b_y, m8);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, c_eml_mx, "simulinkarray", b_y,
    true, false));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_uint8_T *u)
{
  const mxArray *y;
  emxArray_uint8_T *b_u;
  int32_T i222;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m9;
  uint8_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_uint8_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  i222 = b_u->size[0] * b_u->size[1];
  b_u->size[0] = 1;
  b_u->size[1] = u->size[1];
  emxEnsureCapacity_uint8_T(sp, b_u, i222, (emlrtRTEInfo *)NULL);
  loop_ub = u->size[0] * u->size[1];
  for (i222 = 0; i222 < loop_ub; i222++) {
    b_u->data[i222] = u->data[i222];
  }

  b_y = NULL;
  m9 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxUINT8_CLASS,
    mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m9);
  i222 = 0;
  loop_ub = 0;
  emxFree_uint8_T(&b_u);
  while (loop_ub < u->size[1]) {
    pData[i222] = u->data[loop_ub];
    i222++;
    loop_ub++;
  }

  emlrtAssign(&b_y, m9);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, d_eml_mx, "simulinkarray", b_y,
    true, false));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *intlv,
  const char_T *identifier))[8]
{
  real_T (*y)[8];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(intlv), &thisId);
  emlrtDestroyArray(&intlv);
  return y;
}
  static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *r1,
  const char_T *identifier))[8]
{
  real_T (*y)[8];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(r1), &thisId);
  emlrtDestroyArray(&r1);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[8])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 0, 0 };

  static const int32_T iv3[2] = { 1, 8 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m2, iv3, 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8]
{
  real_T (*y)[8];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8]
{
  real_T (*ret)[8];
  static const int32_T dims[1] = { 8 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[8])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8]
{
  real_T (*ret)[8];
  static const int32_T dims[2] = { 1, 8 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[8])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void tbcdec_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T loggedData;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &loggedData, &y_emlrtRTEI, true);

  /* Invoke the target function */
  tbcdec_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, &loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void tbcdec_wrapper_fixpt_api(const mxArray * const prhs[6], int32_T nlhs, const
  mxArray *plhs[2])
{
  real_T (*dec_out)[8];
  real_T (*LLR)[8];
  real_T (*r1)[8];
  real_T (*r2)[8];
  real_T (*r3)[8];
  real_T iter;
  real_T (*intlv)[8];
  real_T Lc;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  dec_out = (real_T (*)[8])mxMalloc(sizeof(real_T [8]));
  LLR = (real_T (*)[8])mxMalloc(sizeof(real_T [8]));

  /* Marshall function inputs */
  r1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "r1");
  r2 = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "r2");
  r3 = emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "r3");
  iter = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "iter");
  intlv = e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "intlv");
  Lc = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "Lc");

  /* Invoke the target function */
  tbcdec_wrapper_fixpt(&st, *r1, *r2, *r3, iter, *intlv, Lc, *dec_out, *LLR);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*dec_out);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*LLR);
  }
}

/* End of code generation (_coder_tbcdec_wrapper_fixpt_hdl_mex_api.c) */

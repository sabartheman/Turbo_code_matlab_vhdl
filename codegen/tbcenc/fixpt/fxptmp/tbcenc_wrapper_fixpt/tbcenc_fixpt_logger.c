/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcenc_fixpt_logger.c
 *
 * Code generation for function 'tbcenc_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcenc_fixpt_logger.h"
#include "tbcenc_wrapper_fixpt.h"
#include "tbcenc_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_uint8_T *p;
static boolean_T p_not_empty;
static emxArray_uint8_T *b_p;
static boolean_T b_p_not_empty;
static emxArray_real_T *c_p;
static boolean_T c_p_not_empty;
static emxArray_real_T *d_p;
static boolean_T d_p_not_empty;
static emxArray_real_T *e_p;
static boolean_T e_p_not_empty;
static emlrtRSInfo d_emlrtRSI = { 13,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 14,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 15,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 16,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 17,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 28,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 29,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 30,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 31,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 32,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 21,  /* lineNo */
  20,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 21,  /* lineNo */
  13,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 38,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 57,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 76,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 95,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 114,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 36,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 55,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 74,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 93,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 112,/* lineNo */
  16,                                  /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 51,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 70,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 89,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 108,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 127,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 27,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 50,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 69,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 88,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 107,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 126,/* lineNo */
  9,                                   /* colNo */
  "tbcenc_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pName */
};

static emlrtRSInfo n_emlrtRSI = { 21,  /* lineNo */
  "tbcenc_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/fxptmp/tbcenc_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_intlv_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_msg_in_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_output1_TB_logger(const emlrtStack *sp, emxArray_real_T *out);
static void b_output2_TB_logger(const emlrtStack *sp, emxArray_real_T *out);
static void b_output3_TB_logger(const emlrtStack *sp, emxArray_real_T *out);
static void intlv_TB_logger(const emlrtStack *sp, const uint8_T v[8]);
static void msg_in_TB_logger(const emlrtStack *sp, const uint8_T v[8]);
static void output1_TB_logger(const emlrtStack *sp, const boolean_T v[8]);
static void output2_TB_logger(const emlrtStack *sp, const boolean_T v[8]);
static void output3_TB_logger(const emlrtStack *sp, const boolean_T v[8]);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 2, pArrays, "MException", true,
    location);
}

static void b_intlv_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i11;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &v_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i11 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = b_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i11, &o_emlrtRTEI);
  loop_ub = b_p->size[0] * b_p->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    out->data[i11] = b_p->data[i11];
  }

  b_p->size[0] = 1;
  b_p->size[1] = 0;
  b_p_not_empty = false;
}

static void b_msg_in_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i10;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &u_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i10 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i10, &n_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    out->data[i10] = p->data[i10];
  }

  p->size[0] = 1;
  p->size[1] = 0;
  p_not_empty = false;
}

static void b_output1_TB_logger(const emlrtStack *sp, emxArray_real_T *out)
{
  int32_T i12;
  int32_T loop_ub;
  if (!c_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &w_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i12 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = c_p->size[1];
  emxEnsureCapacity_real_T(sp, out, i12, &p_emlrtRTEI);
  loop_ub = c_p->size[0] * c_p->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    out->data[i12] = c_p->data[i12];
  }

  c_p->size[0] = 1;
  c_p->size[1] = 0;
  c_p_not_empty = false;
}

static void b_output2_TB_logger(const emlrtStack *sp, emxArray_real_T *out)
{
  int32_T i13;
  int32_T loop_ub;
  if (!d_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &x_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i13 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = d_p->size[1];
  emxEnsureCapacity_real_T(sp, out, i13, &q_emlrtRTEI);
  loop_ub = d_p->size[0] * d_p->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    out->data[i13] = d_p->data[i13];
  }

  d_p->size[0] = 1;
  d_p->size[1] = 0;
  d_p_not_empty = false;
}

static void b_output3_TB_logger(const emlrtStack *sp, emxArray_real_T *out)
{
  int32_T i14;
  int32_T loop_ub;
  if (!e_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &y_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i14 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = e_p->size[1];
  emxEnsureCapacity_real_T(sp, out, i14, &r_emlrtRTEI);
  loop_ub = e_p->size[0] * e_p->size[1];
  for (i14 = 0; i14 < loop_ub; i14++) {
    out->data[i14] = e_p->data[i14];
  }

  e_p->size[0] = 1;
  e_p->size[1] = 0;
  e_p_not_empty = false;
}

static void intlv_TB_logger(const emlrtStack *sp, const uint8_T v[8])
{
  int32_T i2;
  int32_T i3;
  if (!b_p_not_empty) {
    b_p->size[0] = 1;
    b_p->size[1] = 0;
    b_p_not_empty = false;
  }

  i2 = b_p->size[1];
  i3 = b_p->size[0] * b_p->size[1];
  b_p->size[1] = i2 + 8;
  emxEnsureCapacity_uint8_T(sp, b_p, i3, &j_emlrtRTEI);
  for (i3 = 0; i3 < 8; i3++) {
    b_p->data[i2 + i3] = v[i3];
  }

  b_p_not_empty = true;
}

static void msg_in_TB_logger(const emlrtStack *sp, const uint8_T v[8])
{
  int32_T i0;
  int32_T i1;
  if (!p_not_empty) {
    p->size[0] = 1;
    p->size[1] = 0;
    p_not_empty = false;
  }

  i0 = p->size[1];
  i1 = p->size[0] * p->size[1];
  p->size[1] = i0 + 8;
  emxEnsureCapacity_uint8_T(sp, p, i1, &i_emlrtRTEI);
  for (i1 = 0; i1 < 8; i1++) {
    p->data[i0 + i1] = v[i1];
  }

  p_not_empty = true;
}

static void output1_TB_logger(const emlrtStack *sp, const boolean_T v[8])
{
  int32_T i4;
  int32_T i5;
  if (!c_p_not_empty) {
    c_p->size[0] = 1;
    c_p->size[1] = 0;
    c_p_not_empty = false;
  }

  i4 = c_p->size[1];
  i5 = c_p->size[0] * c_p->size[1];
  c_p->size[1] = i4 + 8;
  emxEnsureCapacity_real_T(sp, c_p, i5, &k_emlrtRTEI);
  for (i5 = 0; i5 < 8; i5++) {
    c_p->data[i4 + i5] = v[i5];
  }

  c_p_not_empty = true;
}

static void output2_TB_logger(const emlrtStack *sp, const boolean_T v[8])
{
  int32_T i6;
  int32_T i7;
  if (!d_p_not_empty) {
    d_p->size[0] = 1;
    d_p->size[1] = 0;
    d_p_not_empty = false;
  }

  i6 = d_p->size[1];
  i7 = d_p->size[0] * d_p->size[1];
  d_p->size[1] = i6 + 8;
  emxEnsureCapacity_real_T(sp, d_p, i7, &l_emlrtRTEI);
  for (i7 = 0; i7 < 8; i7++) {
    d_p->data[i6 + i7] = v[i7];
  }

  d_p_not_empty = true;
}

static void output3_TB_logger(const emlrtStack *sp, const boolean_T v[8])
{
  int32_T i8;
  int32_T i9;
  if (!e_p_not_empty) {
    e_p->size[0] = 1;
    e_p->size[1] = 0;
    e_p_not_empty = false;
  }

  i8 = e_p->size[1];
  i9 = e_p->size[0] * e_p->size[1];
  e_p->size[1] = i8 + 8;
  emxEnsureCapacity_real_T(sp, e_p, i9, &m_emlrtRTEI);
  for (i9 = 0; i9 < 8; i9++) {
    e_p->data[i8 + i9] = v[i9];
  }

  e_p_not_empty = true;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

void b_tbcenc_fixpt_logger(const emlrtStack *sp, const uint8_T varargin_1[8],
  const uint8_T varargin_2[8], const boolean_T varargin_3[8], const boolean_T
  varargin_4[8], const boolean_T varargin_5[8])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 30 };

  static const char_T u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'X', 'P', 'C',
    'O', 'N', 'V', ':', 'M', 'A', 'T', 'L', 'A', 'B', 'S', 'i', 'm', 'B', 'a',
    'i', 'l', 'O', 'u', 't' };

  const mxArray *b_y;
  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 34 };

  static const char_T b_u[34] = { 'R', 'e', 't', 'u', 'r', 'n', ' ', 'e', 'a',
    'r', 'l', 'y', ' ', 'f', 'o', 'r', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'c',
    'o', 'm', 'p', 'u', 't', 'a', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  msg_in_TB_logger(&st, varargin_1);
  st.site = &e_emlrtRSI;
  intlv_TB_logger(&st, varargin_2);
  st.site = &f_emlrtRSI;
  output1_TB_logger(&st, varargin_3);
  st.site = &g_emlrtRSI;
  output2_TB_logger(&st, varargin_4);
  st.site = &h_emlrtRSI;
  output3_TB_logger(&st, varargin_5);
  iterCount++;
  if (iterCount >= rtInf) {
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(sp, 30, m3, &u[0]);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(sp, 34, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    st.site = &n_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void intlv_TB_logger_free(void)
{
  emxFree_uint8_T(&b_p);
}

void intlv_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &b_p, 2, &e_emlrtRTEI, false);
  b_p_not_empty = false;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void msg_in_TB_logger_free(void)
{
  emxFree_uint8_T(&p);
}

void msg_in_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &p, 2, &d_emlrtRTEI, false);
  p_not_empty = false;
}

void output1_TB_logger_free(void)
{
  emxFree_real_T(&c_p);
}

void output1_TB_logger_init(const emlrtStack *sp)
{
  emxInit_real_T(sp, &c_p, 2, &f_emlrtRTEI, false);
  c_p_not_empty = false;
}

void output2_TB_logger_free(void)
{
  emxFree_real_T(&d_p);
}

void output2_TB_logger_init(const emlrtStack *sp)
{
  emxInit_real_T(sp, &d_p, 2, &g_emlrtRTEI, false);
  d_p_not_empty = false;
}

void output3_TB_logger_free(void)
{
  emxFree_real_T(&e_p);
}

void output3_TB_logger_init(const emlrtStack *sp)
{
  emxInit_real_T(sp, &e_p, 2, &h_emlrtRTEI, false);
  e_p_not_empty = false;
}

void tbcenc_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &t_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &i_emlrtRSI;
  b_msg_in_TB_logger(&st, loggedData->inputs.msg_in);
  st.site = &j_emlrtRSI;
  b_intlv_TB_logger(&st, loggedData->inputs.intlv);
  st.site = &k_emlrtRSI;
  b_output1_TB_logger(&st, loggedData->outputs.output1);
  st.site = &l_emlrtRSI;
  b_output2_TB_logger(&st, loggedData->outputs.output2);
  st.site = &m_emlrtRSI;
  b_output3_TB_logger(&st, loggedData->outputs.output3);
  loggedData->iterCount = iterCount;
}

void tbcenc_fixpt_logger_init(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

/* End of code generation (tbcenc_fixpt_logger.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_fixpt_logger.c
 *
 * Code generation for function 'tbcdec_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcdec_fixpt_logger.h"
#include "tbcdec_wrapper_fixpt.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_int16_T *p;
static boolean_T p_not_empty;
static emxArray_int16_T *b_p;
static boolean_T b_p_not_empty;
static emxArray_int16_T *c_p;
static boolean_T c_p_not_empty;
static emxArray_uint8_T *d_p;
static boolean_T d_p_not_empty;
static emxArray_uint8_T *e_p;
static boolean_T e_p_not_empty;
static emxArray_uint16_T *f_p;
static boolean_T f_p_not_empty;
static emxArray_int8_T *g_p;
static boolean_T g_p_not_empty;
static emxArray_int16_T *h_p;
static boolean_T h_p_not_empty;
static emlrtRSInfo y_emlrtRSI = { 13,  /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 14, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 15, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 16, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 17, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 18, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 19, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 20, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 31, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 32, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 33, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 34, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 35, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 36, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 37, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 38, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 24,  /* lineNo */
  20,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 24,  /* lineNo */
  13,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 44,  /* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 63,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 82,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 101,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 120,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 139,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 158,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 177,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 42,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 61,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 80,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 99,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 118,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 137,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 156,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 175,/* lineNo */
  16,                                  /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 57,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 95,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 114,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 133,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 152,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 171,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 190,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 30,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 56,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 75,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 94,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 113,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 132,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 151,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 170,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 189,/* lineNo */
  9,                                   /* colNo */
  "tbcdec_fixpt_logger",               /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pName */
};

static emlrtRSInfo pb_emlrtRSI = { 24, /* lineNo */
  "tbcdec_fixpt_logger",               /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/fxptmp/tbcdec_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static void LLR_TB_logger(const emlrtStack *sp, const int16_T v[8]);
static void Lc_TB_logger(const emlrtStack *sp, uint16_T v);
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_LLR_TB_logger(const emlrtStack *sp, emxArray_int16_T *out);
static void b_Lc_TB_logger(const emlrtStack *sp, emxArray_uint16_T *out);
static void b_dec_out_TB_logger(const emlrtStack *sp, emxArray_int8_T *out);
static void b_intlv_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_iter_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_r1_1_TB_logger(const emlrtStack *sp, emxArray_int16_T *out);
static void b_r2_1_TB_logger(const emlrtStack *sp, emxArray_int16_T *out);
static void b_r3_TB_logger(const emlrtStack *sp, emxArray_int16_T *out);
static void dec_out_TB_logger(const emlrtStack *sp, const int8_T v[8]);
static void intlv_TB_logger(const emlrtStack *sp, const uint8_T v[8]);
static void iter_TB_logger(const emlrtStack *sp, uint8_T v);
static void r1_1_TB_logger(const emlrtStack *sp, const int16_T v[8]);
static void r2_1_TB_logger(const emlrtStack *sp, const int16_T v[8]);
static void r3_TB_logger(const emlrtStack *sp, const int16_T v[8]);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void LLR_TB_logger(const emlrtStack *sp, const int16_T v[8])
{
  int32_T i210;
  int32_T i211;
  if (!h_p_not_empty) {
    h_p->size[0] = 1;
    h_p->size[1] = 0;
    h_p_not_empty = false;
  }

  i210 = h_p->size[1];
  i211 = h_p->size[0] * h_p->size[1];
  h_p->size[1] = i210 + 8;
  emxEnsureCapacity_int16_T(sp, h_p, i211, &p_emlrtRTEI);
  for (i211 = 0; i211 < 8; i211++) {
    h_p->data[i210 + i211] = v[i211];
  }

  h_p_not_empty = true;
}

static void Lc_TB_logger(const emlrtStack *sp, uint16_T v)
{
  int32_T i206;
  int32_T i207;
  if (!f_p_not_empty) {
    f_p->size[0] = 1;
    f_p->size[1] = 0;
    f_p_not_empty = false;
  }

  i206 = f_p->size[1];
  i207 = f_p->size[0] * f_p->size[1];
  f_p->size[1] = i206 + 1;
  emxEnsureCapacity_uint16_T(sp, f_p, i207, &n_emlrtRTEI);
  f_p->data[i206] = v;
  f_p_not_empty = true;
}

static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m15;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 2, pArrays, "MException", true,
    location);
}

static void b_LLR_TB_logger(const emlrtStack *sp, emxArray_int16_T *out)
{
  int32_T i219;
  int32_T loop_ub;
  if (!h_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &ib_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i219 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = h_p->size[1];
  emxEnsureCapacity_int16_T(sp, out, i219, &x_emlrtRTEI);
  loop_ub = h_p->size[0] * h_p->size[1];
  for (i219 = 0; i219 < loop_ub; i219++) {
    out->data[i219] = h_p->data[i219];
  }

  h_p->size[0] = 1;
  h_p->size[1] = 0;
  h_p_not_empty = false;
}

static void b_Lc_TB_logger(const emlrtStack *sp, emxArray_uint16_T *out)
{
  int32_T i217;
  int32_T loop_ub;
  if (!f_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &gb_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i217 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = f_p->size[1];
  emxEnsureCapacity_uint16_T(sp, out, i217, &v_emlrtRTEI);
  loop_ub = f_p->size[0] * f_p->size[1];
  for (i217 = 0; i217 < loop_ub; i217++) {
    out->data[i217] = f_p->data[i217];
  }

  f_p->size[0] = 1;
  f_p->size[1] = 0;
  f_p_not_empty = false;
}

static void b_dec_out_TB_logger(const emlrtStack *sp, emxArray_int8_T *out)
{
  int32_T i218;
  int32_T loop_ub;
  if (!g_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &hb_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i218 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = g_p->size[1];
  emxEnsureCapacity_int8_T(sp, out, i218, &w_emlrtRTEI);
  loop_ub = g_p->size[0] * g_p->size[1];
  for (i218 = 0; i218 < loop_ub; i218++) {
    out->data[i218] = g_p->data[i218];
  }

  g_p->size[0] = 1;
  g_p->size[1] = 0;
  g_p_not_empty = false;
}

static void b_intlv_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i216;
  int32_T loop_ub;
  if (!e_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &fb_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i216 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = e_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i216, &u_emlrtRTEI);
  loop_ub = e_p->size[0] * e_p->size[1];
  for (i216 = 0; i216 < loop_ub; i216++) {
    out->data[i216] = e_p->data[i216];
  }

  e_p->size[0] = 1;
  e_p->size[1] = 0;
  e_p_not_empty = false;
}

static void b_iter_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i215;
  int32_T loop_ub;
  if (!d_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &eb_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i215 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = d_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i215, &t_emlrtRTEI);
  loop_ub = d_p->size[0] * d_p->size[1];
  for (i215 = 0; i215 < loop_ub; i215++) {
    out->data[i215] = d_p->data[i215];
  }

  d_p->size[0] = 1;
  d_p->size[1] = 0;
  d_p_not_empty = false;
}

static void b_r1_1_TB_logger(const emlrtStack *sp, emxArray_int16_T *out)
{
  int32_T i212;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &bb_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i212 = out->size[0];
  out->size[0] = p->size[0];
  emxEnsureCapacity_int16_T(sp, out, i212, &q_emlrtRTEI);
  loop_ub = p->size[0];
  for (i212 = 0; i212 < loop_ub; i212++) {
    out->data[i212] = p->data[i212];
  }

  p->size[0] = 0;
  p_not_empty = false;
}

static void b_r2_1_TB_logger(const emlrtStack *sp, emxArray_int16_T *out)
{
  int32_T i213;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &cb_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i213 = out->size[0];
  out->size[0] = b_p->size[0];
  emxEnsureCapacity_int16_T(sp, out, i213, &r_emlrtRTEI);
  loop_ub = b_p->size[0];
  for (i213 = 0; i213 < loop_ub; i213++) {
    out->data[i213] = b_p->data[i213];
  }

  b_p->size[0] = 0;
  b_p_not_empty = false;
}

static void b_r3_TB_logger(const emlrtStack *sp, emxArray_int16_T *out)
{
  int32_T i214;
  int32_T loop_ub;
  if (!c_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &db_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i214 = out->size[0];
  out->size[0] = c_p->size[0];
  emxEnsureCapacity_int16_T(sp, out, i214, &s_emlrtRTEI);
  loop_ub = c_p->size[0];
  for (i214 = 0; i214 < loop_ub; i214++) {
    out->data[i214] = c_p->data[i214];
  }

  c_p->size[0] = 0;
  c_p_not_empty = false;
}

static void dec_out_TB_logger(const emlrtStack *sp, const int8_T v[8])
{
  int32_T i208;
  int32_T i209;
  if (!g_p_not_empty) {
    g_p->size[0] = 1;
    g_p->size[1] = 0;
    g_p_not_empty = false;
  }

  i208 = g_p->size[1];
  i209 = g_p->size[0] * g_p->size[1];
  g_p->size[1] = i208 + 8;
  emxEnsureCapacity_int8_T(sp, g_p, i209, &o_emlrtRTEI);
  for (i209 = 0; i209 < 8; i209++) {
    g_p->data[i208 + i209] = v[i209];
  }

  g_p_not_empty = true;
}

static void intlv_TB_logger(const emlrtStack *sp, const uint8_T v[8])
{
  int32_T i204;
  int32_T i205;
  if (!e_p_not_empty) {
    e_p->size[0] = 1;
    e_p->size[1] = 0;
    e_p_not_empty = false;
  }

  i204 = e_p->size[1];
  i205 = e_p->size[0] * e_p->size[1];
  e_p->size[1] = i204 + 8;
  emxEnsureCapacity_uint8_T(sp, e_p, i205, &m_emlrtRTEI);
  for (i205 = 0; i205 < 8; i205++) {
    e_p->data[i204 + i205] = v[i205];
  }

  e_p_not_empty = true;
}

static void iter_TB_logger(const emlrtStack *sp, uint8_T v)
{
  int32_T i202;
  int32_T i203;
  if (!d_p_not_empty) {
    d_p->size[0] = 1;
    d_p->size[1] = 0;
    d_p_not_empty = false;
  }

  i202 = d_p->size[1];
  i203 = d_p->size[0] * d_p->size[1];
  d_p->size[1] = i202 + 1;
  emxEnsureCapacity_uint8_T(sp, d_p, i203, &l_emlrtRTEI);
  d_p->data[i202] = v;
  d_p_not_empty = true;
}

static void r1_1_TB_logger(const emlrtStack *sp, const int16_T v[8])
{
  int32_T i196;
  int32_T i197;
  if (!p_not_empty) {
    p->size[0] = 0;
    p_not_empty = false;
  }

  i196 = p->size[0];
  i197 = p->size[0];
  p->size[0] = i196 + 8;
  emxEnsureCapacity_int16_T(sp, p, i197, &i_emlrtRTEI);
  for (i197 = 0; i197 < 8; i197++) {
    p->data[i196 + i197] = v[i197];
  }

  p_not_empty = true;
}

static void r2_1_TB_logger(const emlrtStack *sp, const int16_T v[8])
{
  int32_T i198;
  int32_T i199;
  if (!b_p_not_empty) {
    b_p->size[0] = 0;
    b_p_not_empty = false;
  }

  i198 = b_p->size[0];
  i199 = b_p->size[0];
  b_p->size[0] = i198 + 8;
  emxEnsureCapacity_int16_T(sp, b_p, i199, &j_emlrtRTEI);
  for (i199 = 0; i199 < 8; i199++) {
    b_p->data[i198 + i199] = v[i199];
  }

  b_p_not_empty = true;
}

static void r3_TB_logger(const emlrtStack *sp, const int16_T v[8])
{
  int32_T i200;
  int32_T i201;
  if (!c_p_not_empty) {
    c_p->size[0] = 0;
    c_p_not_empty = false;
  }

  i200 = c_p->size[0];
  i201 = c_p->size[0];
  c_p->size[0] = i200 + 8;
  emxEnsureCapacity_int16_T(sp, c_p, i201, &k_emlrtRTEI);
  for (i201 = 0; i201 < 8; i201++) {
    c_p->data[i200 + i201] = v[i201];
  }

  c_p_not_empty = true;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

void LLR_TB_logger_free(void)
{
  emxFree_int16_T(&h_p);
}

void LLR_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int16_T(sp, &h_p, 2, &h_emlrtRTEI, false);
  h_p_not_empty = false;
}

void Lc_TB_logger_free(void)
{
  emxFree_uint16_T(&f_p);
}

void Lc_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint16_T(sp, &f_p, 2, &f_emlrtRTEI, false);
  f_p_not_empty = false;
}

void b_tbcdec_fixpt_logger(const emlrtStack *sp, const int16_T varargin_1[8],
  const int16_T varargin_2[8], const int16_T varargin_3[8], uint8_T varargin_4,
  const uint8_T varargin_5[8], uint16_T varargin_6, const int8_T varargin_7[8],
  const int16_T varargin_8[8])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 30 };

  static const char_T u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'X', 'P', 'C',
    'O', 'N', 'V', ':', 'M', 'A', 'T', 'L', 'A', 'B', 'S', 'i', 'm', 'B', 'a',
    'i', 'l', 'O', 'u', 't' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 34 };

  static const char_T b_u[34] = { 'R', 'e', 't', 'u', 'r', 'n', ' ', 'e', 'a',
    'r', 'l', 'y', ' ', 'f', 'o', 'r', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'c',
    'o', 'm', 'p', 'u', 't', 'a', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &y_emlrtRSI;
  r1_1_TB_logger(&st, varargin_1);
  st.site = &ab_emlrtRSI;
  r2_1_TB_logger(&st, varargin_2);
  st.site = &bb_emlrtRSI;
  r3_TB_logger(&st, varargin_3);
  st.site = &cb_emlrtRSI;
  iter_TB_logger(&st, varargin_4);
  st.site = &db_emlrtRSI;
  intlv_TB_logger(&st, varargin_5);
  st.site = &eb_emlrtRSI;
  Lc_TB_logger(&st, varargin_6);
  st.site = &fb_emlrtRSI;
  dec_out_TB_logger(&st, varargin_7);
  st.site = &gb_emlrtRSI;
  LLR_TB_logger(&st, varargin_8);
  iterCount++;
  if (iterCount >= rtInf) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 30, m0, &u[0]);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 34, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    st.site = &pb_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void dec_out_TB_logger_free(void)
{
  emxFree_int8_T(&g_p);
}

void dec_out_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int8_T(sp, &g_p, 2, &g_emlrtRTEI, false);
  g_p_not_empty = false;
}

void intlv_TB_logger_free(void)
{
  emxFree_uint8_T(&e_p);
}

void intlv_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &e_p, 2, &e_emlrtRTEI, false);
  e_p_not_empty = false;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void iter_TB_logger_free(void)
{
  emxFree_uint8_T(&d_p);
}

void iter_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &d_p, 2, &d_emlrtRTEI, false);
  d_p_not_empty = false;
}

void r1_1_TB_logger_free(void)
{
  emxFree_int16_T(&p);
}

void r1_1_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int16_T(sp, &p, 1, &emlrtRTEI, false);
  p_not_empty = false;
}

void r2_1_TB_logger_free(void)
{
  emxFree_int16_T(&b_p);
}

void r2_1_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int16_T(sp, &b_p, 1, &b_emlrtRTEI, false);
  b_p_not_empty = false;
}

void r3_TB_logger_free(void)
{
  emxFree_int16_T(&c_p);
}

void r3_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int16_T(sp, &c_p, 1, &c_emlrtRTEI, false);
  c_p_not_empty = false;
}

void tbcdec_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &ab_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &hb_emlrtRSI;
  b_r1_1_TB_logger(&st, loggedData->inputs.r1_1);
  st.site = &ib_emlrtRSI;
  b_r2_1_TB_logger(&st, loggedData->inputs.r2_1);
  st.site = &jb_emlrtRSI;
  b_r3_TB_logger(&st, loggedData->inputs.r3);
  st.site = &kb_emlrtRSI;
  b_iter_TB_logger(&st, loggedData->inputs.iter);
  st.site = &lb_emlrtRSI;
  b_intlv_TB_logger(&st, loggedData->inputs.intlv);
  st.site = &mb_emlrtRSI;
  b_Lc_TB_logger(&st, loggedData->inputs.Lc);
  st.site = &nb_emlrtRSI;
  b_dec_out_TB_logger(&st, loggedData->outputs.dec_out);
  st.site = &ob_emlrtRSI;
  b_LLR_TB_logger(&st, loggedData->outputs.LLR);
  loggedData->iterCount = iterCount;
}

void tbcdec_fixpt_logger_init(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

/* End of code generation (tbcdec_fixpt_logger.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_wrapper_fixpt_hdl_mex_initialize.c
 *
 * Code generation for function 'tbcdec_wrapper_fixpt_hdl_mex_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "tbcdec_fixpt_logger.h"
#include "tbcdec_wrapper_fixpt.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_initialize.h"
#include "tbcdec_fixpt.h"
#include "_coder_tbcdec_wrapper_fixpt_hdl_mex_mex.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { -1,    /* lineNo */
  -1,                                  /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_numerictype(const emlrtStack *sp, const char * b, real_T
  c, const char * d, real_T e, const char * f, real_T g, const char * h, real_T
  i, const char * j, real_T k, emlrtMCInfo *location);
static const mxArray *c_numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m,
  emlrtMCInfo *location);
static void c_tbcdec_wrapper_fixpt_hdl_mex_(const emlrtStack *sp);
static const mxArray *d_numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m, const
  char * n, real_T o, emlrtMCInfo *location);
static const mxArray *fimath(const emlrtStack *sp, const char * b, const char
  * c, const char * d, const char * e, const char * f, const char * g, const
  char * h, const char * i, const char * j, const char * k, const char * l,
  const char * m, const char * n, real_T o, const char * q, real_T r, const char
  * s, real_T t, const char * u, real_T v, const char * w, real_T x, const char *
  y, real_T ab, const char * bb, real_T cb, const char * db, real_T eb, const
  char * fb, real_T gb, const char * hb, real_T ib, const char * jb, real_T kb,
  const char * lb, real_T mb, const char * nb, boolean_T ob, const char * pb,
  real_T qb, const char * rb, real_T sb, emlrtMCInfo *location);
static const mxArray *numerictype(const emlrtStack *sp, const char * b, real_T c,
  const char * d, real_T e, const char * f, real_T g, const char * h, real_T i,
  emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_numerictype(const emlrtStack *sp, const char * b, real_T
  c, const char * d, real_T e, const char * f, real_T g, const char * h, real_T
  i, const char * j, real_T k, emlrtMCInfo *location)
{
  const mxArray *pArrays[10];
  const mxArray *m11;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateDoubleScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateDoubleScalar(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateDoubleScalar(k);
  return emlrtCallMATLABR2012b(sp, 1, &m11, 10, pArrays, "numerictype", true,
    location);
}

static const mxArray *c_numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[12];
  const mxArray *m12;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateLogicalScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateDoubleScalar(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateDoubleScalar(m);
  return emlrtCallMATLABR2012b(sp, 1, &m12, 12, pArrays, "numerictype", true,
    location);
}

static void c_tbcdec_wrapper_fixpt_hdl_mex_(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtAssignP(&g_eml_mx, NULL);
  emlrtAssignP(&f_eml_mx, NULL);
  emlrtAssignP(&e_eml_mx, NULL);
  emlrtAssignP(&d_eml_mx, NULL);
  emlrtAssignP(&c_eml_mx, NULL);
  emlrtAssignP(&b_eml_mx, NULL);
  emlrtAssignP(&eml_mx, NULL);
  st.site = NULL;
  iterCount_not_empty_init();
  st.site = NULL;
  st.site = NULL;
  emlrtAssignP(&g_eml_mx, numerictype(sp, "FractionLength", 6.0, "BinaryPoint",
    6.0, "Slope", 0.015625, "FixedExponent", -6.0, &emlrtMCI));
  emlrtAssignP(&f_eml_mx, b_numerictype(sp, "WordLength", 8.0, "FractionLength",
    0.0, "BinaryPoint", 0.0, "Slope", 1.0, "FixedExponent", 0.0, &emlrtMCI));
  emlrtAssignP(&e_eml_mx, c_numerictype(sp, "SignednessBool", false,
    "Signedness", "Unsigned", "FractionLength", 11.0, "BinaryPoint", 11.0,
    "Slope", 0.00048828125, "FixedExponent", -11.0, &emlrtMCI));
  emlrtAssignP(&d_eml_mx, d_numerictype(sp, "SignednessBool", false,
    "Signedness", "Unsigned", "WordLength", 8.0, "FractionLength", 0.0,
    "BinaryPoint", 0.0, "Slope", 1.0, "FixedExponent", 0.0, &emlrtMCI));
  emlrtAssignP(&c_eml_mx, numerictype(sp, "FractionLength", 12.0, "BinaryPoint",
    12.0, "Slope", 0.000244140625, "FixedExponent", -12.0, &emlrtMCI));
  emlrtAssignP(&b_eml_mx, numerictype(sp, "FractionLength", 11.0, "BinaryPoint",
    11.0, "Slope", 0.00048828125, "FixedExponent", -11.0, &emlrtMCI));
  emlrtAssignP(&eml_mx, fimath(sp, "RoundMode", "floor", "RoundingMethod",
    "Floor", "OverflowMode", "wrap", "OverflowAction", "Wrap", "ProductMode",
    "FullPrecision", "SumMode", "FullPrecision", "ProductWordLength", 32.0,
    "SumWordLength", 32.0, "MaxProductWordLength", 65535.0, "MaxSumWordLength",
    65535.0, "ProductFractionLength", 30.0, "ProductFixedExponent", -30.0,
    "SumFractionLength", 30.0, "SumFixedExponent", -30.0,
    "SumSlopeAdjustmentFactor", 1.0, "SumBias", 0.0,
    "ProductSlopeAdjustmentFactor", 1.0, "ProductBias", 0.0, "CastBeforeSum",
    true, "SumSlope", 9.3132257461547852E-10, "ProductSlope",
    9.3132257461547852E-10, &emlrtMCI));
  st.site = NULL;
  replacement_custom_exp_init();
  st.site = NULL;
  replacement_custom_log_init();
  st.site = NULL;
  tbcdec_fixpt_logger_init();
  st.site = NULL;
  r1_1_TB_logger_init(&st);
  st.site = NULL;
  r2_1_TB_logger_init(&st);
  st.site = NULL;
  r3_TB_logger_init(&st);
  st.site = NULL;
  iter_TB_logger_init(&st);
  st.site = NULL;
  intlv_TB_logger_init(&st);
  st.site = NULL;
  Lc_TB_logger_init(&st);
  st.site = NULL;
  dec_out_TB_logger_init(&st);
  st.site = NULL;
  LLR_TB_logger_init(&st);
}

static const mxArray *d_numerictype(const emlrtStack *sp, const char * b,
  boolean_T c, const char * d, const char * e, const char * f, real_T g, const
  char * h, real_T i, const char * j, real_T k, const char * l, real_T m, const
  char * n, real_T o, emlrtMCInfo *location)
{
  const mxArray *pArrays[14];
  const mxArray *m13;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateLogicalScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateDoubleScalar(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateDoubleScalar(m);
  pArrays[12] = emlrtCreateString(n);
  pArrays[13] = emlrtCreateDoubleScalar(o);
  return emlrtCallMATLABR2012b(sp, 1, &m13, 14, pArrays, "numerictype", true,
    location);
}

static const mxArray *fimath(const emlrtStack *sp, const char * b, const char
  * c, const char * d, const char * e, const char * f, const char * g, const
  char * h, const char * i, const char * j, const char * k, const char * l,
  const char * m, const char * n, real_T o, const char * q, real_T r, const char
  * s, real_T t, const char * u, real_T v, const char * w, real_T x, const char *
  y, real_T ab, const char * bb, real_T cb, const char * db, real_T eb, const
  char * fb, real_T gb, const char * hb, real_T ib, const char * jb, real_T kb,
  const char * lb, real_T mb, const char * nb, boolean_T ob, const char * pb,
  real_T qb, const char * rb, real_T sb, emlrtMCInfo *location)
{
  const mxArray *pArrays[42];
  const mxArray *m14;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateString(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateString(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateString(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateString(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateString(m);
  pArrays[12] = emlrtCreateString(n);
  pArrays[13] = emlrtCreateDoubleScalar(o);
  pArrays[14] = emlrtCreateString(q);
  pArrays[15] = emlrtCreateDoubleScalar(r);
  pArrays[16] = emlrtCreateString(s);
  pArrays[17] = emlrtCreateDoubleScalar(t);
  pArrays[18] = emlrtCreateString(u);
  pArrays[19] = emlrtCreateDoubleScalar(v);
  pArrays[20] = emlrtCreateString(w);
  pArrays[21] = emlrtCreateDoubleScalar(x);
  pArrays[22] = emlrtCreateString(y);
  pArrays[23] = emlrtCreateDoubleScalar(ab);
  pArrays[24] = emlrtCreateString(bb);
  pArrays[25] = emlrtCreateDoubleScalar(cb);
  pArrays[26] = emlrtCreateString(db);
  pArrays[27] = emlrtCreateDoubleScalar(eb);
  pArrays[28] = emlrtCreateString(fb);
  pArrays[29] = emlrtCreateDoubleScalar(gb);
  pArrays[30] = emlrtCreateString(hb);
  pArrays[31] = emlrtCreateDoubleScalar(ib);
  pArrays[32] = emlrtCreateString(jb);
  pArrays[33] = emlrtCreateDoubleScalar(kb);
  pArrays[34] = emlrtCreateString(lb);
  pArrays[35] = emlrtCreateDoubleScalar(mb);
  pArrays[36] = emlrtCreateString(nb);
  pArrays[37] = emlrtCreateLogicalScalar(ob);
  pArrays[38] = emlrtCreateString(pb);
  pArrays[39] = emlrtCreateDoubleScalar(qb);
  pArrays[40] = emlrtCreateString(rb);
  pArrays[41] = emlrtCreateDoubleScalar(sb);
  return emlrtCallMATLABR2012b(sp, 1, &m14, 42, pArrays, "fimath", true,
    location);
}

static const mxArray *numerictype(const emlrtStack *sp, const char * b, real_T c,
  const char * d, real_T e, const char * f, real_T g, const char * h, real_T i,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[8];
  const mxArray *m10;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateDoubleScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateDoubleScalar(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  return emlrtCallMATLABR2012b(sp, 1, &m10, 8, pArrays, "numerictype", true,
    location);
}

void tbcdec_wrapper_fixpt_hdl_mex_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 3U, "ForceOff");
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Fixed_Point_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    c_tbcdec_wrapper_fixpt_hdl_mex_(&st);
  }
}

/* End of code generation (tbcdec_wrapper_fixpt_hdl_mex_initialize.c) */

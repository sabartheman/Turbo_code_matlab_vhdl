/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcenc_wrapper_fixpt.c
 *
 * Code generation for function 'tbcenc_wrapper_fixpt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "tbcenc_fixpt_logger.h"
#include "tbcenc_wrapper_fixpt.h"
#include "tbcenc_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 61,  /* lineNo */
  1,                                   /* colNo */
  "tbcenc_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/tbcenc_fixpt.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 62,/* lineNo */
  1,                                   /* colNo */
  "tbcenc_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/tbcenc_fixpt.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 63,/* lineNo */
  1,                                   /* colNo */
  "tbcenc_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/tbcenc_fixpt.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 10,    /* lineNo */
  "tbcenc_wrapper_fixpt",              /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/tbcenc_wrapper_fixpt.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "tbcenc_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/tbcenc_fixpt.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 5,   /* lineNo */
  "LogInputsAndOutputs.cpp:51",        /* fcnName */
  "src/LogInputsAndOutputs.cpp:51"     /* pathName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  8,                                   /* iLast */
  28,                                  /* lineNo */
  18,                                  /* colNo */
  "msg_in",                            /* aName */
  "tbcenc_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcenc/fixpt/tbcenc_fixpt.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void tbcenc_wrapper_fixpt(const emlrtStack *sp, const real_T msg_in[8], const
  real_T intlv[8], boolean_T output1[8], boolean_T output2[8], boolean_T
  output3[8])
{
  int32_T i;
  real_T d0;
  uint8_T msg_in_in[8];
  uint8_T intlv_in[8];
  int8_T msg_in1[8];
  uint8_T reg_idx_0;
  uint8_T reg_idx_1;
  uint8_T u0;
  int8_T c1[8];
  int8_T c[8];
  boolean_T tmp;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 8 };

  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 8 };

  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 8 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  for (i = 0; i < 8; i++) {
    d0 = muDoubleScalarFloor(msg_in[i]);
    if (muDoubleScalarIsNaN(d0) || muDoubleScalarIsInf(d0)) {
      d0 = 0.0;
    } else {
      d0 = muDoubleScalarRem(d0, 2.0);
    }

    msg_in_in[i] = (uint8_T)((uint8_T)(int8_T)d0 & 1);
    d0 = muDoubleScalarFloor(intlv[i]);
    if (muDoubleScalarIsNaN(d0) || muDoubleScalarIsInf(d0)) {
      d0 = 0.0;
    } else {
      d0 = muDoubleScalarRem(d0, 16.0);
    }

    intlv_in[i] = (uint8_T)((uint8_T)(int8_T)d0 & 15);
  }

  st.site = &emlrtRSI;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  file name:    tbenc.m */
  /*  description:  c = tbenc(msg_in,intlv) performs turbo code encoding (component encoder: rate-1/3, rsc = (1 5/7)).  */
  /*                msg_in is the input binary message sequence. intlv specifies the interleaver's permutation function. */
  /*                c is encoded sequence. */
  /*                an example is given in matlab experiment 6.3. */
  /*  author:       y. jiang  */
  /*  date:         june 2010 */
  /*  veintlvrsion:      1.0 */
  /*  msg_in1 = msg_in(intlv); */
  for (i = 0; i < 8; i++) {
    if ((intlv_in[i] < 1) || (intlv_in[i] > 8)) {
      emlrtDynamicBoundsCheckR2012b(intlv_in[i], 1, 8, &emlrtBCI, &st);
    }

    msg_in1[i] = (int8_T)msg_in_in[intlv_in[i] - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /*  encoding */
  /*  c1 = rsc(msg_in);                                  */
  /*  c2 = rsc(msg_in1);                                % getting rid of */
  /*  function call in this section, this causes quite a few allocation errors */
  /*  in the hdlcoder */
  /*  code generator is (1,5/7) */
  reg_idx_0 = 0U;
  reg_idx_1 = 0U;

  /*  initialization */
  /*  for i = 1:length(msg_in) */
  for (i = 0; i < 8; i++) {
    /*  for this case only */
    u0 = reg_idx_0;
    tmp = (((msg_in_in[i] != 0) ^ (((reg_idx_0 != 0) ^ (reg_idx_1 != 0)) != 0))
           != 0);

    /*  feedback */
    c[i] = (int8_T)((tmp ^ (reg_idx_1 != 0)) != 0);

    /*  feedforward            */
    reg_idx_0 = tmp;
    reg_idx_1 = u0;

    /*  shift register */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  for (i = 0; i < 8; i++) {
    c1[i] = c[i];
  }

  /* c2 rsc encoding */
  /*  code generator is (1,5/7) */
  reg_idx_0 = 0U;
  reg_idx_1 = 0U;

  /*  initialization */
  /*  for i = 1:length(msg_in1) */
  for (i = 0; i < 8; i++) {
    /*  for this case only */
    u0 = reg_idx_0;
    tmp = (((msg_in1[i] != 0) ^ (((reg_idx_0 != 0) ^ (reg_idx_1 != 0)) != 0)) !=
           0);

    /*  feedback */
    c[i] = (int8_T)((tmp ^ (reg_idx_1 != 0)) != 0);

    /*  feedforward            */
    reg_idx_0 = tmp;
    reg_idx_1 = u0;

    /*  shift register */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  for (i = 0; i < 8; i++) {
    output1[i] = false;
  }

  y = NULL;
  m0 = emlrtCreateLogicalArray(2, iv0);
  emlrtInitLogicalArray(8, m0, &output1[0]);
  emlrtAssign(&y, m0);
  emlrtDisplayR2012b(y, "output1", &emlrtRTEI, &st);
  for (i = 0; i < 8; i++) {
    output2[i] = false;
  }

  y = NULL;
  m1 = emlrtCreateLogicalArray(2, iv1);
  emlrtInitLogicalArray(8, m1, &output2[0]);
  emlrtAssign(&y, m1);
  emlrtDisplayR2012b(y, "output2", &b_emlrtRTEI, &st);
  for (i = 0; i < 8; i++) {
    output3[i] = false;
  }

  y = NULL;
  m2 = emlrtCreateLogicalArray(2, iv2);
  emlrtInitLogicalArray(8, m2, &output3[0]);
  emlrtAssign(&y, m2);
  emlrtDisplayR2012b(y, "output3", &c_emlrtRTEI, &st);

  /* trasnpose might not be supported? */
  for (i = 0; i < 8; i++) {
    output1[i] = (msg_in_in[i] != 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  for (i = 0; i < 8; i++) {
    output2[i] = (c1[i] != 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  for (i = 0; i < 8; i++) {
    output3[i] = (c[i] != 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_tbcenc_fixpt_logger(&c_st, msg_in_in, intlv_in, output1, output2, output3);
}

/* End of code generation (tbcenc_wrapper_fixpt.c) */

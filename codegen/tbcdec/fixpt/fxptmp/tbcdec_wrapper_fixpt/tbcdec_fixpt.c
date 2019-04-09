/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_fixpt.c
 *
 * Code generation for function 'tbcdec_fixpt'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "tbcdec_fixpt_logger.h"
#include "tbcdec_wrapper_fixpt.h"
#include "tbcdec_fixpt.h"
#include "tbcdec_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static uint16_T LUT[8192];
static uint16_T b_LUT[8192];
static emlrtRSInfo b_emlrtRSI = { 57,  /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 116, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 119, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 122, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 125, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 131, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 134, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 137, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 140, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 143, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 145, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 148, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 150, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 153, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 156, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 158, /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 1,   /* lineNo */
  "tbcdec_fixpt",                      /* fcnName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 5,   /* lineNo */
  "LogInputsAndOutputs.cpp:51",        /* fcnName */
  "src/LogInputsAndOutputs.cpp:51"     /* pathName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  8,                                   /* iLast */
  107,                                 /* lineNo */
  130,                                 /* colNo */
  "Le",                                /* aName */
  "tbcdec_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  68,                                  /* lineNo */
  17,                                  /* colNo */
  "rs",                                /* aName */
  "tbcdec_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  66,                                  /* lineNo */
  9,                                   /* colNo */
  "Le",                                /* aName */
  "tbcdec_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  71,                                  /* lineNo */
  17,                                  /* colNo */
  "Le",                                /* aName */
  "tbcdec_fixpt",                      /* fName */
  "/home/sky/Documents/MATLAB/Turbo_codes/codegen/tbcdec/fixpt/tbcdec_fixpt.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static int64_T MultiWord2sLong(const uint64_T u[]);
static uint16_T call_custom_exp(int64_T x);
static uint16_T call_custom_log(uint32_T x);
static void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[],
  int32_T n2, uint64_T y[], int32_T n);
static void sMultiWordShr(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T
  y[], int32_T n);

/* Function Definitions */
static int64_T MultiWord2sLong(const uint64_T u[])
{
  return (int64_T)u[0];
}

static uint16_T call_custom_exp(int64_T x)
{
  int64_T b_x;
  int64_T i178;
  uint64_T u2;
  uint64_T u3;
  int128m_T r3;
  int128m_T r4;
  int32_T i179;
  int32_T x_idx;
  int16_T i180;
  int16_T idx_bot;
  int32_T b_x_idx;
  int32_T c_x_idx;
  int32_T i181;
  int32_T d_x_idx;
  int32_T i182;
  int64_T i183;
  int64_T i184;
  int64_T i185;
  int64_T i186;

  /*  */
  /*  Copyright 2019 The MathWorks, Inc. */
  /*  calculate replacement_custom_exp via lookup table between extents x = fi([-10000000059.5863,-0.023372547168087]), */
  /*  interpolation degree  = 1, number of points = 8192 */
  if ((x & 1125899906842624L) != 0L) {
    b_x = x | -1125899906842624L;
  } else {
    b_x = x & 1125899906842623L;
  }

  i178 = b_x - -20000000120L;
  if ((i178 & 1125899906842624L) != 0L) {
    u2 = (uint64_T)(i178 | -1125899906842624L);
  } else {
    u2 = (uint64_T)(i178 & 1125899906842623L);
  }

  u3 = 967022590768855UL;
  sMultiWordMul(&u2, 1, &u3, 1, &r3.chunks[0U], 2);
  sMultiWordShr(&r3.chunks[0U], 2, 64U, &r4.chunks[0U], 2);
  i179 = (int32_T)MultiWord2sLong(&r4.chunks[0U]);
  if ((i179 & 2097152) != 0) {
    x_idx = i179 | -2097152;
  } else {
    x_idx = i179 & 2097151;
  }

  i180 = (int16_T)(x_idx >> 7);
  if ((i180 & 16384) != 0) {
    idx_bot = (int16_T)(i180 | -16384);
  } else {
    idx_bot = (int16_T)(i180 & 16383);
  }

  if ((x_idx & 4194304) != 0) {
    b_x_idx = x_idx | -4194304;
  } else {
    b_x_idx = x_idx & 4194303;
  }

  i179 = b_x_idx + 128;
  if ((i179 & 4194304) != 0) {
    i179 |= -4194304;
  } else {
    i179 &= 4194303;
  }

  if ((i179 & 2097152) != 0) {
    x_idx = i179 | -2097152;
  } else {
    x_idx = i179 & 2097151;
  }

  if (idx_bot >= 8192) {
    idx_bot = 8191;
  } else {
    if (idx_bot <= 0) {
      idx_bot = 1;
    }
  }

  i180 = (int16_T)(idx_bot + 1);
  if ((x_idx & 4194304) != 0) {
    c_x_idx = x_idx | -4194304;
  } else {
    c_x_idx = x_idx & 4194303;
  }

  i179 = c_x_idx - (idx_bot << 7);
  if ((i179 & 4194304) != 0) {
    i181 = i179 | -4194304;
  } else {
    i181 = i179 & 4194303;
  }

  i178 = (int64_T)LUT[i180 - 1] * i181;
  if ((i178 & 274877906944L) != 0L) {
    i178 |= -274877906944L;
  } else {
    i178 &= 274877906943L;
  }

  if ((x_idx & 4194304) != 0) {
    d_x_idx = x_idx | -4194304;
  } else {
    d_x_idx = x_idx & 4194303;
  }

  i179 = (i180 << 7) - d_x_idx;
  if ((i179 & 4194304) != 0) {
    i182 = i179 | -4194304;
  } else {
    i182 = i179 & 4194303;
  }

  i183 = (int64_T)LUT[idx_bot - 1] * i182;
  if ((i183 & 274877906944L) != 0L) {
    i183 |= -274877906944L;
  } else {
    i183 &= 274877906943L;
  }

  if ((i178 & 549755813888L) != 0L) {
    i184 = i178 | -549755813888L;
  } else {
    i184 = i178 & 549755813887L;
  }

  if ((i183 & 549755813888L) != 0L) {
    i185 = i183 | -549755813888L;
  } else {
    i185 = i183 & 549755813887L;
  }

  i178 = i184 + i185;
  if ((i178 & 549755813888L) != 0L) {
    i186 = i178 | -549755813888L;
  } else {
    i186 = i178 & 549755813887L;
  }

  return (uint16_T)(i186 >> 7);
}

static uint16_T call_custom_log(uint32_T x)
{
  int32_T i187;
  int32_T x_idx;
  int16_T i188;
  int16_T idx_bot;
  int32_T b_x_idx;
  int32_T c_x_idx;
  int32_T i189;
  int64_T i190;
  int32_T d_x_idx;
  int32_T i191;
  int64_T i192;
  int64_T i193;
  int64_T i194;
  int64_T i195;

  /*  */
  /*  Copyright 2019 The MathWorks, Inc. */
  /*  calculate replacement_custom_log via lookup table between extents x = fi([1,1.97689847521186]), */
  /*  interpolation degree  = 1, number of points = 8192 */
  i187 = (int32_T)((((((x & 16777215U) - 16384U) & 16777215U) * 8585932UL) &
                    281474976710655UL) >> 17);
  if ((i187 & 2097152) != 0) {
    x_idx = i187 | -2097152;
  } else {
    x_idx = i187 & 2097151;
  }

  i188 = (int16_T)(x_idx >> 7);
  if ((i188 & 16384) != 0) {
    idx_bot = (int16_T)(i188 | -16384);
  } else {
    idx_bot = (int16_T)(i188 & 16383);
  }

  if ((x_idx & 4194304) != 0) {
    b_x_idx = x_idx | -4194304;
  } else {
    b_x_idx = x_idx & 4194303;
  }

  i187 = b_x_idx + 128;
  if ((i187 & 4194304) != 0) {
    i187 |= -4194304;
  } else {
    i187 &= 4194303;
  }

  if ((i187 & 2097152) != 0) {
    x_idx = i187 | -2097152;
  } else {
    x_idx = i187 & 2097151;
  }

  if (idx_bot >= 8192) {
    idx_bot = 8191;
  } else {
    if (idx_bot <= 0) {
      idx_bot = 1;
    }
  }

  i188 = (int16_T)(idx_bot + 1);
  if ((x_idx & 4194304) != 0) {
    c_x_idx = x_idx | -4194304;
  } else {
    c_x_idx = x_idx & 4194303;
  }

  i187 = c_x_idx - (idx_bot << 7);
  if ((i187 & 4194304) != 0) {
    i189 = i187 | -4194304;
  } else {
    i189 = i187 & 4194303;
  }

  i190 = (int64_T)b_LUT[i188 - 1] * i189;
  if ((i190 & 274877906944L) != 0L) {
    i190 |= -274877906944L;
  } else {
    i190 &= 274877906943L;
  }

  if ((x_idx & 4194304) != 0) {
    d_x_idx = x_idx | -4194304;
  } else {
    d_x_idx = x_idx & 4194303;
  }

  i187 = (i188 << 7) - d_x_idx;
  if ((i187 & 4194304) != 0) {
    i191 = i187 | -4194304;
  } else {
    i191 = i187 & 4194303;
  }

  i192 = (int64_T)b_LUT[idx_bot - 1] * i191;
  if ((i192 & 274877906944L) != 0L) {
    i192 |= -274877906944L;
  } else {
    i192 &= 274877906943L;
  }

  if ((i190 & 549755813888L) != 0L) {
    i193 = i190 | -549755813888L;
  } else {
    i193 = i190 & 549755813887L;
  }

  if ((i192 & 549755813888L) != 0L) {
    i194 = i192 | -549755813888L;
  } else {
    i194 = i192 & 549755813887L;
  }

  i190 = i193 + i194;
  if ((i190 & 549755813888L) != 0L) {
    i195 = i190 | -549755813888L;
  } else {
    i195 = i190 & 549755813887L;
  }

  return (uint16_T)(i195 >> 7);
}

static void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[],
  int32_T n2, uint64_T y[], int32_T n)
{
  boolean_T isNegative1;
  boolean_T isNegative2;
  uint64_T cb1;
  int32_T k;
  int32_T i;
  uint64_T cb;
  uint64_T u1i;
  uint64_T a1;
  uint64_T yk;
  uint64_T a0;
  uint64_T cb2;
  int32_T nj;
  int32_T j;
  uint64_T b1;
  uint64_T w10;
  uint64_T w01;
  isNegative1 = ((u1[n1 - 1] & 9223372036854775808UL) != 0UL);
  isNegative2 = ((u2[n2 - 1] & 9223372036854775808UL) != 0UL);
  cb1 = 1UL;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0UL;
  }

  for (i = 0; i < n1; i++) {
    cb = 0UL;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint64_T)(u1i < cb1);
    }

    a1 = u1i >> 32U;
    a0 = u1i & 4294967295UL;
    cb2 = 1UL;
    k = n - i;
    if (n2 <= k) {
      nj = n2;
    } else {
      nj = k;
    }

    k = i;
    for (j = 0; j < nj; j++) {
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint64_T)(u1i < cb2);
      }

      b1 = u1i >> 32U;
      u1i &= 4294967295UL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint64_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1UL;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint64_T)(yk < cb);
    }
  }
}

static void sMultiWordShr(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T
  y[], int32_T n)
{
  int32_T nb;
  int32_T i;
  uint64_T ys;
  int32_T nc;
  uint32_T nr;
  int32_T i1;
  uint32_T nl;
  uint64_T u1i;
  uint64_T yi;
  uint64_T b_nc;
  nb = (int32_T)n2 / 64;
  i = 0;
  if ((u1[n1 - 1] & 9223372036854775808UL) != 0UL) {
    ys = MAX_uint64_T;
  } else {
    ys = 0UL;
  }

  if (nb < n1) {
    nc = n + nb;
    if (nc > n1) {
      nc = n1;
    }

    nr = n2 - nb * 64U;
    if (nr > 0U) {
      nl = 64U - nr;
      u1i = u1[nb];
      for (i1 = nb + 1; i1 < nc; i1++) {
        yi = u1i >> nr;
        u1i = u1[i1];
        y[i] = yi | u1i << nl;
        i++;
      }

      if (nc < n1) {
        b_nc = u1[nc];
      } else {
        b_nc = ys;
      }

      y[i] = u1i >> nr | b_nc << nl;
      i++;
    } else {
      for (i1 = nb; i1 < nc; i1++) {
        y[i] = u1[i1];
        i++;
      }
    }
  }

  while (i < n) {
    y[i] = ys;
    i++;
  }
}

void replacement_custom_exp_init(void)
{
  static const uint16_T uv0[8192] = { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 16005U };

  memcpy(&LUT[0], &uv0[0], sizeof(uint16_T) << 13);
}

void replacement_custom_log_init(void)
{
  static const uint16_T uv1[8192] = { 0U, 1U, 3U, 5U, 7U, 9U, 11U, 13U, 15U, 17U,
    19U, 21U, 23U, 25U, 27U, 29U, 31U, 33U, 35U, 37U, 39U, 40U, 42U, 44U, 46U,
    48U, 50U, 52U, 54U, 56U, 58U, 60U, 62U, 64U, 66U, 68U, 70U, 72U, 74U, 76U,
    77U, 79U, 81U, 83U, 85U, 87U, 89U, 91U, 93U, 95U, 97U, 99U, 101U, 103U, 105U,
    107U, 109U, 111U, 112U, 114U, 116U, 118U, 120U, 122U, 124U, 126U, 128U, 130U,
    132U, 134U, 136U, 138U, 140U, 142U, 143U, 145U, 147U, 149U, 151U, 153U, 155U,
    157U, 159U, 161U, 163U, 165U, 167U, 169U, 171U, 172U, 174U, 176U, 178U, 180U,
    182U, 184U, 186U, 188U, 190U, 192U, 194U, 196U, 198U, 200U, 201U, 203U, 205U,
    207U, 209U, 211U, 213U, 215U, 217U, 219U, 221U, 223U, 225U, 227U, 228U, 230U,
    232U, 234U, 236U, 238U, 240U, 242U, 244U, 246U, 248U, 250U, 252U, 253U, 255U,
    257U, 259U, 261U, 263U, 265U, 267U, 269U, 271U, 273U, 275U, 277U, 278U, 280U,
    282U, 284U, 286U, 288U, 290U, 292U, 294U, 296U, 298U, 300U, 302U, 303U, 305U,
    307U, 309U, 311U, 313U, 315U, 317U, 319U, 321U, 323U, 325U, 326U, 328U, 330U,
    332U, 334U, 336U, 338U, 340U, 342U, 344U, 346U, 348U, 349U, 351U, 353U, 355U,
    357U, 359U, 361U, 363U, 365U, 367U, 369U, 370U, 372U, 374U, 376U, 378U, 380U,
    382U, 384U, 386U, 388U, 390U, 391U, 393U, 395U, 397U, 399U, 401U, 403U, 405U,
    407U, 409U, 411U, 412U, 414U, 416U, 418U, 420U, 422U, 424U, 426U, 428U, 430U,
    431U, 433U, 435U, 437U, 439U, 441U, 443U, 445U, 447U, 449U, 450U, 452U, 454U,
    456U, 458U, 460U, 462U, 464U, 466U, 468U, 469U, 471U, 473U, 475U, 477U, 479U,
    481U, 483U, 485U, 487U, 488U, 490U, 492U, 494U, 496U, 498U, 500U, 502U, 504U,
    506U, 507U, 509U, 511U, 513U, 515U, 517U, 519U, 521U, 523U, 524U, 526U, 528U,
    530U, 532U, 534U, 536U, 538U, 540U, 541U, 543U, 545U, 547U, 549U, 551U, 553U,
    555U, 557U, 558U, 560U, 562U, 564U, 566U, 568U, 570U, 572U, 574U, 575U, 577U,
    579U, 581U, 583U, 585U, 587U, 589U, 591U, 592U, 594U, 596U, 598U, 600U, 602U,
    604U, 606U, 608U, 609U, 611U, 613U, 615U, 617U, 619U, 621U, 623U, 624U, 626U,
    628U, 630U, 632U, 634U, 636U, 638U, 639U, 641U, 643U, 645U, 647U, 649U, 651U,
    653U, 655U, 656U, 658U, 660U, 662U, 664U, 666U, 668U, 670U, 671U, 673U, 675U,
    677U, 679U, 681U, 683U, 685U, 686U, 688U, 690U, 692U, 694U, 696U, 698U, 700U,
    701U, 703U, 705U, 707U, 709U, 711U, 713U, 714U, 716U, 718U, 720U, 722U, 724U,
    726U, 728U, 729U, 731U, 733U, 735U, 737U, 739U, 741U, 743U, 744U, 746U, 748U,
    750U, 752U, 754U, 756U, 757U, 759U, 761U, 763U, 765U, 767U, 769U, 771U, 772U,
    774U, 776U, 778U, 780U, 782U, 784U, 785U, 787U, 789U, 791U, 793U, 795U, 797U,
    798U, 800U, 802U, 804U, 806U, 808U, 810U, 811U, 813U, 815U, 817U, 819U, 821U,
    823U, 824U, 826U, 828U, 830U, 832U, 834U, 836U, 837U, 839U, 841U, 843U, 845U,
    847U, 849U, 850U, 852U, 854U, 856U, 858U, 860U, 862U, 863U, 865U, 867U, 869U,
    871U, 873U, 875U, 876U, 878U, 880U, 882U, 884U, 886U, 888U, 889U, 891U, 893U,
    895U, 897U, 899U, 900U, 902U, 904U, 906U, 908U, 910U, 912U, 913U, 915U, 917U,
    919U, 921U, 923U, 925U, 926U, 928U, 930U, 932U, 934U, 936U, 937U, 939U, 941U,
    943U, 945U, 947U, 948U, 950U, 952U, 954U, 956U, 958U, 960U, 961U, 963U, 965U,
    967U, 969U, 971U, 972U, 974U, 976U, 978U, 980U, 982U, 983U, 985U, 987U, 989U,
    991U, 993U, 995U, 996U, 998U, 1000U, 1002U, 1004U, 1006U, 1007U, 1009U,
    1011U, 1013U, 1015U, 1017U, 1018U, 1020U, 1022U, 1024U, 1026U, 1028U, 1029U,
    1031U, 1033U, 1035U, 1037U, 1039U, 1040U, 1042U, 1044U, 1046U, 1048U, 1050U,
    1051U, 1053U, 1055U, 1057U, 1059U, 1061U, 1062U, 1064U, 1066U, 1068U, 1070U,
    1072U, 1073U, 1075U, 1077U, 1079U, 1081U, 1083U, 1084U, 1086U, 1088U, 1090U,
    1092U, 1094U, 1095U, 1097U, 1099U, 1101U, 1103U, 1104U, 1106U, 1108U, 1110U,
    1112U, 1114U, 1115U, 1117U, 1119U, 1121U, 1123U, 1125U, 1126U, 1128U, 1130U,
    1132U, 1134U, 1136U, 1137U, 1139U, 1141U, 1143U, 1145U, 1146U, 1148U, 1150U,
    1152U, 1154U, 1156U, 1157U, 1159U, 1161U, 1163U, 1165U, 1166U, 1168U, 1170U,
    1172U, 1174U, 1176U, 1177U, 1179U, 1181U, 1183U, 1185U, 1186U, 1188U, 1190U,
    1192U, 1194U, 1196U, 1197U, 1199U, 1201U, 1203U, 1205U, 1206U, 1208U, 1210U,
    1212U, 1214U, 1216U, 1217U, 1219U, 1221U, 1223U, 1225U, 1226U, 1228U, 1230U,
    1232U, 1234U, 1235U, 1237U, 1239U, 1241U, 1243U, 1245U, 1246U, 1248U, 1250U,
    1252U, 1254U, 1255U, 1257U, 1259U, 1261U, 1263U, 1264U, 1266U, 1268U, 1270U,
    1272U, 1273U, 1275U, 1277U, 1279U, 1281U, 1283U, 1284U, 1286U, 1288U, 1290U,
    1292U, 1293U, 1295U, 1297U, 1299U, 1301U, 1302U, 1304U, 1306U, 1308U, 1310U,
    1311U, 1313U, 1315U, 1317U, 1319U, 1320U, 1322U, 1324U, 1326U, 1328U, 1329U,
    1331U, 1333U, 1335U, 1337U, 1338U, 1340U, 1342U, 1344U, 1346U, 1347U, 1349U,
    1351U, 1353U, 1355U, 1356U, 1358U, 1360U, 1362U, 1364U, 1365U, 1367U, 1369U,
    1371U, 1373U, 1374U, 1376U, 1378U, 1380U, 1382U, 1383U, 1385U, 1387U, 1389U,
    1391U, 1392U, 1394U, 1396U, 1398U, 1400U, 1401U, 1403U, 1405U, 1407U, 1409U,
    1410U, 1412U, 1414U, 1416U, 1417U, 1419U, 1421U, 1423U, 1425U, 1426U, 1428U,
    1430U, 1432U, 1434U, 1435U, 1437U, 1439U, 1441U, 1443U, 1444U, 1446U, 1448U,
    1450U, 1452U, 1453U, 1455U, 1457U, 1459U, 1460U, 1462U, 1464U, 1466U, 1468U,
    1469U, 1471U, 1473U, 1475U, 1477U, 1478U, 1480U, 1482U, 1484U, 1485U, 1487U,
    1489U, 1491U, 1493U, 1494U, 1496U, 1498U, 1500U, 1501U, 1503U, 1505U, 1507U,
    1509U, 1510U, 1512U, 1514U, 1516U, 1518U, 1519U, 1521U, 1523U, 1525U, 1526U,
    1528U, 1530U, 1532U, 1534U, 1535U, 1537U, 1539U, 1541U, 1542U, 1544U, 1546U,
    1548U, 1550U, 1551U, 1553U, 1555U, 1557U, 1558U, 1560U, 1562U, 1564U, 1566U,
    1567U, 1569U, 1571U, 1573U, 1574U, 1576U, 1578U, 1580U, 1582U, 1583U, 1585U,
    1587U, 1589U, 1590U, 1592U, 1594U, 1596U, 1597U, 1599U, 1601U, 1603U, 1605U,
    1606U, 1608U, 1610U, 1612U, 1613U, 1615U, 1617U, 1619U, 1621U, 1622U, 1624U,
    1626U, 1628U, 1629U, 1631U, 1633U, 1635U, 1636U, 1638U, 1640U, 1642U, 1644U,
    1645U, 1647U, 1649U, 1651U, 1652U, 1654U, 1656U, 1658U, 1659U, 1661U, 1663U,
    1665U, 1666U, 1668U, 1670U, 1672U, 1674U, 1675U, 1677U, 1679U, 1681U, 1682U,
    1684U, 1686U, 1688U, 1689U, 1691U, 1693U, 1695U, 1696U, 1698U, 1700U, 1702U,
    1703U, 1705U, 1707U, 1709U, 1711U, 1712U, 1714U, 1716U, 1718U, 1719U, 1721U,
    1723U, 1725U, 1726U, 1728U, 1730U, 1732U, 1733U, 1735U, 1737U, 1739U, 1740U,
    1742U, 1744U, 1746U, 1747U, 1749U, 1751U, 1753U, 1754U, 1756U, 1758U, 1760U,
    1762U, 1763U, 1765U, 1767U, 1769U, 1770U, 1772U, 1774U, 1776U, 1777U, 1779U,
    1781U, 1783U, 1784U, 1786U, 1788U, 1790U, 1791U, 1793U, 1795U, 1797U, 1798U,
    1800U, 1802U, 1804U, 1805U, 1807U, 1809U, 1811U, 1812U, 1814U, 1816U, 1818U,
    1819U, 1821U, 1823U, 1825U, 1826U, 1828U, 1830U, 1832U, 1833U, 1835U, 1837U,
    1839U, 1840U, 1842U, 1844U, 1846U, 1847U, 1849U, 1851U, 1853U, 1854U, 1856U,
    1858U, 1859U, 1861U, 1863U, 1865U, 1866U, 1868U, 1870U, 1872U, 1873U, 1875U,
    1877U, 1879U, 1880U, 1882U, 1884U, 1886U, 1887U, 1889U, 1891U, 1893U, 1894U,
    1896U, 1898U, 1900U, 1901U, 1903U, 1905U, 1907U, 1908U, 1910U, 1912U, 1913U,
    1915U, 1917U, 1919U, 1920U, 1922U, 1924U, 1926U, 1927U, 1929U, 1931U, 1933U,
    1934U, 1936U, 1938U, 1940U, 1941U, 1943U, 1945U, 1946U, 1948U, 1950U, 1952U,
    1953U, 1955U, 1957U, 1959U, 1960U, 1962U, 1964U, 1966U, 1967U, 1969U, 1971U,
    1972U, 1974U, 1976U, 1978U, 1979U, 1981U, 1983U, 1985U, 1986U, 1988U, 1990U,
    1992U, 1993U, 1995U, 1997U, 1998U, 2000U, 2002U, 2004U, 2005U, 2007U, 2009U,
    2011U, 2012U, 2014U, 2016U, 2017U, 2019U, 2021U, 2023U, 2024U, 2026U, 2028U,
    2030U, 2031U, 2033U, 2035U, 2036U, 2038U, 2040U, 2042U, 2043U, 2045U, 2047U,
    2049U, 2050U, 2052U, 2054U, 2055U, 2057U, 2059U, 2061U, 2062U, 2064U, 2066U,
    2067U, 2069U, 2071U, 2073U, 2074U, 2076U, 2078U, 2080U, 2081U, 2083U, 2085U,
    2086U, 2088U, 2090U, 2092U, 2093U, 2095U, 2097U, 2098U, 2100U, 2102U, 2104U,
    2105U, 2107U, 2109U, 2110U, 2112U, 2114U, 2116U, 2117U, 2119U, 2121U, 2122U,
    2124U, 2126U, 2128U, 2129U, 2131U, 2133U, 2135U, 2136U, 2138U, 2140U, 2141U,
    2143U, 2145U, 2147U, 2148U, 2150U, 2152U, 2153U, 2155U, 2157U, 2159U, 2160U,
    2162U, 2164U, 2165U, 2167U, 2169U, 2170U, 2172U, 2174U, 2176U, 2177U, 2179U,
    2181U, 2182U, 2184U, 2186U, 2188U, 2189U, 2191U, 2193U, 2194U, 2196U, 2198U,
    2200U, 2201U, 2203U, 2205U, 2206U, 2208U, 2210U, 2212U, 2213U, 2215U, 2217U,
    2218U, 2220U, 2222U, 2223U, 2225U, 2227U, 2229U, 2230U, 2232U, 2234U, 2235U,
    2237U, 2239U, 2241U, 2242U, 2244U, 2246U, 2247U, 2249U, 2251U, 2252U, 2254U,
    2256U, 2258U, 2259U, 2261U, 2263U, 2264U, 2266U, 2268U, 2269U, 2271U, 2273U,
    2275U, 2276U, 2278U, 2280U, 2281U, 2283U, 2285U, 2286U, 2288U, 2290U, 2292U,
    2293U, 2295U, 2297U, 2298U, 2300U, 2302U, 2303U, 2305U, 2307U, 2309U, 2310U,
    2312U, 2314U, 2315U, 2317U, 2319U, 2320U, 2322U, 2324U, 2326U, 2327U, 2329U,
    2331U, 2332U, 2334U, 2336U, 2337U, 2339U, 2341U, 2342U, 2344U, 2346U, 2348U,
    2349U, 2351U, 2353U, 2354U, 2356U, 2358U, 2359U, 2361U, 2363U, 2364U, 2366U,
    2368U, 2370U, 2371U, 2373U, 2375U, 2376U, 2378U, 2380U, 2381U, 2383U, 2385U,
    2386U, 2388U, 2390U, 2391U, 2393U, 2395U, 2397U, 2398U, 2400U, 2402U, 2403U,
    2405U, 2407U, 2408U, 2410U, 2412U, 2413U, 2415U, 2417U, 2418U, 2420U, 2422U,
    2424U, 2425U, 2427U, 2429U, 2430U, 2432U, 2434U, 2435U, 2437U, 2439U, 2440U,
    2442U, 2444U, 2445U, 2447U, 2449U, 2450U, 2452U, 2454U, 2456U, 2457U, 2459U,
    2461U, 2462U, 2464U, 2466U, 2467U, 2469U, 2471U, 2472U, 2474U, 2476U, 2477U,
    2479U, 2481U, 2482U, 2484U, 2486U, 2487U, 2489U, 2491U, 2492U, 2494U, 2496U,
    2498U, 2499U, 2501U, 2503U, 2504U, 2506U, 2508U, 2509U, 2511U, 2513U, 2514U,
    2516U, 2518U, 2519U, 2521U, 2523U, 2524U, 2526U, 2528U, 2529U, 2531U, 2533U,
    2534U, 2536U, 2538U, 2539U, 2541U, 2543U, 2544U, 2546U, 2548U, 2549U, 2551U,
    2553U, 2554U, 2556U, 2558U, 2559U, 2561U, 2563U, 2565U, 2566U, 2568U, 2570U,
    2571U, 2573U, 2575U, 2576U, 2578U, 2580U, 2581U, 2583U, 2585U, 2586U, 2588U,
    2590U, 2591U, 2593U, 2595U, 2596U, 2598U, 2600U, 2601U, 2603U, 2605U, 2606U,
    2608U, 2610U, 2611U, 2613U, 2615U, 2616U, 2618U, 2620U, 2621U, 2623U, 2625U,
    2626U, 2628U, 2630U, 2631U, 2633U, 2635U, 2636U, 2638U, 2640U, 2641U, 2643U,
    2645U, 2646U, 2648U, 2649U, 2651U, 2653U, 2654U, 2656U, 2658U, 2659U, 2661U,
    2663U, 2664U, 2666U, 2668U, 2669U, 2671U, 2673U, 2674U, 2676U, 2678U, 2679U,
    2681U, 2683U, 2684U, 2686U, 2688U, 2689U, 2691U, 2693U, 2694U, 2696U, 2698U,
    2699U, 2701U, 2703U, 2704U, 2706U, 2708U, 2709U, 2711U, 2713U, 2714U, 2716U,
    2718U, 2719U, 2721U, 2722U, 2724U, 2726U, 2727U, 2729U, 2731U, 2732U, 2734U,
    2736U, 2737U, 2739U, 2741U, 2742U, 2744U, 2746U, 2747U, 2749U, 2751U, 2752U,
    2754U, 2756U, 2757U, 2759U, 2760U, 2762U, 2764U, 2765U, 2767U, 2769U, 2770U,
    2772U, 2774U, 2775U, 2777U, 2779U, 2780U, 2782U, 2784U, 2785U, 2787U, 2789U,
    2790U, 2792U, 2793U, 2795U, 2797U, 2798U, 2800U, 2802U, 2803U, 2805U, 2807U,
    2808U, 2810U, 2812U, 2813U, 2815U, 2817U, 2818U, 2820U, 2821U, 2823U, 2825U,
    2826U, 2828U, 2830U, 2831U, 2833U, 2835U, 2836U, 2838U, 2840U, 2841U, 2843U,
    2844U, 2846U, 2848U, 2849U, 2851U, 2853U, 2854U, 2856U, 2858U, 2859U, 2861U,
    2863U, 2864U, 2866U, 2867U, 2869U, 2871U, 2872U, 2874U, 2876U, 2877U, 2879U,
    2881U, 2882U, 2884U, 2885U, 2887U, 2889U, 2890U, 2892U, 2894U, 2895U, 2897U,
    2899U, 2900U, 2902U, 2903U, 2905U, 2907U, 2908U, 2910U, 2912U, 2913U, 2915U,
    2917U, 2918U, 2920U, 2921U, 2923U, 2925U, 2926U, 2928U, 2930U, 2931U, 2933U,
    2935U, 2936U, 2938U, 2939U, 2941U, 2943U, 2944U, 2946U, 2948U, 2949U, 2951U,
    2953U, 2954U, 2956U, 2957U, 2959U, 2961U, 2962U, 2964U, 2966U, 2967U, 2969U,
    2970U, 2972U, 2974U, 2975U, 2977U, 2979U, 2980U, 2982U, 2983U, 2985U, 2987U,
    2988U, 2990U, 2992U, 2993U, 2995U, 2997U, 2998U, 3000U, 3001U, 3003U, 3005U,
    3006U, 3008U, 3010U, 3011U, 3013U, 3014U, 3016U, 3018U, 3019U, 3021U, 3023U,
    3024U, 3026U, 3027U, 3029U, 3031U, 3032U, 3034U, 3036U, 3037U, 3039U, 3040U,
    3042U, 3044U, 3045U, 3047U, 3049U, 3050U, 3052U, 3053U, 3055U, 3057U, 3058U,
    3060U, 3061U, 3063U, 3065U, 3066U, 3068U, 3070U, 3071U, 3073U, 3074U, 3076U,
    3078U, 3079U, 3081U, 3083U, 3084U, 3086U, 3087U, 3089U, 3091U, 3092U, 3094U,
    3095U, 3097U, 3099U, 3100U, 3102U, 3104U, 3105U, 3107U, 3108U, 3110U, 3112U,
    3113U, 3115U, 3117U, 3118U, 3120U, 3121U, 3123U, 3125U, 3126U, 3128U, 3129U,
    3131U, 3133U, 3134U, 3136U, 3137U, 3139U, 3141U, 3142U, 3144U, 3146U, 3147U,
    3149U, 3150U, 3152U, 3154U, 3155U, 3157U, 3158U, 3160U, 3162U, 3163U, 3165U,
    3167U, 3168U, 3170U, 3171U, 3173U, 3175U, 3176U, 3178U, 3179U, 3181U, 3183U,
    3184U, 3186U, 3187U, 3189U, 3191U, 3192U, 3194U, 3195U, 3197U, 3199U, 3200U,
    3202U, 3204U, 3205U, 3207U, 3208U, 3210U, 3212U, 3213U, 3215U, 3216U, 3218U,
    3220U, 3221U, 3223U, 3224U, 3226U, 3228U, 3229U, 3231U, 3232U, 3234U, 3236U,
    3237U, 3239U, 3240U, 3242U, 3244U, 3245U, 3247U, 3248U, 3250U, 3252U, 3253U,
    3255U, 3256U, 3258U, 3260U, 3261U, 3263U, 3264U, 3266U, 3268U, 3269U, 3271U,
    3272U, 3274U, 3276U, 3277U, 3279U, 3280U, 3282U, 3284U, 3285U, 3287U, 3288U,
    3290U, 3292U, 3293U, 3295U, 3296U, 3298U, 3300U, 3301U, 3303U, 3304U, 3306U,
    3308U, 3309U, 3311U, 3312U, 3314U, 3316U, 3317U, 3319U, 3320U, 3322U, 3324U,
    3325U, 3327U, 3328U, 3330U, 3332U, 3333U, 3335U, 3336U, 3338U, 3340U, 3341U,
    3343U, 3344U, 3346U, 3348U, 3349U, 3351U, 3352U, 3354U, 3355U, 3357U, 3359U,
    3360U, 3362U, 3363U, 3365U, 3367U, 3368U, 3370U, 3371U, 3373U, 3375U, 3376U,
    3378U, 3379U, 3381U, 3383U, 3384U, 3386U, 3387U, 3389U, 3390U, 3392U, 3394U,
    3395U, 3397U, 3398U, 3400U, 3402U, 3403U, 3405U, 3406U, 3408U, 3410U, 3411U,
    3413U, 3414U, 3416U, 3417U, 3419U, 3421U, 3422U, 3424U, 3425U, 3427U, 3429U,
    3430U, 3432U, 3433U, 3435U, 3436U, 3438U, 3440U, 3441U, 3443U, 3444U, 3446U,
    3448U, 3449U, 3451U, 3452U, 3454U, 3455U, 3457U, 3459U, 3460U, 3462U, 3463U,
    3465U, 3467U, 3468U, 3470U, 3471U, 3473U, 3474U, 3476U, 3478U, 3479U, 3481U,
    3482U, 3484U, 3486U, 3487U, 3489U, 3490U, 3492U, 3493U, 3495U, 3497U, 3498U,
    3500U, 3501U, 3503U, 3504U, 3506U, 3508U, 3509U, 3511U, 3512U, 3514U, 3515U,
    3517U, 3519U, 3520U, 3522U, 3523U, 3525U, 3527U, 3528U, 3530U, 3531U, 3533U,
    3534U, 3536U, 3538U, 3539U, 3541U, 3542U, 3544U, 3545U, 3547U, 3549U, 3550U,
    3552U, 3553U, 3555U, 3556U, 3558U, 3560U, 3561U, 3563U, 3564U, 3566U, 3567U,
    3569U, 3571U, 3572U, 3574U, 3575U, 3577U, 3578U, 3580U, 3582U, 3583U, 3585U,
    3586U, 3588U, 3589U, 3591U, 3593U, 3594U, 3596U, 3597U, 3599U, 3600U, 3602U,
    3604U, 3605U, 3607U, 3608U, 3610U, 3611U, 3613U, 3615U, 3616U, 3618U, 3619U,
    3621U, 3622U, 3624U, 3625U, 3627U, 3629U, 3630U, 3632U, 3633U, 3635U, 3636U,
    3638U, 3640U, 3641U, 3643U, 3644U, 3646U, 3647U, 3649U, 3651U, 3652U, 3654U,
    3655U, 3657U, 3658U, 3660U, 3661U, 3663U, 3665U, 3666U, 3668U, 3669U, 3671U,
    3672U, 3674U, 3676U, 3677U, 3679U, 3680U, 3682U, 3683U, 3685U, 3686U, 3688U,
    3690U, 3691U, 3693U, 3694U, 3696U, 3697U, 3699U, 3700U, 3702U, 3704U, 3705U,
    3707U, 3708U, 3710U, 3711U, 3713U, 3715U, 3716U, 3718U, 3719U, 3721U, 3722U,
    3724U, 3725U, 3727U, 3729U, 3730U, 3732U, 3733U, 3735U, 3736U, 3738U, 3739U,
    3741U, 3743U, 3744U, 3746U, 3747U, 3749U, 3750U, 3752U, 3753U, 3755U, 3757U,
    3758U, 3760U, 3761U, 3763U, 3764U, 3766U, 3767U, 3769U, 3770U, 3772U, 3774U,
    3775U, 3777U, 3778U, 3780U, 3781U, 3783U, 3784U, 3786U, 3788U, 3789U, 3791U,
    3792U, 3794U, 3795U, 3797U, 3798U, 3800U, 3802U, 3803U, 3805U, 3806U, 3808U,
    3809U, 3811U, 3812U, 3814U, 3815U, 3817U, 3819U, 3820U, 3822U, 3823U, 3825U,
    3826U, 3828U, 3829U, 3831U, 3832U, 3834U, 3836U, 3837U, 3839U, 3840U, 3842U,
    3843U, 3845U, 3846U, 3848U, 3849U, 3851U, 3853U, 3854U, 3856U, 3857U, 3859U,
    3860U, 3862U, 3863U, 3865U, 3866U, 3868U, 3870U, 3871U, 3873U, 3874U, 3876U,
    3877U, 3879U, 3880U, 3882U, 3883U, 3885U, 3886U, 3888U, 3890U, 3891U, 3893U,
    3894U, 3896U, 3897U, 3899U, 3900U, 3902U, 3903U, 3905U, 3907U, 3908U, 3910U,
    3911U, 3913U, 3914U, 3916U, 3917U, 3919U, 3920U, 3922U, 3923U, 3925U, 3927U,
    3928U, 3930U, 3931U, 3933U, 3934U, 3936U, 3937U, 3939U, 3940U, 3942U, 3943U,
    3945U, 3946U, 3948U, 3950U, 3951U, 3953U, 3954U, 3956U, 3957U, 3959U, 3960U,
    3962U, 3963U, 3965U, 3966U, 3968U, 3970U, 3971U, 3973U, 3974U, 3976U, 3977U,
    3979U, 3980U, 3982U, 3983U, 3985U, 3986U, 3988U, 3989U, 3991U, 3993U, 3994U,
    3996U, 3997U, 3999U, 4000U, 4002U, 4003U, 4005U, 4006U, 4008U, 4009U, 4011U,
    4012U, 4014U, 4015U, 4017U, 4019U, 4020U, 4022U, 4023U, 4025U, 4026U, 4028U,
    4029U, 4031U, 4032U, 4034U, 4035U, 4037U, 4038U, 4040U, 4041U, 4043U, 4044U,
    4046U, 4048U, 4049U, 4051U, 4052U, 4054U, 4055U, 4057U, 4058U, 4060U, 4061U,
    4063U, 4064U, 4066U, 4067U, 4069U, 4070U, 4072U, 4073U, 4075U, 4077U, 4078U,
    4080U, 4081U, 4083U, 4084U, 4086U, 4087U, 4089U, 4090U, 4092U, 4093U, 4095U,
    4096U, 4098U, 4099U, 4101U, 4102U, 4104U, 4105U, 4107U, 4108U, 4110U, 4112U,
    4113U, 4115U, 4116U, 4118U, 4119U, 4121U, 4122U, 4124U, 4125U, 4127U, 4128U,
    4130U, 4131U, 4133U, 4134U, 4136U, 4137U, 4139U, 4140U, 4142U, 4143U, 4145U,
    4146U, 4148U, 4149U, 4151U, 4153U, 4154U, 4156U, 4157U, 4159U, 4160U, 4162U,
    4163U, 4165U, 4166U, 4168U, 4169U, 4171U, 4172U, 4174U, 4175U, 4177U, 4178U,
    4180U, 4181U, 4183U, 4184U, 4186U, 4187U, 4189U, 4190U, 4192U, 4193U, 4195U,
    4196U, 4198U, 4199U, 4201U, 4202U, 4204U, 4206U, 4207U, 4209U, 4210U, 4212U,
    4213U, 4215U, 4216U, 4218U, 4219U, 4221U, 4222U, 4224U, 4225U, 4227U, 4228U,
    4230U, 4231U, 4233U, 4234U, 4236U, 4237U, 4239U, 4240U, 4242U, 4243U, 4245U,
    4246U, 4248U, 4249U, 4251U, 4252U, 4254U, 4255U, 4257U, 4258U, 4260U, 4261U,
    4263U, 4264U, 4266U, 4267U, 4269U, 4270U, 4272U, 4273U, 4275U, 4276U, 4278U,
    4279U, 4281U, 4282U, 4284U, 4285U, 4287U, 4288U, 4290U, 4291U, 4293U, 4294U,
    4296U, 4297U, 4299U, 4300U, 4302U, 4303U, 4305U, 4306U, 4308U, 4309U, 4311U,
    4312U, 4314U, 4315U, 4317U, 4318U, 4320U, 4321U, 4323U, 4324U, 4326U, 4327U,
    4329U, 4330U, 4332U, 4333U, 4335U, 4336U, 4338U, 4339U, 4341U, 4342U, 4344U,
    4345U, 4347U, 4348U, 4350U, 4351U, 4353U, 4354U, 4356U, 4357U, 4359U, 4360U,
    4362U, 4363U, 4365U, 4366U, 4368U, 4369U, 4371U, 4372U, 4374U, 4375U, 4377U,
    4378U, 4380U, 4381U, 4383U, 4384U, 4386U, 4387U, 4389U, 4390U, 4392U, 4393U,
    4395U, 4396U, 4398U, 4399U, 4401U, 4402U, 4404U, 4405U, 4407U, 4408U, 4410U,
    4411U, 4413U, 4414U, 4416U, 4417U, 4419U, 4420U, 4422U, 4423U, 4425U, 4426U,
    4428U, 4429U, 4431U, 4432U, 4434U, 4435U, 4437U, 4438U, 4440U, 4441U, 4443U,
    4444U, 4446U, 4447U, 4449U, 4450U, 4452U, 4453U, 4455U, 4456U, 4458U, 4459U,
    4460U, 4462U, 4463U, 4465U, 4466U, 4468U, 4469U, 4471U, 4472U, 4474U, 4475U,
    4477U, 4478U, 4480U, 4481U, 4483U, 4484U, 4486U, 4487U, 4489U, 4490U, 4492U,
    4493U, 4495U, 4496U, 4498U, 4499U, 4501U, 4502U, 4504U, 4505U, 4507U, 4508U,
    4510U, 4511U, 4512U, 4514U, 4515U, 4517U, 4518U, 4520U, 4521U, 4523U, 4524U,
    4526U, 4527U, 4529U, 4530U, 4532U, 4533U, 4535U, 4536U, 4538U, 4539U, 4541U,
    4542U, 4544U, 4545U, 4547U, 4548U, 4550U, 4551U, 4553U, 4554U, 4555U, 4557U,
    4558U, 4560U, 4561U, 4563U, 4564U, 4566U, 4567U, 4569U, 4570U, 4572U, 4573U,
    4575U, 4576U, 4578U, 4579U, 4581U, 4582U, 4584U, 4585U, 4587U, 4588U, 4589U,
    4591U, 4592U, 4594U, 4595U, 4597U, 4598U, 4600U, 4601U, 4603U, 4604U, 4606U,
    4607U, 4609U, 4610U, 4612U, 4613U, 4615U, 4616U, 4617U, 4619U, 4620U, 4622U,
    4623U, 4625U, 4626U, 4628U, 4629U, 4631U, 4632U, 4634U, 4635U, 4637U, 4638U,
    4640U, 4641U, 4643U, 4644U, 4645U, 4647U, 4648U, 4650U, 4651U, 4653U, 4654U,
    4656U, 4657U, 4659U, 4660U, 4662U, 4663U, 4665U, 4666U, 4668U, 4669U, 4670U,
    4672U, 4673U, 4675U, 4676U, 4678U, 4679U, 4681U, 4682U, 4684U, 4685U, 4687U,
    4688U, 4690U, 4691U, 4692U, 4694U, 4695U, 4697U, 4698U, 4700U, 4701U, 4703U,
    4704U, 4706U, 4707U, 4709U, 4710U, 4712U, 4713U, 4714U, 4716U, 4717U, 4719U,
    4720U, 4722U, 4723U, 4725U, 4726U, 4728U, 4729U, 4731U, 4732U, 4734U, 4735U,
    4736U, 4738U, 4739U, 4741U, 4742U, 4744U, 4745U, 4747U, 4748U, 4750U, 4751U,
    4753U, 4754U, 4755U, 4757U, 4758U, 4760U, 4761U, 4763U, 4764U, 4766U, 4767U,
    4769U, 4770U, 4772U, 4773U, 4774U, 4776U, 4777U, 4779U, 4780U, 4782U, 4783U,
    4785U, 4786U, 4788U, 4789U, 4791U, 4792U, 4793U, 4795U, 4796U, 4798U, 4799U,
    4801U, 4802U, 4804U, 4805U, 4807U, 4808U, 4809U, 4811U, 4812U, 4814U, 4815U,
    4817U, 4818U, 4820U, 4821U, 4823U, 4824U, 4825U, 4827U, 4828U, 4830U, 4831U,
    4833U, 4834U, 4836U, 4837U, 4839U, 4840U, 4841U, 4843U, 4844U, 4846U, 4847U,
    4849U, 4850U, 4852U, 4853U, 4855U, 4856U, 4857U, 4859U, 4860U, 4862U, 4863U,
    4865U, 4866U, 4868U, 4869U, 4871U, 4872U, 4873U, 4875U, 4876U, 4878U, 4879U,
    4881U, 4882U, 4884U, 4885U, 4887U, 4888U, 4889U, 4891U, 4892U, 4894U, 4895U,
    4897U, 4898U, 4900U, 4901U, 4902U, 4904U, 4905U, 4907U, 4908U, 4910U, 4911U,
    4913U, 4914U, 4915U, 4917U, 4918U, 4920U, 4921U, 4923U, 4924U, 4926U, 4927U,
    4929U, 4930U, 4931U, 4933U, 4934U, 4936U, 4937U, 4939U, 4940U, 4942U, 4943U,
    4944U, 4946U, 4947U, 4949U, 4950U, 4952U, 4953U, 4955U, 4956U, 4957U, 4959U,
    4960U, 4962U, 4963U, 4965U, 4966U, 4968U, 4969U, 4970U, 4972U, 4973U, 4975U,
    4976U, 4978U, 4979U, 4980U, 4982U, 4983U, 4985U, 4986U, 4988U, 4989U, 4991U,
    4992U, 4993U, 4995U, 4996U, 4998U, 4999U, 5001U, 5002U, 5004U, 5005U, 5006U,
    5008U, 5009U, 5011U, 5012U, 5014U, 5015U, 5016U, 5018U, 5019U, 5021U, 5022U,
    5024U, 5025U, 5027U, 5028U, 5029U, 5031U, 5032U, 5034U, 5035U, 5037U, 5038U,
    5039U, 5041U, 5042U, 5044U, 5045U, 5047U, 5048U, 5050U, 5051U, 5052U, 5054U,
    5055U, 5057U, 5058U, 5060U, 5061U, 5062U, 5064U, 5065U, 5067U, 5068U, 5070U,
    5071U, 5073U, 5074U, 5075U, 5077U, 5078U, 5080U, 5081U, 5083U, 5084U, 5085U,
    5087U, 5088U, 5090U, 5091U, 5093U, 5094U, 5095U, 5097U, 5098U, 5100U, 5101U,
    5103U, 5104U, 5105U, 5107U, 5108U, 5110U, 5111U, 5113U, 5114U, 5115U, 5117U,
    5118U, 5120U, 5121U, 5123U, 5124U, 5125U, 5127U, 5128U, 5130U, 5131U, 5133U,
    5134U, 5135U, 5137U, 5138U, 5140U, 5141U, 5143U, 5144U, 5145U, 5147U, 5148U,
    5150U, 5151U, 5153U, 5154U, 5155U, 5157U, 5158U, 5160U, 5161U, 5163U, 5164U,
    5165U, 5167U, 5168U, 5170U, 5171U, 5173U, 5174U, 5175U, 5177U, 5178U, 5180U,
    5181U, 5183U, 5184U, 5185U, 5187U, 5188U, 5190U, 5191U, 5192U, 5194U, 5195U,
    5197U, 5198U, 5200U, 5201U, 5202U, 5204U, 5205U, 5207U, 5208U, 5210U, 5211U,
    5212U, 5214U, 5215U, 5217U, 5218U, 5220U, 5221U, 5222U, 5224U, 5225U, 5227U,
    5228U, 5229U, 5231U, 5232U, 5234U, 5235U, 5237U, 5238U, 5239U, 5241U, 5242U,
    5244U, 5245U, 5246U, 5248U, 5249U, 5251U, 5252U, 5254U, 5255U, 5256U, 5258U,
    5259U, 5261U, 5262U, 5264U, 5265U, 5266U, 5268U, 5269U, 5271U, 5272U, 5273U,
    5275U, 5276U, 5278U, 5279U, 5281U, 5282U, 5283U, 5285U, 5286U, 5288U, 5289U,
    5290U, 5292U, 5293U, 5295U, 5296U, 5297U, 5299U, 5300U, 5302U, 5303U, 5305U,
    5306U, 5307U, 5309U, 5310U, 5312U, 5313U, 5314U, 5316U, 5317U, 5319U, 5320U,
    5322U, 5323U, 5324U, 5326U, 5327U, 5329U, 5330U, 5331U, 5333U, 5334U, 5336U,
    5337U, 5338U, 5340U, 5341U, 5343U, 5344U, 5345U, 5347U, 5348U, 5350U, 5351U,
    5353U, 5354U, 5355U, 5357U, 5358U, 5360U, 5361U, 5362U, 5364U, 5365U, 5367U,
    5368U, 5369U, 5371U, 5372U, 5374U, 5375U, 5376U, 5378U, 5379U, 5381U, 5382U,
    5384U, 5385U, 5386U, 5388U, 5389U, 5391U, 5392U, 5393U, 5395U, 5396U, 5398U,
    5399U, 5400U, 5402U, 5403U, 5405U, 5406U, 5407U, 5409U, 5410U, 5412U, 5413U,
    5414U, 5416U, 5417U, 5419U, 5420U, 5421U, 5423U, 5424U, 5426U, 5427U, 5428U,
    5430U, 5431U, 5433U, 5434U, 5435U, 5437U, 5438U, 5440U, 5441U, 5442U, 5444U,
    5445U, 5447U, 5448U, 5450U, 5451U, 5452U, 5454U, 5455U, 5457U, 5458U, 5459U,
    5461U, 5462U, 5464U, 5465U, 5466U, 5468U, 5469U, 5471U, 5472U, 5473U, 5475U,
    5476U, 5477U, 5479U, 5480U, 5482U, 5483U, 5484U, 5486U, 5487U, 5489U, 5490U,
    5491U, 5493U, 5494U, 5496U, 5497U, 5498U, 5500U, 5501U, 5503U, 5504U, 5505U,
    5507U, 5508U, 5510U, 5511U, 5512U, 5514U, 5515U, 5517U, 5518U, 5519U, 5521U,
    5522U, 5524U, 5525U, 5526U, 5528U, 5529U, 5531U, 5532U, 5533U, 5535U, 5536U,
    5538U, 5539U, 5540U, 5542U, 5543U, 5544U, 5546U, 5547U, 5549U, 5550U, 5551U,
    5553U, 5554U, 5556U, 5557U, 5558U, 5560U, 5561U, 5563U, 5564U, 5565U, 5567U,
    5568U, 5570U, 5571U, 5572U, 5574U, 5575U, 5577U, 5578U, 5579U, 5581U, 5582U,
    5583U, 5585U, 5586U, 5588U, 5589U, 5590U, 5592U, 5593U, 5595U, 5596U, 5597U,
    5599U, 5600U, 5602U, 5603U, 5604U, 5606U, 5607U, 5608U, 5610U, 5611U, 5613U,
    5614U, 5615U, 5617U, 5618U, 5620U, 5621U, 5622U, 5624U, 5625U, 5626U, 5628U,
    5629U, 5631U, 5632U, 5633U, 5635U, 5636U, 5638U, 5639U, 5640U, 5642U, 5643U,
    5644U, 5646U, 5647U, 5649U, 5650U, 5651U, 5653U, 5654U, 5656U, 5657U, 5658U,
    5660U, 5661U, 5662U, 5664U, 5665U, 5667U, 5668U, 5669U, 5671U, 5672U, 5674U,
    5675U, 5676U, 5678U, 5679U, 5680U, 5682U, 5683U, 5685U, 5686U, 5687U, 5689U,
    5690U, 5691U, 5693U, 5694U, 5696U, 5697U, 5698U, 5700U, 5701U, 5703U, 5704U,
    5705U, 5707U, 5708U, 5709U, 5711U, 5712U, 5714U, 5715U, 5716U, 5718U, 5719U,
    5720U, 5722U, 5723U, 5725U, 5726U, 5727U, 5729U, 5730U, 5731U, 5733U, 5734U,
    5736U, 5737U, 5738U, 5740U, 5741U, 5742U, 5744U, 5745U, 5747U, 5748U, 5749U,
    5751U, 5752U, 5754U, 5755U, 5756U, 5758U, 5759U, 5760U, 5762U, 5763U, 5765U,
    5766U, 5767U, 5769U, 5770U, 5771U, 5773U, 5774U, 5775U, 5777U, 5778U, 5780U,
    5781U, 5782U, 5784U, 5785U, 5786U, 5788U, 5789U, 5791U, 5792U, 5793U, 5795U,
    5796U, 5797U, 5799U, 5800U, 5802U, 5803U, 5804U, 5806U, 5807U, 5808U, 5810U,
    5811U, 5813U, 5814U, 5815U, 5817U, 5818U, 5819U, 5821U, 5822U, 5823U, 5825U,
    5826U, 5828U, 5829U, 5830U, 5832U, 5833U, 5834U, 5836U, 5837U, 5839U, 5840U,
    5841U, 5843U, 5844U, 5845U, 5847U, 5848U, 5849U, 5851U, 5852U, 5854U, 5855U,
    5856U, 5858U, 5859U, 5860U, 5862U, 5863U, 5865U, 5866U, 5867U, 5869U, 5870U,
    5871U, 5873U, 5874U, 5875U, 5877U, 5878U, 5880U, 5881U, 5882U, 5884U, 5885U,
    5886U, 5888U, 5889U, 5890U, 5892U, 5893U, 5895U, 5896U, 5897U, 5899U, 5900U,
    5901U, 5903U, 5904U, 5905U, 5907U, 5908U, 5910U, 5911U, 5912U, 5914U, 5915U,
    5916U, 5918U, 5919U, 5920U, 5922U, 5923U, 5925U, 5926U, 5927U, 5929U, 5930U,
    5931U, 5933U, 5934U, 5935U, 5937U, 5938U, 5939U, 5941U, 5942U, 5944U, 5945U,
    5946U, 5948U, 5949U, 5950U, 5952U, 5953U, 5954U, 5956U, 5957U, 5959U, 5960U,
    5961U, 5963U, 5964U, 5965U, 5967U, 5968U, 5969U, 5971U, 5972U, 5973U, 5975U,
    5976U, 5978U, 5979U, 5980U, 5982U, 5983U, 5984U, 5986U, 5987U, 5988U, 5990U,
    5991U, 5992U, 5994U, 5995U, 5997U, 5998U, 5999U, 6001U, 6002U, 6003U, 6005U,
    6006U, 6007U, 6009U, 6010U, 6011U, 6013U, 6014U, 6015U, 6017U, 6018U, 6020U,
    6021U, 6022U, 6024U, 6025U, 6026U, 6028U, 6029U, 6030U, 6032U, 6033U, 6034U,
    6036U, 6037U, 6038U, 6040U, 6041U, 6043U, 6044U, 6045U, 6047U, 6048U, 6049U,
    6051U, 6052U, 6053U, 6055U, 6056U, 6057U, 6059U, 6060U, 6061U, 6063U, 6064U,
    6065U, 6067U, 6068U, 6070U, 6071U, 6072U, 6074U, 6075U, 6076U, 6078U, 6079U,
    6080U, 6082U, 6083U, 6084U, 6086U, 6087U, 6088U, 6090U, 6091U, 6092U, 6094U,
    6095U, 6096U, 6098U, 6099U, 6101U, 6102U, 6103U, 6105U, 6106U, 6107U, 6109U,
    6110U, 6111U, 6113U, 6114U, 6115U, 6117U, 6118U, 6119U, 6121U, 6122U, 6123U,
    6125U, 6126U, 6127U, 6129U, 6130U, 6131U, 6133U, 6134U, 6135U, 6137U, 6138U,
    6140U, 6141U, 6142U, 6144U, 6145U, 6146U, 6148U, 6149U, 6150U, 6152U, 6153U,
    6154U, 6156U, 6157U, 6158U, 6160U, 6161U, 6162U, 6164U, 6165U, 6166U, 6168U,
    6169U, 6170U, 6172U, 6173U, 6174U, 6176U, 6177U, 6178U, 6180U, 6181U, 6182U,
    6184U, 6185U, 6186U, 6188U, 6189U, 6190U, 6192U, 6193U, 6194U, 6196U, 6197U,
    6199U, 6200U, 6201U, 6203U, 6204U, 6205U, 6207U, 6208U, 6209U, 6211U, 6212U,
    6213U, 6215U, 6216U, 6217U, 6219U, 6220U, 6221U, 6223U, 6224U, 6225U, 6227U,
    6228U, 6229U, 6231U, 6232U, 6233U, 6235U, 6236U, 6237U, 6239U, 6240U, 6241U,
    6243U, 6244U, 6245U, 6247U, 6248U, 6249U, 6251U, 6252U, 6253U, 6255U, 6256U,
    6257U, 6259U, 6260U, 6261U, 6263U, 6264U, 6265U, 6267U, 6268U, 6269U, 6271U,
    6272U, 6273U, 6275U, 6276U, 6277U, 6279U, 6280U, 6281U, 6283U, 6284U, 6285U,
    6287U, 6288U, 6289U, 6291U, 6292U, 6293U, 6295U, 6296U, 6297U, 6299U, 6300U,
    6301U, 6303U, 6304U, 6305U, 6307U, 6308U, 6309U, 6311U, 6312U, 6313U, 6315U,
    6316U, 6317U, 6319U, 6320U, 6321U, 6323U, 6324U, 6325U, 6327U, 6328U, 6329U,
    6330U, 6332U, 6333U, 6334U, 6336U, 6337U, 6338U, 6340U, 6341U, 6342U, 6344U,
    6345U, 6346U, 6348U, 6349U, 6350U, 6352U, 6353U, 6354U, 6356U, 6357U, 6358U,
    6360U, 6361U, 6362U, 6364U, 6365U, 6366U, 6368U, 6369U, 6370U, 6372U, 6373U,
    6374U, 6376U, 6377U, 6378U, 6380U, 6381U, 6382U, 6384U, 6385U, 6386U, 6387U,
    6389U, 6390U, 6391U, 6393U, 6394U, 6395U, 6397U, 6398U, 6399U, 6401U, 6402U,
    6403U, 6405U, 6406U, 6407U, 6409U, 6410U, 6411U, 6413U, 6414U, 6415U, 6417U,
    6418U, 6419U, 6421U, 6422U, 6423U, 6424U, 6426U, 6427U, 6428U, 6430U, 6431U,
    6432U, 6434U, 6435U, 6436U, 6438U, 6439U, 6440U, 6442U, 6443U, 6444U, 6446U,
    6447U, 6448U, 6450U, 6451U, 6452U, 6454U, 6455U, 6456U, 6457U, 6459U, 6460U,
    6461U, 6463U, 6464U, 6465U, 6467U, 6468U, 6469U, 6471U, 6472U, 6473U, 6475U,
    6476U, 6477U, 6479U, 6480U, 6481U, 6482U, 6484U, 6485U, 6486U, 6488U, 6489U,
    6490U, 6492U, 6493U, 6494U, 6496U, 6497U, 6498U, 6500U, 6501U, 6502U, 6504U,
    6505U, 6506U, 6507U, 6509U, 6510U, 6511U, 6513U, 6514U, 6515U, 6517U, 6518U,
    6519U, 6521U, 6522U, 6523U, 6525U, 6526U, 6527U, 6528U, 6530U, 6531U, 6532U,
    6534U, 6535U, 6536U, 6538U, 6539U, 6540U, 6542U, 6543U, 6544U, 6545U, 6547U,
    6548U, 6549U, 6551U, 6552U, 6553U, 6555U, 6556U, 6557U, 6559U, 6560U, 6561U,
    6563U, 6564U, 6565U, 6566U, 6568U, 6569U, 6570U, 6572U, 6573U, 6574U, 6576U,
    6577U, 6578U, 6580U, 6581U, 6582U, 6583U, 6585U, 6586U, 6587U, 6589U, 6590U,
    6591U, 6593U, 6594U, 6595U, 6597U, 6598U, 6599U, 6600U, 6602U, 6603U, 6604U,
    6606U, 6607U, 6608U, 6610U, 6611U, 6612U, 6613U, 6615U, 6616U, 6617U, 6619U,
    6620U, 6621U, 6623U, 6624U, 6625U, 6627U, 6628U, 6629U, 6630U, 6632U, 6633U,
    6634U, 6636U, 6637U, 6638U, 6640U, 6641U, 6642U, 6643U, 6645U, 6646U, 6647U,
    6649U, 6650U, 6651U, 6653U, 6654U, 6655U, 6657U, 6658U, 6659U, 6660U, 6662U,
    6663U, 6664U, 6666U, 6667U, 6668U, 6670U, 6671U, 6672U, 6673U, 6675U, 6676U,
    6677U, 6679U, 6680U, 6681U, 6683U, 6684U, 6685U, 6686U, 6688U, 6689U, 6690U,
    6692U, 6693U, 6694U, 6696U, 6697U, 6698U, 6699U, 6701U, 6702U, 6703U, 6705U,
    6706U, 6707U, 6708U, 6710U, 6711U, 6712U, 6714U, 6715U, 6716U, 6718U, 6719U,
    6720U, 6721U, 6723U, 6724U, 6725U, 6727U, 6728U, 6729U, 6731U, 6732U, 6733U,
    6734U, 6736U, 6737U, 6738U, 6740U, 6741U, 6742U, 6743U, 6745U, 6746U, 6747U,
    6749U, 6750U, 6751U, 6753U, 6754U, 6755U, 6756U, 6758U, 6759U, 6760U, 6762U,
    6763U, 6764U, 6765U, 6767U, 6768U, 6769U, 6771U, 6772U, 6773U, 6775U, 6776U,
    6777U, 6778U, 6780U, 6781U, 6782U, 6784U, 6785U, 6786U, 6787U, 6789U, 6790U,
    6791U, 6793U, 6794U, 6795U, 6796U, 6798U, 6799U, 6800U, 6802U, 6803U, 6804U,
    6806U, 6807U, 6808U, 6809U, 6811U, 6812U, 6813U, 6815U, 6816U, 6817U, 6818U,
    6820U, 6821U, 6822U, 6824U, 6825U, 6826U, 6827U, 6829U, 6830U, 6831U, 6833U,
    6834U, 6835U, 6836U, 6838U, 6839U, 6840U, 6842U, 6843U, 6844U, 6845U, 6847U,
    6848U, 6849U, 6851U, 6852U, 6853U, 6854U, 6856U, 6857U, 6858U, 6860U, 6861U,
    6862U, 6863U, 6865U, 6866U, 6867U, 6869U, 6870U, 6871U, 6872U, 6874U, 6875U,
    6876U, 6878U, 6879U, 6880U, 6881U, 6883U, 6884U, 6885U, 6887U, 6888U, 6889U,
    6890U, 6892U, 6893U, 6894U, 6896U, 6897U, 6898U, 6899U, 6901U, 6902U, 6903U,
    6905U, 6906U, 6907U, 6908U, 6910U, 6911U, 6912U, 6913U, 6915U, 6916U, 6917U,
    6919U, 6920U, 6921U, 6922U, 6924U, 6925U, 6926U, 6928U, 6929U, 6930U, 6931U,
    6933U, 6934U, 6935U, 6937U, 6938U, 6939U, 6940U, 6942U, 6943U, 6944U, 6946U,
    6947U, 6948U, 6949U, 6951U, 6952U, 6953U, 6954U, 6956U, 6957U, 6958U, 6960U,
    6961U, 6962U, 6963U, 6965U, 6966U, 6967U, 6969U, 6970U, 6971U, 6972U, 6974U,
    6975U, 6976U, 6977U, 6979U, 6980U, 6981U, 6983U, 6984U, 6985U, 6986U, 6988U,
    6989U, 6990U, 6991U, 6993U, 6994U, 6995U, 6997U, 6998U, 6999U, 7000U, 7002U,
    7003U, 7004U, 7005U, 7007U, 7008U, 7009U, 7011U, 7012U, 7013U, 7014U, 7016U,
    7017U, 7018U, 7020U, 7021U, 7022U, 7023U, 7025U, 7026U, 7027U, 7028U, 7030U,
    7031U, 7032U, 7034U, 7035U, 7036U, 7037U, 7039U, 7040U, 7041U, 7042U, 7044U,
    7045U, 7046U, 7047U, 7049U, 7050U, 7051U, 7053U, 7054U, 7055U, 7056U, 7058U,
    7059U, 7060U, 7061U, 7063U, 7064U, 7065U, 7067U, 7068U, 7069U, 7070U, 7072U,
    7073U, 7074U, 7075U, 7077U, 7078U, 7079U, 7080U, 7082U, 7083U, 7084U, 7086U,
    7087U, 7088U, 7089U, 7091U, 7092U, 7093U, 7094U, 7096U, 7097U, 7098U, 7100U,
    7101U, 7102U, 7103U, 7105U, 7106U, 7107U, 7108U, 7110U, 7111U, 7112U, 7113U,
    7115U, 7116U, 7117U, 7119U, 7120U, 7121U, 7122U, 7124U, 7125U, 7126U, 7127U,
    7129U, 7130U, 7131U, 7132U, 7134U, 7135U, 7136U, 7137U, 7139U, 7140U, 7141U,
    7143U, 7144U, 7145U, 7146U, 7148U, 7149U, 7150U, 7151U, 7153U, 7154U, 7155U,
    7156U, 7158U, 7159U, 7160U, 7161U, 7163U, 7164U, 7165U, 7167U, 7168U, 7169U,
    7170U, 7172U, 7173U, 7174U, 7175U, 7177U, 7178U, 7179U, 7180U, 7182U, 7183U,
    7184U, 7185U, 7187U, 7188U, 7189U, 7190U, 7192U, 7193U, 7194U, 7196U, 7197U,
    7198U, 7199U, 7201U, 7202U, 7203U, 7204U, 7206U, 7207U, 7208U, 7209U, 7211U,
    7212U, 7213U, 7214U, 7216U, 7217U, 7218U, 7219U, 7221U, 7222U, 7223U, 7224U,
    7226U, 7227U, 7228U, 7229U, 7231U, 7232U, 7233U, 7235U, 7236U, 7237U, 7238U,
    7240U, 7241U, 7242U, 7243U, 7245U, 7246U, 7247U, 7248U, 7250U, 7251U, 7252U,
    7253U, 7255U, 7256U, 7257U, 7258U, 7260U, 7261U, 7262U, 7263U, 7265U, 7266U,
    7267U, 7268U, 7270U, 7271U, 7272U, 7273U, 7275U, 7276U, 7277U, 7278U, 7280U,
    7281U, 7282U, 7283U, 7285U, 7286U, 7287U, 7288U, 7290U, 7291U, 7292U, 7293U,
    7295U, 7296U, 7297U, 7298U, 7300U, 7301U, 7302U, 7303U, 7305U, 7306U, 7307U,
    7308U, 7310U, 7311U, 7312U, 7313U, 7315U, 7316U, 7317U, 7318U, 7320U, 7321U,
    7322U, 7323U, 7325U, 7326U, 7327U, 7328U, 7330U, 7331U, 7332U, 7333U, 7335U,
    7336U, 7337U, 7338U, 7340U, 7341U, 7342U, 7343U, 7345U, 7346U, 7347U, 7348U,
    7350U, 7351U, 7352U, 7353U, 7355U, 7356U, 7357U, 7358U, 7360U, 7361U, 7362U,
    7363U, 7365U, 7366U, 7367U, 7368U, 7370U, 7371U, 7372U, 7373U, 7375U, 7376U,
    7377U, 7378U, 7380U, 7381U, 7382U, 7383U, 7385U, 7386U, 7387U, 7388U, 7390U,
    7391U, 7392U, 7393U, 7395U, 7396U, 7397U, 7398U, 7400U, 7401U, 7402U, 7403U,
    7405U, 7406U, 7407U, 7408U, 7409U, 7411U, 7412U, 7413U, 7414U, 7416U, 7417U,
    7418U, 7419U, 7421U, 7422U, 7423U, 7424U, 7426U, 7427U, 7428U, 7429U, 7431U,
    7432U, 7433U, 7434U, 7436U, 7437U, 7438U, 7439U, 7441U, 7442U, 7443U, 7444U,
    7445U, 7447U, 7448U, 7449U, 7450U, 7452U, 7453U, 7454U, 7455U, 7457U, 7458U,
    7459U, 7460U, 7462U, 7463U, 7464U, 7465U, 7467U, 7468U, 7469U, 7470U, 7472U,
    7473U, 7474U, 7475U, 7476U, 7478U, 7479U, 7480U, 7481U, 7483U, 7484U, 7485U,
    7486U, 7488U, 7489U, 7490U, 7491U, 7493U, 7494U, 7495U, 7496U, 7498U, 7499U,
    7500U, 7501U, 7502U, 7504U, 7505U, 7506U, 7507U, 7509U, 7510U, 7511U, 7512U,
    7514U, 7515U, 7516U, 7517U, 7519U, 7520U, 7521U, 7522U, 7523U, 7525U, 7526U,
    7527U, 7528U, 7530U, 7531U, 7532U, 7533U, 7535U, 7536U, 7537U, 7538U, 7539U,
    7541U, 7542U, 7543U, 7544U, 7546U, 7547U, 7548U, 7549U, 7551U, 7552U, 7553U,
    7554U, 7556U, 7557U, 7558U, 7559U, 7560U, 7562U, 7563U, 7564U, 7565U, 7567U,
    7568U, 7569U, 7570U, 7572U, 7573U, 7574U, 7575U, 7576U, 7578U, 7579U, 7580U,
    7581U, 7583U, 7584U, 7585U, 7586U, 7588U, 7589U, 7590U, 7591U, 7592U, 7594U,
    7595U, 7596U, 7597U, 7599U, 7600U, 7601U, 7602U, 7603U, 7605U, 7606U, 7607U,
    7608U, 7610U, 7611U, 7612U, 7613U, 7615U, 7616U, 7617U, 7618U, 7619U, 7621U,
    7622U, 7623U, 7624U, 7626U, 7627U, 7628U, 7629U, 7630U, 7632U, 7633U, 7634U,
    7635U, 7637U, 7638U, 7639U, 7640U, 7642U, 7643U, 7644U, 7645U, 7646U, 7648U,
    7649U, 7650U, 7651U, 7653U, 7654U, 7655U, 7656U, 7657U, 7659U, 7660U, 7661U,
    7662U, 7664U, 7665U, 7666U, 7667U, 7668U, 7670U, 7671U, 7672U, 7673U, 7675U,
    7676U, 7677U, 7678U, 7679U, 7681U, 7682U, 7683U, 7684U, 7686U, 7687U, 7688U,
    7689U, 7690U, 7692U, 7693U, 7694U, 7695U, 7697U, 7698U, 7699U, 7700U, 7701U,
    7703U, 7704U, 7705U, 7706U, 7708U, 7709U, 7710U, 7711U, 7712U, 7714U, 7715U,
    7716U, 7717U, 7719U, 7720U, 7721U, 7722U, 7723U, 7725U, 7726U, 7727U, 7728U,
    7730U, 7731U, 7732U, 7733U, 7734U, 7736U, 7737U, 7738U, 7739U, 7741U, 7742U,
    7743U, 7744U, 7745U, 7747U, 7748U, 7749U, 7750U, 7751U, 7753U, 7754U, 7755U,
    7756U, 7758U, 7759U, 7760U, 7761U, 7762U, 7764U, 7765U, 7766U, 7767U, 7769U,
    7770U, 7771U, 7772U, 7773U, 7775U, 7776U, 7777U, 7778U, 7779U, 7781U, 7782U,
    7783U, 7784U, 7786U, 7787U, 7788U, 7789U, 7790U, 7792U, 7793U, 7794U, 7795U,
    7796U, 7798U, 7799U, 7800U, 7801U, 7803U, 7804U, 7805U, 7806U, 7807U, 7809U,
    7810U, 7811U, 7812U, 7813U, 7815U, 7816U, 7817U, 7818U, 7820U, 7821U, 7822U,
    7823U, 7824U, 7826U, 7827U, 7828U, 7829U, 7830U, 7832U, 7833U, 7834U, 7835U,
    7836U, 7838U, 7839U, 7840U, 7841U, 7843U, 7844U, 7845U, 7846U, 7847U, 7849U,
    7850U, 7851U, 7852U, 7853U, 7855U, 7856U, 7857U, 7858U, 7859U, 7861U, 7862U,
    7863U, 7864U, 7866U, 7867U, 7868U, 7869U, 7870U, 7872U, 7873U, 7874U, 7875U,
    7876U, 7878U, 7879U, 7880U, 7881U, 7882U, 7884U, 7885U, 7886U, 7887U, 7888U,
    7890U, 7891U, 7892U, 7893U, 7895U, 7896U, 7897U, 7898U, 7899U, 7901U, 7902U,
    7903U, 7904U, 7905U, 7907U, 7908U, 7909U, 7910U, 7911U, 7913U, 7914U, 7915U,
    7916U, 7917U, 7919U, 7920U, 7921U, 7922U, 7923U, 7925U, 7926U, 7927U, 7928U,
    7929U, 7931U, 7932U, 7933U, 7934U, 7935U, 7937U, 7938U, 7939U, 7940U, 7942U,
    7943U, 7944U, 7945U, 7946U, 7948U, 7949U, 7950U, 7951U, 7952U, 7954U, 7955U,
    7956U, 7957U, 7958U, 7960U, 7961U, 7962U, 7963U, 7964U, 7966U, 7967U, 7968U,
    7969U, 7970U, 7972U, 7973U, 7974U, 7975U, 7976U, 7978U, 7979U, 7980U, 7981U,
    7982U, 7984U, 7985U, 7986U, 7987U, 7988U, 7990U, 7991U, 7992U, 7993U, 7994U,
    7996U, 7997U, 7998U, 7999U, 8000U, 8002U, 8003U, 8004U, 8005U, 8006U, 8008U,
    8009U, 8010U, 8011U, 8012U, 8014U, 8015U, 8016U, 8017U, 8018U, 8020U, 8021U,
    8022U, 8023U, 8024U, 8026U, 8027U, 8028U, 8029U, 8030U, 8032U, 8033U, 8034U,
    8035U, 8036U, 8037U, 8039U, 8040U, 8041U, 8042U, 8043U, 8045U, 8046U, 8047U,
    8048U, 8049U, 8051U, 8052U, 8053U, 8054U, 8055U, 8057U, 8058U, 8059U, 8060U,
    8061U, 8063U, 8064U, 8065U, 8066U, 8067U, 8069U, 8070U, 8071U, 8072U, 8073U,
    8075U, 8076U, 8077U, 8078U, 8079U, 8081U, 8082U, 8083U, 8084U, 8085U, 8086U,
    8088U, 8089U, 8090U, 8091U, 8092U, 8094U, 8095U, 8096U, 8097U, 8098U, 8100U,
    8101U, 8102U, 8103U, 8104U, 8106U, 8107U, 8108U, 8109U, 8110U, 8112U, 8113U,
    8114U, 8115U, 8116U, 8117U, 8119U, 8120U, 8121U, 8122U, 8123U, 8125U, 8126U,
    8127U, 8128U, 8129U, 8131U, 8132U, 8133U, 8134U, 8135U, 8136U, 8138U, 8139U,
    8140U, 8141U, 8142U, 8144U, 8145U, 8146U, 8147U, 8148U, 8150U, 8151U, 8152U,
    8153U, 8154U, 8156U, 8157U, 8158U, 8159U, 8160U, 8161U, 8163U, 8164U, 8165U,
    8166U, 8167U, 8169U, 8170U, 8171U, 8172U, 8173U, 8175U, 8176U, 8177U, 8178U,
    8179U, 8180U, 8182U, 8183U, 8184U, 8185U, 8186U, 8188U, 8189U, 8190U, 8191U,
    8192U, 8193U, 8195U, 8196U, 8197U, 8198U, 8199U, 8201U, 8202U, 8203U, 8204U,
    8205U, 8207U, 8208U, 8209U, 8210U, 8211U, 8212U, 8214U, 8215U, 8216U, 8217U,
    8218U, 8220U, 8221U, 8222U, 8223U, 8224U, 8225U, 8227U, 8228U, 8229U, 8230U,
    8231U, 8233U, 8234U, 8235U, 8236U, 8237U, 8238U, 8240U, 8241U, 8242U, 8243U,
    8244U, 8246U, 8247U, 8248U, 8249U, 8250U, 8251U, 8253U, 8254U, 8255U, 8256U,
    8257U, 8259U, 8260U, 8261U, 8262U, 8263U, 8264U, 8266U, 8267U, 8268U, 8269U,
    8270U, 8272U, 8273U, 8274U, 8275U, 8276U, 8277U, 8279U, 8280U, 8281U, 8282U,
    8283U, 8284U, 8286U, 8287U, 8288U, 8289U, 8290U, 8292U, 8293U, 8294U, 8295U,
    8296U, 8297U, 8299U, 8300U, 8301U, 8302U, 8303U, 8304U, 8306U, 8307U, 8308U,
    8309U, 8310U, 8312U, 8313U, 8314U, 8315U, 8316U, 8317U, 8319U, 8320U, 8321U,
    8322U, 8323U, 8324U, 8326U, 8327U, 8328U, 8329U, 8330U, 8332U, 8333U, 8334U,
    8335U, 8336U, 8337U, 8339U, 8340U, 8341U, 8342U, 8343U, 8344U, 8346U, 8347U,
    8348U, 8349U, 8350U, 8352U, 8353U, 8354U, 8355U, 8356U, 8357U, 8359U, 8360U,
    8361U, 8362U, 8363U, 8364U, 8366U, 8367U, 8368U, 8369U, 8370U, 8371U, 8373U,
    8374U, 8375U, 8376U, 8377U, 8378U, 8380U, 8381U, 8382U, 8383U, 8384U, 8386U,
    8387U, 8388U, 8389U, 8390U, 8391U, 8393U, 8394U, 8395U, 8396U, 8397U, 8398U,
    8400U, 8401U, 8402U, 8403U, 8404U, 8405U, 8407U, 8408U, 8409U, 8410U, 8411U,
    8412U, 8414U, 8415U, 8416U, 8417U, 8418U, 8419U, 8421U, 8422U, 8423U, 8424U,
    8425U, 8426U, 8428U, 8429U, 8430U, 8431U, 8432U, 8433U, 8435U, 8436U, 8437U,
    8438U, 8439U, 8440U, 8442U, 8443U, 8444U, 8445U, 8446U, 8447U, 8449U, 8450U,
    8451U, 8452U, 8453U, 8454U, 8456U, 8457U, 8458U, 8459U, 8460U, 8461U, 8463U,
    8464U, 8465U, 8466U, 8467U, 8468U, 8470U, 8471U, 8472U, 8473U, 8474U, 8475U,
    8477U, 8478U, 8479U, 8480U, 8481U, 8482U, 8484U, 8485U, 8486U, 8487U, 8488U,
    8489U, 8491U, 8492U, 8493U, 8494U, 8495U, 8496U, 8498U, 8499U, 8500U, 8501U,
    8502U, 8503U, 8505U, 8506U, 8507U, 8508U, 8509U, 8510U, 8512U, 8513U, 8514U,
    8515U, 8516U, 8517U, 8518U, 8520U, 8521U, 8522U, 8523U, 8524U, 8525U, 8527U,
    8528U, 8529U, 8530U, 8531U, 8532U, 8534U, 8535U, 8536U, 8537U, 8538U, 8539U,
    8541U, 8542U, 8543U, 8544U, 8545U, 8546U, 8548U, 8549U, 8550U, 8551U, 8552U,
    8553U, 8554U, 8556U, 8557U, 8558U, 8559U, 8560U, 8561U, 8563U, 8564U, 8565U,
    8566U, 8567U, 8568U, 8570U, 8571U, 8572U, 8573U, 8574U, 8575U, 8576U, 8578U,
    8579U, 8580U, 8581U, 8582U, 8583U, 8585U, 8586U, 8587U, 8588U, 8589U, 8590U,
    8592U, 8593U, 8594U, 8595U, 8596U, 8597U, 8598U, 8600U, 8601U, 8602U, 8603U,
    8604U, 8605U, 8607U, 8608U, 8609U, 8610U, 8611U, 8612U, 8613U, 8615U, 8616U,
    8617U, 8618U, 8619U, 8620U, 8622U, 8623U, 8624U, 8625U, 8626U, 8627U, 8628U,
    8630U, 8631U, 8632U, 8633U, 8634U, 8635U, 8637U, 8638U, 8639U, 8640U, 8641U,
    8642U, 8643U, 8645U, 8646U, 8647U, 8648U, 8649U, 8650U, 8652U, 8653U, 8654U,
    8655U, 8656U, 8657U, 8658U, 8660U, 8661U, 8662U, 8663U, 8664U, 8665U, 8667U,
    8668U, 8669U, 8670U, 8671U, 8672U, 8673U, 8675U, 8676U, 8677U, 8678U, 8679U,
    8680U, 8681U, 8683U, 8684U, 8685U, 8686U, 8687U, 8688U, 8690U, 8691U, 8692U,
    8693U, 8694U, 8695U, 8696U, 8698U, 8699U, 8700U, 8701U, 8702U, 8703U, 8704U,
    8706U, 8707U, 8708U, 8709U, 8710U, 8711U, 8713U, 8714U, 8715U, 8716U, 8717U,
    8718U, 8719U, 8721U, 8722U, 8723U, 8724U, 8725U, 8726U, 8727U, 8729U, 8730U,
    8731U, 8732U, 8733U, 8734U, 8735U, 8737U, 8738U, 8739U, 8740U, 8741U, 8742U,
    8743U, 8745U, 8746U, 8747U, 8748U, 8749U, 8750U, 8751U, 8753U, 8754U, 8755U,
    8756U, 8757U, 8758U, 8760U, 8761U, 8762U, 8763U, 8764U, 8765U, 8766U, 8768U,
    8769U, 8770U, 8771U, 8772U, 8773U, 8774U, 8776U, 8777U, 8778U, 8779U, 8780U,
    8781U, 8782U, 8784U, 8785U, 8786U, 8787U, 8788U, 8789U, 8790U, 8792U, 8793U,
    8794U, 8795U, 8796U, 8797U, 8798U, 8800U, 8801U, 8802U, 8803U, 8804U, 8805U,
    8806U, 8808U, 8809U, 8810U, 8811U, 8812U, 8813U, 8814U, 8816U, 8817U, 8818U,
    8819U, 8820U, 8821U, 8822U, 8823U, 8825U, 8826U, 8827U, 8828U, 8829U, 8830U,
    8831U, 8833U, 8834U, 8835U, 8836U, 8837U, 8838U, 8839U, 8841U, 8842U, 8843U,
    8844U, 8845U, 8846U, 8847U, 8849U, 8850U, 8851U, 8852U, 8853U, 8854U, 8855U,
    8857U, 8858U, 8859U, 8860U, 8861U, 8862U, 8863U, 8864U, 8866U, 8867U, 8868U,
    8869U, 8870U, 8871U, 8872U, 8874U, 8875U, 8876U, 8877U, 8878U, 8879U, 8880U,
    8882U, 8883U, 8884U, 8885U, 8886U, 8887U, 8888U, 8890U, 8891U, 8892U, 8893U,
    8894U, 8895U, 8896U, 8897U, 8899U, 8900U, 8901U, 8902U, 8903U, 8904U, 8905U,
    8907U, 8908U, 8909U, 8910U, 8911U, 8912U, 8913U, 8914U, 8916U, 8917U, 8918U,
    8919U, 8920U, 8921U, 8922U, 8924U, 8925U, 8926U, 8927U, 8928U, 8929U, 8930U,
    8931U, 8933U, 8934U, 8935U, 8936U, 8937U, 8938U, 8939U, 8941U, 8942U, 8943U,
    8944U, 8945U, 8946U, 8947U, 8948U, 8950U, 8951U, 8952U, 8953U, 8954U, 8955U,
    8956U, 8958U, 8959U, 8960U, 8961U, 8962U, 8963U, 8964U, 8965U, 8967U, 8968U,
    8969U, 8970U, 8971U, 8972U, 8973U, 8974U, 8976U, 8977U, 8978U, 8979U, 8980U,
    8981U, 8982U, 8984U, 8985U, 8986U, 8987U, 8988U, 8989U, 8990U, 8991U, 8993U,
    8994U, 8995U, 8996U, 8997U, 8998U, 8999U, 9000U, 9002U, 9003U, 9004U, 9005U,
    9006U, 9007U, 9008U, 9009U, 9011U, 9012U, 9013U, 9014U, 9015U, 9016U, 9017U,
    9018U, 9020U, 9021U, 9022U, 9023U, 9024U, 9025U, 9026U, 9027U, 9029U, 9030U,
    9031U, 9032U, 9033U, 9034U, 9035U, 9036U, 9038U, 9039U, 9040U, 9041U, 9042U,
    9043U, 9044U, 9045U, 9047U, 9048U, 9049U, 9050U, 9051U, 9052U, 9053U, 9054U,
    9056U, 9057U, 9058U, 9059U, 9060U, 9061U, 9062U, 9063U, 9065U, 9066U, 9067U,
    9068U, 9069U, 9070U, 9071U, 9072U, 9074U, 9075U, 9076U, 9077U, 9078U, 9079U,
    9080U, 9081U, 9083U, 9084U, 9085U, 9086U, 9087U, 9088U, 9089U, 9090U, 9092U,
    9093U, 9094U, 9095U, 9096U, 9097U, 9098U, 9099U, 9101U, 9102U, 9103U, 9104U,
    9105U, 9106U, 9107U, 9108U, 9109U, 9111U, 9112U, 9113U, 9114U, 9115U, 9116U,
    9117U, 9118U, 9120U, 9121U, 9122U, 9123U, 9124U, 9125U, 9126U, 9127U, 9129U,
    9130U, 9131U, 9132U, 9133U, 9134U, 9135U, 9136U, 9137U, 9139U, 9140U, 9141U,
    9142U, 9143U, 9144U, 9145U, 9146U, 9148U, 9149U, 9150U, 9151U, 9152U, 9153U,
    9154U, 9155U, 9156U, 9158U, 9159U, 9160U, 9161U, 9162U, 9163U, 9164U, 9165U,
    9167U, 9168U, 9169U, 9170U, 9171U, 9172U, 9173U, 9174U, 9175U, 9177U, 9178U,
    9179U, 9180U, 9181U, 9182U, 9183U, 9184U, 9186U, 9187U, 9188U, 9189U, 9190U,
    9191U, 9192U, 9193U, 9194U, 9196U, 9197U, 9198U, 9199U, 9200U, 9201U, 9202U,
    9203U, 9204U, 9206U, 9207U, 9208U, 9209U, 9210U, 9211U, 9212U, 9213U, 9214U,
    9216U, 9217U, 9218U, 9219U, 9220U, 9221U, 9222U, 9223U, 9225U, 9226U, 9227U,
    9228U, 9229U, 9230U, 9231U, 9232U, 9233U, 9235U, 9236U, 9237U, 9238U, 9239U,
    9240U, 9241U, 9242U, 9243U, 9245U, 9246U, 9247U, 9248U, 9249U, 9250U, 9251U,
    9252U, 9253U, 9255U, 9256U, 9257U, 9258U, 9259U, 9260U, 9261U, 9262U, 9263U,
    9265U, 9266U, 9267U, 9268U, 9269U, 9270U, 9271U, 9272U, 9273U, 9275U, 9276U,
    9277U, 9278U, 9279U, 9280U, 9281U, 9282U, 9283U, 9284U, 9286U, 9287U, 9288U,
    9289U, 9290U, 9291U, 9292U, 9293U, 9294U, 9296U, 9297U, 9298U, 9299U, 9300U,
    9301U, 9302U, 9303U, 9304U, 9306U, 9307U, 9308U, 9309U, 9310U, 9311U, 9312U,
    9313U, 9314U, 9316U, 9317U, 9318U, 9319U, 9320U, 9321U, 9322U, 9323U, 9324U,
    9325U, 9327U, 9328U, 9329U, 9330U, 9331U, 9332U, 9333U, 9334U, 9335U, 9337U,
    9338U, 9339U, 9340U, 9341U, 9342U, 9343U, 9344U, 9345U, 9346U, 9348U, 9349U,
    9350U, 9351U, 9352U, 9353U, 9354U, 9355U, 9356U, 9357U, 9359U, 9360U, 9361U,
    9362U, 9363U, 9364U, 9365U, 9366U, 9367U, 9369U, 9370U, 9371U, 9372U, 9373U,
    9374U, 9375U, 9376U, 9377U, 9378U, 9380U, 9381U, 9382U, 9383U, 9384U, 9385U,
    9386U, 9387U, 9388U, 9389U, 9391U, 9392U, 9393U, 9394U, 9395U, 9396U, 9397U,
    9398U, 9399U, 9400U, 9402U, 9403U, 9404U, 9405U, 9406U, 9407U, 9408U, 9409U,
    9410U, 9411U, 9413U, 9414U, 9415U, 9416U, 9417U, 9418U, 9419U, 9420U, 9421U,
    9422U, 9424U, 9425U, 9426U, 9427U, 9428U, 9429U, 9430U, 9431U, 9432U, 9433U,
    9435U, 9436U, 9437U, 9438U, 9439U, 9440U, 9441U, 9442U, 9443U, 9444U, 9446U,
    9447U, 9448U, 9449U, 9450U, 9451U, 9452U, 9453U, 9454U, 9455U, 9457U, 9458U,
    9459U, 9460U, 9461U, 9462U, 9463U, 9464U, 9465U, 9466U, 9468U, 9469U, 9470U,
    9471U, 9472U, 9473U, 9474U, 9475U, 9476U, 9477U, 9478U, 9480U, 9481U, 9482U,
    9483U, 9484U, 9485U, 9486U, 9487U, 9488U, 9489U, 9491U, 9492U, 9493U, 9494U,
    9495U, 9496U, 9497U, 9498U, 9499U, 9500U, 9501U, 9503U, 9504U, 9505U, 9506U,
    9507U, 9508U, 9509U, 9510U, 9511U, 9512U, 9513U, 9515U, 9516U, 9517U, 9518U,
    9519U, 9520U, 9521U, 9522U, 9523U, 9524U, 9526U, 9527U, 9528U, 9529U, 9530U,
    9531U, 9532U, 9533U, 9534U, 9535U, 9536U, 9538U, 9539U, 9540U, 9541U, 9542U,
    9543U, 9544U, 9545U, 9546U, 9547U, 9548U, 9550U, 9551U, 9552U, 9553U, 9554U,
    9555U, 9556U, 9557U, 9558U, 9559U, 9560U, 9562U, 9563U, 9564U, 9565U, 9566U,
    9567U, 9568U, 9569U, 9570U, 9571U, 9572U, 9574U, 9575U, 9576U, 9577U, 9578U,
    9579U, 9580U, 9581U, 9582U, 9583U, 9584U, 9585U, 9587U, 9588U, 9589U, 9590U,
    9591U, 9592U, 9593U, 9594U, 9595U, 9596U, 9597U, 9599U, 9600U, 9601U, 9602U,
    9603U, 9604U, 9605U, 9606U, 9607U, 9608U, 9609U, 9611U, 9612U, 9613U, 9614U,
    9615U, 9616U, 9617U, 9618U, 9619U, 9620U, 9621U, 9622U, 9624U, 9625U, 9626U,
    9627U, 9628U, 9629U, 9630U, 9631U, 9632U, 9633U, 9634U, 9635U, 9637U, 9638U,
    9639U, 9640U, 9641U, 9642U, 9643U, 9644U, 9645U, 9646U, 9647U, 9649U, 9650U,
    9651U, 9652U, 9653U, 9654U, 9655U, 9656U, 9657U, 9658U, 9659U, 9660U, 9662U,
    9663U, 9664U, 9665U, 9666U, 9667U, 9668U, 9669U, 9670U, 9671U, 9672U, 9673U,
    9675U, 9676U, 9677U, 9678U, 9679U, 9680U, 9681U, 9682U, 9683U, 9684U, 9685U,
    9686U, 9687U, 9689U, 9690U, 9691U, 9692U, 9693U, 9694U, 9695U, 9696U, 9697U,
    9698U, 9699U, 9700U, 9702U, 9703U, 9704U, 9705U, 9706U, 9707U, 9708U, 9709U,
    9710U, 9711U, 9712U, 9713U, 9715U, 9716U, 9717U, 9718U, 9719U, 9720U, 9721U,
    9722U, 9723U, 9724U, 9725U, 9726U, 9727U, 9729U, 9730U, 9731U, 9732U, 9733U,
    9734U, 9735U, 9736U, 9737U, 9738U, 9739U, 9740U, 9741U, 9743U, 9744U, 9745U,
    9746U, 9747U, 9748U, 9749U, 9750U, 9751U, 9752U, 9753U, 9754U, 9756U, 9757U,
    9758U, 9759U, 9760U, 9761U, 9762U, 9763U, 9764U, 9765U, 9766U, 9767U, 9768U,
    9769U, 9771U, 9772U, 9773U, 9774U, 9775U, 9776U, 9777U, 9778U, 9779U, 9780U,
    9781U, 9782U, 9783U, 9785U, 9786U, 9787U, 9788U, 9789U, 9790U, 9791U, 9792U,
    9793U, 9794U, 9795U, 9796U, 9797U, 9799U, 9800U, 9801U, 9802U, 9803U, 9804U,
    9805U, 9806U, 9807U, 9808U, 9809U, 9810U, 9811U, 9812U, 9814U, 9815U, 9816U,
    9817U, 9818U, 9819U, 9820U, 9821U, 9822U, 9823U, 9824U, 9825U, 9826U, 9828U,
    9829U, 9830U, 9831U, 9832U, 9833U, 9834U, 9835U, 9836U, 9837U, 9838U, 9839U,
    9840U, 9841U, 9843U, 9844U, 9845U, 9846U, 9847U, 9848U, 9849U, 9850U, 9851U,
    9852U, 9853U, 9854U, 9855U, 9856U, 9858U, 9859U, 9860U, 9861U, 9862U, 9863U,
    9864U, 9865U, 9866U, 9867U, 9868U, 9869U, 9870U, 9871U, 9873U, 9874U, 9875U,
    9876U, 9877U, 9878U, 9879U, 9880U, 9881U, 9882U, 9883U, 9884U, 9885U, 9886U,
    9887U, 9889U, 9890U, 9891U, 9892U, 9893U, 9894U, 9895U, 9896U, 9897U, 9898U,
    9899U, 9900U, 9901U, 9902U, 9903U, 9905U, 9906U, 9907U, 9908U, 9909U, 9910U,
    9911U, 9912U, 9913U, 9914U, 9915U, 9916U, 9917U, 9918U, 9920U, 9921U, 9922U,
    9923U, 9924U, 9925U, 9926U, 9927U, 9928U, 9929U, 9930U, 9931U, 9932U, 9933U,
    9934U, 9935U, 9937U, 9938U, 9939U, 9940U, 9941U, 9942U, 9943U, 9944U, 9945U,
    9946U, 9947U, 9948U, 9949U, 9950U, 9951U, 9953U, 9954U, 9955U, 9956U, 9957U,
    9958U, 9959U, 9960U, 9961U, 9962U, 9963U, 9964U, 9965U, 9966U, 9967U, 9968U,
    9970U, 9971U, 9972U, 9973U, 9974U, 9975U, 9976U, 9977U, 9978U, 9979U, 9980U,
    9981U, 9982U, 9983U, 9984U, 9985U, 9987U, 9988U, 9989U, 9990U, 9991U, 9992U,
    9993U, 9994U, 9995U, 9996U, 9997U, 9998U, 9999U, 10000U, 10001U, 10002U,
    10004U, 10005U, 10006U, 10007U, 10008U, 10009U, 10010U, 10011U, 10012U,
    10013U, 10014U, 10015U, 10016U, 10017U, 10018U, 10019U, 10021U, 10022U,
    10023U, 10024U, 10025U, 10026U, 10027U, 10028U, 10029U, 10030U, 10031U,
    10032U, 10033U, 10034U, 10035U, 10036U, 10037U, 10039U, 10040U, 10041U,
    10042U, 10043U, 10044U, 10045U, 10046U, 10047U, 10048U, 10049U, 10050U,
    10051U, 10052U, 10053U, 10054U, 10055U, 10057U, 10058U, 10059U, 10060U,
    10061U, 10062U, 10063U, 10064U, 10065U, 10066U, 10067U, 10068U, 10069U,
    10070U, 10071U, 10072U, 10073U, 10074U, 10076U, 10077U, 10078U, 10079U,
    10080U, 10081U, 10082U, 10083U, 10084U, 10085U, 10086U, 10087U, 10088U,
    10089U, 10090U, 10091U, 10092U, 10093U, 10095U, 10096U, 10097U, 10098U,
    10099U, 10100U, 10101U, 10102U, 10103U, 10104U, 10105U, 10106U, 10107U,
    10108U, 10109U, 10110U, 10111U, 10112U, 10114U, 10115U, 10116U, 10117U,
    10118U, 10119U, 10120U, 10121U, 10122U, 10123U, 10124U, 10125U, 10126U,
    10127U, 10128U, 10129U, 10130U, 10131U, 10132U, 10134U, 10135U, 10136U,
    10137U, 10138U, 10139U, 10140U, 10141U, 10142U, 10143U, 10144U, 10145U,
    10146U, 10147U, 10148U, 10149U, 10150U, 10151U, 10152U, 10154U, 10155U,
    10156U, 10157U, 10158U, 10159U, 10160U, 10161U, 10162U, 10163U, 10164U,
    10165U, 10166U, 10167U, 10168U, 10169U, 10170U, 10171U, 10172U, 10173U,
    10175U, 10176U, 10177U, 10178U, 10179U, 10180U, 10181U, 10182U, 10183U,
    10184U, 10185U, 10186U, 10187U, 10188U, 10189U, 10190U, 10191U, 10192U,
    10193U, 10194U, 10196U, 10197U, 10198U, 10199U, 10200U, 10201U, 10202U,
    10203U, 10204U, 10205U, 10206U, 10207U, 10208U, 10209U, 10210U, 10211U,
    10212U, 10213U, 10214U, 10215U, 10216U, 10218U, 10219U, 10220U, 10221U,
    10222U, 10223U, 10224U, 10225U, 10226U, 10227U, 10228U, 10229U, 10230U,
    10231U, 10232U, 10233U, 10234U, 10235U, 10236U, 10237U, 10238U, 10240U,
    10241U, 10242U, 10243U, 10244U, 10245U, 10246U, 10247U, 10248U, 10249U,
    10250U, 10251U, 10252U, 10253U, 10254U, 10255U, 10256U, 10257U, 10258U,
    10259U, 10260U, 10261U, 10263U, 10264U, 10265U, 10266U, 10267U, 10268U,
    10269U, 10270U, 10271U, 10272U, 10273U, 10274U, 10275U, 10276U, 10277U,
    10278U, 10279U, 10280U, 10281U, 10282U, 10283U, 10284U, 10285U, 10287U,
    10288U, 10289U, 10290U, 10291U, 10292U, 10293U, 10294U, 10295U, 10296U,
    10297U, 10298U, 10299U, 10300U, 10301U, 10302U, 10303U, 10304U, 10305U,
    10306U, 10307U, 10308U, 10309U, 10310U, 10312U, 10313U, 10314U, 10315U,
    10316U, 10317U, 10318U, 10319U, 10320U, 10321U, 10322U, 10323U, 10324U,
    10325U, 10326U, 10327U, 10328U, 10329U, 10330U, 10331U, 10332U, 10333U,
    10334U, 10335U, 10337U, 10338U, 10339U, 10340U, 10341U, 10342U, 10343U,
    10344U, 10345U, 10346U, 10347U, 10348U, 10349U, 10350U, 10351U, 10352U,
    10353U, 10354U, 10355U, 10356U, 10357U, 10358U, 10359U, 10360U, 10361U,
    10362U, 10364U, 10365U, 10366U, 10367U, 10368U, 10369U, 10370U, 10371U,
    10372U, 10373U, 10374U, 10375U, 10376U, 10377U, 10378U, 10379U, 10380U,
    10381U, 10382U, 10383U, 10384U, 10385U, 10386U, 10387U, 10388U, 10389U,
    10390U, 10392U, 10393U, 10394U, 10395U, 10396U, 10397U, 10398U, 10399U,
    10400U, 10401U, 10402U, 10403U, 10404U, 10405U, 10406U, 10407U, 10408U,
    10409U, 10410U, 10411U, 10412U, 10413U, 10414U, 10415U, 10416U, 10417U,
    10418U, 10419U, 10421U, 10422U, 10423U, 10424U, 10425U, 10426U, 10427U,
    10428U, 10429U, 10430U, 10431U, 10432U, 10433U, 10434U, 10435U, 10436U,
    10437U, 10438U, 10439U, 10440U, 10441U, 10442U, 10443U, 10444U, 10445U,
    10446U, 10447U, 10448U, 10449U, 10450U, 10452U, 10453U, 10454U, 10455U,
    10456U, 10457U, 10458U, 10459U, 10460U, 10461U, 10462U, 10463U, 10464U,
    10465U, 10466U, 10467U, 10468U, 10469U, 10470U, 10471U, 10472U, 10473U,
    10474U, 10475U, 10476U, 10477U, 10478U, 10479U, 10480U, 10481U, 10482U,
    10483U, 10485U, 10486U, 10487U, 10488U, 10489U, 10490U, 10491U, 10492U,
    10493U, 10494U, 10495U, 10496U, 10497U, 10498U, 10499U, 10500U, 10501U,
    10502U, 10503U, 10504U, 10505U, 10506U, 10507U, 10508U, 10509U, 10510U,
    10511U, 10512U, 10513U, 10514U, 10515U, 10516U, 10517U, 10518U, 10520U,
    10521U, 10522U, 10523U, 10524U, 10525U, 10526U, 10527U, 10528U, 10529U,
    10530U, 10531U, 10532U, 10533U, 10534U, 10535U, 10536U, 10537U, 10538U,
    10539U, 10540U, 10541U, 10542U, 10543U, 10544U, 10545U, 10546U, 10547U,
    10548U, 10549U, 10550U, 10551U, 10552U, 10553U, 10554U, 10555U, 10556U,
    10558U, 10559U, 10560U, 10561U, 10562U, 10563U, 10564U, 10565U, 10566U,
    10567U, 10568U, 10569U, 10570U, 10571U, 10572U, 10573U, 10574U, 10575U,
    10576U, 10577U, 10578U, 10579U, 10580U, 10581U, 10582U, 10583U, 10584U,
    10585U, 10586U, 10587U, 10588U, 10589U, 10590U, 10591U, 10592U, 10593U,
    10594U, 10595U, 10596U, 10597U, 10598U, 10600U, 10601U, 10602U, 10603U,
    10604U, 10605U, 10606U, 10607U, 10608U, 10609U, 10610U, 10611U, 10612U,
    10613U, 10614U, 10615U, 10616U, 10617U, 10618U, 10619U, 10620U, 10621U,
    10622U, 10623U, 10624U, 10625U, 10626U, 10627U, 10628U, 10629U, 10630U,
    10631U, 10632U, 10633U, 10634U, 10635U, 10636U, 10637U, 10638U, 10639U,
    10640U, 10641U, 10642U, 10643U, 10644U, 10645U, 10647U, 10648U, 10649U,
    10650U, 10651U, 10652U, 10653U, 10654U, 10655U, 10656U, 10657U, 10658U,
    10659U, 10660U, 10661U, 10662U, 10663U, 10664U, 10665U, 10666U, 10667U,
    10668U, 10669U, 10670U, 10671U, 10672U, 10673U, 10674U, 10675U, 10676U,
    10677U, 10678U, 10679U, 10680U, 10681U, 10682U, 10683U, 10684U, 10685U,
    10686U, 10687U, 10688U, 10689U, 10690U, 10691U, 10692U, 10693U, 10694U,
    10695U, 10696U, 10697U, 10698U, 10699U, 10700U, 10702U, 10703U, 10704U,
    10705U, 10706U, 10707U, 10708U, 10709U, 10710U, 10711U, 10712U, 10713U,
    10714U, 10715U, 10716U, 10717U, 10718U, 10719U, 10720U, 10721U, 10722U,
    10723U, 10724U, 10725U, 10726U, 10727U, 10728U, 10729U, 10730U, 10731U,
    10732U, 10733U, 10734U, 10735U, 10736U, 10737U, 10738U, 10739U, 10740U,
    10741U, 10742U, 10743U, 10744U, 10745U, 10746U, 10747U, 10748U, 10749U,
    10750U, 10751U, 10752U, 10753U, 10754U, 10755U, 10756U, 10757U, 10758U,
    10759U, 10760U, 10761U, 10762U, 10763U, 10764U, 10765U, 10766U, 10767U,
    10768U, 10770U, 10771U, 10772U, 10773U, 10774U, 10775U, 10776U, 10777U,
    10778U, 10779U, 10780U, 10781U, 10782U, 10783U, 10784U, 10785U, 10786U,
    10787U, 10788U, 10789U, 10790U, 10791U, 10792U, 10793U, 10794U, 10795U,
    10796U, 10797U, 10798U, 10799U, 10800U, 10801U, 10802U, 10803U, 10804U,
    10805U, 10806U, 10807U, 10808U, 10809U, 10810U, 10811U, 10812U, 10813U,
    10814U, 10815U, 10816U, 10817U, 10818U, 10819U, 10820U, 10821U, 10822U,
    10823U, 10824U, 10825U, 10826U, 10827U, 10828U, 10829U, 10830U, 10831U,
    10832U, 10833U, 10834U, 10835U, 10836U, 10837U, 10838U, 10839U, 10840U,
    10841U, 10842U, 10843U, 10844U, 10845U, 10846U, 10847U, 10848U, 10849U,
    10850U, 10851U, 10852U, 10853U, 10854U, 10855U, 10856U, 10857U, 10858U,
    10859U, 10860U, 10861U, 10862U, 10863U, 10864U, 10865U, 10866U, 10867U,
    10868U, 10869U, 10870U, 10871U, 10872U, 10873U, 10874U, 10875U, 10876U,
    10877U, 10879U, 10880U, 10881U, 10882U, 10883U, 10884U, 10885U, 10886U,
    10887U, 10888U, 10889U, 10890U, 10891U, 10892U, 10893U, 10894U, 10895U,
    10896U, 10897U, 10898U, 10899U, 10900U, 10901U, 10902U, 10903U, 10904U,
    10905U, 10906U, 10907U, 10908U, 10909U, 10910U, 10911U, 10912U, 10913U,
    10914U, 10915U, 10916U, 10917U, 10918U, 10919U, 10920U, 10921U, 10922U,
    10923U, 10924U, 10925U, 10926U, 10927U, 10928U, 10929U, 10930U, 10931U,
    10932U, 10933U, 10934U, 10935U, 10936U, 10937U, 10938U, 10939U, 10940U,
    10941U, 10942U, 10943U, 10944U, 10945U, 10946U, 10947U, 10948U, 10949U,
    10950U, 10951U, 10952U, 10953U, 10954U, 10955U, 10956U, 10957U, 10958U,
    10959U, 10960U, 10961U, 10962U, 10963U, 10964U, 10965U, 10966U, 10967U,
    10968U, 10969U, 10970U, 10971U, 10972U, 10973U, 10974U, 10975U, 10976U,
    10977U, 10978U, 10979U, 10980U, 10981U, 10982U, 10983U, 10984U, 10985U,
    10986U, 10987U, 10988U, 10989U, 10990U, 10991U, 10992U, 10993U, 10994U,
    10995U, 10996U, 10997U, 10998U, 10999U, 11000U, 11001U, 11002U, 11003U,
    11004U, 11005U, 11006U, 11007U, 11008U, 11009U, 11010U, 11011U, 11012U,
    11013U, 11014U, 11015U, 11016U, 11017U, 11018U, 11019U, 11020U, 11021U,
    11022U, 11023U, 11024U, 11025U, 11026U, 11027U, 11028U, 11029U, 11030U,
    11031U, 11032U, 11033U, 11034U, 11035U, 11036U, 11037U, 11038U, 11039U,
    11040U, 11041U, 11042U, 11043U, 11044U, 11045U, 11046U, 11047U, 11048U,
    11049U, 11050U, 11051U, 11052U, 11053U, 11054U, 11055U, 11056U, 11057U,
    11058U, 11059U, 11060U, 11061U, 11062U, 11063U, 11064U, 11065U, 11066U,
    11067U, 11068U, 11069U, 11070U, 11071U, 11072U, 11072U, 11073U, 11074U,
    11075U, 11076U, 11077U, 11078U, 11079U, 11080U, 11081U, 11082U, 11083U,
    11084U, 11085U, 11086U, 11087U, 11088U, 11089U, 11090U, 11091U, 11092U,
    11093U, 11094U, 11095U, 11096U, 11097U, 11098U, 11099U, 11100U, 11101U,
    11102U, 11103U, 11104U, 11105U, 11106U, 11107U, 11108U, 11109U, 11110U,
    11111U, 11112U, 11113U, 11114U, 11115U, 11116U, 11117U, 11118U, 11119U,
    11120U, 11121U, 11122U, 11123U, 11124U, 11125U, 11126U, 11127U, 11128U,
    11129U, 11130U, 11131U, 11132U, 11133U, 11134U, 11135U, 11136U, 11137U,
    11138U, 11139U, 11140U, 11141U, 11142U, 11143U, 11144U, 11145U, 11146U,
    11147U, 11148U, 11149U, 11150U, 11151U, 11152U, 11153U, 11154U, 11155U,
    11156U, 11157U, 11158U, 11159U, 11160U, 11161U, 11162U, 11163U, 11164U,
    11165U, 11166U };

  memcpy(&b_LUT[0], &uv1[0], sizeof(uint16_T) << 13);
}

void tbcdec_fixpt(const emlrtStack *sp, const int16_T r1_1[8], const int16_T
                  r2_1[8], const int16_T r3[8], uint8_T iter, const uint8_T
                  intlv[8], uint16_T Lc, int8_T dec_out[8], int16_T LLR[8])
{
  int32_T i2;
  int16_T r[24];
  int32_T k_iter;
  int16_T rs[8];
  uint8_T k;
  int16_T r2[8];
  int16_T Le[8];
  int32_T i3;
  int16_T r_temp1[16];
  int16_T r_temp2[16];
  int16_T b_rs[8];
  int32_T x_idx;
  int32_T ibmat;
  int32_T itilerow;
  int16_T r_logmap[128];
  uint16_T b_sp[8];
  int16_T g[64];
  uint16_T sm[8];
  uint32_T a;
  int32_T i;
  int64_T b_a[36];
  int32_T i4;
  static const int8_T a0[8] = { 1, -1, -1, 1, -1, 1, 1, -1 };

  int64_T b[36];
  int64_T i5;
  int32_T i6;
  static const int8_T b_a0[8] = { 1, -1, -1, 1, 1, -1, -1, 1 };

  int64_T i7;
  int64_T i8;
  int32_T i9;
  int64_T i10;
  int32_T i11;
  int64_T i12;
  int64_T i13;
  int64_T i14;
  int32_T i15;
  int64_T a1;
  int64_T i16;
  int64_T i17;
  int64_T i18;
  static const int16_T c_a0[8] = { 8192, -8192, -8192, 8192, -8192, 8192, 8192,
    -8192 };

  int64_T i19;
  int64_T i20;
  int64_T i21;
  int64_T i22;
  int64_T i23;
  int64_T i24;
  int64_T i25;
  int64_T i26;
  int64_T i27;
  int64_T i28;
  int64_T i29;
  int64_T a2;
  int64_T i30;
  int64_T i31;
  int64_T i32;
  int64_T b_a1;
  int16_T b_LLR;
  int64_T b_a2;
  int8_T S;
  int64_T c_a1;
  int64_T i33;
  int64_T xfi;
  int64_T i34;
  int64_T c_a2;
  int64_T i35;
  int64_T i36;
  int64_T i37;
  int64_T i38;
  int64_T i39;
  uint16_T b0;
  int64_T i40;
  int64_T d_a1;
  int64_T i41;
  int64_T i42;
  int64_T i43;
  int64_T i44;
  int64_T i45;
  int64_T i46;
  int64_T e_a1;
  int64_T i47;
  int64_T i48;
  int64_T i49;
  int64_T d_a2;
  int64_T i50;
  int64_T i51;
  int64_T f_a1;
  int64_T i52;
  int64_T i53;
  int64_T i54;
  int64_T i55;
  int64_T i56;
  int64_T i57;
  int64_T i58;
  int64_T e_a2;
  int64_T i59;
  int64_T i60;
  int64_T i61;
  int64_T i62;
  int64_T i63;
  int64_T i64;
  int64_T i65;
  int64_T i66;
  int64_T i67;
  uint16_T sp1;
  int64_T i68;
  int64_T i69;
  int64_T g_a1;
  int64_T i70;
  int64_T i71;
  int64_T f_a2;
  int64_T h_a1;
  int64_T i72;
  int64_T i73;
  int64_T g_a2;
  int64_T i74;
  int64_T i75;
  int64_T i76;
  int64_T i_a1;
  int64_T i77;
  int64_T i78;
  int64_T i79;
  int64_T i80;
  int64_T i81;
  int64_T j_a1;
  int64_T i82;
  int64_T i83;
  int64_T i84;
  int64_T i85;
  int64_T i86;
  int64_T i87;
  int64_T i88;
  int64_T i89;
  int64_T i90;
  int64_T i91;
  int64_T i92;
  int64_T i93;
  int64_T i94;
  int64_T h_a2;
  int64_T i95;
  int64_T k_a1;
  int64_T i96;
  int64_T i97;
  int64_T i98;
  int64_T i99;
  int64_T i100;
  int64_T i101;
  int64_T i102;
  int64_T i_a2;
  int64_T i103;
  int64_T l_a1;
  int64_T j_a2;
  int64_T i104;
  int64_T m_a1;
  int64_T k_a2;
  int64_T l_a2;
  int64_T i105;
  int64_T i106;
  int64_T i107;
  int64_T n_a1;
  int64_T m_a2;
  int64_T i108;
  int64_T i109;
  int64_T o_a1;
  int64_T i110;
  int64_T i111;
  int64_T i112;
  int64_T i113;
  int64_T i114;
  int64_T i115;
  int64_T i116;
  int64_T i117;
  int64_T i118;
  uint64_T u0;
  int64_T i119;
  uint64_T u1;
  int64_T i120;
  int128m_T r0;
  int128m_T r1;
  int64_T i121;
  int64_T i122;
  int16_T idx_bot;
  int64_T i123;
  int32_T b_x_idx;
  int64_T i124;
  int64_T i125;
  int64_T i126;
  int64_T i127;
  int64_T p_a1;
  int64_T n_a2;
  int32_T c_x_idx;
  int64_T q_a1;
  int32_T i128;
  int64_T o_a2;
  int32_T d_x_idx;
  int64_T i129;
  int32_T i130;
  int64_T r_a1;
  int64_T i131;
  int64_T b_b0;
  int64_T i132;
  int64_T s_a1;
  int64_T x;
  int64_T i133;
  int64_T i134;
  int64_T i135;
  int64_T i136;
  int64_T b_xfi;
  int64_T c_b0;
  int64_T i137;
  int64_T i138;
  int64_T b_x;
  int64_T i139;
  int64_T p_a2;
  int64_T i140;
  int64_T i141;
  int64_T i142;
  int64_T i143;
  int64_T i144;
  int64_T i145;
  int64_T i146;
  int64_T i147;
  int64_T i148;
  int64_T i149;
  int64_T i150;
  int64_T t_a1;
  int64_T q_a2;
  int64_T i151;
  int64_T u_a1;
  int64_T i152;
  int64_T i153;
  int64_T i154;
  int64_T i155;
  int64_T i156;
  int64_T i157;
  int64_T i158;
  int64_T i159;
  int64_T i160;
  int64_T i161;
  int64_T i162;
  int64_T i163;
  int64_T i164;
  int64_T v_a1;
  int64_T r_a2;
  int64_T i165;
  int64_T w_a1;
  int64_T i166;
  int64_T i167;
  int64_T i168;
  int64_T i169;
  int64_T i170;
  int64_T i171;
  int128m_T b_r2;
  int32_T e_x_idx;
  int32_T f_x_idx;
  int32_T i172;
  int32_T g_x_idx;
  int32_T i173;
  int64_T c_xfi;
  int64_T d_b0;
  int64_T i174;
  int64_T c_x;
  int64_T i175;
  int64_T i176;
  int64_T i177;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  file name:    tbcdec.m */
  /*  description:  [dec_out,LLR] = tbcdec(r,iter,intlv,Lc) performs decoding for the example turbo code (rate-1/3, rsc = (1 5/7)), */
  /*                where r represents the received sequence, iter specifies the decoding iterations, intlv is the permutation function */
  /*                of the interleaver. the channel condition, Lc, must also be given. the function returns the hard-decision decoded output, */
  /*                dec_out, and the corresponding llr, LLR. */
  /*  algorithm:    logmap/maxlogmap decoding algorithm */
  /*  author:       y. jiang */
  /*  date:         june 2010 */
  /*  revision:     1.0 */
  /*  demultiplex r into 3 subsequences */
  /*  systematic bit */
  /*  parity bit 1 */
  /*  parity bit 2 */
  /*  */
  /*  LLR = zeros(1,8); */
  /*  Le  = zeros(1,8); */
  /*  */
  /*  a1 = zeros(1,9); */
  /*  a2 = zeros(1,9); */
  /*  a3 = zeros(1,9); */
  /*  a4 = zeros(1,9); */
  /*  b1 = zeros(1,9); */
  /*  b2 = zeros(1,9); */
  /*  b3 = zeros(1,9); */
  /*  b4 = zeros(1,9); */
  /*  g1 = zeros(1,8); */
  /*  g2 = zeros(1,8); */
  /*  g3 = zeros(1,8); */
  /*  g4 = zeros(1,8); */
  /*  g5 = zeros(1,8); */
  /*  g6 = zeros(1,8); */
  /*  g7 = zeros(1,8); */
  /*  g8 = zeros(1,8); */
  /*  intlv's permutation function */
  for (i2 = 0; i2 < 8; i2++) {
    dec_out[i2] = 0;
    LLR[i2] = 0;
    r[i2] = r1_1[i2];
    r[8 + i2] = (int16_T)(r2_1[i2] >> 1);
    r[16 + i2] = (int16_T)(r3[i2] >> 1);
    rs[i2] = r1_1[i2];
    r2[i2] = (int16_T)(r[16 + i2] << 1);
    Le[i2] = 0;
  }

  /*  initial extrinsic probability */
  st.site = &b_emlrtRSI;
  st.site = &b_emlrtRSI;
  i2 = iter;
  for (k_iter = 0; k_iter < i2; k_iter++) {
    k = (uint8_T)(1 + k_iter);
    if ((uint8_T)((uint32_T)k - ((int32_T)((uint32_T)k >> 1) << 1)) != 0) {
      /*  odd numbered iter. */
      for (i3 = 0; i3 < 8; i3++) {
        r_temp1[i3] = rs[i3];
        r_temp1[8 + i3] = r[8 + i3];
      }

      /*          r_temp2 = reshape(r_temp1',1,2*nn); */
      r_temp2[0] = r_temp1[0];
      r_temp2[1] = r_temp1[8];
      r_temp2[2] = r_temp1[1];
      r_temp2[3] = r_temp1[9];
      r_temp2[4] = r_temp1[2];
      r_temp2[5] = r_temp1[10];
      r_temp2[6] = r_temp1[3];
      r_temp2[7] = r_temp1[11];
      r_temp2[8] = r_temp1[4];
      r_temp2[9] = r_temp1[12];
      r_temp2[10] = r_temp1[5];
      r_temp2[11] = r_temp1[13];
      r_temp2[12] = r_temp1[6];
      r_temp2[13] = r_temp1[14];
      r_temp2[14] = r_temp1[7];
      r_temp2[15] = r_temp1[15];
      for (i3 = 0; i3 < 8; i3++) {
        b_rs[i3] = Le[i3];
      }

      for (i3 = 0; i3 < 8; i3++) {
        if ((intlv[i3] < 1) || (intlv[i3] > 8)) {
          emlrtDynamicBoundsCheckR2012b(intlv[i3], 1, 8, &c_emlrtBCI, sp);
        }

        Le[intlv[i3] - 1] = b_rs[i3];
      }

      /*  de-interleave */
    } else {
      /*  even numbered iter. */
      for (i3 = 0; i3 < 8; i3++) {
        if ((intlv[i3] < 1) || (intlv[i3] > 8)) {
          emlrtDynamicBoundsCheckR2012b(intlv[i3], 1, 8, &b_emlrtBCI, sp);
        }

        b_rs[i3] = rs[intlv[i3] - 1];
      }

      /*  interleave */
      for (i3 = 0; i3 < 8; i3++) {
        rs[i3] = b_rs[i3];
        r_temp1[i3] = b_rs[i3];
        r_temp1[8 + i3] = (int16_T)(r2[i3] >> 1);
      }

      r_temp2[0] = r_temp1[0];
      r_temp2[1] = r_temp1[8];
      r_temp2[2] = r_temp1[1];
      r_temp2[3] = r_temp1[9];
      r_temp2[4] = r_temp1[2];
      r_temp2[5] = r_temp1[10];
      r_temp2[6] = r_temp1[3];
      r_temp2[7] = r_temp1[11];
      r_temp2[8] = r_temp1[4];
      r_temp2[9] = r_temp1[12];
      r_temp2[10] = r_temp1[5];
      r_temp2[11] = r_temp1[13];
      r_temp2[12] = r_temp1[6];
      r_temp2[13] = r_temp1[14];
      r_temp2[14] = r_temp1[7];
      r_temp2[15] = r_temp1[15];
      for (i3 = 0; i3 < 8; i3++) {
        if ((intlv[i3] < 1) || (intlv[i3] > 8)) {
          emlrtDynamicBoundsCheckR2012b(intlv[i3], 1, 8, &d_emlrtBCI, sp);
        }

        b_rs[i3] = Le[intlv[i3] - 1];
      }

      for (i3 = 0; i3 < 8; i3++) {
        Le[i3] = b_rs[i3];
      }

      /*  interleave */
    }

    /* begin of logmap function */
    /*  function [LLR,a,b,g,Le] = logmap(r,ap,Lc_logmap) */
    /*  extract systematic bits */
    for (x_idx = 0; x_idx < 16; x_idx++) {
      ibmat = x_idx << 3;
      for (itilerow = 0; itilerow < 8; itilerow++) {
        r_logmap[ibmat + itilerow] = r_temp2[x_idx];
      }
    }

    /*  nn_logmap = length(rs_logmap); */
    /*  if ap_logmap == 0 */
    /*      ap_logmap = zeros(1,nn_logmap); */
    /*  end */
    for (i3 = 0; i3 < 8; i3++) {
      b_sp[i3] = 0U;
      sm[i3] = 0U;
    }

    /*  list of codewords in a trellis (pay attention to the order) */
    memset(&g[0], 0, sizeof(int16_T) << 6);

    /*  g: gamma */
    k = 1U;
    a = (uint32_T)Lc << 13;
    for (i = 0; i < 8; i++) {
      x_idx = i << 1;

      /*  compute gamma. eq.(6.30) */
      if ((k < 1) || (k > 8)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, 8, &emlrtBCI, sp);
      }

      for (i3 = 0; i3 < 8; i3++) {
        i4 = a0[i3] * r_logmap[i3 + (x_idx << 3)];
        if ((i4 & 8388608) != 0) {
          i4 |= -8388608;
        } else {
          i4 &= 8388607;
        }

        i6 = b_a0[i3] * r_logmap[i3 + ((x_idx + 1) << 3)];
        if ((i6 & 8388608) != 0) {
          i6 |= -8388608;
        } else {
          i6 &= 8388607;
        }

        if ((i4 & 16777216) != 0) {
          i9 = i4 | -16777216;
        } else {
          i9 = i4 & 16777215;
        }

        if ((i6 & 16777216) != 0) {
          i11 = i6 | -16777216;
        } else {
          i11 = i6 & 16777215;
        }

        i4 = i9 + i11;
        if ((i4 & 16777216) != 0) {
          i15 = i4 | -16777216;
        } else {
          i15 = i4 & 16777215;
        }

        i5 = (int64_T)a * i15;
        if ((i5 & 72057594037927936L) != 0L) {
          i5 |= -72057594037927936L;
        } else {
          i5 &= 72057594037927935L;
        }

        i4 = k - 1;
        i7 = (int64_T)c_a0[i3] * Le[i4];
        if ((i7 & 549755813888L) != 0L) {
          i20 = i7 | -549755813888L;
        } else {
          i20 = i7 & 549755813887L;
        }

        i7 = i20 << 15;
        if ((i5 & 144115188075855872L) != 0L) {
          i23 = i5 | -144115188075855872L;
        } else {
          i23 = i5 & 144115188075855871L;
        }

        if ((i7 & 144115188075855872L) != 0L) {
          i27 = i7 | -144115188075855872L;
        } else {
          i27 = i7 & 144115188075855871L;
        }

        i5 = i23 + i27;
        if ((i5 & 144115188075855872L) != 0L) {
          i30 = i5 | -144115188075855872L;
        } else {
          i30 = i5 & 144115188075855871L;
        }

        g[i3 + (i4 << 3)] = (int16_T)(i30 >> 28);
      }

      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*  re-order gamma to ficilitate alpha calculation below */
    for (i3 = 0; i3 < 36; i3++) {
      b_a[i3] = -20000000000L;
    }

    b_a[0] = 0L;

    /*  a: alpha. initialization */
    for (i = 0; i < 8; i++) {
      /*  compute alpha. eq.(6.29) and (6.36) */
      i3 = i << 3;
      i5 = g[i3];
      i4 = i << 2;
      i7 = b_a[i4] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i8 = i5 | -36028797018963968L;
      } else {
        i8 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i10 = i7 | -36028797018963968L;
      } else {
        i10 = i7 & 36028797018963967L;
      }

      i5 = i8 + i10;
      if ((i5 & 36028797018963968L) != 0L) {
        i13 = i5 | -36028797018963968L;
      } else {
        i13 = i5 & 36028797018963967L;
      }

      i5 = i13 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[2 + i3];
      i6 = 2 + i4;
      i7 = b_a[i6] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i19 = i5 | -36028797018963968L;
      } else {
        i19 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i21 = i7 | -36028797018963968L;
      } else {
        i21 = i7 & 36028797018963967L;
      }

      i5 = i19 + i21;
      if ((i5 & 36028797018963968L) != 0L) {
        i26 = i5 | -36028797018963968L;
      } else {
        i26 = i5 & 36028797018963967L;
      }

      i5 = i26 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        b_a1 = a1 | -281474976710656L;
      } else {
        b_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        b_a2 = a2 | -281474976710656L;
      } else {
        b_a2 = a2 & 281474976710655L;
      }

      i5 = b_a1 - b_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i38 = i5 | -562949953421312L;
      } else {
        i38 = i5 & 562949953421311L;
      }

      st.site = &c_emlrtRSI;
      b0 = call_custom_exp(i38);
      st.site = &c_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        d_a1 = a2;
      } else {
        d_a1 = a1;
      }

      i5 = d_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i45 = i5 | -4611686018427387904L;
      } else {
        i45 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i47 = i7 | -4611686018427387904L;
      } else {
        i47 = i7 & 4611686018427387903L;
      }

      i5 = i45 + i47;
      if ((i5 & 4611686018427387904L) != 0L) {
        i50 = i5 | -4611686018427387904L;
      } else {
        i50 = i5 & 4611686018427387903L;
      }

      i5 = i50 >> 13;
      x_idx = (i + 1) << 2;
      if ((i5 & 140737488355328L) != 0L) {
        b_a[x_idx] = i5 | -140737488355328L;
      } else {
        b_a[x_idx] = i5 & 140737488355327L;
      }

      i5 = g[1 + i3];
      i7 = b_a[i4] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i53 = i5 | -36028797018963968L;
      } else {
        i53 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i54 = i7 | -36028797018963968L;
      } else {
        i54 = i7 & 36028797018963967L;
      }

      i5 = i53 + i54;
      if ((i5 & 36028797018963968L) != 0L) {
        i57 = i5 | -36028797018963968L;
      } else {
        i57 = i5 & 36028797018963967L;
      }

      i5 = i57 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[3 + i3];
      i7 = b_a[i6] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i61 = i5 | -36028797018963968L;
      } else {
        i61 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i63 = i7 | -36028797018963968L;
      } else {
        i63 = i7 & 36028797018963967L;
      }

      i5 = i61 + i63;
      if ((i5 & 36028797018963968L) != 0L) {
        i65 = i5 | -36028797018963968L;
      } else {
        i65 = i5 & 36028797018963967L;
      }

      i5 = i65 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        g_a1 = a1 | -281474976710656L;
      } else {
        g_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        f_a2 = a2 | -281474976710656L;
      } else {
        f_a2 = a2 & 281474976710655L;
      }

      i5 = g_a1 - f_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i75 = i5 | -562949953421312L;
      } else {
        i75 = i5 & 562949953421311L;
      }

      st.site = &d_emlrtRSI;
      b0 = call_custom_exp(i75);
      st.site = &d_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        i_a1 = a2;
      } else {
        i_a1 = a1;
      }

      i5 = i_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i80 = i5 | -4611686018427387904L;
      } else {
        i80 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i82 = i7 | -4611686018427387904L;
      } else {
        i82 = i7 & 4611686018427387903L;
      }

      i5 = i80 + i82;
      if ((i5 & 4611686018427387904L) != 0L) {
        i83 = i5 | -4611686018427387904L;
      } else {
        i83 = i5 & 4611686018427387903L;
      }

      i5 = i83 >> 13;
      if ((i5 & 140737488355328L) != 0L) {
        b_a[1 + x_idx] = i5 | -140737488355328L;
      } else {
        b_a[1 + x_idx] = i5 & 140737488355327L;
      }

      i5 = g[4 + i3];
      i6 = 1 + i4;
      i7 = b_a[i6] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i90 = i5 | -36028797018963968L;
      } else {
        i90 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i92 = i7 | -36028797018963968L;
      } else {
        i92 = i7 & 36028797018963967L;
      }

      i5 = i90 + i92;
      if ((i5 & 36028797018963968L) != 0L) {
        i94 = i5 | -36028797018963968L;
      } else {
        i94 = i5 & 36028797018963967L;
      }

      i5 = i94 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[6 + i3];
      i4 += 3;
      i7 = b_a[i4] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i97 = i5 | -36028797018963968L;
      } else {
        i97 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i98 = i7 | -36028797018963968L;
      } else {
        i98 = i7 & 36028797018963967L;
      }

      i5 = i97 + i98;
      if ((i5 & 36028797018963968L) != 0L) {
        i100 = i5 | -36028797018963968L;
      } else {
        i100 = i5 & 36028797018963967L;
      }

      i5 = i100 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        l_a1 = a1 | -281474976710656L;
      } else {
        l_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        j_a2 = a2 | -281474976710656L;
      } else {
        j_a2 = a2 & 281474976710655L;
      }

      i5 = l_a1 - j_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i106 = i5 | -562949953421312L;
      } else {
        i106 = i5 & 562949953421311L;
      }

      st.site = &e_emlrtRSI;
      b0 = call_custom_exp(i106);
      st.site = &e_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        n_a1 = a2;
      } else {
        n_a1 = a1;
      }

      i5 = n_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i109 = i5 | -4611686018427387904L;
      } else {
        i109 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i110 = i7 | -4611686018427387904L;
      } else {
        i110 = i7 & 4611686018427387903L;
      }

      i5 = i109 + i110;
      if ((i5 & 4611686018427387904L) != 0L) {
        i112 = i5 | -4611686018427387904L;
      } else {
        i112 = i5 & 4611686018427387903L;
      }

      i5 = i112 >> 13;
      if ((i5 & 140737488355328L) != 0L) {
        b_a[2 + x_idx] = i5 | -140737488355328L;
      } else {
        b_a[2 + x_idx] = i5 & 140737488355327L;
      }

      i5 = g[5 + i3];
      i7 = b_a[i6] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i115 = i5 | -36028797018963968L;
      } else {
        i115 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i117 = i7 | -36028797018963968L;
      } else {
        i117 = i7 & 36028797018963967L;
      }

      i5 = i115 + i117;
      if ((i5 & 36028797018963968L) != 0L) {
        i119 = i5 | -36028797018963968L;
      } else {
        i119 = i5 & 36028797018963967L;
      }

      i5 = i119 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[7 + i3];
      i7 = b_a[i4] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i122 = i5 | -36028797018963968L;
      } else {
        i122 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i123 = i7 | -36028797018963968L;
      } else {
        i123 = i7 & 36028797018963967L;
      }

      i5 = i122 + i123;
      if ((i5 & 36028797018963968L) != 0L) {
        i125 = i5 | -36028797018963968L;
      } else {
        i125 = i5 & 36028797018963967L;
      }

      i5 = i125 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        p_a1 = a1 | -281474976710656L;
      } else {
        p_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        n_a2 = a2 | -281474976710656L;
      } else {
        n_a2 = a2 & 281474976710655L;
      }

      i5 = p_a1 - n_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i129 = i5 | -562949953421312L;
      } else {
        i129 = i5 & 562949953421311L;
      }

      st.site = &f_emlrtRSI;
      b0 = call_custom_exp(i129);
      st.site = &f_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        r_a1 = a2;
      } else {
        r_a1 = a1;
      }

      i5 = r_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i132 = i5 | -4611686018427387904L;
      } else {
        i132 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i133 = i7 | -4611686018427387904L;
      } else {
        i133 = i7 & 4611686018427387903L;
      }

      i5 = i132 + i133;
      if ((i5 & 4611686018427387904L) != 0L) {
        i135 = i5 | -4611686018427387904L;
      } else {
        i135 = i5 & 4611686018427387903L;
      }

      i5 = i135 >> 13;
      if ((i5 & 140737488355328L) != 0L) {
        b_a[3 + x_idx] = i5 | -140737488355328L;
      } else {
        b_a[3 + x_idx] = i5 & 140737488355327L;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    for (i3 = 0; i3 < 36; i3++) {
      b[i3] = -20000000000L;
    }

    b[32] = 0L;

    /*  b: beta. initialization */
    for (i = 0; i < 8; i++) {
      /*  compute beta. eq.(6.29) and (6.36) */
      i3 = (7 - i) << 3;
      i5 = g[i3];
      i4 = (8 - i) << 2;
      i7 = b[i4] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i12 = i5 | -36028797018963968L;
      } else {
        i12 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i14 = i7 | -36028797018963968L;
      } else {
        i14 = i7 & 36028797018963967L;
      }

      i5 = i12 + i14;
      if ((i5 & 36028797018963968L) != 0L) {
        i17 = i5 | -36028797018963968L;
      } else {
        i17 = i5 & 36028797018963967L;
      }

      i5 = i17 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[1 + i3];
      i6 = 1 + i4;
      i7 = b[i6] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i24 = i5 | -36028797018963968L;
      } else {
        i24 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i28 = i7 | -36028797018963968L;
      } else {
        i28 = i7 & 36028797018963967L;
      }

      i5 = i24 + i28;
      if ((i5 & 36028797018963968L) != 0L) {
        i31 = i5 | -36028797018963968L;
      } else {
        i31 = i5 & 36028797018963967L;
      }

      i5 = i31 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        c_a1 = a1 | -281474976710656L;
      } else {
        c_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        c_a2 = a2 | -281474976710656L;
      } else {
        c_a2 = a2 & 281474976710655L;
      }

      i5 = c_a1 - c_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i42 = i5 | -562949953421312L;
      } else {
        i42 = i5 & 562949953421311L;
      }

      st.site = &g_emlrtRSI;
      b0 = call_custom_exp(i42);
      st.site = &g_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        e_a1 = a2;
      } else {
        e_a1 = a1;
      }

      i5 = e_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i49 = i5 | -4611686018427387904L;
      } else {
        i49 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i51 = i7 | -4611686018427387904L;
      } else {
        i51 = i7 & 4611686018427387903L;
      }

      i5 = i49 + i51;
      if ((i5 & 4611686018427387904L) != 0L) {
        i52 = i5 | -4611686018427387904L;
      } else {
        i52 = i5 & 4611686018427387903L;
      }

      i5 = i52 >> 13;
      ibmat = (7 - i) << 2;
      if ((i5 & 140737488355328L) != 0L) {
        b[ibmat] = i5 | -140737488355328L;
      } else {
        b[ibmat] = i5 & 140737488355327L;
      }

      i5 = g[4 + i3];
      itilerow = 2 + i4;
      i7 = b[itilerow] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i56 = i5 | -36028797018963968L;
      } else {
        i56 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i58 = i7 | -36028797018963968L;
      } else {
        i58 = i7 & 36028797018963967L;
      }

      i5 = i56 + i58;
      if ((i5 & 36028797018963968L) != 0L) {
        i59 = i5 | -36028797018963968L;
      } else {
        i59 = i5 & 36028797018963967L;
      }

      i5 = i59 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[5 + i3];
      x_idx = 3 + i4;
      i7 = b[x_idx] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i67 = i5 | -36028797018963968L;
      } else {
        i67 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i68 = i7 | -36028797018963968L;
      } else {
        i68 = i7 & 36028797018963967L;
      }

      i5 = i67 + i68;
      if ((i5 & 36028797018963968L) != 0L) {
        i70 = i5 | -36028797018963968L;
      } else {
        i70 = i5 & 36028797018963967L;
      }

      i5 = i70 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        h_a1 = a1 | -281474976710656L;
      } else {
        h_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        g_a2 = a2 | -281474976710656L;
      } else {
        g_a2 = a2 & 281474976710655L;
      }

      i5 = h_a1 - g_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i78 = i5 | -562949953421312L;
      } else {
        i78 = i5 & 562949953421311L;
      }

      st.site = &h_emlrtRSI;
      b0 = call_custom_exp(i78);
      st.site = &h_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        j_a1 = a2;
      } else {
        j_a1 = a1;
      }

      i5 = j_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i84 = i5 | -4611686018427387904L;
      } else {
        i84 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i87 = i7 | -4611686018427387904L;
      } else {
        i87 = i7 & 4611686018427387903L;
      }

      i5 = i84 + i87;
      if ((i5 & 4611686018427387904L) != 0L) {
        i89 = i5 | -4611686018427387904L;
      } else {
        i89 = i5 & 4611686018427387903L;
      }

      i5 = i89 >> 13;
      if ((i5 & 140737488355328L) != 0L) {
        b[1 + ibmat] = i5 | -140737488355328L;
      } else {
        b[1 + ibmat] = i5 & 140737488355327L;
      }

      i5 = g[2 + i3];
      i7 = b[i4] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i93 = i5 | -36028797018963968L;
      } else {
        i93 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i95 = i7 | -36028797018963968L;
      } else {
        i95 = i7 & 36028797018963967L;
      }

      i5 = i93 + i95;
      if ((i5 & 36028797018963968L) != 0L) {
        i96 = i5 | -36028797018963968L;
      } else {
        i96 = i5 & 36028797018963967L;
      }

      i5 = i96 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[3 + i3];
      i7 = b[i6] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i99 = i5 | -36028797018963968L;
      } else {
        i99 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i102 = i7 | -36028797018963968L;
      } else {
        i102 = i7 & 36028797018963967L;
      }

      i5 = i99 + i102;
      if ((i5 & 36028797018963968L) != 0L) {
        i103 = i5 | -36028797018963968L;
      } else {
        i103 = i5 & 36028797018963967L;
      }

      i5 = i103 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        m_a1 = a1 | -281474976710656L;
      } else {
        m_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        l_a2 = a2 | -281474976710656L;
      } else {
        l_a2 = a2 & 281474976710655L;
      }

      i5 = m_a1 - l_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i108 = i5 | -562949953421312L;
      } else {
        i108 = i5 & 562949953421311L;
      }

      st.site = &i_emlrtRSI;
      b0 = call_custom_exp(i108);
      st.site = &i_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        o_a1 = a2;
      } else {
        o_a1 = a1;
      }

      i5 = o_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i111 = i5 | -4611686018427387904L;
      } else {
        i111 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i113 = i7 | -4611686018427387904L;
      } else {
        i113 = i7 & 4611686018427387903L;
      }

      i5 = i111 + i113;
      if ((i5 & 4611686018427387904L) != 0L) {
        i114 = i5 | -4611686018427387904L;
      } else {
        i114 = i5 & 4611686018427387903L;
      }

      i5 = i114 >> 13;
      if ((i5 & 140737488355328L) != 0L) {
        b[2 + ibmat] = i5 | -140737488355328L;
      } else {
        b[2 + ibmat] = i5 & 140737488355327L;
      }

      i5 = g[6 + i3];
      i7 = b[itilerow] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i118 = i5 | -36028797018963968L;
      } else {
        i118 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i120 = i7 | -36028797018963968L;
      } else {
        i120 = i7 & 36028797018963967L;
      }

      i5 = i118 + i120;
      if ((i5 & 36028797018963968L) != 0L) {
        i121 = i5 | -36028797018963968L;
      } else {
        i121 = i5 & 36028797018963967L;
      }

      i5 = i121 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[7 + i3];
      i7 = b[x_idx] << 7;
      if ((i5 & 36028797018963968L) != 0L) {
        i124 = i5 | -36028797018963968L;
      } else {
        i124 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i126 = i7 | -36028797018963968L;
      } else {
        i126 = i7 & 36028797018963967L;
      }

      i5 = i124 + i126;
      if ((i5 & 36028797018963968L) != 0L) {
        i127 = i5 | -36028797018963968L;
      } else {
        i127 = i5 & 36028797018963967L;
      }

      i5 = i127 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        q_a1 = a1 | -281474976710656L;
      } else {
        q_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        o_a2 = a2 | -281474976710656L;
      } else {
        o_a2 = a2 & 281474976710655L;
      }

      i5 = q_a1 - o_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i131 = i5 | -562949953421312L;
      } else {
        i131 = i5 & 562949953421311L;
      }

      st.site = &j_emlrtRSI;
      b0 = call_custom_exp(i131);
      st.site = &j_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        s_a1 = a2;
      } else {
        s_a1 = a1;
      }

      i5 = s_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i134 = i5 | -4611686018427387904L;
      } else {
        i134 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i136 = i7 | -4611686018427387904L;
      } else {
        i136 = i7 & 4611686018427387903L;
      }

      i5 = i134 + i136;
      if ((i5 & 4611686018427387904L) != 0L) {
        i137 = i5 | -4611686018427387904L;
      } else {
        i137 = i5 & 4611686018427387903L;
      }

      i5 = i137 >> 13;
      if ((i5 & 140737488355328L) != 0L) {
        b[3 + ibmat] = i5 | -140737488355328L;
      } else {
        b[3 + ibmat] = i5 & 140737488355327L;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    st.site = &k_emlrtRSI;
    st.site = &k_emlrtRSI;
    for (i = 0; i < 8; i++) {
      k = (uint8_T)(1 + i);

      /*  compute LLR. eq.(6.31) and (6.36)                                                   % */
      i3 = k - 1;
      i4 = i3 << 2;
      i5 = b_a[i4] << 7;
      i6 = i3 << 3;
      i7 = g[i6];
      if ((i5 & 36028797018963968L) != 0L) {
        i16 = i5 | -36028797018963968L;
      } else {
        i16 = i5 & 36028797018963967L;
      }

      if ((i7 & 36028797018963968L) != 0L) {
        i18 = i7 | -36028797018963968L;
      } else {
        i18 = i7 & 36028797018963967L;
      }

      i7 = i16 + i18;
      if ((i7 & 36028797018963968L) != 0L) {
        i7 |= -36028797018963968L;
      } else {
        i7 &= 36028797018963967L;
      }

      itilerow = k << 2;
      i22 = b[itilerow] << 7;
      if ((i7 & 72057594037927936L) != 0L) {
        i25 = i7 | -72057594037927936L;
      } else {
        i25 = i7 & 72057594037927935L;
      }

      if ((i22 & 72057594037927936L) != 0L) {
        i29 = i22 | -72057594037927936L;
      } else {
        i29 = i22 & 72057594037927935L;
      }

      i7 = i25 + i29;
      if ((i7 & 72057594037927936L) != 0L) {
        i32 = i7 | -72057594037927936L;
      } else {
        i32 = i7 & 72057594037927935L;
      }

      i7 = i32 >> 7;
      if ((i7 & 140737488355328L) != 0L) {
        a2 = i7 | -140737488355328L;
      } else {
        a2 = i7 & 140737488355327L;
      }

      i7 = b_a[2 + i4] << 7;
      i33 = g[3 + i6];
      if ((i7 & 36028797018963968L) != 0L) {
        i34 = i7 | -36028797018963968L;
      } else {
        i34 = i7 & 36028797018963967L;
      }

      if ((i33 & 36028797018963968L) != 0L) {
        i35 = i33 | -36028797018963968L;
      } else {
        i35 = i33 & 36028797018963967L;
      }

      i33 = i34 + i35;
      if ((i33 & 36028797018963968L) != 0L) {
        i33 |= -36028797018963968L;
      } else {
        i33 &= 36028797018963967L;
      }

      i39 = b[1 + itilerow] << 7;
      if ((i33 & 72057594037927936L) != 0L) {
        i40 = i33 | -72057594037927936L;
      } else {
        i40 = i33 & 72057594037927935L;
      }

      if ((i39 & 72057594037927936L) != 0L) {
        i41 = i39 | -72057594037927936L;
      } else {
        i41 = i39 & 72057594037927935L;
      }

      i33 = i40 + i41;
      if ((i33 & 72057594037927936L) != 0L) {
        i44 = i33 | -72057594037927936L;
      } else {
        i44 = i33 & 72057594037927935L;
      }

      i33 = i44 >> 7;
      if ((i33 & 140737488355328L) != 0L) {
        a1 = i33 | -140737488355328L;
      } else {
        a1 = i33 & 140737488355327L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        d_a2 = a2 | -281474976710656L;
      } else {
        d_a2 = a2 & 281474976710655L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        f_a1 = a1 | -281474976710656L;
      } else {
        f_a1 = a1 & 281474976710655L;
      }

      i33 = d_a2 - f_a1;
      if ((i33 & 281474976710656L) != 0L) {
        xfi = i33 | -281474976710656L;
      } else {
        xfi = i33 & 281474976710655L;
      }

      i33 = -xfi;
      if (xfi < 0L) {
        if ((i33 & 281474976710656L) != 0L) {
          i33 |= -281474976710656L;
        } else {
          i33 &= 281474976710655L;
        }
      } else {
        i33 = xfi;
      }

      if ((i33 & 562949953421312L) != 0L) {
        i33 = -(i33 | -562949953421312L);
      } else {
        i33 = -(i33 & 562949953421311L);
      }

      if ((i33 & 562949953421312L) != 0L) {
        i55 = i33 | -562949953421312L;
      } else {
        i55 = i33 & 562949953421311L;
      }

      st.site = &l_emlrtRSI;
      b0 = call_custom_exp(i55);
      st.site = &l_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a2 < a1) {
        e_a2 = a1;
      } else {
        e_a2 = a2;
      }

      i33 = e_a2 << 13;
      i60 = b0;
      if ((i33 & 4611686018427387904L) != 0L) {
        i62 = i33 | -4611686018427387904L;
      } else {
        i62 = i33 & 4611686018427387903L;
      }

      if ((i60 & 4611686018427387904L) != 0L) {
        i64 = i60 | -4611686018427387904L;
      } else {
        i64 = i60 & 4611686018427387903L;
      }

      i33 = i62 + i64;
      if ((i33 & 4611686018427387904L) != 0L) {
        i66 = i33 | -4611686018427387904L;
      } else {
        i66 = i33 & 4611686018427387903L;
      }

      sp1 = (uint16_T)(i66 >> 7);
      i33 = b_a[1 + i4] << 7;
      i60 = g[5 + i6];
      if ((i33 & 36028797018963968L) != 0L) {
        i69 = i33 | -36028797018963968L;
      } else {
        i69 = i33 & 36028797018963967L;
      }

      if ((i60 & 36028797018963968L) != 0L) {
        i71 = i60 | -36028797018963968L;
      } else {
        i71 = i60 & 36028797018963967L;
      }

      i60 = i69 + i71;
      if ((i60 & 36028797018963968L) != 0L) {
        i60 |= -36028797018963968L;
      } else {
        i60 &= 36028797018963967L;
      }

      i72 = b[3 + itilerow] << 7;
      if ((i60 & 72057594037927936L) != 0L) {
        i73 = i60 | -72057594037927936L;
      } else {
        i73 = i60 & 72057594037927935L;
      }

      if ((i72 & 72057594037927936L) != 0L) {
        i74 = i72 | -72057594037927936L;
      } else {
        i74 = i72 & 72057594037927935L;
      }

      i60 = i73 + i74;
      if ((i60 & 72057594037927936L) != 0L) {
        i76 = i60 | -72057594037927936L;
      } else {
        i76 = i60 & 72057594037927935L;
      }

      i60 = i76 >> 7;
      if ((i60 & 140737488355328L) != 0L) {
        a2 = i60 | -140737488355328L;
      } else {
        a2 = i60 & 140737488355327L;
      }

      i60 = b_a[3 + i4] << 7;
      i77 = g[6 + i6];
      if ((i60 & 36028797018963968L) != 0L) {
        i79 = i60 | -36028797018963968L;
      } else {
        i79 = i60 & 36028797018963967L;
      }

      if ((i77 & 36028797018963968L) != 0L) {
        i81 = i77 | -36028797018963968L;
      } else {
        i81 = i77 & 36028797018963967L;
      }

      i77 = i79 + i81;
      if ((i77 & 36028797018963968L) != 0L) {
        i77 |= -36028797018963968L;
      } else {
        i77 &= 36028797018963967L;
      }

      i85 = b[2 + itilerow] << 7;
      if ((i77 & 72057594037927936L) != 0L) {
        i86 = i77 | -72057594037927936L;
      } else {
        i86 = i77 & 72057594037927935L;
      }

      if ((i85 & 72057594037927936L) != 0L) {
        i88 = i85 | -72057594037927936L;
      } else {
        i88 = i85 & 72057594037927935L;
      }

      i77 = i86 + i88;
      if ((i77 & 72057594037927936L) != 0L) {
        i91 = i77 | -72057594037927936L;
      } else {
        i91 = i77 & 72057594037927935L;
      }

      i77 = i91 >> 7;
      if ((i77 & 140737488355328L) != 0L) {
        a1 = i77 | -140737488355328L;
      } else {
        a1 = i77 & 140737488355327L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        h_a2 = a2 | -281474976710656L;
      } else {
        h_a2 = a2 & 281474976710655L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        k_a1 = a1 | -281474976710656L;
      } else {
        k_a1 = a1 & 281474976710655L;
      }

      i77 = h_a2 - k_a1;
      if ((i77 & 281474976710656L) != 0L) {
        xfi = i77 | -281474976710656L;
      } else {
        xfi = i77 & 281474976710655L;
      }

      i77 = -xfi;
      if (xfi < 0L) {
        if ((i77 & 281474976710656L) != 0L) {
          i77 |= -281474976710656L;
        } else {
          i77 &= 281474976710655L;
        }
      } else {
        i77 = xfi;
      }

      if ((i77 & 562949953421312L) != 0L) {
        i77 = -(i77 | -562949953421312L);
      } else {
        i77 = -(i77 & 562949953421311L);
      }

      if ((i77 & 562949953421312L) != 0L) {
        i101 = i77 | -562949953421312L;
      } else {
        i101 = i77 & 562949953421311L;
      }

      st.site = &m_emlrtRSI;
      b0 = call_custom_exp(i101);
      st.site = &m_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a2 < a1) {
        i_a2 = a1;
      } else {
        i_a2 = a2;
      }

      i77 = i_a2 << 13;
      a2 = b0;
      if ((i77 & 4611686018427387904L) != 0L) {
        i104 = i77 | -4611686018427387904L;
      } else {
        i104 = i77 & 4611686018427387903L;
      }

      if ((a2 & 4611686018427387904L) != 0L) {
        k_a2 = a2 | -4611686018427387904L;
      } else {
        k_a2 = a2 & 4611686018427387903L;
      }

      i77 = i104 + k_a2;
      if ((i77 & 4611686018427387904L) != 0L) {
        i105 = i77 | -4611686018427387904L;
      } else {
        i105 = i77 & 4611686018427387903L;
      }

      i77 = i105 >> 13;
      if ((i77 & 140737488355328L) != 0L) {
        a1 = i77 | -140737488355328L;
      } else {
        a1 = i77 & 140737488355327L;
      }

      i77 = sp1;
      a2 = a1 << 6;
      if ((i77 & 36028797018963968L) != 0L) {
        i107 = i77 | -36028797018963968L;
      } else {
        i107 = i77 & 36028797018963967L;
      }

      if ((a2 & 36028797018963968L) != 0L) {
        m_a2 = a2 | -36028797018963968L;
      } else {
        m_a2 = a2 & 36028797018963967L;
      }

      i77 = i107 - m_a2;
      if ((i77 & 36028797018963968L) != 0L) {
        xfi = i77 | -36028797018963968L;
      } else {
        xfi = i77 & 36028797018963967L;
      }

      st.site = &n_emlrtRSI;

      /*  */
      /*  Copyright 2019 The MathWorks, Inc. */
      /*  calculate replacement_custom_exp via lookup table between extents x = fi([-10000000059.5863,-0.023372547168087]), */
      /*  interpolation degree  = 1, number of points = 8192 */
      i77 = -xfi;
      if (xfi < 0L) {
        if ((i77 & 36028797018963968L) != 0L) {
          i77 |= -36028797018963968L;
        } else {
          i77 &= 36028797018963967L;
        }
      } else {
        i77 = xfi;
      }

      if ((i77 & 72057594037927936L) != 0L) {
        i77 = -(i77 | -72057594037927936L);
      } else {
        i77 = -(i77 & 72057594037927935L);
      }

      if ((i77 & 72057594037927936L) != 0L) {
        i77 |= -72057594037927936L;
      } else {
        i77 &= 72057594037927935L;
      }

      if ((i77 & 144115188075855872L) != 0L) {
        i116 = i77 | -144115188075855872L;
      } else {
        i116 = i77 & 144115188075855871L;
      }

      i77 = i116 - -1280000007628L;
      if ((i77 & 144115188075855872L) != 0L) {
        u0 = (uint64_T)(i77 | -144115188075855872L);
      } else {
        u0 = (uint64_T)(i77 & 144115188075855871L);
      }

      u1 = 123778891618413520UL;
      sMultiWordMul(&u0, 1, &u1, 1, &r0.chunks[0U], 2);
      sMultiWordShr(&r0.chunks[0U], 2, 77U, &r1.chunks[0U], 2);
      i4 = (int32_T)MultiWord2sLong(&r1.chunks[0U]);
      if ((i4 & 2097152) != 0) {
        x_idx = i4 | -2097152;
      } else {
        x_idx = i4 & 2097151;
      }

      b_LLR = (int16_T)(x_idx >> 7);
      if ((b_LLR & 16384) != 0) {
        idx_bot = (int16_T)(b_LLR | -16384);
      } else {
        idx_bot = (int16_T)(b_LLR & 16383);
      }

      if ((x_idx & 4194304) != 0) {
        b_x_idx = x_idx | -4194304;
      } else {
        b_x_idx = x_idx & 4194303;
      }

      i4 = b_x_idx + 128;
      if ((i4 & 4194304) != 0) {
        i4 |= -4194304;
      } else {
        i4 &= 4194303;
      }

      if ((i4 & 2097152) != 0) {
        x_idx = i4 | -2097152;
      } else {
        x_idx = i4 & 2097151;
      }

      if (idx_bot >= 8192) {
        idx_bot = 8191;
      } else {
        if (idx_bot <= 0) {
          idx_bot = 1;
        }
      }

      b_LLR = (int16_T)(idx_bot + 1);
      if ((x_idx & 4194304) != 0) {
        c_x_idx = x_idx | -4194304;
      } else {
        c_x_idx = x_idx & 4194303;
      }

      i4 = c_x_idx - (idx_bot << 7);
      if ((i4 & 4194304) != 0) {
        i128 = i4 | -4194304;
      } else {
        i128 = i4 & 4194303;
      }

      i77 = (int64_T)LUT[b_LLR - 1] * i128;
      if ((i77 & 274877906944L) != 0L) {
        xfi = i77 | -274877906944L;
      } else {
        xfi = i77 & 274877906943L;
      }

      if ((x_idx & 4194304) != 0) {
        d_x_idx = x_idx | -4194304;
      } else {
        d_x_idx = x_idx & 4194303;
      }

      i4 = (b_LLR << 7) - d_x_idx;
      if ((i4 & 4194304) != 0) {
        i130 = i4 | -4194304;
      } else {
        i130 = i4 & 4194303;
      }

      i77 = (int64_T)LUT[idx_bot - 1] * i130;
      if ((i77 & 274877906944L) != 0L) {
        b_b0 = i77 | -274877906944L;
      } else {
        b_b0 = i77 & 274877906943L;
      }

      i77 = sp1;
      if ((i77 & 9007199254740992L) != 0L) {
        x = i77 | -9007199254740992L;
      } else {
        x = i77 & 9007199254740991L;
      }

      i77 = a1 << 6;
      if ((i77 & 9007199254740992L) != 0L) {
        a2 = i77 | -9007199254740992L;
      } else {
        a2 = i77 & 9007199254740991L;
      }

      if ((xfi & 549755813888L) != 0L) {
        b_xfi = xfi | -549755813888L;
      } else {
        b_xfi = xfi & 549755813887L;
      }

      if ((b_b0 & 549755813888L) != 0L) {
        c_b0 = b_b0 | -549755813888L;
      } else {
        c_b0 = b_b0 & 549755813887L;
      }

      i77 = b_xfi + c_b0;
      if ((i77 & 549755813888L) != 0L) {
        i138 = i77 | -549755813888L;
      } else {
        i138 = i77 & 549755813887L;
      }

      st.site = &n_emlrtRSI;
      b0 = call_custom_log(16384U + (uint16_T)(i138 >> 7));
      if (x < a2) {
        b_x = a2;
      } else {
        b_x = x;
      }

      i77 = b_x << 7;
      a2 = b0;
      if ((i77 & 4611686018427387904L) != 0L) {
        i139 = i77 | -4611686018427387904L;
      } else {
        i139 = i77 & 4611686018427387903L;
      }

      if ((a2 & 4611686018427387904L) != 0L) {
        p_a2 = a2 | -4611686018427387904L;
      } else {
        p_a2 = a2 & 4611686018427387903L;
      }

      i77 = i139 + p_a2;
      if ((i77 & 4611686018427387904L) != 0L) {
        i140 = i77 | -4611686018427387904L;
      } else {
        i140 = i77 & 4611686018427387903L;
      }

      b_sp[i3] = (uint16_T)(i140 >> 8);
      i77 = g[1 + i6];
      if ((i5 & 36028797018963968L) != 0L) {
        i141 = i5 | -36028797018963968L;
      } else {
        i141 = i5 & 36028797018963967L;
      }

      if ((i77 & 36028797018963968L) != 0L) {
        i142 = i77 | -36028797018963968L;
      } else {
        i142 = i77 & 36028797018963967L;
      }

      i5 = i141 + i142;
      if ((i5 & 36028797018963968L) != 0L) {
        i5 |= -36028797018963968L;
      } else {
        i5 &= 36028797018963967L;
      }

      if ((i5 & 72057594037927936L) != 0L) {
        i143 = i5 | -72057594037927936L;
      } else {
        i143 = i5 & 72057594037927935L;
      }

      if ((i39 & 72057594037927936L) != 0L) {
        i144 = i39 | -72057594037927936L;
      } else {
        i144 = i39 & 72057594037927935L;
      }

      i5 = i143 + i144;
      if ((i5 & 72057594037927936L) != 0L) {
        i145 = i5 | -72057594037927936L;
      } else {
        i145 = i5 & 72057594037927935L;
      }

      i5 = i145 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[2 + i6];
      if ((i7 & 36028797018963968L) != 0L) {
        i146 = i7 | -36028797018963968L;
      } else {
        i146 = i7 & 36028797018963967L;
      }

      if ((i5 & 36028797018963968L) != 0L) {
        i147 = i5 | -36028797018963968L;
      } else {
        i147 = i5 & 36028797018963967L;
      }

      i5 = i146 + i147;
      if ((i5 & 36028797018963968L) != 0L) {
        i5 |= -36028797018963968L;
      } else {
        i5 &= 36028797018963967L;
      }

      if ((i5 & 72057594037927936L) != 0L) {
        i148 = i5 | -72057594037927936L;
      } else {
        i148 = i5 & 72057594037927935L;
      }

      if ((i22 & 72057594037927936L) != 0L) {
        i149 = i22 | -72057594037927936L;
      } else {
        i149 = i22 & 72057594037927935L;
      }

      i5 = i148 + i149;
      if ((i5 & 72057594037927936L) != 0L) {
        i150 = i5 | -72057594037927936L;
      } else {
        i150 = i5 & 72057594037927935L;
      }

      i5 = i150 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        t_a1 = a1 | -281474976710656L;
      } else {
        t_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        q_a2 = a2 | -281474976710656L;
      } else {
        q_a2 = a2 & 281474976710655L;
      }

      i5 = t_a1 - q_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i151 = i5 | -562949953421312L;
      } else {
        i151 = i5 & 562949953421311L;
      }

      st.site = &o_emlrtRSI;
      b0 = call_custom_exp(i151);
      st.site = &o_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        u_a1 = a2;
      } else {
        u_a1 = a1;
      }

      i5 = u_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i152 = i5 | -4611686018427387904L;
      } else {
        i152 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i153 = i7 | -4611686018427387904L;
      } else {
        i153 = i7 & 4611686018427387903L;
      }

      i5 = i152 + i153;
      if ((i5 & 4611686018427387904L) != 0L) {
        i154 = i5 | -4611686018427387904L;
      } else {
        i154 = i5 & 4611686018427387903L;
      }

      sp1 = (uint16_T)(i154 >> 8);
      i5 = g[4 + i6];
      if ((i33 & 36028797018963968L) != 0L) {
        i155 = i33 | -36028797018963968L;
      } else {
        i155 = i33 & 36028797018963967L;
      }

      if ((i5 & 36028797018963968L) != 0L) {
        i156 = i5 | -36028797018963968L;
      } else {
        i156 = i5 & 36028797018963967L;
      }

      i5 = i155 + i156;
      if ((i5 & 36028797018963968L) != 0L) {
        i5 |= -36028797018963968L;
      } else {
        i5 &= 36028797018963967L;
      }

      if ((i5 & 72057594037927936L) != 0L) {
        i157 = i5 | -72057594037927936L;
      } else {
        i157 = i5 & 72057594037927935L;
      }

      if ((i85 & 72057594037927936L) != 0L) {
        i158 = i85 | -72057594037927936L;
      } else {
        i158 = i85 & 72057594037927935L;
      }

      i5 = i157 + i158;
      if ((i5 & 72057594037927936L) != 0L) {
        i159 = i5 | -72057594037927936L;
      } else {
        i159 = i5 & 72057594037927935L;
      }

      i5 = i159 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a1 = i5 | -140737488355328L;
      } else {
        a1 = i5 & 140737488355327L;
      }

      i5 = g[7 + i6];
      if ((i60 & 36028797018963968L) != 0L) {
        i160 = i60 | -36028797018963968L;
      } else {
        i160 = i60 & 36028797018963967L;
      }

      if ((i5 & 36028797018963968L) != 0L) {
        i161 = i5 | -36028797018963968L;
      } else {
        i161 = i5 & 36028797018963967L;
      }

      i5 = i160 + i161;
      if ((i5 & 36028797018963968L) != 0L) {
        i5 |= -36028797018963968L;
      } else {
        i5 &= 36028797018963967L;
      }

      if ((i5 & 72057594037927936L) != 0L) {
        i162 = i5 | -72057594037927936L;
      } else {
        i162 = i5 & 72057594037927935L;
      }

      if ((i72 & 72057594037927936L) != 0L) {
        i163 = i72 | -72057594037927936L;
      } else {
        i163 = i72 & 72057594037927935L;
      }

      i5 = i162 + i163;
      if ((i5 & 72057594037927936L) != 0L) {
        i164 = i5 | -72057594037927936L;
      } else {
        i164 = i5 & 72057594037927935L;
      }

      i5 = i164 >> 7;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      if ((a1 & 281474976710656L) != 0L) {
        v_a1 = a1 | -281474976710656L;
      } else {
        v_a1 = a1 & 281474976710655L;
      }

      if ((a2 & 281474976710656L) != 0L) {
        r_a2 = a2 | -281474976710656L;
      } else {
        r_a2 = a2 & 281474976710655L;
      }

      i5 = v_a1 - r_a2;
      if ((i5 & 281474976710656L) != 0L) {
        xfi = i5 | -281474976710656L;
      } else {
        xfi = i5 & 281474976710655L;
      }

      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 281474976710656L) != 0L) {
          i5 |= -281474976710656L;
        } else {
          i5 &= 281474976710655L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 562949953421312L) != 0L) {
        i5 = -(i5 | -562949953421312L);
      } else {
        i5 = -(i5 & 562949953421311L);
      }

      if ((i5 & 562949953421312L) != 0L) {
        i165 = i5 | -562949953421312L;
      } else {
        i165 = i5 & 562949953421311L;
      }

      st.site = &p_emlrtRSI;
      b0 = call_custom_exp(i165);
      st.site = &p_emlrtRSI;
      b0 = call_custom_log(16384U + b0);
      if (a1 < a2) {
        w_a1 = a2;
      } else {
        w_a1 = a1;
      }

      i5 = w_a1 << 13;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i166 = i5 | -4611686018427387904L;
      } else {
        i166 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i167 = i7 | -4611686018427387904L;
      } else {
        i167 = i7 & 4611686018427387903L;
      }

      i5 = i166 + i167;
      if ((i5 & 4611686018427387904L) != 0L) {
        i168 = i5 | -4611686018427387904L;
      } else {
        i168 = i5 & 4611686018427387903L;
      }

      i5 = i168 >> 13;
      if ((i5 & 140737488355328L) != 0L) {
        a2 = i5 | -140737488355328L;
      } else {
        a2 = i5 & 140737488355327L;
      }

      i5 = sp1;
      i7 = a2 << 5;
      if ((i5 & 18014398509481984L) != 0L) {
        i169 = i5 | -18014398509481984L;
      } else {
        i169 = i5 & 18014398509481983L;
      }

      if ((i7 & 18014398509481984L) != 0L) {
        i170 = i7 | -18014398509481984L;
      } else {
        i170 = i7 & 18014398509481983L;
      }

      i5 = i169 - i170;
      if ((i5 & 18014398509481984L) != 0L) {
        xfi = i5 | -18014398509481984L;
      } else {
        xfi = i5 & 18014398509481983L;
      }

      st.site = &q_emlrtRSI;

      /*  */
      /*  Copyright 2019 The MathWorks, Inc. */
      /*  calculate replacement_custom_exp via lookup table between extents x = fi([-10000000059.5863,-0.023372547168087]), */
      /*  interpolation degree  = 1, number of points = 8192 */
      i5 = -xfi;
      if (xfi < 0L) {
        if ((i5 & 18014398509481984L) != 0L) {
          i5 |= -18014398509481984L;
        } else {
          i5 &= 18014398509481983L;
        }
      } else {
        i5 = xfi;
      }

      if ((i5 & 36028797018963968L) != 0L) {
        i5 = -(i5 | -36028797018963968L);
      } else {
        i5 = -(i5 & 36028797018963967L);
      }

      if ((i5 & 36028797018963968L) != 0L) {
        i5 |= -36028797018963968L;
      } else {
        i5 &= 36028797018963967L;
      }

      if ((i5 & 72057594037927936L) != 0L) {
        i171 = i5 | -72057594037927936L;
      } else {
        i171 = i5 & 72057594037927935L;
      }

      i5 = i171 - -640000003814L;
      if ((i5 & 72057594037927936L) != 0L) {
        u0 = (uint64_T)(i5 | -72057594037927936L);
      } else {
        u0 = (uint64_T)(i5 & 72057594037927935L);
      }

      u1 = 61889445809206760UL;
      sMultiWordMul(&u0, 1, &u1, 1, &b_r2.chunks[0U], 2);
      sMultiWordShr(&b_r2.chunks[0U], 2, 75U, &r0.chunks[0U], 2);
      i4 = (int32_T)MultiWord2sLong(&r0.chunks[0U]);
      if ((i4 & 2097152) != 0) {
        x_idx = i4 | -2097152;
      } else {
        x_idx = i4 & 2097151;
      }

      b_LLR = (int16_T)(x_idx >> 7);
      if ((b_LLR & 16384) != 0) {
        idx_bot = (int16_T)(b_LLR | -16384);
      } else {
        idx_bot = (int16_T)(b_LLR & 16383);
      }

      if ((x_idx & 4194304) != 0) {
        e_x_idx = x_idx | -4194304;
      } else {
        e_x_idx = x_idx & 4194303;
      }

      i4 = e_x_idx + 128;
      if ((i4 & 4194304) != 0) {
        i4 |= -4194304;
      } else {
        i4 &= 4194303;
      }

      if ((i4 & 2097152) != 0) {
        x_idx = i4 | -2097152;
      } else {
        x_idx = i4 & 2097151;
      }

      if (idx_bot >= 8192) {
        idx_bot = 8191;
      } else {
        if (idx_bot <= 0) {
          idx_bot = 1;
        }
      }

      b_LLR = (int16_T)(idx_bot + 1);
      if ((x_idx & 4194304) != 0) {
        f_x_idx = x_idx | -4194304;
      } else {
        f_x_idx = x_idx & 4194303;
      }

      i4 = f_x_idx - (idx_bot << 7);
      if ((i4 & 4194304) != 0) {
        i172 = i4 | -4194304;
      } else {
        i172 = i4 & 4194303;
      }

      i5 = (int64_T)LUT[b_LLR - 1] * i172;
      if ((i5 & 274877906944L) != 0L) {
        xfi = i5 | -274877906944L;
      } else {
        xfi = i5 & 274877906943L;
      }

      if ((x_idx & 4194304) != 0) {
        g_x_idx = x_idx | -4194304;
      } else {
        g_x_idx = x_idx & 4194303;
      }

      i4 = (b_LLR << 7) - g_x_idx;
      if ((i4 & 4194304) != 0) {
        i173 = i4 | -4194304;
      } else {
        i173 = i4 & 4194303;
      }

      i5 = (int64_T)LUT[idx_bot - 1] * i173;
      if ((i5 & 274877906944L) != 0L) {
        b_b0 = i5 | -274877906944L;
      } else {
        b_b0 = i5 & 274877906943L;
      }

      i5 = sp1;
      if ((i5 & 4503599627370496L) != 0L) {
        x = i5 | -4503599627370496L;
      } else {
        x = i5 & 4503599627370495L;
      }

      i5 = a2 << 5;
      if ((i5 & 4503599627370496L) != 0L) {
        a2 = i5 | -4503599627370496L;
      } else {
        a2 = i5 & 4503599627370495L;
      }

      if ((xfi & 549755813888L) != 0L) {
        c_xfi = xfi | -549755813888L;
      } else {
        c_xfi = xfi & 549755813887L;
      }

      if ((b_b0 & 549755813888L) != 0L) {
        d_b0 = b_b0 | -549755813888L;
      } else {
        d_b0 = b_b0 & 549755813887L;
      }

      i5 = c_xfi + d_b0;
      if ((i5 & 549755813888L) != 0L) {
        i174 = i5 | -549755813888L;
      } else {
        i174 = i5 & 549755813887L;
      }

      st.site = &q_emlrtRSI;
      b0 = call_custom_log(16384U + (uint16_T)(i174 >> 7));
      if (x < a2) {
        c_x = a2;
      } else {
        c_x = x;
      }

      i5 = c_x << 8;
      i7 = b0;
      if ((i5 & 4611686018427387904L) != 0L) {
        i175 = i5 | -4611686018427387904L;
      } else {
        i175 = i5 & 4611686018427387903L;
      }

      if ((i7 & 4611686018427387904L) != 0L) {
        i176 = i7 | -4611686018427387904L;
      } else {
        i176 = i7 & 4611686018427387903L;
      }

      i5 = i175 + i176;
      if ((i5 & 4611686018427387904L) != 0L) {
        i177 = i5 | -4611686018427387904L;
      } else {
        i177 = i5 & 4611686018427387903L;
      }

      sm[i3] = (uint16_T)(i177 >> 8);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*  a1 = a(1,:); */
    /*  a2 = a(2,:); */
    /*  a3 = a(3,:); */
    /*  a4 = a(4,:); */
    /*  */
    /*  b1 = b(1,:); */
    /*  b2 = b(2,:); */
    /*  b3 = b(3,:); */
    /*  b4 = b(4,:); */
    /*  */
    /*  g1 = g(1,:); */
    /*  g2 = g(2,:); */
    /*  g3 = g(3,:); */
    /*  g4 = g(4,:); */
    /*  g5 = g(5,:); */
    /*  g6 = g(6,:); */
    /*  g7 = g(7,:); */
    /*  g8 = g(8,:); */
    /*  comupte Le. */
    /* logmap function end */
    /*      %hdl coder doesn't like functions with arrays for io */
    /*      [LLR,a1,a2,a3,a4,b1,b2,b3,b4,g1,g2,g3,g4,g5,g6,g7,g8,Le] = hdl_logmap(r,Le,Lc_logmap);               % logmap algorithm */
    /*  */
    /*      a = [a1; a2 ;a3; a4]; */
    /*      b = [b1; b2; b3; b4]; */
    /*      g = [g1; g2; g3; g4; g5; g6; g7; g8]; */
    for (x_idx = 0; x_idx < 8; x_idx++) {
      i3 = b_sp[x_idx] - sm[x_idx];
      if ((i3 & 262144) != 0) {
        b_LLR = (int16_T)(i3 | -262144);
      } else {
        b_LLR = (int16_T)(i3 & 262143);
      }

      S = 0;
      if (b_LLR > 0) {
        S = 1;
      } else {
        if (b_LLR < 0) {
          S = -1;
        }
      }

      dec_out[x_idx] = S;
      LLR[x_idx] = b_LLR;
      i5 = (int64_T)b_LLR << 16;
      i7 = Lc * r_temp2[x_idx << 1];
      if ((i5 & 4294967296L) != 0L) {
        i36 = i5 | -4294967296L;
      } else {
        i36 = i5 & 4294967295L;
      }

      if ((i7 & 4294967296L) != 0L) {
        i37 = i7 | -4294967296L;
      } else {
        i37 = i7 & 4294967295L;
      }

      i5 = i36 - i37;
      if ((i5 & 4294967296L) != 0L) {
        i5 |= -4294967296L;
      } else {
        i5 &= 4294967295L;
      }

      i7 = (int64_T)Le[x_idx] << 15;
      if ((i5 & 8589934592L) != 0L) {
        i43 = i5 | -8589934592L;
      } else {
        i43 = i5 & 8589934591L;
      }

      if ((i7 & 8589934592L) != 0L) {
        i46 = i7 | -8589934592L;
      } else {
        i46 = i7 & 8589934591L;
      }

      i5 = i43 - i46;
      if ((i5 & 8589934592L) != 0L) {
        i48 = i5 | -8589934592L;
      } else {
        i48 = i5 & 8589934591L;
      }

      Le[x_idx] = (int16_T)(i48 >> 15);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /* [LLR,a,b,g,Le] = maxlogmap(r,Le,Lc);            % maxlogmap algorithm */
  /*  end */
  st.site = &r_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  b_tbcdec_fixpt_logger(&b_st, r1_1, r2_1, r3, iter, intlv, Lc, dec_out, LLR);
}

/* End of code generation (tbcdec_fixpt.c) */

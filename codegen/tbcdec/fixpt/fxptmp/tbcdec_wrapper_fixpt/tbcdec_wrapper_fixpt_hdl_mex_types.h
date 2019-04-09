/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tbcdec_wrapper_fixpt_hdl_mex_types.h
 *
 * Code generation for function 'tbcdec_wrapper_fixpt'
 *
 */

#ifndef TBCDEC_WRAPPER_FIXPT_HDL_MEX_TYPES_H
#define TBCDEC_WRAPPER_FIXPT_HDL_MEX_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_int16_T
#define struct_emxArray_int16_T

struct emxArray_int16_T
{
  int16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int16_T*/

#ifndef typedef_emxArray_int16_T
#define typedef_emxArray_int16_T

typedef struct emxArray_int16_T emxArray_int16_T;

#endif                                 /*typedef_emxArray_int16_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef struct_emxArray_uint16_T
#define struct_emxArray_uint16_T

struct emxArray_uint16_T
{
  uint16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint16_T*/

#ifndef typedef_emxArray_uint16_T
#define typedef_emxArray_uint16_T

typedef struct emxArray_uint16_T emxArray_uint16_T;

#endif                                 /*typedef_emxArray_uint16_T*/

#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T

struct emxArray_uint8_T
{
  uint8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint8_T*/

#ifndef typedef_emxArray_uint8_T
#define typedef_emxArray_uint8_T

typedef struct emxArray_uint8_T emxArray_uint8_T;

#endif                                 /*typedef_emxArray_uint8_T*/

#ifndef typedef_int128m_T
#define typedef_int128m_T

typedef struct {
  uint64_T chunks[2];
} int128m_T;

#endif                                 /*typedef_int128m_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  emxArray_int16_T *r1_1;
  emxArray_int16_T *r2_1;
  emxArray_int16_T *r3;
  emxArray_uint8_T *iter;
  emxArray_uint8_T *intlv;
  emxArray_uint16_T *Lc;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  emxArray_int8_T *dec_out;
  emxArray_int16_T *LLR;
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  struct1_T inputs;
  struct2_T outputs;
  real_T iterCount;
} struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/* End of code generation (tbcdec_wrapper_fixpt_hdl_mex_types.h) */

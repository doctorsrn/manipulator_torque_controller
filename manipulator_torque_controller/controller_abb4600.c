/*
 * File: controller_abb4600.c
 *
 * Code generated for Simulink model 'controller_abb4600'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Apr 17 23:40:15 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "controller_abb4600.h"
#include "controller_abb4600_private.h"

/* Real-time model */
RT_MODEL_controller_abb4600_T controller_abb4600_M_;
RT_MODEL_controller_abb4600_T *const controller_abb4600_M =
  &controller_abb4600_M_;

/* Forward declaration for local functions */
static void controller_abb46_emxInit_char_T(emxArray_char_T_controller_ab_T
  **pEmxArray, int32_T numDimensions);
static void controller_abb46_emxInit_real_T(emxArray_real_T_controller_ab_T
  **pEmxArray, int32_T numDimensions);
static void co_emxInitStruct_robotics_Joint(robotics_Joint_controller_abb_T
  *pStruct);
static void emxInitStruct_c_robotics_manip_(c_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_d_robotics_manip_(d_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_e_robotics_mani_e(e_robotics_manip_internal_R_a_T
  *pStruct);
static void contro_emxEnsureCapacity_char_T(emxArray_char_T_controller_ab_T
  *emxArray, int32_T oldNumel);
static boolean_T controller_abb4600_strcmp(const emxArray_char_T_controller_ab_T
  *a);
static boolean_T controller_abb4600_strcmp_f(const
  emxArray_char_T_controller_ab_T *a);
static void controller_abb46_emxFree_char_T(emxArray_char_T_controller_ab_T
  **pEmxArray);
static void contro_emxEnsureCapacity_real_T(emxArray_real_T_controller_ab_T
  *emxArray, int32_T oldNumel);
static void controller_abb46_Joint_Joint_go(robotics_Joint_controller_abb_T
  **obj, const char_T jtype_data[], const int32_T jtype_size[2]);
static robotics_Joint_controller_abb_T *controller_abb460_Joint_Joint_g
  (robotics_Joint_controller_abb_T *obj, const char_T jtype_data[], const
   int32_T jtype_size[2]);
static void controlle_RigidBody_RigidBody_j(c_robotics_manip_internal_Rig_T
  **obj, real_T input1_ParentIndex, const real_T input1_SpatialInertia[36],
  uint8_T input2_Type, real_T input2_NameLength, const uint8_T input2_Name[14],
  real_T input2_VelocityNumber, const real_T input2_MotionSubspace[36], const
  real_T input2_JointAxis[3], const real_T input2_JointToParentTransform[16],
  const real_T input2_ChildToJointTransform[16]);
static void controller__emxInit_cell_wrap_7(emxArray_cell_wrap_7_controll_T
  **pEmxArray, int32_T numDimensions);
static void c_emxEnsureCapacity_cell_wrap_7(emxArray_cell_wrap_7_controll_T
  *emxArray, int32_T oldNumel);
static void controller_abb46_emxFree_real_T(emxArray_real_T_controller_ab_T
  **pEmxArray);
static void controller__emxFree_cell_wrap_7(emxArray_cell_wrap_7_controll_T
  **pEmxArray);
static boolean_T controller_abb4600_strcmp_f3(const
  emxArray_char_T_controller_ab_T *a);
static void controller_abb460_normalizeRows(const real_T matrix[3], real_T
  normRowMatrix[3]);
static void controller_abb4600_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void controller_abb4600_permute(const real_T a[9], real_T b[9]);
static void con_Joint_transformBodyToParent(const
  robotics_Joint_controller_abb_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16]);
static void c_Joint_transformBodyToParent_g(const
  robotics_Joint_controller_abb_T *obj, real_T T[16]);
static void controller_abb4600_tforminv(const real_T T[16], real_T Tinv[16]);
static void controller__tformToSpatialXform(const real_T T[16], real_T X[36]);
static void RigidBodyTreeDynamics_massMatri(const
  e_robotics_manip_internal_Rig_T *robot, const real_T q_1[6],
  emxArray_real_T_controller_ab_T *H);
static void controller_abb460_Joint_Joint_i(robotics_Joint_controller_abb_T
  **obj, const char_T jtype_data[], const int32_T jtype_size[2]);
static robotics_Joint_controller_abb_T *controller_abb4600_Joint_Joint
  (robotics_Joint_controller_abb_T *obj, const char_T jtype_data[], const
   int32_T jtype_size[2]);
static void controller__RigidBody_RigidBody(c_robotics_manip_internal_Rig_T
  **obj, real_T input1_ParentIndex, const real_T input1_SpatialInertia[36],
  uint8_T input2_Type, real_T input2_NameLength, const uint8_T input2_Name[14],
  real_T input2_VelocityNumber, const real_T input2_MotionSubspace[36], const
  real_T input2_JointAxis[3], const real_T input2_JointToParentTransform[16],
  const real_T input2_ChildToJointTransform[16]);
static void controller_abb4600_eye(real_T I[36]);
static void RigidBodyTreeDynamics_inverseDy(const
  e_robotics_manip_internal_R_a_T *robot, const real_T q_0[6], const real_T
  qddot[6], real_T tau[6]);
static void RigidBodyTreeDynamics_inverse_o(const
  e_robotics_manip_internal_R_a_T *robot, const real_T q_2[6], const real_T
  qdot[6], const real_T qddot[6], real_T tau[6]);
static void controller_abb_emxInit_real32_T(emxArray_real32_T_controller__T
  **pEmxArray, int32_T numDimensions);
static void cont_emxEnsureCapacity_real32_T(emxArray_real32_T_controller__T
  *emxArray, int32_T oldNumel);
static void controller_abb_emxFree_real32_T(emxArray_real32_T_controller__T
  **pEmxArray);
static void co_emxFreeStruct_robotics_Joint(robotics_Joint_controller_abb_T
  *pStruct);
static void emxFreeStruct_d_robotics_manip_(d_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_e_robotics_mani_e(e_robotics_manip_internal_R_a_T
  *pStruct);
static void emxFreeStruct_c_robotics_manip_(c_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct);
static void controller_abb46_emxInit_char_T(emxArray_char_T_controller_ab_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T_controller_ab_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T_controller_ab_T *)malloc(sizeof
    (emxArray_char_T_controller_ab_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void controller_abb46_emxInit_real_T(emxArray_real_T_controller_ab_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_controller_ab_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_controller_ab_T *)malloc(sizeof
    (emxArray_real_T_controller_ab_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void co_emxInitStruct_robotics_Joint(robotics_Joint_controller_abb_T
  *pStruct)
{
  controller_abb46_emxInit_char_T(&pStruct->Type, 2);
  controller_abb46_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_c_robotics_manip_(c_robotics_manip_internal_Rig_T
  *pStruct)
{
  co_emxInitStruct_robotics_Joint(&pStruct->JointInternal);
}

static void emxInitStruct_d_robotics_manip_(d_robotics_manip_internal_Rig_T
  *pStruct)
{
  co_emxInitStruct_robotics_Joint(&pStruct->JointInternal);
}

static void emxInitStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_d_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_e_robotics_mani_e(e_robotics_manip_internal_R_a_T
  *pStruct)
{
  emxInitStruct_d_robotics_manip_(&pStruct->Base);
}

static void contro_emxEnsureCapacity_char_T(emxArray_char_T_controller_ab_T
  *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static boolean_T controller_abb4600_strcmp(const emxArray_char_T_controller_ab_T
  *a)
{
  boolean_T b_bool;
  int32_T kstr;
  static const char_T b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  b_bool = false;
  if (a->size[1] == 8) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr + 1 < 9) {
        if (a->data[kstr] != b[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static boolean_T controller_abb4600_strcmp_f(const
  emxArray_char_T_controller_ab_T *a)
{
  boolean_T b_bool;
  int32_T kstr;
  static const char_T b[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  b_bool = false;
  if (a->size[1] == 9) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr + 1 < 10) {
        if (a->data[kstr] != b[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void controller_abb46_emxFree_char_T(emxArray_char_T_controller_ab_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_controller_ab_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_char_T_controller_ab_T *)NULL;
  }
}

static void contro_emxEnsureCapacity_real_T(emxArray_real_T_controller_ab_T
  *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/* Function for MATLAB Function: '<S3>/MATLAB Function' */
static void controller_abb46_Joint_Joint_go(robotics_Joint_controller_abb_T
  **obj, const char_T jtype_data[], const int32_T jtype_size[2])
{
  int8_T msubspace_data[36];
  char_T partial_match_data[9];
  boolean_T matched;
  int32_T ns;
  int32_T minnanb;
  boolean_T c_bool;
  int32_T b_minnanb;
  emxArray_char_T_controller_ab_T *switch_expression;
  static const char_T vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const int8_T d[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T e[6] = { 0, 0, 1, 0, 0, 0 };

  static const char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c'
  };

  static const char_T c_vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T f[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  static const char_T g[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T h[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T i[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T partial_match_size_idx_1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  int32_T exitg1;
  boolean_T guard11 = false;
  partial_match_size_idx_1 = 0;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if (jtype_size[1] <= 8) {
    ns = jtype_size[1];
    matched = false;
    minnanb = jtype_size[1];
    guard11 = false;
    if (ns <= minnanb) {
      if (minnanb < ns) {
        ns = minnanb;
      }

      guard11 = true;
    } else {
      if (jtype_size[1] == 8) {
        ns = 8;
        guard11 = true;
      }
    }

    if (guard11) {
      minnanb = 0;
      do {
        exitg1 = 0;
        if (minnanb + 1 <= ns) {
          if (f[(uint8_T)jtype_data[minnanb]] != f[(int32_T)g[minnanb]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          matched = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (matched) {
      if (jtype_size[1] == 8) {
        ns = 1;
        partial_match_size_idx_1 = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          partial_match_data[minnanb] = c_vstr[minnanb];
        }
      } else {
        partial_match_size_idx_1 = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          partial_match_data[minnanb] = c_vstr[minnanb];
        }

        matched = true;
        ns = 1;
        guard3 = true;
      }
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    matched = false;
    ns = 0;
    guard3 = true;
  }

  if (guard3) {
    minnanb = jtype_size[1];
    c_bool = false;
    if (jtype_size[1] < 9) {
      b_minnanb = jtype_size[1];
    } else {
      b_minnanb = 9;
    }

    guard11 = false;
    if (minnanb <= b_minnanb) {
      if (b_minnanb < minnanb) {
        minnanb = b_minnanb;
      }

      guard11 = true;
    } else {
      if (jtype_size[1] == 9) {
        minnanb = 9;
        guard11 = true;
      }
    }

    if (guard11) {
      b_minnanb = 0;
      do {
        exitg1 = 0;
        if (b_minnanb + 1 <= minnanb) {
          if (f[(uint8_T)jtype_data[b_minnanb]] != f[(int32_T)h[b_minnanb]]) {
            exitg1 = 1;
          } else {
            b_minnanb++;
          }
        } else {
          c_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (c_bool) {
      if (jtype_size[1] == 9) {
        ns = 1;
        partial_match_size_idx_1 = 9;
        for (minnanb = 0; minnanb < 9; minnanb++) {
          partial_match_data[minnanb] = b_vstr[minnanb];
        }
      } else {
        if (!matched) {
          partial_match_size_idx_1 = 9;
          for (minnanb = 0; minnanb < 9; minnanb++) {
            partial_match_data[minnanb] = b_vstr[minnanb];
          }
        }

        ns++;
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (jtype_size[1] <= 5) {
      matched = false;
      minnanb = 0;
      do {
        exitg1 = 0;
        if (minnanb + 1 <= 5) {
          if (f[(uint8_T)jtype_data[minnanb]] != f[(int32_T)i[minnanb]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          matched = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (matched) {
        ns = 1;
        partial_match_size_idx_1 = 5;
        for (minnanb = 0; minnanb < 5; minnanb++) {
          partial_match_data[minnanb] = vstr[minnanb];
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (ns == 0) {
      partial_match_size_idx_1 = 0;
    }
  }

  if (ns == 0) {
    partial_match_size_idx_1 = 0;
  }

  minnanb = (*obj)->Type->size[0] * (*obj)->Type->size[1];
  (*obj)->Type->size[0] = 1;
  (*obj)->Type->size[1] = partial_match_size_idx_1;
  contro_emxEnsureCapacity_char_T((*obj)->Type, minnanb);
  partial_match_size_idx_1--;
  for (minnanb = 0; minnanb <= partial_match_size_idx_1; minnanb++) {
    (*obj)->Type->data[minnanb] = partial_match_data[minnanb];
  }

  controller_abb46_emxInit_char_T(&switch_expression, 2);
  minnanb = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = (*obj)->Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, minnanb);
  minnanb = (*obj)->Type->size[0] * (*obj)->Type->size[1];
  partial_match_size_idx_1 = minnanb - 1;
  for (minnanb = 0; minnanb <= partial_match_size_idx_1; minnanb++) {
    switch_expression->data[minnanb] = (*obj)->Type->data[minnanb];
  }

  if (controller_abb4600_strcmp(switch_expression)) {
    minnanb = 0;
  } else if (controller_abb4600_strcmp_f(switch_expression)) {
    minnanb = 1;
  } else {
    minnanb = -1;
  }

  switch (minnanb) {
   case 0:
    for (minnanb = 0; minnanb < 6; minnanb++) {
      msubspace_data[minnanb] = e[minnanb];
    }

    (*obj)->JointAxisInternal[0] = 0.0;
    (*obj)->JointAxisInternal[1] = 0.0;
    (*obj)->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (minnanb = 0; minnanb < 6; minnanb++) {
      msubspace_data[minnanb] = d[minnanb];
    }

    (*obj)->JointAxisInternal[0] = 0.0;
    (*obj)->JointAxisInternal[1] = 0.0;
    (*obj)->JointAxisInternal[2] = 1.0;
    break;

   default:
    for (minnanb = 0; minnanb < 6; minnanb++) {
      msubspace_data[minnanb] = 0;
    }

    (*obj)->JointAxisInternal[0] = 0.0;
    (*obj)->JointAxisInternal[1] = 0.0;
    (*obj)->JointAxisInternal[2] = 0.0;
    break;
  }

  controller_abb46_emxFree_char_T(&switch_expression);
  minnanb = (*obj)->MotionSubspace->size[0] * (*obj)->MotionSubspace->size[1];
  (*obj)->MotionSubspace->size[0] = 6;
  (*obj)->MotionSubspace->size[1] = 1;
  contro_emxEnsureCapacity_real_T((*obj)->MotionSubspace, minnanb);
  for (minnanb = 0; minnanb < 6; minnanb++) {
    (*obj)->MotionSubspace->data[minnanb] = msubspace_data[minnanb];
  }
}

/* Function for MATLAB Function: '<S3>/MATLAB Function' */
static robotics_Joint_controller_abb_T *controller_abb460_Joint_Joint_g
  (robotics_Joint_controller_abb_T *obj, const char_T jtype_data[], const
   int32_T jtype_size[2])
{
  robotics_Joint_controller_abb_T *b_obj;
  b_obj = obj;
  controller_abb46_Joint_Joint_go(&b_obj, jtype_data, jtype_size);
  return b_obj;
}

/* Function for MATLAB Function: '<S3>/MATLAB Function' */
static void controlle_RigidBody_RigidBody_j(c_robotics_manip_internal_Rig_T
  **obj, real_T input1_ParentIndex, const real_T input1_SpatialInertia[36],
  uint8_T input2_Type, real_T input2_NameLength, const uint8_T input2_Name[14],
  real_T input2_VelocityNumber, const real_T input2_MotionSubspace[36], const
  real_T input2_JointAxis[3], const real_T input2_JointToParentTransform[16],
  const real_T input2_ChildToJointTransform[16])
{
  char_T type_data[9];
  int32_T b;
  static const char_T c[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T d[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T e[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  char_T input2_Name_data[14];
  uint8_T input2_Name_data_0[14];
  char_T input2_Name_data_1[14];
  real_T tmp;
  int32_T i;
  int32_T type_size[2];
  int32_T i_0;
  (*obj)->ParentIndex = input1_ParentIndex;
  for (i_0 = 0; i_0 < 36; i_0++) {
    (*obj)->SpatialInertia[i_0] = input1_SpatialInertia[i_0];
  }

  switch (input2_Type) {
   case 0:
    type_size[0] = 1;
    type_size[1] = 5;
    for (i_0 = 0; i_0 < 5; i_0++) {
      type_data[i_0] = d[i_0];
    }
    break;

   case 1:
    type_size[0] = 1;
    type_size[1] = 8;
    for (i_0 = 0; i_0 < 8; i_0++) {
      type_data[i_0] = e[i_0];
    }
    break;

   default:
    type_size[0] = 1;
    type_size[1] = 9;
    for (i_0 = 0; i_0 < 9; i_0++) {
      type_data[i_0] = c[i_0];
    }
    break;
  }

  if (1.0 > input2_NameLength) {
    b = 0;
  } else {
    b = (int32_T)input2_NameLength;
  }

  if (0 <= b - 1) {
    memcpy(&input2_Name_data_0[0], &input2_Name[0], b * sizeof(uint8_T));
  }

  for (i_0 = 0; i_0 < b; i_0++) {
    input2_Name_data_1[i_0] = (int8_T)input2_Name_data_0[i_0];
  }

  i_0 = (int8_T)b;
  if (0 <= i_0 - 1) {
    memcpy(&input2_Name_data[0], &input2_Name_data_1[0], i_0 * sizeof(char_T));
  }

  controller_abb460_Joint_Joint_g(&(*obj)->JointInternal, type_data, type_size);
  for (i_0 = 0; i_0 < 16; i_0++) {
    (*obj)->JointInternal.JointToParentTransform[i_0] =
      input2_JointToParentTransform[i_0];
  }

  for (i_0 = 0; i_0 < 16; i_0++) {
    (*obj)->JointInternal.ChildToJointTransform[i_0] =
      input2_ChildToJointTransform[i_0];
  }

  tmp = fmax(1.0, input2_VelocityNumber);
  i_0 = (*obj)->JointInternal.MotionSubspace->size[0] * (*obj)
    ->JointInternal.MotionSubspace->size[1];
  (*obj)->JointInternal.MotionSubspace->size[0] = 6;
  (*obj)->JointInternal.MotionSubspace->size[1] = (int32_T)tmp;
  contro_emxEnsureCapacity_real_T((*obj)->JointInternal.MotionSubspace, i_0);
  b = (int32_T)tmp;
  for (i_0 = 0; i_0 < b; i_0++) {
    for (i = 0; i < 6; i++) {
      (*obj)->JointInternal.MotionSubspace->data[i + (*obj)
        ->JointInternal.MotionSubspace->size[0] * i_0] = input2_MotionSubspace[6
        * i_0 + i];
    }
  }

  (*obj)->JointInternal.JointAxisInternal[0] = input2_JointAxis[0];
  (*obj)->JointInternal.JointAxisInternal[1] = input2_JointAxis[1];
  (*obj)->JointInternal.JointAxisInternal[2] = input2_JointAxis[2];
}

static void controller__emxInit_cell_wrap_7(emxArray_cell_wrap_7_controll_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_cell_wrap_7_controll_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_cell_wrap_7_controll_T *)malloc(sizeof
    (emxArray_cell_wrap_7_controll_T));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_7_controller_abb460_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void c_emxEnsureCapacity_cell_wrap_7(emxArray_cell_wrap_7_controll_T
  *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(cell_wrap_7_controller_abb460_T));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof
             (cell_wrap_7_controller_abb460_T) * oldNumel);
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (cell_wrap_7_controller_abb460_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void controller_abb46_emxFree_real_T(emxArray_real_T_controller_ab_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_controller_ab_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T_controller_ab_T *)NULL;
  }
}

static void controller__emxFree_cell_wrap_7(emxArray_cell_wrap_7_controll_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_cell_wrap_7_controll_T *)NULL) {
    if (((*pEmxArray)->data != (cell_wrap_7_controller_abb460_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_7_controll_T *)NULL;
  }
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static boolean_T controller_abb4600_strcmp_f3(const
  emxArray_char_T_controller_ab_T *a)
{
  boolean_T b_bool;
  int32_T kstr;
  static const char_T b[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  b_bool = false;
  if (a->size[1] == 5) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr + 1 < 6) {
        if (a->data[kstr] != b[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void controller_abb460_normalizeRows(const real_T matrix[3], real_T
  normRowMatrix[3])
{
  real_T z;
  z = 1.0 / sqrt((matrix[0] * matrix[0] + matrix[1] * matrix[1]) + matrix[2] *
                 matrix[2]);
  normRowMatrix[0] = matrix[0] * z;
  normRowMatrix[1] = matrix[1] * z;
  normRowMatrix[2] = matrix[2] * z;
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void controller_abb4600_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void controller_abb4600_permute(const real_T a[9], real_T b[9])
{
  int32_T k;
  int8_T subsa_idx_1;
  int32_T b_tmp;
  for (k = 0; k < 3; k++) {
    b_tmp = (int8_T)(k + 1) - 1;
    b[b_tmp] = a[b_tmp * 3];
    subsa_idx_1 = (int8_T)(k + 1);
    b[subsa_idx_1 + 2] = a[(subsa_idx_1 - 1) * 3 + 1];
    subsa_idx_1 = (int8_T)(k + 1);
    b[subsa_idx_1 + 5] = a[(subsa_idx_1 - 1) * 3 + 2];
  }
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void con_Joint_transformBodyToParent(const
  robotics_Joint_controller_abb_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16])
{
  real_T TJ[16];
  real_T v[3];
  int8_T I[9];
  real_T c_result_data[4];
  real_T cth;
  real_T sth;
  real_T tmp[9];
  real_T tmp_0[9];
  int32_T loop_ub;
  boolean_T tmp_1;
  boolean_T tmp_2;
  real_T obj_0[16];
  int32_T i;
  if (controller_abb4600_strcmp_f3(obj->Type)) {
    loop_ub = 0;
  } else if (controller_abb4600_strcmp(obj->Type)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    memset(&TJ[0], 0, sizeof(real_T) << 4U);
    TJ[0] = 1.0;
    TJ[5] = 1.0;
    TJ[10] = 1.0;
    TJ[15] = 1.0;
    break;

   case 1:
    loop_ub = !(*q_size == 0) - 1;
    tmp_1 = controller_abb4600_strcmp(obj->Type);
    tmp_2 = controller_abb4600_strcmp_f(obj->Type);
    if (tmp_1) {
      c_result_data[0] = obj->JointAxisInternal[0];
      c_result_data[1] = obj->JointAxisInternal[1];
      c_result_data[2] = obj->JointAxisInternal[2];
    } else if (tmp_2) {
      c_result_data[0] = obj->JointAxisInternal[0];
      c_result_data[1] = obj->JointAxisInternal[1];
      c_result_data[2] = obj->JointAxisInternal[2];
    } else {
      c_result_data[0] = (rtNaN);
      c_result_data[1] = (rtNaN);
      c_result_data[2] = (rtNaN);
    }

    if (0 <= loop_ub) {
      memcpy(&c_result_data[3], &q_data[0], (loop_ub + 1) * sizeof(real_T));
    }

    controller_abb460_normalizeRows(&c_result_data[0], v);
    cth = cos(c_result_data[3]);
    sth = sin(c_result_data[3]);
    memset(&TJ[0], 0, sizeof(real_T) << 4U);
    controller_abb4600_cat(v[0] * v[0] * (1.0 - cth) + cth, v[1] * v[0] * (1.0 -
      cth) - v[2] * sth, v[2] * v[0] * (1.0 - cth) + v[1] * sth, v[0] * v[1] *
      (1.0 - cth) + v[2] * sth, v[1] * v[1] * (1.0 - cth) + cth, v[2] * v[1] *
      (1.0 - cth) - v[0] * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] *
      v[2] * (1.0 - cth) + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, tmp);
    controller_abb4600_permute(tmp, tmp_0);
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      TJ[loop_ub << 2] = tmp_0[3 * loop_ub];
      TJ[1 + (loop_ub << 2)] = tmp_0[3 * loop_ub + 1];
      TJ[2 + (loop_ub << 2)] = tmp_0[3 * loop_ub + 2];
    }

    TJ[15] = 1.0;
    break;

   default:
    for (loop_ub = 0; loop_ub < 9; loop_ub++) {
      I[loop_ub] = 0;
    }

    I[0] = 1;
    I[4] = 1;
    I[8] = 1;
    tmp_1 = controller_abb4600_strcmp(obj->Type);
    tmp_2 = controller_abb4600_strcmp_f(obj->Type);
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      TJ[loop_ub << 2] = I[3 * loop_ub];
      TJ[1 + (loop_ub << 2)] = I[3 * loop_ub + 1];
      TJ[2 + (loop_ub << 2)] = I[3 * loop_ub + 2];
      if (tmp_1) {
        cth = obj->JointAxisInternal[loop_ub];
      } else if (tmp_2) {
        cth = obj->JointAxisInternal[loop_ub];
      } else {
        cth = (rtNaN);
      }

      TJ[12 + loop_ub] = cth * q_data[0];
    }

    TJ[3] = 0.0;
    TJ[7] = 0.0;
    TJ[11] = 0.0;
    TJ[15] = 1.0;
    break;
  }

  for (loop_ub = 0; loop_ub < 4; loop_ub++) {
    for (i = 0; i < 4; i++) {
      obj_0[loop_ub + (i << 2)] = 0.0;
      obj_0[loop_ub + (i << 2)] += TJ[i << 2] * obj->
        JointToParentTransform[loop_ub];
      obj_0[loop_ub + (i << 2)] += TJ[(i << 2) + 1] *
        obj->JointToParentTransform[loop_ub + 4];
      obj_0[loop_ub + (i << 2)] += TJ[(i << 2) + 2] *
        obj->JointToParentTransform[loop_ub + 8];
      obj_0[loop_ub + (i << 2)] += TJ[(i << 2) + 3] *
        obj->JointToParentTransform[loop_ub + 12];
    }

    for (i = 0; i < 4; i++) {
      T[loop_ub + (i << 2)] = 0.0;
      T[loop_ub + (i << 2)] += obj->ChildToJointTransform[i << 2] *
        obj_0[loop_ub];
      T[loop_ub + (i << 2)] += obj->ChildToJointTransform[(i << 2) + 1] *
        obj_0[loop_ub + 4];
      T[loop_ub + (i << 2)] += obj->ChildToJointTransform[(i << 2) + 2] *
        obj_0[loop_ub + 8];
      T[loop_ub + (i << 2)] += obj->ChildToJointTransform[(i << 2) + 3] *
        obj_0[loop_ub + 12];
    }
  }
}

/* Function for MATLAB Function: '<S3>/MATLAB Function' */
static void c_Joint_transformBodyToParent_g(const
  robotics_Joint_controller_abb_T *obj, real_T T[16])
{
  real_T TJ[16];
  real_T v[3];
  int8_T I[9];
  real_T tmp[9];
  real_T tmp_0[9];
  real_T tmp_1[3];
  boolean_T tmp_2;
  boolean_T tmp_3;
  real_T obj_0[16];
  int32_T i;
  int32_T i_0;
  real_T tmp_4;
  if (controller_abb4600_strcmp_f3(obj->Type)) {
    i_0 = 0;
  } else if (controller_abb4600_strcmp(obj->Type)) {
    i_0 = 1;
  } else {
    i_0 = -1;
  }

  switch (i_0) {
   case 0:
    memset(&TJ[0], 0, sizeof(real_T) << 4U);
    TJ[0] = 1.0;
    TJ[5] = 1.0;
    TJ[10] = 1.0;
    TJ[15] = 1.0;
    break;

   case 1:
    tmp_2 = controller_abb4600_strcmp(obj->Type);
    tmp_3 = controller_abb4600_strcmp_f(obj->Type);
    if (tmp_2) {
      tmp_1[0] = obj->JointAxisInternal[0];
      tmp_1[1] = obj->JointAxisInternal[1];
      tmp_1[2] = obj->JointAxisInternal[2];
    } else if (tmp_3) {
      tmp_1[0] = obj->JointAxisInternal[0];
      tmp_1[1] = obj->JointAxisInternal[1];
      tmp_1[2] = obj->JointAxisInternal[2];
    } else {
      tmp_1[0] = (rtNaN);
      tmp_1[1] = (rtNaN);
      tmp_1[2] = (rtNaN);
    }

    controller_abb460_normalizeRows(tmp_1, v);
    memset(&TJ[0], 0, sizeof(real_T) << 4U);
    controller_abb4600_cat(v[0] * v[0] * 0.0 + 1.0, v[1] * v[0] * 0.0 - v[2] *
      0.0, v[2] * v[0] * 0.0 + v[1] * 0.0, v[0] * v[1] * 0.0 + v[2] * 0.0, v[1] *
      v[1] * 0.0 + 1.0, v[2] * v[1] * 0.0 - v[0] * 0.0, v[0] * v[2] * 0.0 - v[1]
      * 0.0, v[1] * v[2] * 0.0 + v[0] * 0.0, v[2] * v[2] * 0.0 + 1.0, tmp);
    controller_abb4600_permute(tmp, tmp_0);
    for (i_0 = 0; i_0 < 3; i_0++) {
      TJ[i_0 << 2] = tmp_0[3 * i_0];
      TJ[1 + (i_0 << 2)] = tmp_0[3 * i_0 + 1];
      TJ[2 + (i_0 << 2)] = tmp_0[3 * i_0 + 2];
    }

    TJ[15] = 1.0;
    break;

   default:
    for (i_0 = 0; i_0 < 9; i_0++) {
      I[i_0] = 0;
    }

    I[0] = 1;
    I[4] = 1;
    I[8] = 1;
    tmp_2 = controller_abb4600_strcmp(obj->Type);
    tmp_3 = controller_abb4600_strcmp_f(obj->Type);
    for (i_0 = 0; i_0 < 3; i_0++) {
      TJ[i_0 << 2] = I[3 * i_0];
      TJ[1 + (i_0 << 2)] = I[3 * i_0 + 1];
      TJ[2 + (i_0 << 2)] = I[3 * i_0 + 2];
      if (tmp_2) {
        tmp_4 = obj->JointAxisInternal[i_0];
      } else if (tmp_3) {
        tmp_4 = obj->JointAxisInternal[i_0];
      } else {
        tmp_4 = (rtNaN);
      }

      TJ[12 + i_0] = tmp_4 * 0.0;
    }

    TJ[3] = 0.0;
    TJ[7] = 0.0;
    TJ[11] = 0.0;
    TJ[15] = 1.0;
    break;
  }

  for (i_0 = 0; i_0 < 4; i_0++) {
    for (i = 0; i < 4; i++) {
      obj_0[i_0 + (i << 2)] = 0.0;
      obj_0[i_0 + (i << 2)] += TJ[i << 2] * obj->JointToParentTransform[i_0];
      obj_0[i_0 + (i << 2)] += TJ[(i << 2) + 1] * obj->
        JointToParentTransform[i_0 + 4];
      obj_0[i_0 + (i << 2)] += TJ[(i << 2) + 2] * obj->
        JointToParentTransform[i_0 + 8];
      obj_0[i_0 + (i << 2)] += TJ[(i << 2) + 3] * obj->
        JointToParentTransform[i_0 + 12];
    }

    for (i = 0; i < 4; i++) {
      T[i_0 + (i << 2)] = 0.0;
      T[i_0 + (i << 2)] += obj->ChildToJointTransform[i << 2] * obj_0[i_0];
      T[i_0 + (i << 2)] += obj->ChildToJointTransform[(i << 2) + 1] * obj_0[i_0
        + 4];
      T[i_0 + (i << 2)] += obj->ChildToJointTransform[(i << 2) + 2] * obj_0[i_0
        + 8];
      T[i_0 + (i << 2)] += obj->ChildToJointTransform[(i << 2) + 3] * obj_0[i_0
        + 12];
    }
  }
}

/* Function for MATLAB Function: '<S3>/MATLAB Function' */
static void controller_abb4600_tforminv(const real_T T[16], real_T Tinv[16])
{
  real_T R[9];
  int32_T i;
  real_T R_0[9];
  int32_T R_tmp;
  for (i = 0; i < 3; i++) {
    R_0[3 * i] = -T[i];
    R[3 * i] = T[i];
    R_tmp = 1 + 3 * i;
    R_0[R_tmp] = -T[i + 4];
    R[R_tmp] = T[i + 4];
    R_tmp = 2 + 3 * i;
    R_0[R_tmp] = -T[i + 8];
    R[R_tmp] = T[i + 8];
  }

  for (i = 0; i < 3; i++) {
    Tinv[i << 2] = R[3 * i];
    Tinv[1 + (i << 2)] = R[3 * i + 1];
    Tinv[2 + (i << 2)] = R[3 * i + 2];
    Tinv[12 + i] = R_0[i + 6] * T[14] + (R_0[i + 3] * T[13] + R_0[i] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

/* Function for MATLAB Function: '<S3>/MATLAB Function' */
static void controller__tformToSpatialXform(const real_T T[16], real_T X[36])
{
  real_T tmp[9];
  real_T tmp_0[9];
  int32_T i;
  int32_T tmp_1;
  int32_T X_tmp;
  tmp[0] = 0.0;
  tmp[3] = -T[14];
  tmp[6] = T[13];
  tmp[1] = T[14];
  tmp[4] = 0.0;
  tmp[7] = -T[12];
  tmp[2] = -T[13];
  tmp[5] = T[12];
  tmp[8] = 0.0;
  for (i = 0; i < 3; i++) {
    for (X_tmp = 0; X_tmp < 3; X_tmp++) {
      tmp_1 = i + 3 * X_tmp;
      tmp_0[tmp_1] = 0.0;
      tmp_0[tmp_1] = tmp_0[3 * X_tmp + i] + T[X_tmp << 2] * tmp[i];
      tmp_0[tmp_1] = T[(X_tmp << 2) + 1] * tmp[i + 3] + tmp_0[3 * X_tmp + i];
      tmp_0[tmp_1] = T[(X_tmp << 2) + 2] * tmp[i + 6] + tmp_0[3 * X_tmp + i];
      X[X_tmp + 6 * i] = T[(i << 2) + X_tmp];
      X[X_tmp + 6 * (i + 3)] = 0.0;
    }
  }

  for (i = 0; i < 3; i++) {
    X[3 + 6 * i] = tmp_0[3 * i];
    X_tmp = 6 * (i + 3);
    X[3 + X_tmp] = T[i << 2];
    X[4 + 6 * i] = tmp_0[3 * i + 1];
    X[4 + X_tmp] = T[(i << 2) + 1];
    X[5 + 6 * i] = tmp_0[3 * i + 2];
    X[5 + X_tmp] = T[(i << 2) + 2];
  }
}

/* Function for MATLAB Function: '<S3>/MATLAB Function' */
static void RigidBodyTreeDynamics_massMatri(const
  e_robotics_manip_internal_Rig_T *robot, const real_T q_1[6],
  emxArray_real_T_controller_ab_T *H)
{
  real_T nb;
  emxArray_cell_wrap_7_controll_T *Ic;
  emxArray_cell_wrap_7_controll_T *X;
  real_T vNum;
  real_T T[16];
  real_T pid;
  emxArray_real_T_controller_ab_T *Si;
  emxArray_real_T_controller_ab_T *Fi;
  emxArray_real_T_controller_ab_T *Hji;
  int32_T b_i;
  int32_T c_i;
  c_robotics_manip_internal_Rig_T *obj;
  emxArray_real_T_controller_ab_T *b_a;
  int32_T b_m;
  int32_T b_aoffset;
  int32_T h_i;
  int32_T b_n;
  int32_T c_m;
  int32_T d_boffset;
  int32_T d_aoffset;
  int32_T e_boffset;
  int32_T e_aoffset;
  real_T tmp[16];
  real_T q_data[6];
  int32_T i;
  real_T X_0[36];
  real_T b_idx_0;
  real_T b_idx_1;
  real_T a_idx_0;
  real_T a_idx_1;
  int32_T loop_ub_tmp;
  nb = robot->NumBodies;
  vNum = robot->VelocityNumber;
  i = H->size[0] * H->size[1];
  H->size[0] = (int32_T)vNum;
  H->size[1] = (int32_T)vNum;
  contro_emxEnsureCapacity_real_T(H, i);
  b_m = (int32_T)vNum * (int32_T)vNum - 1;
  for (i = 0; i <= b_m; i++) {
    H->data[i] = 0.0;
  }

  controller__emxInit_cell_wrap_7(&Ic, 2);
  controller__emxInit_cell_wrap_7(&X, 2);
  i = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = (int32_T)nb;
  c_emxEnsureCapacity_cell_wrap_7(Ic, i);
  i = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = (int32_T)nb;
  c_emxEnsureCapacity_cell_wrap_7(X, i);
  for (b_i = 0; b_i < (int32_T)nb; b_i++) {
    for (i = 0; i < 36; i++) {
      Ic->data[Ic->size[0] * b_i].f1[i] = robot->Bodies[b_i]->SpatialInertia[i];
    }

    a_idx_0 = robot->PositionDoFMap[b_i];
    a_idx_1 = robot->PositionDoFMap[b_i + 8];
    if (a_idx_1 < a_idx_0) {
      obj = robot->Bodies[b_i];
      c_Joint_transformBodyToParent_g(&obj->JointInternal, T);
    } else {
      if (a_idx_0 > a_idx_1) {
        c_i = 0;
        i = 0;
      } else {
        c_i = (int32_T)a_idx_0 - 1;
        i = (int32_T)a_idx_1;
      }

      obj = robot->Bodies[b_i];
      loop_ub_tmp = i - c_i;
      for (i = 0; i < loop_ub_tmp; i++) {
        q_data[i] = q_1[c_i + i];
      }

      con_Joint_transformBodyToParent(&obj->JointInternal, q_data, &loop_ub_tmp,
        T);
    }

    controller_abb4600_tforminv(T, tmp);
    controller__tformToSpatialXform(tmp, X->data[X->size[0] * b_i].f1);
  }

  b_i = (int32_T)(((-1.0 - nb) + 1.0) / -1.0);
  c_i = 0;
  controller_abb46_emxInit_real_T(&Si, 2);
  controller_abb46_emxInit_real_T(&Fi, 2);
  controller_abb46_emxInit_real_T(&Hji, 2);
  controller_abb46_emxInit_real_T(&b_a, 2);
  while (c_i <= b_i - 1) {
    vNum = nb + -(real_T)c_i;
    c_m = (int32_T)vNum - 1;
    pid = robot->Bodies[c_m]->ParentIndex;
    i = (int32_T)vNum;
    a_idx_0 = robot->VelocityDoFMap[i - 1];
    a_idx_1 = robot->VelocityDoFMap[i + 7];
    if (pid > 0.0) {
      for (i = 0; i < 6; i++) {
        for (loop_ub_tmp = 0; loop_ub_tmp < 6; loop_ub_tmp++) {
          b_m = i + 6 * loop_ub_tmp;
          X_0[b_m] = 0.0;
          for (b_n = 0; b_n < 6; b_n++) {
            e_boffset = c_m * X->size[0];
            d_boffset = c_m * Ic->size[0];
            X_0[b_m] = X->data[e_boffset].f1[6 * i + b_n] * Ic->data[d_boffset].
              f1[6 * loop_ub_tmp + b_n] + X_0[6 * loop_ub_tmp + i];
          }
        }
      }

      for (i = 0; i < 6; i++) {
        for (loop_ub_tmp = 0; loop_ub_tmp < 6; loop_ub_tmp++) {
          b_idx_0 = 0.0;
          for (b_n = 0; b_n < 6; b_n++) {
            b_m = ((int32_T)vNum - 1) * X->size[0];
            b_idx_0 += X_0[6 * b_n + i] * X->data[b_m].f1[6 * loop_ub_tmp + b_n];
          }

          Ic->data[Ic->size[0] * ((int32_T)pid - 1)].f1[i + 6 * loop_ub_tmp] =
            Ic->data[((int32_T)pid - 1) * Ic->size[0]].f1[6 * loop_ub_tmp + i] +
            b_idx_0;
        }
      }
    }

    i = (int32_T)vNum;
    b_idx_0 = robot->VelocityDoFMap[i - 1];
    b_idx_1 = robot->VelocityDoFMap[i + 7];
    if (b_idx_0 <= b_idx_1) {
      obj = robot->Bodies[c_m];
      i = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      contro_emxEnsureCapacity_real_T(Si, i);
      b_m = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (i = 0; i <= b_m; i++) {
        Si->data[i] = obj->JointInternal.MotionSubspace->data[i];
      }

      i = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      contro_emxEnsureCapacity_real_T(Fi, i);
      for (c_m = 0; c_m < Si->size[1]; c_m++) {
        b_m = c_m * 6;
        e_boffset = c_m * 6;
        for (i = 0; i < 6; i++) {
          Fi->data[b_m + i] = 0.0;
        }

        for (d_boffset = 0; d_boffset < 6; d_boffset++) {
          i = e_boffset + d_boffset;
          if (Si->data[i] != 0.0) {
            e_aoffset = d_boffset * 6;
            for (d_aoffset = 0; d_aoffset < 6; d_aoffset++) {
              loop_ub_tmp = ((int32_T)vNum - 1) * Ic->size[0];
              b_n = b_m + d_aoffset;
              Fi->data[b_n] += Ic->data[loop_ub_tmp].f1[e_aoffset + d_aoffset] *
                Si->data[i];
            }
          }
        }
      }

      if (a_idx_0 > a_idx_1) {
        b_n = 0;
        c_m = 0;
      } else {
        b_n = (int32_T)a_idx_0 - 1;
        c_m = b_n;
      }

      i = b_a->size[0] * b_a->size[1];
      b_a->size[0] = Si->size[1];
      b_a->size[1] = 6;
      contro_emxEnsureCapacity_real_T(b_a, i);
      for (i = 0; i < 6; i++) {
        b_m = Si->size[1];
        for (loop_ub_tmp = 0; loop_ub_tmp < b_m; loop_ub_tmp++) {
          b_a->data[loop_ub_tmp + b_a->size[0] * i] = Si->data[Si->size[0] *
            loop_ub_tmp + i];
        }
      }

      b_m = b_a->size[0];
      i = Hji->size[0] * Hji->size[1];
      Hji->size[0] = b_a->size[0];
      Hji->size[1] = Fi->size[1];
      contro_emxEnsureCapacity_real_T(Hji, i);
      for (e_boffset = 0; e_boffset < Fi->size[1]; e_boffset++) {
        d_boffset = e_boffset * b_m - 1;
        e_aoffset = e_boffset * 6;
        for (i = 1; i <= b_m; i++) {
          Hji->data[d_boffset + i] = 0.0;
        }

        for (d_aoffset = 0; d_aoffset < 6; d_aoffset++) {
          i = e_aoffset + d_aoffset;
          if (Fi->data[i] != 0.0) {
            b_aoffset = d_aoffset * b_m;
            for (h_i = 1; h_i <= b_m; h_i++) {
              loop_ub_tmp = d_boffset + h_i;
              Hji->data[loop_ub_tmp] += b_a->data[(b_aoffset + h_i) - 1] *
                Fi->data[i];
            }
          }
        }
      }

      b_m = Hji->size[1];
      for (i = 0; i < b_m; i++) {
        e_boffset = Hji->size[0];
        for (loop_ub_tmp = 0; loop_ub_tmp < e_boffset; loop_ub_tmp++) {
          H->data[(b_n + loop_ub_tmp) + H->size[0] * (c_m + i)] = Hji->data
            [Hji->size[0] * i + loop_ub_tmp];
        }
      }

      for (i = 0; i < 6; i++) {
        for (loop_ub_tmp = 0; loop_ub_tmp < 6; loop_ub_tmp++) {
          b_n = ((int32_T)vNum - 1) * X->size[0];
          X_0[loop_ub_tmp + 6 * i] = X->data[b_n].f1[6 * loop_ub_tmp + i];
        }
      }

      i = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = Fi->size[1];
      contro_emxEnsureCapacity_real_T(Si, i);
      i = Fi->size[0] * Fi->size[1];
      loop_ub_tmp = i - 1;
      for (i = 0; i <= loop_ub_tmp; i++) {
        Si->data[i] = Fi->data[i];
      }

      b_n = Fi->size[1];
      loop_ub_tmp = Fi->size[1];
      i = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = loop_ub_tmp;
      contro_emxEnsureCapacity_real_T(Fi, i);
      for (c_m = 0; c_m < b_n; c_m++) {
        b_m = c_m * 6;
        e_boffset = c_m * 6;
        for (i = 0; i < 6; i++) {
          Fi->data[b_m + i] = 0.0;
        }

        for (d_boffset = 0; d_boffset < 6; d_boffset++) {
          i = e_boffset + d_boffset;
          if (Si->data[i] != 0.0) {
            e_aoffset = d_boffset * 6;
            for (d_aoffset = 0; d_aoffset < 6; d_aoffset++) {
              loop_ub_tmp = b_m + d_aoffset;
              Fi->data[loop_ub_tmp] += Si->data[i] * X_0[e_aoffset + d_aoffset];
            }
          }
        }
      }

      while (pid > 0.0) {
        b_n = (int32_T)pid - 1;
        obj = robot->Bodies[b_n];
        i = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
        contro_emxEnsureCapacity_real_T(Si, i);
        b_m = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (i = 0; i <= b_m; i++) {
          Si->data[i] = obj->JointInternal.MotionSubspace->data[i];
        }

        i = (int32_T)pid;
        b_idx_0 = robot->VelocityDoFMap[i - 1];
        b_idx_1 = robot->VelocityDoFMap[i + 7];
        if (b_idx_0 <= b_idx_1) {
          i = b_a->size[0] * b_a->size[1];
          b_a->size[0] = Si->size[1];
          b_a->size[1] = 6;
          contro_emxEnsureCapacity_real_T(b_a, i);
          for (i = 0; i < 6; i++) {
            b_m = Si->size[1];
            for (loop_ub_tmp = 0; loop_ub_tmp < b_m; loop_ub_tmp++) {
              b_a->data[loop_ub_tmp + b_a->size[0] * i] = Si->data[Si->size[0] *
                loop_ub_tmp + i];
            }
          }

          c_m = b_a->size[0];
          i = Hji->size[0] * Hji->size[1];
          Hji->size[0] = b_a->size[0];
          Hji->size[1] = Fi->size[1];
          contro_emxEnsureCapacity_real_T(Hji, i);
          for (b_m = 0; b_m < Fi->size[1]; b_m++) {
            e_boffset = b_m * c_m - 1;
            d_boffset = b_m * 6;
            for (i = 1; i <= c_m; i++) {
              Hji->data[e_boffset + i] = 0.0;
            }

            for (e_aoffset = 0; e_aoffset < 6; e_aoffset++) {
              i = d_boffset + e_aoffset;
              if (Fi->data[i] != 0.0) {
                d_aoffset = e_aoffset * c_m;
                for (b_aoffset = 1; b_aoffset <= c_m; b_aoffset++) {
                  loop_ub_tmp = e_boffset + b_aoffset;
                  Hji->data[loop_ub_tmp] += b_a->data[(d_aoffset + b_aoffset) -
                    1] * Fi->data[i];
                }
              }
            }
          }

          if (b_idx_0 > b_idx_1) {
            c_m = 0;
          } else {
            c_m = (int32_T)b_idx_0 - 1;
          }

          if (a_idx_0 > a_idx_1) {
            d_boffset = 0;
          } else {
            d_boffset = (int32_T)a_idx_0 - 1;
          }

          b_m = Hji->size[1];
          for (i = 0; i < b_m; i++) {
            e_boffset = Hji->size[0];
            for (loop_ub_tmp = 0; loop_ub_tmp < e_boffset; loop_ub_tmp++) {
              H->data[(c_m + loop_ub_tmp) + H->size[0] * (d_boffset + i)] =
                Hji->data[Hji->size[0] * i + loop_ub_tmp];
            }
          }

          if (a_idx_0 > a_idx_1) {
            c_m = 0;
          } else {
            c_m = (int32_T)a_idx_0 - 1;
          }

          if (b_idx_0 > b_idx_1) {
            d_boffset = 0;
          } else {
            d_boffset = (int32_T)b_idx_0 - 1;
          }

          b_m = Hji->size[0];
          for (i = 0; i < b_m; i++) {
            e_boffset = Hji->size[1];
            for (loop_ub_tmp = 0; loop_ub_tmp < e_boffset; loop_ub_tmp++) {
              H->data[(c_m + loop_ub_tmp) + H->size[0] * (d_boffset + i)] =
                Hji->data[Hji->size[0] * loop_ub_tmp + i];
            }
          }
        }

        for (i = 0; i < 6; i++) {
          for (loop_ub_tmp = 0; loop_ub_tmp < 6; loop_ub_tmp++) {
            X_0[loop_ub_tmp + 6 * i] = X->data[b_n * X->size[0]].f1[6 *
              loop_ub_tmp + i];
          }
        }

        i = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = Fi->size[1];
        contro_emxEnsureCapacity_real_T(Si, i);
        b_m = Fi->size[0] * Fi->size[1] - 1;
        for (i = 0; i <= b_m; i++) {
          Si->data[i] = Fi->data[i];
        }

        b_n = Fi->size[1];
        loop_ub_tmp = Fi->size[1];
        i = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = loop_ub_tmp;
        contro_emxEnsureCapacity_real_T(Fi, i);
        for (c_m = 0; c_m < b_n; c_m++) {
          b_m = c_m * 6;
          e_boffset = c_m * 6;
          for (i = 0; i < 6; i++) {
            Fi->data[b_m + i] = 0.0;
          }

          for (d_boffset = 0; d_boffset < 6; d_boffset++) {
            i = e_boffset + d_boffset;
            if (Si->data[i] != 0.0) {
              e_aoffset = d_boffset * 6;
              for (d_aoffset = 0; d_aoffset < 6; d_aoffset++) {
                loop_ub_tmp = b_m + d_aoffset;
                Fi->data[loop_ub_tmp] += Si->data[i] * X_0[e_aoffset + d_aoffset];
              }
            }
          }
        }

        pid = robot->Bodies[(int32_T)pid - 1]->ParentIndex;
      }
    }

    c_i++;
  }

  controller_abb46_emxFree_real_T(&b_a);
  controller_abb46_emxFree_real_T(&Hji);
  controller_abb46_emxFree_real_T(&Fi);
  controller_abb46_emxFree_real_T(&Si);
  controller__emxFree_cell_wrap_7(&X);
  controller__emxFree_cell_wrap_7(&Ic);
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void controller_abb460_Joint_Joint_i(robotics_Joint_controller_abb_T
  **obj, const char_T jtype_data[], const int32_T jtype_size[2])
{
  int8_T msubspace_data[36];
  char_T partial_match_data[9];
  int32_T lenstr;
  boolean_T matched;
  int32_T minnanb;
  boolean_T c_bool;
  int32_T b_minnanb;
  emxArray_char_T_controller_ab_T *switch_expression;
  static const char_T vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const int8_T d[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T e[6] = { 0, 0, 1, 0, 0, 0 };

  static const char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c'
  };

  static const char_T c_vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T f[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  static const char_T g[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T h[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T i[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T partial_match_size_idx_1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  int32_T exitg1;
  boolean_T guard11 = false;
  partial_match_size_idx_1 = 0;
  lenstr = jtype_size[1];
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if (jtype_size[1] <= 8) {
    matched = false;
    minnanb = jtype_size[1];
    guard11 = false;
    if (lenstr <= minnanb) {
      if (!(minnanb < lenstr)) {
        minnanb = lenstr;
      }

      guard11 = true;
    } else {
      if (jtype_size[1] == 8) {
        minnanb = 8;
        guard11 = true;
      }
    }

    if (guard11) {
      b_minnanb = 0;
      do {
        exitg1 = 0;
        if (b_minnanb + 1 <= minnanb) {
          if (f[(uint8_T)jtype_data[b_minnanb]] != f[(int32_T)g[b_minnanb]]) {
            exitg1 = 1;
          } else {
            b_minnanb++;
          }
        } else {
          matched = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (matched) {
      if (jtype_size[1] == 8) {
        minnanb = 1;
        partial_match_size_idx_1 = 8;
        for (b_minnanb = 0; b_minnanb < 8; b_minnanb++) {
          partial_match_data[b_minnanb] = c_vstr[b_minnanb];
        }
      } else {
        partial_match_size_idx_1 = 8;
        for (b_minnanb = 0; b_minnanb < 8; b_minnanb++) {
          partial_match_data[b_minnanb] = c_vstr[b_minnanb];
        }

        matched = true;
        minnanb = 1;
        guard3 = true;
      }
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    matched = false;
    minnanb = 0;
    guard3 = true;
  }

  if (guard3) {
    c_bool = false;
    if (jtype_size[1] < 9) {
      b_minnanb = jtype_size[1];
    } else {
      b_minnanb = 9;
    }

    guard11 = false;
    if (lenstr <= b_minnanb) {
      if (b_minnanb < lenstr) {
        lenstr = b_minnanb;
      }

      guard11 = true;
    } else {
      if (jtype_size[1] == 9) {
        lenstr = 9;
        guard11 = true;
      }
    }

    if (guard11) {
      b_minnanb = 0;
      do {
        exitg1 = 0;
        if (b_minnanb + 1 <= lenstr) {
          if (f[(uint8_T)jtype_data[b_minnanb]] != f[(int32_T)h[b_minnanb]]) {
            exitg1 = 1;
          } else {
            b_minnanb++;
          }
        } else {
          c_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (c_bool) {
      if (jtype_size[1] == 9) {
        minnanb = 1;
        partial_match_size_idx_1 = 9;
        for (b_minnanb = 0; b_minnanb < 9; b_minnanb++) {
          partial_match_data[b_minnanb] = b_vstr[b_minnanb];
        }
      } else {
        if (!matched) {
          partial_match_size_idx_1 = 9;
          for (b_minnanb = 0; b_minnanb < 9; b_minnanb++) {
            partial_match_data[b_minnanb] = b_vstr[b_minnanb];
          }
        }

        minnanb++;
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (jtype_size[1] <= 5) {
      matched = false;
      lenstr = 0;
      do {
        exitg1 = 0;
        if (lenstr + 1 <= 5) {
          if (f[(uint8_T)jtype_data[lenstr]] != f[(int32_T)i[lenstr]]) {
            exitg1 = 1;
          } else {
            lenstr++;
          }
        } else {
          matched = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (matched) {
        minnanb = 1;
        partial_match_size_idx_1 = 5;
        for (b_minnanb = 0; b_minnanb < 5; b_minnanb++) {
          partial_match_data[b_minnanb] = vstr[b_minnanb];
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (minnanb == 0) {
      partial_match_size_idx_1 = 0;
    }
  }

  if (minnanb == 0) {
    partial_match_size_idx_1 = 0;
  }

  b_minnanb = (*obj)->Type->size[0] * (*obj)->Type->size[1];
  (*obj)->Type->size[0] = 1;
  (*obj)->Type->size[1] = partial_match_size_idx_1;
  contro_emxEnsureCapacity_char_T((*obj)->Type, b_minnanb);
  partial_match_size_idx_1--;
  for (b_minnanb = 0; b_minnanb <= partial_match_size_idx_1; b_minnanb++) {
    (*obj)->Type->data[b_minnanb] = partial_match_data[b_minnanb];
  }

  controller_abb46_emxInit_char_T(&switch_expression, 2);
  b_minnanb = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = (*obj)->Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_minnanb);
  b_minnanb = (*obj)->Type->size[0] * (*obj)->Type->size[1];
  partial_match_size_idx_1 = b_minnanb - 1;
  for (b_minnanb = 0; b_minnanb <= partial_match_size_idx_1; b_minnanb++) {
    switch_expression->data[b_minnanb] = (*obj)->Type->data[b_minnanb];
  }

  if (controller_abb4600_strcmp(switch_expression)) {
    b_minnanb = 0;
  } else if (controller_abb4600_strcmp_f(switch_expression)) {
    b_minnanb = 1;
  } else {
    b_minnanb = -1;
  }

  switch (b_minnanb) {
   case 0:
    for (b_minnanb = 0; b_minnanb < 6; b_minnanb++) {
      msubspace_data[b_minnanb] = e[b_minnanb];
    }

    (*obj)->JointAxisInternal[0] = 0.0;
    (*obj)->JointAxisInternal[1] = 0.0;
    (*obj)->JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (b_minnanb = 0; b_minnanb < 6; b_minnanb++) {
      msubspace_data[b_minnanb] = d[b_minnanb];
    }

    (*obj)->JointAxisInternal[0] = 0.0;
    (*obj)->JointAxisInternal[1] = 0.0;
    (*obj)->JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_minnanb = 0; b_minnanb < 6; b_minnanb++) {
      msubspace_data[b_minnanb] = 0;
    }

    (*obj)->JointAxisInternal[0] = 0.0;
    (*obj)->JointAxisInternal[1] = 0.0;
    (*obj)->JointAxisInternal[2] = 0.0;
    break;
  }

  controller_abb46_emxFree_char_T(&switch_expression);
  b_minnanb = (*obj)->MotionSubspace->size[0] * (*obj)->MotionSubspace->size[1];
  (*obj)->MotionSubspace->size[0] = 6;
  (*obj)->MotionSubspace->size[1] = 1;
  contro_emxEnsureCapacity_real_T((*obj)->MotionSubspace, b_minnanb);
  for (b_minnanb = 0; b_minnanb < 6; b_minnanb++) {
    (*obj)->MotionSubspace->data[b_minnanb] = msubspace_data[b_minnanb];
  }
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static robotics_Joint_controller_abb_T *controller_abb4600_Joint_Joint
  (robotics_Joint_controller_abb_T *obj, const char_T jtype_data[], const
   int32_T jtype_size[2])
{
  robotics_Joint_controller_abb_T *b_obj;
  b_obj = obj;
  controller_abb460_Joint_Joint_i(&b_obj, jtype_data, jtype_size);
  return b_obj;
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void controller__RigidBody_RigidBody(c_robotics_manip_internal_Rig_T
  **obj, real_T input1_ParentIndex, const real_T input1_SpatialInertia[36],
  uint8_T input2_Type, real_T input2_NameLength, const uint8_T input2_Name[14],
  real_T input2_VelocityNumber, const real_T input2_MotionSubspace[36], const
  real_T input2_JointAxis[3], const real_T input2_JointToParentTransform[16],
  const real_T input2_ChildToJointTransform[16])
{
  char_T type_data[9];
  int32_T b;
  static const char_T c[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const char_T d[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T e[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  char_T input2_Name_data[14];
  uint8_T input2_Name_data_0[14];
  char_T input2_Name_data_1[14];
  real_T tmp;
  int32_T i;
  int32_T type_size[2];
  int32_T i_0;
  (*obj)->ParentIndex = input1_ParentIndex;
  for (i_0 = 0; i_0 < 36; i_0++) {
    (*obj)->SpatialInertia[i_0] = input1_SpatialInertia[i_0];
  }

  switch (input2_Type) {
   case 0:
    type_size[0] = 1;
    type_size[1] = 5;
    for (i_0 = 0; i_0 < 5; i_0++) {
      type_data[i_0] = d[i_0];
    }
    break;

   case 1:
    type_size[0] = 1;
    type_size[1] = 8;
    for (i_0 = 0; i_0 < 8; i_0++) {
      type_data[i_0] = e[i_0];
    }
    break;

   default:
    type_size[0] = 1;
    type_size[1] = 9;
    for (i_0 = 0; i_0 < 9; i_0++) {
      type_data[i_0] = c[i_0];
    }
    break;
  }

  if (1.0 > input2_NameLength) {
    b = 0;
  } else {
    b = (int32_T)input2_NameLength;
  }

  if (0 <= b - 1) {
    memcpy(&input2_Name_data_0[0], &input2_Name[0], b * sizeof(uint8_T));
  }

  for (i_0 = 0; i_0 < b; i_0++) {
    input2_Name_data_1[i_0] = (int8_T)input2_Name_data_0[i_0];
  }

  i_0 = (int8_T)b;
  if (0 <= i_0 - 1) {
    memcpy(&input2_Name_data[0], &input2_Name_data_1[0], i_0 * sizeof(char_T));
  }

  controller_abb4600_Joint_Joint(&(*obj)->JointInternal, type_data, type_size);
  for (i_0 = 0; i_0 < 16; i_0++) {
    (*obj)->JointInternal.JointToParentTransform[i_0] =
      input2_JointToParentTransform[i_0];
  }

  for (i_0 = 0; i_0 < 16; i_0++) {
    (*obj)->JointInternal.ChildToJointTransform[i_0] =
      input2_ChildToJointTransform[i_0];
  }

  tmp = fmax(1.0, input2_VelocityNumber);
  i_0 = (*obj)->JointInternal.MotionSubspace->size[0] * (*obj)
    ->JointInternal.MotionSubspace->size[1];
  (*obj)->JointInternal.MotionSubspace->size[0] = 6;
  (*obj)->JointInternal.MotionSubspace->size[1] = (int32_T)tmp;
  contro_emxEnsureCapacity_real_T((*obj)->JointInternal.MotionSubspace, i_0);
  b = (int32_T)tmp;
  for (i_0 = 0; i_0 < b; i_0++) {
    for (i = 0; i < 6; i++) {
      (*obj)->JointInternal.MotionSubspace->data[i + (*obj)
        ->JointInternal.MotionSubspace->size[0] * i_0] = input2_MotionSubspace[6
        * i_0 + i];
    }
  }

  (*obj)->JointInternal.JointAxisInternal[0] = input2_JointAxis[0];
  (*obj)->JointInternal.JointAxisInternal[1] = input2_JointAxis[1];
  (*obj)->JointInternal.JointAxisInternal[2] = input2_JointAxis[2];
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void controller_abb4600_eye(real_T I[36])
{
  int32_T k;
  memset(&I[0], 0, 36U * sizeof(real_T));
  for (k = 0; k < 6; k++) {
    I[k + 6 * k] = 1.0;
  }
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void RigidBodyTreeDynamics_inverseDy(const
  e_robotics_manip_internal_R_a_T *robot, const real_T q_0[6], const real_T
  qddot[6], real_T tau[6])
{
  real_T a0[6];
  real_T nb;
  emxArray_cell_wrap_7_controll_T *X;
  emxArray_cell_wrap_7_controll_T *Xtree;
  emxArray_real_T_controller_ab_T *vJ;
  emxArray_real_T_controller_ab_T *vB;
  emxArray_real_T_controller_ab_T *aB;
  emxArray_real_T_controller_ab_T *f;
  emxArray_real_T_controller_ab_T *S;
  real_T T[16];
  real_T qddoti_data[6];
  real_T Tinv[16];
  real_T I[36];
  emxArray_real_T_controller_ab_T *taui;
  int32_T b_i;
  int32_T j;
  int32_T d_i;
  int32_T o_data[6];
  c_robotics_manip_internal_Rig_T *obj;
  emxArray_real_T_controller_ab_T *b_a;
  int32_T b_m;
  int32_T e_i;
  int32_T f_i;
  real_T v[3];
  emxArray_char_T_controller_ab_T *switch_expression;
  real_T c_a[16];
  real_T c_b[16];
  real_T R[9];
  real_T y[6];
  int32_T i;
  real_T tmp[9];
  real_T v_0[3];
  real_T q_data[6];
  int32_T loop_ub;
  boolean_T tmp_0;
  boolean_T tmp_1;
  real_T c_a_0[16];
  real_T R_0[9];
  real_T R_1[36];
  real_T X_0[6];
  real_T b_idx_0;
  real_T b_idx_1;
  real_T a_idx_1;
  real_T a_idx_0;
  int32_T obj_tmp;
  int32_T exitg1;
  a0[0] = 0.0;
  a0[1] = 0.0;
  a0[2] = 0.0;
  a0[3] = -robot->Gravity[0];
  a0[4] = -robot->Gravity[1];
  a0[5] = -robot->Gravity[2];
  controller_abb46_emxInit_real_T(&vJ, 2);
  nb = robot->NumBodies;
  e_i = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  vJ->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(vJ, e_i);
  b_m = 6 * (int32_T)nb - 1;
  for (e_i = 0; e_i <= b_m; e_i++) {
    vJ->data[e_i] = 0.0;
  }

  controller_abb46_emxInit_real_T(&vB, 2);
  e_i = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(vB, e_i);
  for (e_i = 0; e_i <= b_m; e_i++) {
    vB->data[e_i] = 0.0;
  }

  controller_abb46_emxInit_real_T(&aB, 2);
  e_i = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(aB, e_i);
  for (e_i = 0; e_i <= b_m; e_i++) {
    aB->data[e_i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    tau[i] = 0.0;
  }

  controller__emxInit_cell_wrap_7(&X, 2);
  controller__emxInit_cell_wrap_7(&Xtree, 2);
  e_i = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = (int32_T)nb;
  c_emxEnsureCapacity_cell_wrap_7(Xtree, e_i);
  e_i = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = (int32_T)nb;
  c_emxEnsureCapacity_cell_wrap_7(X, e_i);
  b_m = 0;
  do {
    exitg1 = 0;
    e_i = (int32_T)nb - 1;
    if (b_m <= e_i) {
      controller_abb4600_eye(Xtree->data[Xtree->size[0] * b_m].f1);
      controller_abb4600_eye(X->data[X->size[0] * b_m].f1);
      b_m++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  controller_abb46_emxInit_real_T(&f, 2);
  b_m = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(f, b_m);
  b_i = 0;
  controller_abb46_emxInit_real_T(&S, 2);
  controller_abb46_emxInit_char_T(&switch_expression, 2);
  while (b_i <= e_i) {
    obj = robot->Bodies[b_i];
    b_m = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    contro_emxEnsureCapacity_real_T(S, b_m);
    loop_ub = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (b_m = 0; b_m <= loop_ub; b_m++) {
      S->data[b_m] = obj->JointInternal.MotionSubspace->data[b_m];
    }

    a_idx_0 = robot->PositionDoFMap[b_i];
    a_idx_1 = robot->PositionDoFMap[b_i + 8];
    b_idx_0 = robot->VelocityDoFMap[b_i];
    b_idx_1 = robot->VelocityDoFMap[b_i + 8];
    if (a_idx_1 < a_idx_0) {
      obj = robot->Bodies[b_i];
      b_m = switch_expression->size[0] * switch_expression->size[1];
      switch_expression->size[0] = 1;
      switch_expression->size[1] = obj->JointInternal.Type->size[1];
      contro_emxEnsureCapacity_char_T(switch_expression, b_m);
      loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->
        size[1] - 1;
      for (b_m = 0; b_m <= loop_ub; b_m++) {
        switch_expression->data[b_m] = obj->JointInternal.Type->data[b_m];
      }

      if (controller_abb4600_strcmp_f3(switch_expression)) {
        b_m = 0;
      } else if (controller_abb4600_strcmp(switch_expression)) {
        b_m = 1;
      } else {
        b_m = -1;
      }

      switch (b_m) {
       case 0:
        memset(&Tinv[0], 0, sizeof(real_T) << 4U);
        Tinv[0] = 1.0;
        Tinv[5] = 1.0;
        Tinv[10] = 1.0;
        Tinv[15] = 1.0;
        break;

       case 1:
        tmp_0 = controller_abb4600_strcmp(obj->JointInternal.Type);
        tmp_1 = controller_abb4600_strcmp_f(obj->JointInternal.Type);
        if (tmp_0) {
          v[0] = obj->JointInternal.JointAxisInternal[0];
          v[1] = obj->JointInternal.JointAxisInternal[1];
          v[2] = obj->JointInternal.JointAxisInternal[2];
        } else if (tmp_1) {
          v[0] = obj->JointInternal.JointAxisInternal[0];
          v[1] = obj->JointInternal.JointAxisInternal[1];
          v[2] = obj->JointInternal.JointAxisInternal[2];
        } else {
          v[0] = (rtNaN);
          v[1] = (rtNaN);
          v[2] = (rtNaN);
        }

        v_0[0] = v[0];
        v_0[1] = v[1];
        v_0[2] = v[2];
        controller_abb460_normalizeRows(v_0, v);
        memset(&Tinv[0], 0, sizeof(real_T) << 4U);
        controller_abb4600_cat(v[0] * v[0] * 0.0 + 1.0, v[1] * v[0] * 0.0 - v[2]
          * 0.0, v[2] * v[0] * 0.0 + v[1] * 0.0, v[0] * v[1] * 0.0 + v[2] * 0.0,
          v[1] * v[1] * 0.0 + 1.0, v[2] * v[1] * 0.0 - v[0] * 0.0, v[0] * v[2] *
          0.0 - v[1] * 0.0, v[1] * v[2] * 0.0 + v[0] * 0.0, v[2] * v[2] * 0.0 +
          1.0, R_0);
        controller_abb4600_permute(R_0, tmp);
        for (b_m = 0; b_m < 3; b_m++) {
          Tinv[b_m << 2] = tmp[3 * b_m];
          Tinv[1 + (b_m << 2)] = tmp[3 * b_m + 1];
          Tinv[2 + (b_m << 2)] = tmp[3 * b_m + 2];
        }

        Tinv[15] = 1.0;
        break;

       default:
        tmp_0 = controller_abb4600_strcmp(obj->JointInternal.Type);
        tmp_1 = controller_abb4600_strcmp_f(obj->JointInternal.Type);
        if (tmp_0) {
          v[0] = obj->JointInternal.JointAxisInternal[0];
          v[1] = obj->JointInternal.JointAxisInternal[1];
          v[2] = obj->JointInternal.JointAxisInternal[2];
        } else if (tmp_1) {
          v[0] = obj->JointInternal.JointAxisInternal[0];
          v[1] = obj->JointInternal.JointAxisInternal[1];
          v[2] = obj->JointInternal.JointAxisInternal[2];
        } else {
          v[0] = (rtNaN);
          v[1] = (rtNaN);
          v[2] = (rtNaN);
        }

        memset(&R[0], 0, 9U * sizeof(real_T));
        R[0] = 1.0;
        R[4] = 1.0;
        R[8] = 1.0;
        for (b_m = 0; b_m < 3; b_m++) {
          Tinv[b_m << 2] = R[3 * b_m];
          Tinv[1 + (b_m << 2)] = R[3 * b_m + 1];
          Tinv[2 + (b_m << 2)] = R[3 * b_m + 2];
          Tinv[12 + b_m] = v[b_m] * 0.0;
        }

        Tinv[3] = 0.0;
        Tinv[7] = 0.0;
        Tinv[11] = 0.0;
        Tinv[15] = 1.0;
        break;
      }

      for (b_m = 0; b_m < 16; b_m++) {
        c_a[b_m] = obj->JointInternal.JointToParentTransform[b_m];
      }

      for (b_m = 0; b_m < 16; b_m++) {
        c_b[b_m] = obj->JointInternal.ChildToJointTransform[b_m];
      }

      for (b_m = 0; b_m < 4; b_m++) {
        for (obj_tmp = 0; obj_tmp < 4; obj_tmp++) {
          c_a_0[b_m + (obj_tmp << 2)] = 0.0;
          c_a_0[b_m + (obj_tmp << 2)] += Tinv[obj_tmp << 2] * c_a[b_m];
          c_a_0[b_m + (obj_tmp << 2)] += Tinv[(obj_tmp << 2) + 1] * c_a[b_m + 4];
          c_a_0[b_m + (obj_tmp << 2)] += Tinv[(obj_tmp << 2) + 2] * c_a[b_m + 8];
          c_a_0[b_m + (obj_tmp << 2)] += Tinv[(obj_tmp << 2) + 3] * c_a[b_m + 12];
        }

        for (obj_tmp = 0; obj_tmp < 4; obj_tmp++) {
          T[b_m + (obj_tmp << 2)] = 0.0;
          T[b_m + (obj_tmp << 2)] += c_b[obj_tmp << 2] * c_a_0[b_m];
          T[b_m + (obj_tmp << 2)] += c_b[(obj_tmp << 2) + 1] * c_a_0[b_m + 4];
          T[b_m + (obj_tmp << 2)] += c_b[(obj_tmp << 2) + 2] * c_a_0[b_m + 8];
          T[b_m + (obj_tmp << 2)] += c_b[(obj_tmp << 2) + 3] * c_a_0[b_m + 12];
        }
      }

      d_i = 1;
      qddoti_data[0] = 0.0;
      for (b_m = 0; b_m < 6; b_m++) {
        obj_tmp = vJ->size[0] * b_i;
        vJ->data[b_m + obj_tmp] = 0.0;
      }
    } else {
      if (a_idx_0 > a_idx_1) {
        obj_tmp = 0;
        f_i = 0;
      } else {
        obj_tmp = (int32_T)a_idx_0 - 1;
        f_i = (int32_T)a_idx_1;
      }

      if (b_idx_0 > b_idx_1) {
        loop_ub = 1;
        i = 0;
        j = 0;
        b_m = 0;
      } else {
        loop_ub = (int32_T)b_idx_0;
        i = (int32_T)b_idx_1;
        j = (int32_T)b_idx_0 - 1;
        b_m = (int32_T)b_idx_1;
      }

      d_i = b_m - j;
      for (b_m = 0; b_m < d_i; b_m++) {
        qddoti_data[b_m] = qddot[j + b_m];
      }

      obj = robot->Bodies[b_i];
      f_i -= obj_tmp;
      for (b_m = 0; b_m < f_i; b_m++) {
        q_data[b_m] = q_0[obj_tmp + b_m];
      }

      con_Joint_transformBodyToParent(&obj->JointInternal, q_data, &f_i, T);
      if (S->size[1] == 1) {
        for (b_m = 0; b_m < 6; b_m++) {
          obj_tmp = vJ->size[0] * b_i;
          vJ->data[b_m + obj_tmp] = 0.0;
          loop_ub = S->size[1];
          for (obj_tmp = 0; obj_tmp < loop_ub; obj_tmp++) {
            i = vJ->size[0] * b_i;
            f_i = b_m + vJ->size[0] * b_i;
            vJ->data[f_i] = S->data[S->size[0] * obj_tmp + b_m] * 0.0 + vJ->
              data[i + b_m];
          }
        }
      } else if ((i - loop_ub) + 1 == 1) {
        for (b_m = 0; b_m < 6; b_m++) {
          obj_tmp = vJ->size[0] * b_i;
          vJ->data[b_m + obj_tmp] = 0.0;
          loop_ub = S->size[1];
          for (obj_tmp = 0; obj_tmp < loop_ub; obj_tmp++) {
            i = vJ->size[0] * b_i;
            f_i = b_m + vJ->size[0] * b_i;
            vJ->data[f_i] = S->data[S->size[0] * obj_tmp + b_m] * 0.0 + vJ->
              data[i + b_m];
          }
        }
      } else {
        for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
          b_m = vJ->size[0] * b_i;
          vJ->data[obj_tmp + b_m] = 0.0;
        }
      }
    }

    for (b_m = 0; b_m < 3; b_m++) {
      R_0[3 * b_m] = -T[b_m];
      R[3 * b_m] = T[b_m];
      obj_tmp = 1 + 3 * b_m;
      R_0[obj_tmp] = -T[b_m + 4];
      R[obj_tmp] = T[b_m + 4];
      obj_tmp = 2 + 3 * b_m;
      R_0[obj_tmp] = -T[b_m + 8];
      R[obj_tmp] = T[b_m + 8];
    }

    for (b_m = 0; b_m < 3; b_m++) {
      Tinv[b_m << 2] = R[3 * b_m];
      Tinv[1 + (b_m << 2)] = R[3 * b_m + 1];
      Tinv[2 + (b_m << 2)] = R[3 * b_m + 2];
      Tinv[12 + b_m] = R_0[b_m + 6] * T[14] + (R_0[b_m + 3] * T[13] + R_0[b_m] *
        T[12]);
    }

    Tinv[3] = 0.0;
    Tinv[7] = 0.0;
    Tinv[11] = 0.0;
    Tinv[15] = 1.0;
    R_0[0] = 0.0;
    R_0[3] = -Tinv[14];
    R_0[6] = Tinv[13];
    R_0[1] = Tinv[14];
    R_0[4] = 0.0;
    R_0[7] = -Tinv[12];
    R_0[2] = -Tinv[13];
    R_0[5] = Tinv[12];
    R_0[8] = 0.0;
    for (b_m = 0; b_m < 3; b_m++) {
      for (obj_tmp = 0; obj_tmp < 3; obj_tmp++) {
        i = b_m + 3 * obj_tmp;
        tmp[i] = 0.0;
        tmp[i] = tmp[3 * obj_tmp + b_m] + Tinv[obj_tmp << 2] * R_0[b_m];
        tmp[i] = Tinv[(obj_tmp << 2) + 1] * R_0[b_m + 3] + tmp[3 * obj_tmp + b_m];
        tmp[i] = Tinv[(obj_tmp << 2) + 2] * R_0[b_m + 6] + tmp[3 * obj_tmp + b_m];
        X->data[X->size[0] * b_i].f1[obj_tmp + 6 * b_m] = Tinv[(b_m << 2) +
          obj_tmp];
      }
    }

    for (b_m = 0; b_m < 3; b_m++) {
      obj_tmp = 6 * (b_m + 3);
      X->data[X->size[0] * b_i].f1[obj_tmp] = 0.0;
      X->data[X->size[0] * b_i].f1[1 + obj_tmp] = 0.0;
      X->data[X->size[0] * b_i].f1[2 + obj_tmp] = 0.0;
    }

    for (b_m = 0; b_m < 3; b_m++) {
      X->data[X->size[0] * b_i].f1[3 + 6 * b_m] = tmp[3 * b_m];
      X->data[X->size[0] * b_i].f1[4 + 6 * b_m] = tmp[3 * b_m + 1];
      X->data[X->size[0] * b_i].f1[5 + 6 * b_m] = tmp[3 * b_m + 2];
    }

    for (b_m = 0; b_m < 3; b_m++) {
      obj_tmp = 6 * (b_m + 3);
      X->data[X->size[0] * b_i].f1[3 + obj_tmp] = Tinv[b_m << 2];
      X->data[X->size[0] * b_i].f1[4 + obj_tmp] = Tinv[(b_m << 2) + 1];
      X->data[X->size[0] * b_i].f1[5 + obj_tmp] = Tinv[(b_m << 2) + 2];
    }

    b_idx_0 = robot->Bodies[b_i]->ParentIndex;
    if (b_idx_0 > 0.0) {
      loop_ub = (int32_T)b_idx_0;
      for (b_m = 0; b_m < 6; b_m++) {
        b_idx_1 = 0.0;
        for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
          i = X->size[0] * b_i;
          b_idx_1 += vB->data[(loop_ub - 1) * vB->size[0] + obj_tmp] * X->data[i]
            .f1[6 * obj_tmp + b_m];
        }

        obj_tmp = vJ->size[0] * b_i;
        q_data[b_m] = vJ->data[obj_tmp + b_m] + b_idx_1;
      }

      for (b_m = 0; b_m < 6; b_m++) {
        obj_tmp = vB->size[0] * b_i;
        vB->data[b_m + obj_tmp] = q_data[b_m];
      }

      if (S->size[1] == 1) {
        loop_ub = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (obj_tmp = 0; obj_tmp < loop_ub; obj_tmp++) {
            b_idx_1 = S->data[S->size[0] * obj_tmp + b_m] * qddoti_data[obj_tmp]
              + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else if (d_i == 1) {
        loop_ub = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (obj_tmp = 0; obj_tmp < loop_ub; obj_tmp++) {
            b_idx_1 = S->data[S->size[0] * obj_tmp + b_m] * qddoti_data[obj_tmp]
              + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else {
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
        }
      }

      R[0] = 0.0;
      b_m = vB->size[0] * b_i;
      R[3] = -vB->data[b_m + 2];
      b_m = vB->size[0] * b_i;
      R[6] = vB->data[b_m + 1];
      b_m = vB->size[0] * b_i + 2;
      R[1] = vB->data[b_m];
      R[4] = 0.0;
      b_m = vB->size[0] * b_i;
      R[7] = -vB->data[b_m];
      b_m = vB->size[0] * b_i + 1;
      R[2] = -vB->data[b_m];
      b_m = vB->size[0] * b_i;
      R[5] = vB->data[b_m];
      R[8] = 0.0;
      loop_ub = (int32_T)b_idx_0;
      R_1[3] = 0.0;
      b_m = vB->size[0] * b_i;
      R_1[9] = -vB->data[b_m + 5];
      b_m = vB->size[0] * b_i;
      R_1[15] = vB->data[b_m + 4];
      b_m = vB->size[0] * b_i + 5;
      R_1[4] = vB->data[b_m];
      R_1[10] = 0.0;
      b_m = vB->size[0] * b_i;
      R_1[16] = -vB->data[b_m + 3];
      b_m = vB->size[0] * b_i + 4;
      R_1[5] = -vB->data[b_m];
      b_m = vB->size[0] * b_i + 3;
      R_1[11] = vB->data[b_m];
      R_1[17] = 0.0;
      for (b_m = 0; b_m < 3; b_m++) {
        R_1[6 * b_m] = R[3 * b_m];
        obj_tmp = 6 * (b_m + 3);
        R_1[obj_tmp] = 0.0;
        R_1[3 + obj_tmp] = R[3 * b_m];
        R_1[1 + 6 * b_m] = R[3 * b_m + 1];
        R_1[1 + obj_tmp] = 0.0;
        R_1[4 + obj_tmp] = R[3 * b_m + 1];
        R_1[2 + 6 * b_m] = R[3 * b_m + 2];
        R_1[2 + obj_tmp] = 0.0;
        R_1[5 + obj_tmp] = R[3 * b_m + 2];
      }

      for (b_m = 0; b_m < 6; b_m++) {
        b_idx_1 = 0.0;
        for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
          i = X->size[0] * b_i;
          b_idx_1 += aB->data[(loop_ub - 1) * aB->size[0] + obj_tmp] * X->data[i]
            .f1[6 * obj_tmp + b_m];
        }

        X_0[b_m] = b_idx_1 + y[b_m];
        q_data[b_m] = 0.0;
        for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
          i = vJ->size[0] * b_i;
          b_idx_1 = R_1[6 * obj_tmp + b_m] * vJ->data[i + obj_tmp] + q_data[b_m];
          q_data[b_m] = b_idx_1;
        }
      }

      for (b_m = 0; b_m < 6; b_m++) {
        obj_tmp = aB->size[0] * b_i;
        aB->data[b_m + obj_tmp] = X_0[b_m] + q_data[b_m];
      }

      R_0[0] = 0.0;
      R_0[3] = -T[14];
      R_0[6] = T[13];
      R_0[1] = T[14];
      R_0[4] = 0.0;
      R_0[7] = -T[12];
      R_0[2] = -T[13];
      R_0[5] = T[12];
      R_0[8] = 0.0;
      for (b_m = 0; b_m < 3; b_m++) {
        for (obj_tmp = 0; obj_tmp < 3; obj_tmp++) {
          i = b_m + 3 * obj_tmp;
          tmp[i] = 0.0;
          tmp[i] = tmp[3 * obj_tmp + b_m] + T[obj_tmp << 2] * R_0[b_m];
          tmp[i] = T[(obj_tmp << 2) + 1] * R_0[b_m + 3] + tmp[3 * obj_tmp + b_m];
          tmp[i] = T[(obj_tmp << 2) + 2] * R_0[b_m + 6] + tmp[3 * obj_tmp + b_m];
          R_1[obj_tmp + 6 * b_m] = T[(b_m << 2) + obj_tmp];
          R_1[obj_tmp + 6 * (b_m + 3)] = 0.0;
        }
      }

      for (b_m = 0; b_m < 3; b_m++) {
        R_1[3 + 6 * b_m] = tmp[3 * b_m];
        d_i = 6 * (b_m + 3);
        R_1[3 + d_i] = T[b_m << 2];
        R_1[4 + 6 * b_m] = tmp[3 * b_m + 1];
        R_1[4 + d_i] = T[(b_m << 2) + 1];
        R_1[5 + 6 * b_m] = tmp[3 * b_m + 2];
        R_1[5 + d_i] = T[(b_m << 2) + 2];
      }

      for (b_m = 0; b_m < 6; b_m++) {
        for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
          d_i = b_m + 6 * obj_tmp;
          I[d_i] = 0.0;
          for (i = 0; i < 6; i++) {
            I[d_i] = Xtree->data[((int32_T)b_idx_0 - 1) * Xtree->size[0]].f1[6 *
              i + b_m] * R_1[6 * obj_tmp + i] + I[6 * obj_tmp + b_m];
          }
        }
      }

      for (b_m = 0; b_m < 6; b_m++) {
        for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
          Xtree->data[Xtree->size[0] * b_i].f1[obj_tmp + 6 * b_m] = I[6 * b_m +
            obj_tmp];
        }
      }
    } else {
      for (b_m = 0; b_m < 6; b_m++) {
        obj_tmp = vJ->size[0] * b_i;
        i = vB->size[0] * b_i;
        vB->data[b_m + i] = vJ->data[obj_tmp + b_m];
      }

      if (S->size[1] == 1) {
        loop_ub = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (obj_tmp = 0; obj_tmp < loop_ub; obj_tmp++) {
            b_idx_1 = S->data[S->size[0] * obj_tmp + b_m] * qddoti_data[obj_tmp]
              + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else if (d_i == 1) {
        loop_ub = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (obj_tmp = 0; obj_tmp < loop_ub; obj_tmp++) {
            b_idx_1 = S->data[S->size[0] * obj_tmp + b_m] * qddoti_data[obj_tmp]
              + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else {
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
        }
      }

      for (b_m = 0; b_m < 6; b_m++) {
        b_idx_1 = 0.0;
        for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
          i = X->size[0] * b_i;
          b_idx_1 += X->data[i].f1[6 * obj_tmp + b_m] * a0[obj_tmp];
        }

        obj_tmp = aB->size[0] * b_i;
        aB->data[b_m + obj_tmp] = b_idx_1 + y[b_m];
      }

      R_0[0] = 0.0;
      R_0[3] = -T[14];
      R_0[6] = T[13];
      R_0[1] = T[14];
      R_0[4] = 0.0;
      R_0[7] = -T[12];
      R_0[2] = -T[13];
      R_0[5] = T[12];
      R_0[8] = 0.0;
      for (b_m = 0; b_m < 3; b_m++) {
        for (obj_tmp = 0; obj_tmp < 3; obj_tmp++) {
          i = b_m + 3 * obj_tmp;
          tmp[i] = 0.0;
          tmp[i] = tmp[3 * obj_tmp + b_m] + T[obj_tmp << 2] * R_0[b_m];
          tmp[i] = T[(obj_tmp << 2) + 1] * R_0[b_m + 3] + tmp[3 * obj_tmp + b_m];
          tmp[i] = T[(obj_tmp << 2) + 2] * R_0[b_m + 6] + tmp[3 * obj_tmp + b_m];
          Xtree->data[Xtree->size[0] * b_i].f1[obj_tmp + 6 * b_m] = T[(b_m << 2)
            + obj_tmp];
        }
      }

      for (b_m = 0; b_m < 3; b_m++) {
        obj_tmp = 6 * (b_m + 3);
        Xtree->data[Xtree->size[0] * b_i].f1[obj_tmp] = 0.0;
        Xtree->data[Xtree->size[0] * b_i].f1[1 + obj_tmp] = 0.0;
        Xtree->data[Xtree->size[0] * b_i].f1[2 + obj_tmp] = 0.0;
      }

      for (b_m = 0; b_m < 3; b_m++) {
        Xtree->data[Xtree->size[0] * b_i].f1[3 + 6 * b_m] = tmp[3 * b_m];
        Xtree->data[Xtree->size[0] * b_i].f1[4 + 6 * b_m] = tmp[3 * b_m + 1];
        Xtree->data[Xtree->size[0] * b_i].f1[5 + 6 * b_m] = tmp[3 * b_m + 2];
      }

      for (b_m = 0; b_m < 3; b_m++) {
        obj_tmp = 6 * (b_m + 3);
        Xtree->data[Xtree->size[0] * b_i].f1[3 + obj_tmp] = T[b_m << 2];
        Xtree->data[Xtree->size[0] * b_i].f1[4 + obj_tmp] = T[(b_m << 2) + 1];
        Xtree->data[Xtree->size[0] * b_i].f1[5 + obj_tmp] = T[(b_m << 2) + 2];
      }
    }

    for (b_m = 0; b_m < 36; b_m++) {
      I[b_m] = robot->Bodies[b_i]->SpatialInertia[b_m];
    }

    R[0] = 0.0;
    b_m = vB->size[0] * b_i + 2;
    R[3] = -vB->data[b_m];
    b_m = vB->size[0] * b_i + 1;
    R[6] = vB->data[b_m];
    b_m = vB->size[0] * b_i + 2;
    R[1] = vB->data[b_m];
    R[4] = 0.0;
    b_m = vB->size[0] * b_i;
    R[7] = -vB->data[b_m];
    b_m = vB->size[0] * b_i + 1;
    R[2] = -vB->data[b_m];
    b_m = vB->size[0] * b_i;
    R[5] = vB->data[b_m];
    R[8] = 0.0;
    R_1[18] = 0.0;
    b_m = vB->size[0] * b_i + 5;
    R_1[24] = -vB->data[b_m];
    b_m = vB->size[0] * b_i + 4;
    R_1[30] = vB->data[b_m];
    b_m = vB->size[0] * b_i + 5;
    R_1[19] = vB->data[b_m];
    R_1[25] = 0.0;
    b_m = vB->size[0] * b_i + 3;
    R_1[31] = -vB->data[b_m];
    b_m = vB->size[0] * b_i + 4;
    R_1[20] = -vB->data[b_m];
    b_m = vB->size[0] * b_i + 3;
    R_1[26] = vB->data[b_m];
    R_1[32] = 0.0;
    for (b_m = 0; b_m < 3; b_m++) {
      R_1[6 * b_m] = R[3 * b_m];
      R_1[3 + 6 * b_m] = 0.0;
      obj_tmp = 6 * (b_m + 3);
      R_1[3 + obj_tmp] = R[3 * b_m];
      R_1[1 + 6 * b_m] = R[3 * b_m + 1];
      R_1[4 + 6 * b_m] = 0.0;
      R_1[4 + obj_tmp] = R[3 * b_m + 1];
      R_1[2 + 6 * b_m] = R[3 * b_m + 2];
      R_1[5 + 6 * b_m] = 0.0;
      R_1[5 + obj_tmp] = R[3 * b_m + 2];
    }

    for (b_m = 0; b_m < 6; b_m++) {
      y[b_m] = 0.0;
      X_0[b_m] = 0.0;
      for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
        i = vB->size[0] * b_i;
        b_idx_0 = I[6 * obj_tmp + b_m] * vB->data[i + obj_tmp] + y[b_m];
        i = aB->size[0] * b_i;
        b_idx_1 = I[6 * obj_tmp + b_m] * aB->data[i + obj_tmp] + X_0[b_m];
        y[b_m] = b_idx_0;
        X_0[b_m] = b_idx_1;
      }
    }

    for (b_m = 0; b_m < 6; b_m++) {
      q_data[b_m] = 0.0;
      b_idx_1 = 0.0;
      for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
        b_idx_1 += Xtree->data[Xtree->size[0] * b_i].f1[6 * b_m + obj_tmp] * 0.0;
        q_data[b_m] += R_1[6 * obj_tmp + b_m] * y[obj_tmp];
      }

      f->data[b_m + f->size[0] * b_i] = (X_0[b_m] + q_data[b_m]) - b_idx_1;
    }

    b_i++;
  }

  controller_abb46_emxFree_char_T(&switch_expression);
  controller_abb46_emxFree_real_T(&aB);
  controller_abb46_emxFree_real_T(&vB);
  controller_abb46_emxFree_real_T(&vJ);
  controller__emxFree_cell_wrap_7(&Xtree);
  b_i = (int32_T)(((-1.0 - nb) + 1.0) / -1.0);
  d_i = 0;
  controller_abb46_emxInit_real_T(&taui, 1);
  controller_abb46_emxInit_real_T(&b_a, 2);
  while (d_i <= b_i - 1) {
    a_idx_0 = nb + -(real_T)d_i;
    obj_tmp = (int32_T)a_idx_0 - 1;
    obj = robot->Bodies[obj_tmp];
    if (!controller_abb4600_strcmp_f3(obj->JointInternal.Type)) {
      obj = robot->Bodies[(int32_T)a_idx_0 - 1];
      e_i = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      contro_emxEnsureCapacity_real_T(S, e_i);
      loop_ub = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (e_i = 0; e_i <= loop_ub; e_i++) {
        S->data[e_i] = obj->JointInternal.MotionSubspace->data[e_i];
      }

      e_i = b_a->size[0] * b_a->size[1];
      b_a->size[0] = S->size[1];
      b_a->size[1] = 6;
      contro_emxEnsureCapacity_real_T(b_a, e_i);
      for (e_i = 0; e_i < 6; e_i++) {
        loop_ub = S->size[1];
        for (b_m = 0; b_m < loop_ub; b_m++) {
          b_a->data[b_m + b_a->size[0] * e_i] = S->data[S->size[0] * b_m + e_i];
        }
      }

      b_m = b_a->size[0];
      e_i = taui->size[0];
      taui->size[0] = b_a->size[0];
      contro_emxEnsureCapacity_real_T(taui, e_i);
      for (e_i = 1; e_i <= b_m; e_i++) {
        taui->data[e_i - 1] = 0.0;
      }

      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        e_i = obj_tmp * f->size[0] + loop_ub;
        if (f->data[e_i] != 0.0) {
          i = loop_ub * b_m;
          for (f_i = 0; f_i < b_m; f_i++) {
            e_i = ((int32_T)a_idx_0 - 1) * f->size[0] + loop_ub;
            taui->data[f_i] += f->data[e_i] * b_a->data[i + f_i];
          }
        }
      }

      i = (int32_T)a_idx_0;
      b_idx_0 = robot->VelocityDoFMap[i - 1];
      b_idx_1 = robot->VelocityDoFMap[i + 7];
      if (b_idx_0 > b_idx_1) {
        b_m = 0;
        e_i = 0;
      } else {
        b_m = (int32_T)b_idx_0 - 1;
        e_i = (int32_T)b_idx_1;
      }

      loop_ub = e_i - b_m;
      for (e_i = 0; e_i < loop_ub; e_i++) {
        o_data[e_i] = b_m + e_i;
      }

      for (e_i = 0; e_i < loop_ub; e_i++) {
        tau[o_data[e_i]] = taui->data[e_i];
      }
    }

    b_idx_0 = robot->Bodies[(int32_T)a_idx_0 - 1]->ParentIndex;
    if (b_idx_0 > 0.0) {
      loop_ub = (int32_T)b_idx_0;
      i = (int32_T)a_idx_0;
      f_i = (int32_T)b_idx_0;
      for (e_i = 0; e_i < 6; e_i++) {
        b_idx_1 = 0.0;
        for (b_m = 0; b_m < 6; b_m++) {
          b_idx_1 += f->data[(i - 1) * f->size[0] + b_m] * X->data[obj_tmp *
            X->size[0]].f1[6 * e_i + b_m];
        }

        a0[e_i] = f->data[(loop_ub - 1) * f->size[0] + e_i] + b_idx_1;
      }

      for (e_i = 0; e_i < 6; e_i++) {
        f->data[e_i + f->size[0] * (f_i - 1)] = a0[e_i];
      }
    }

    d_i++;
  }

  controller_abb46_emxFree_real_T(&b_a);
  controller_abb46_emxFree_real_T(&taui);
  controller_abb46_emxFree_real_T(&S);
  controller_abb46_emxFree_real_T(&f);
  controller__emxFree_cell_wrap_7(&X);
}

/* Function for MATLAB Function: '<S4>/MATLAB Function' */
static void RigidBodyTreeDynamics_inverse_o(const
  e_robotics_manip_internal_R_a_T *robot, const real_T q_2[6], const real_T
  qdot[6], const real_T qddot[6], real_T tau[6])
{
  real_T a0[6];
  real_T nb;
  emxArray_cell_wrap_7_controll_T *X;
  emxArray_cell_wrap_7_controll_T *Xtree;
  emxArray_real_T_controller_ab_T *vJ;
  emxArray_real_T_controller_ab_T *vB;
  emxArray_real_T_controller_ab_T *aB;
  emxArray_real_T_controller_ab_T *f;
  emxArray_real_T_controller_ab_T *S;
  real_T T[16];
  real_T qddoti_data[6];
  real_T Tinv[16];
  real_T I[36];
  emxArray_real_T_controller_ab_T *taui;
  int32_T j;
  int32_T o_data[6];
  c_robotics_manip_internal_Rig_T *obj;
  emxArray_real_T_controller_ab_T *b_a;
  int32_T b_m;
  int32_T aoffset;
  int32_T e_i;
  int32_T b_aoffset;
  real_T R[9];
  real_T y[6];
  int32_T c_aoffset;
  int32_T i;
  real_T q_data[6];
  real_T R_0[9];
  real_T tmp[9];
  real_T R_1[36];
  real_T X_0[6];
  real_T b_idx_0;
  real_T b_idx_1;
  real_T a_idx_1;
  real_T a_idx_0;
  int32_T loop_ub_tmp;
  int32_T obj_tmp;
  int32_T exitg1;
  a0[0] = 0.0;
  a0[1] = 0.0;
  a0[2] = 0.0;
  a0[3] = -robot->Gravity[0];
  a0[4] = -robot->Gravity[1];
  a0[5] = -robot->Gravity[2];
  controller_abb46_emxInit_real_T(&vJ, 2);
  nb = robot->NumBodies;
  e_i = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  vJ->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(vJ, e_i);
  loop_ub_tmp = 6 * (int32_T)nb - 1;
  for (e_i = 0; e_i <= loop_ub_tmp; e_i++) {
    vJ->data[e_i] = 0.0;
  }

  controller_abb46_emxInit_real_T(&vB, 2);
  e_i = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(vB, e_i);
  for (e_i = 0; e_i <= loop_ub_tmp; e_i++) {
    vB->data[e_i] = 0.0;
  }

  controller_abb46_emxInit_real_T(&aB, 2);
  e_i = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(aB, e_i);
  for (e_i = 0; e_i <= loop_ub_tmp; e_i++) {
    aB->data[e_i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    tau[i] = 0.0;
  }

  controller__emxInit_cell_wrap_7(&X, 2);
  controller__emxInit_cell_wrap_7(&Xtree, 2);
  e_i = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = (int32_T)nb;
  c_emxEnsureCapacity_cell_wrap_7(Xtree, e_i);
  e_i = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = (int32_T)nb;
  c_emxEnsureCapacity_cell_wrap_7(X, e_i);
  loop_ub_tmp = 0;
  do {
    exitg1 = 0;
    e_i = (int32_T)nb - 1;
    if (loop_ub_tmp <= e_i) {
      controller_abb4600_eye(Xtree->data[Xtree->size[0] * loop_ub_tmp].f1);
      for (e_i = 0; e_i < 36; e_i++) {
        X->data[X->size[0] * loop_ub_tmp].f1[e_i] = 0.0;
      }

      for (e_i = 0; e_i < 6; e_i++) {
        X->data[X->size[0] * loop_ub_tmp].f1[e_i + 6 * e_i] = 1.0;
      }

      loop_ub_tmp++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  controller_abb46_emxInit_real_T(&f, 2);
  b_m = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = (int32_T)nb;
  contro_emxEnsureCapacity_real_T(f, b_m);
  loop_ub_tmp = 0;
  controller_abb46_emxInit_real_T(&S, 2);
  while (loop_ub_tmp <= e_i) {
    obj = robot->Bodies[loop_ub_tmp];
    b_m = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    contro_emxEnsureCapacity_real_T(S, b_m);
    aoffset = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (b_m = 0; b_m <= aoffset; b_m++) {
      S->data[b_m] = obj->JointInternal.MotionSubspace->data[b_m];
    }

    a_idx_0 = robot->PositionDoFMap[loop_ub_tmp];
    a_idx_1 = robot->PositionDoFMap[loop_ub_tmp + 8];
    b_idx_0 = robot->VelocityDoFMap[loop_ub_tmp];
    b_idx_1 = robot->VelocityDoFMap[loop_ub_tmp + 8];
    if (a_idx_1 < a_idx_0) {
      obj = robot->Bodies[loop_ub_tmp];
      c_Joint_transformBodyToParent_g(&obj->JointInternal, T);
      c_aoffset = 1;
      qddoti_data[0] = 0.0;
      for (b_m = 0; b_m < 6; b_m++) {
        i = vJ->size[0] * loop_ub_tmp;
        vJ->data[b_m + i] = 0.0;
      }
    } else {
      if (a_idx_0 > a_idx_1) {
        i = 0;
        b_aoffset = 0;
      } else {
        i = (int32_T)a_idx_0 - 1;
        b_aoffset = (int32_T)a_idx_1;
      }

      if (b_idx_0 > b_idx_1) {
        obj_tmp = 1;
        aoffset = 1;
        j = 0;
        b_m = 0;
      } else {
        obj_tmp = (int32_T)b_idx_0;
        aoffset = (int32_T)b_idx_1 + 1;
        j = (int32_T)b_idx_0 - 1;
        b_m = (int32_T)b_idx_1;
      }

      c_aoffset = b_m - j;
      for (b_m = 0; b_m < c_aoffset; b_m++) {
        qddoti_data[b_m] = qddot[j + b_m];
      }

      obj = robot->Bodies[loop_ub_tmp];
      b_aoffset -= i;
      for (b_m = 0; b_m < b_aoffset; b_m++) {
        q_data[b_m] = q_2[i + b_m];
      }

      con_Joint_transformBodyToParent(&obj->JointInternal, q_data, &b_aoffset, T);
      if (S->size[1] == 1) {
        aoffset -= obj_tmp;
        for (b_m = 0; b_m < aoffset; b_m++) {
          q_data[b_m] = qdot[(obj_tmp + b_m) - 1];
        }

        for (b_m = 0; b_m < 6; b_m++) {
          i = vJ->size[0] * loop_ub_tmp;
          vJ->data[b_m + i] = 0.0;
          aoffset = S->size[1];
          for (i = 0; i < aoffset; i++) {
            obj_tmp = vJ->size[0] * loop_ub_tmp;
            b_aoffset = b_m + vJ->size[0] * loop_ub_tmp;
            vJ->data[b_aoffset] = S->data[S->size[0] * i + b_m] * q_data[i] +
              vJ->data[obj_tmp + b_m];
          }
        }
      } else {
        aoffset -= obj_tmp;
        if (aoffset == 1) {
          for (b_m = 0; b_m < aoffset; b_m++) {
            q_data[b_m] = qdot[(obj_tmp + b_m) - 1];
          }

          for (b_m = 0; b_m < 6; b_m++) {
            i = vJ->size[0] * loop_ub_tmp;
            vJ->data[b_m + i] = 0.0;
            aoffset = S->size[1];
            for (i = 0; i < aoffset; i++) {
              obj_tmp = vJ->size[0] * loop_ub_tmp;
              b_aoffset = b_m + vJ->size[0] * loop_ub_tmp;
              vJ->data[b_aoffset] = S->data[S->size[0] * i + b_m] * q_data[i] +
                vJ->data[obj_tmp + b_m];
            }
          }
        } else {
          for (i = 0; i < 6; i++) {
            b_m = vJ->size[0] * loop_ub_tmp;
            vJ->data[i + b_m] = 0.0;
          }

          for (aoffset = -1; aoffset + 2 <= S->size[1]; aoffset++) {
            if (qdot[obj_tmp + aoffset] != 0.0) {
              b_aoffset = (aoffset + 1) * 6;
              for (j = 0; j < 6; j++) {
                b_m = vJ->size[0] * loop_ub_tmp;
                i = vJ->size[0] * loop_ub_tmp;
                vJ->data[j + i] = vJ->data[b_m + j] + qdot[obj_tmp + aoffset] *
                  S->data[b_aoffset + j];
              }
            }
          }
        }
      }
    }

    for (b_m = 0; b_m < 3; b_m++) {
      R_0[3 * b_m] = -T[b_m];
      R[3 * b_m] = T[b_m];
      obj_tmp = 1 + 3 * b_m;
      R_0[obj_tmp] = -T[b_m + 4];
      R[obj_tmp] = T[b_m + 4];
      obj_tmp = 2 + 3 * b_m;
      R_0[obj_tmp] = -T[b_m + 8];
      R[obj_tmp] = T[b_m + 8];
    }

    for (b_m = 0; b_m < 3; b_m++) {
      Tinv[b_m << 2] = R[3 * b_m];
      Tinv[1 + (b_m << 2)] = R[3 * b_m + 1];
      Tinv[2 + (b_m << 2)] = R[3 * b_m + 2];
      Tinv[12 + b_m] = R_0[b_m + 6] * T[14] + (R_0[b_m + 3] * T[13] + R_0[b_m] *
        T[12]);
    }

    Tinv[3] = 0.0;
    Tinv[7] = 0.0;
    Tinv[11] = 0.0;
    Tinv[15] = 1.0;
    R_0[0] = 0.0;
    R_0[3] = -Tinv[14];
    R_0[6] = Tinv[13];
    R_0[1] = Tinv[14];
    R_0[4] = 0.0;
    R_0[7] = -Tinv[12];
    R_0[2] = -Tinv[13];
    R_0[5] = Tinv[12];
    R_0[8] = 0.0;
    for (b_m = 0; b_m < 3; b_m++) {
      for (i = 0; i < 3; i++) {
        obj_tmp = b_m + 3 * i;
        tmp[obj_tmp] = 0.0;
        tmp[obj_tmp] = tmp[3 * i + b_m] + Tinv[i << 2] * R_0[b_m];
        tmp[obj_tmp] = Tinv[(i << 2) + 1] * R_0[b_m + 3] + tmp[3 * i + b_m];
        tmp[obj_tmp] = Tinv[(i << 2) + 2] * R_0[b_m + 6] + tmp[3 * i + b_m];
        X->data[X->size[0] * loop_ub_tmp].f1[i + 6 * b_m] = Tinv[(b_m << 2) + i];
      }
    }

    for (b_m = 0; b_m < 3; b_m++) {
      i = 6 * (b_m + 3);
      X->data[X->size[0] * loop_ub_tmp].f1[i] = 0.0;
      X->data[X->size[0] * loop_ub_tmp].f1[1 + i] = 0.0;
      X->data[X->size[0] * loop_ub_tmp].f1[2 + i] = 0.0;
    }

    for (b_m = 0; b_m < 3; b_m++) {
      X->data[X->size[0] * loop_ub_tmp].f1[3 + 6 * b_m] = tmp[3 * b_m];
      X->data[X->size[0] * loop_ub_tmp].f1[4 + 6 * b_m] = tmp[3 * b_m + 1];
      X->data[X->size[0] * loop_ub_tmp].f1[5 + 6 * b_m] = tmp[3 * b_m + 2];
    }

    for (b_m = 0; b_m < 3; b_m++) {
      i = 6 * (b_m + 3);
      X->data[X->size[0] * loop_ub_tmp].f1[3 + i] = Tinv[b_m << 2];
      X->data[X->size[0] * loop_ub_tmp].f1[4 + i] = Tinv[(b_m << 2) + 1];
      X->data[X->size[0] * loop_ub_tmp].f1[5 + i] = Tinv[(b_m << 2) + 2];
    }

    b_idx_0 = robot->Bodies[loop_ub_tmp]->ParentIndex;
    if (b_idx_0 > 0.0) {
      aoffset = (int32_T)b_idx_0;
      for (b_m = 0; b_m < 6; b_m++) {
        b_idx_1 = 0.0;
        for (i = 0; i < 6; i++) {
          obj_tmp = X->size[0] * loop_ub_tmp;
          b_idx_1 += vB->data[(aoffset - 1) * vB->size[0] + i] * X->data[obj_tmp]
            .f1[6 * i + b_m];
        }

        i = vJ->size[0] * loop_ub_tmp;
        q_data[b_m] = vJ->data[i + b_m] + b_idx_1;
      }

      for (b_m = 0; b_m < 6; b_m++) {
        i = vB->size[0] * loop_ub_tmp;
        vB->data[b_m + i] = q_data[b_m];
      }

      if (S->size[1] == 1) {
        aoffset = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (i = 0; i < aoffset; i++) {
            b_idx_1 = S->data[S->size[0] * i + b_m] * qddoti_data[i] + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else if (c_aoffset == 1) {
        aoffset = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (i = 0; i < aoffset; i++) {
            b_idx_1 = S->data[S->size[0] * i + b_m] * qddoti_data[i] + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else {
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
        }

        for (b_m = 0; b_m < S->size[1]; b_m++) {
          if (qddoti_data[b_m] != 0.0) {
            c_aoffset = b_m * 6;
            for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
              b_idx_1 = S->data[c_aoffset + obj_tmp] * qddoti_data[b_m] +
                y[obj_tmp];
              y[obj_tmp] = b_idx_1;
            }
          }
        }
      }

      R[0] = 0.0;
      b_m = vB->size[0] * loop_ub_tmp;
      R[3] = -vB->data[b_m + 2];
      b_m = vB->size[0] * loop_ub_tmp;
      R[6] = vB->data[b_m + 1];
      b_m = vB->size[0] * loop_ub_tmp + 2;
      R[1] = vB->data[b_m];
      R[4] = 0.0;
      b_m = vB->size[0] * loop_ub_tmp;
      R[7] = -vB->data[b_m];
      b_m = vB->size[0] * loop_ub_tmp + 1;
      R[2] = -vB->data[b_m];
      b_m = vB->size[0] * loop_ub_tmp;
      R[5] = vB->data[b_m];
      R[8] = 0.0;
      aoffset = (int32_T)b_idx_0;
      R_1[3] = 0.0;
      b_m = vB->size[0] * loop_ub_tmp;
      R_1[9] = -vB->data[b_m + 5];
      b_m = vB->size[0] * loop_ub_tmp;
      R_1[15] = vB->data[b_m + 4];
      b_m = vB->size[0] * loop_ub_tmp + 5;
      R_1[4] = vB->data[b_m];
      R_1[10] = 0.0;
      b_m = vB->size[0] * loop_ub_tmp;
      R_1[16] = -vB->data[b_m + 3];
      b_m = vB->size[0] * loop_ub_tmp + 4;
      R_1[5] = -vB->data[b_m];
      b_m = vB->size[0] * loop_ub_tmp + 3;
      R_1[11] = vB->data[b_m];
      R_1[17] = 0.0;
      for (b_m = 0; b_m < 3; b_m++) {
        R_1[6 * b_m] = R[3 * b_m];
        obj_tmp = 6 * (b_m + 3);
        R_1[obj_tmp] = 0.0;
        R_1[3 + obj_tmp] = R[3 * b_m];
        R_1[1 + 6 * b_m] = R[3 * b_m + 1];
        R_1[1 + obj_tmp] = 0.0;
        R_1[4 + obj_tmp] = R[3 * b_m + 1];
        R_1[2 + 6 * b_m] = R[3 * b_m + 2];
        R_1[2 + obj_tmp] = 0.0;
        R_1[5 + obj_tmp] = R[3 * b_m + 2];
      }

      for (b_m = 0; b_m < 6; b_m++) {
        b_idx_1 = 0.0;
        for (i = 0; i < 6; i++) {
          obj_tmp = X->size[0] * loop_ub_tmp;
          b_idx_1 += aB->data[(aoffset - 1) * aB->size[0] + i] * X->data[obj_tmp]
            .f1[6 * i + b_m];
        }

        X_0[b_m] = b_idx_1 + y[b_m];
        q_data[b_m] = 0.0;
        for (i = 0; i < 6; i++) {
          obj_tmp = vJ->size[0] * loop_ub_tmp;
          b_idx_1 = R_1[6 * i + b_m] * vJ->data[obj_tmp + i] + q_data[b_m];
          q_data[b_m] = b_idx_1;
        }
      }

      for (b_m = 0; b_m < 6; b_m++) {
        i = aB->size[0] * loop_ub_tmp;
        aB->data[b_m + i] = X_0[b_m] + q_data[b_m];
      }

      R_0[0] = 0.0;
      R_0[3] = -T[14];
      R_0[6] = T[13];
      R_0[1] = T[14];
      R_0[4] = 0.0;
      R_0[7] = -T[12];
      R_0[2] = -T[13];
      R_0[5] = T[12];
      R_0[8] = 0.0;
      for (b_m = 0; b_m < 3; b_m++) {
        for (i = 0; i < 3; i++) {
          obj_tmp = b_m + 3 * i;
          tmp[obj_tmp] = 0.0;
          tmp[obj_tmp] = tmp[3 * i + b_m] + T[i << 2] * R_0[b_m];
          tmp[obj_tmp] = T[(i << 2) + 1] * R_0[b_m + 3] + tmp[3 * i + b_m];
          tmp[obj_tmp] = T[(i << 2) + 2] * R_0[b_m + 6] + tmp[3 * i + b_m];
          R_1[i + 6 * b_m] = T[(b_m << 2) + i];
          R_1[i + 6 * (b_m + 3)] = 0.0;
        }
      }

      for (b_m = 0; b_m < 3; b_m++) {
        R_1[3 + 6 * b_m] = tmp[3 * b_m];
        c_aoffset = 6 * (b_m + 3);
        R_1[3 + c_aoffset] = T[b_m << 2];
        R_1[4 + 6 * b_m] = tmp[3 * b_m + 1];
        R_1[4 + c_aoffset] = T[(b_m << 2) + 1];
        R_1[5 + 6 * b_m] = tmp[3 * b_m + 2];
        R_1[5 + c_aoffset] = T[(b_m << 2) + 2];
      }

      for (b_m = 0; b_m < 6; b_m++) {
        for (i = 0; i < 6; i++) {
          c_aoffset = b_m + 6 * i;
          I[c_aoffset] = 0.0;
          for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
            I[c_aoffset] = Xtree->data[((int32_T)b_idx_0 - 1) * Xtree->size[0]].
              f1[6 * obj_tmp + b_m] * R_1[6 * i + obj_tmp] + I[6 * i + b_m];
          }
        }
      }

      for (b_m = 0; b_m < 6; b_m++) {
        for (i = 0; i < 6; i++) {
          Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[i + 6 * b_m] = I[6 * b_m
            + i];
        }
      }
    } else {
      for (b_m = 0; b_m < 6; b_m++) {
        i = vJ->size[0] * loop_ub_tmp;
        obj_tmp = vB->size[0] * loop_ub_tmp;
        vB->data[b_m + obj_tmp] = vJ->data[i + b_m];
      }

      if (S->size[1] == 1) {
        aoffset = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (i = 0; i < aoffset; i++) {
            b_idx_1 = S->data[S->size[0] * i + b_m] * qddoti_data[i] + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else if (c_aoffset == 1) {
        aoffset = S->size[1];
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
          for (i = 0; i < aoffset; i++) {
            b_idx_1 = S->data[S->size[0] * i + b_m] * qddoti_data[i] + y[b_m];
            y[b_m] = b_idx_1;
          }
        }
      } else {
        for (b_m = 0; b_m < 6; b_m++) {
          y[b_m] = 0.0;
        }

        for (b_m = 0; b_m < S->size[1]; b_m++) {
          if (qddoti_data[b_m] != 0.0) {
            c_aoffset = b_m * 6;
            for (obj_tmp = 0; obj_tmp < 6; obj_tmp++) {
              b_idx_1 = S->data[c_aoffset + obj_tmp] * qddoti_data[b_m] +
                y[obj_tmp];
              y[obj_tmp] = b_idx_1;
            }
          }
        }
      }

      for (b_m = 0; b_m < 6; b_m++) {
        b_idx_1 = 0.0;
        for (i = 0; i < 6; i++) {
          obj_tmp = X->size[0] * loop_ub_tmp;
          b_idx_1 += X->data[obj_tmp].f1[6 * i + b_m] * a0[i];
        }

        i = aB->size[0] * loop_ub_tmp;
        aB->data[b_m + i] = b_idx_1 + y[b_m];
      }

      R_0[0] = 0.0;
      R_0[3] = -T[14];
      R_0[6] = T[13];
      R_0[1] = T[14];
      R_0[4] = 0.0;
      R_0[7] = -T[12];
      R_0[2] = -T[13];
      R_0[5] = T[12];
      R_0[8] = 0.0;
      for (b_m = 0; b_m < 3; b_m++) {
        for (i = 0; i < 3; i++) {
          obj_tmp = b_m + 3 * i;
          tmp[obj_tmp] = 0.0;
          tmp[obj_tmp] = tmp[3 * i + b_m] + T[i << 2] * R_0[b_m];
          tmp[obj_tmp] = T[(i << 2) + 1] * R_0[b_m + 3] + tmp[3 * i + b_m];
          tmp[obj_tmp] = T[(i << 2) + 2] * R_0[b_m + 6] + tmp[3 * i + b_m];
          Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[i + 6 * b_m] = T[(b_m <<
            2) + i];
        }
      }

      for (b_m = 0; b_m < 3; b_m++) {
        i = 6 * (b_m + 3);
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[i] = 0.0;
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[1 + i] = 0.0;
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[2 + i] = 0.0;
      }

      for (b_m = 0; b_m < 3; b_m++) {
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[3 + 6 * b_m] = tmp[3 * b_m];
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[4 + 6 * b_m] = tmp[3 * b_m
          + 1];
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[5 + 6 * b_m] = tmp[3 * b_m
          + 2];
      }

      for (b_m = 0; b_m < 3; b_m++) {
        i = 6 * (b_m + 3);
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[3 + i] = T[b_m << 2];
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[4 + i] = T[(b_m << 2) + 1];
        Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[5 + i] = T[(b_m << 2) + 2];
      }
    }

    for (b_m = 0; b_m < 36; b_m++) {
      I[b_m] = robot->Bodies[loop_ub_tmp]->SpatialInertia[b_m];
    }

    R[0] = 0.0;
    b_m = vB->size[0] * loop_ub_tmp + 2;
    R[3] = -vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp + 1;
    R[6] = vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp + 2;
    R[1] = vB->data[b_m];
    R[4] = 0.0;
    b_m = vB->size[0] * loop_ub_tmp;
    R[7] = -vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp + 1;
    R[2] = -vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp;
    R[5] = vB->data[b_m];
    R[8] = 0.0;
    R_1[18] = 0.0;
    b_m = vB->size[0] * loop_ub_tmp + 5;
    R_1[24] = -vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp + 4;
    R_1[30] = vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp + 5;
    R_1[19] = vB->data[b_m];
    R_1[25] = 0.0;
    b_m = vB->size[0] * loop_ub_tmp + 3;
    R_1[31] = -vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp + 4;
    R_1[20] = -vB->data[b_m];
    b_m = vB->size[0] * loop_ub_tmp + 3;
    R_1[26] = vB->data[b_m];
    R_1[32] = 0.0;
    for (b_m = 0; b_m < 3; b_m++) {
      R_1[6 * b_m] = R[3 * b_m];
      R_1[3 + 6 * b_m] = 0.0;
      obj_tmp = 6 * (b_m + 3);
      R_1[3 + obj_tmp] = R[3 * b_m];
      R_1[1 + 6 * b_m] = R[3 * b_m + 1];
      R_1[4 + 6 * b_m] = 0.0;
      R_1[4 + obj_tmp] = R[3 * b_m + 1];
      R_1[2 + 6 * b_m] = R[3 * b_m + 2];
      R_1[5 + 6 * b_m] = 0.0;
      R_1[5 + obj_tmp] = R[3 * b_m + 2];
    }

    for (b_m = 0; b_m < 6; b_m++) {
      y[b_m] = 0.0;
      X_0[b_m] = 0.0;
      for (i = 0; i < 6; i++) {
        obj_tmp = vB->size[0] * loop_ub_tmp;
        b_idx_0 = I[6 * i + b_m] * vB->data[obj_tmp + i] + y[b_m];
        obj_tmp = aB->size[0] * loop_ub_tmp;
        b_idx_1 = I[6 * i + b_m] * aB->data[obj_tmp + i] + X_0[b_m];
        y[b_m] = b_idx_0;
        X_0[b_m] = b_idx_1;
      }
    }

    for (b_m = 0; b_m < 6; b_m++) {
      q_data[b_m] = 0.0;
      b_idx_1 = 0.0;
      for (i = 0; i < 6; i++) {
        b_idx_1 += Xtree->data[Xtree->size[0] * loop_ub_tmp].f1[6 * b_m + i] *
          0.0;
        q_data[b_m] += R_1[6 * i + b_m] * y[i];
      }

      f->data[b_m + f->size[0] * loop_ub_tmp] = (X_0[b_m] + q_data[b_m]) -
        b_idx_1;
    }

    loop_ub_tmp++;
  }

  controller_abb46_emxFree_real_T(&aB);
  controller_abb46_emxFree_real_T(&vB);
  controller_abb46_emxFree_real_T(&vJ);
  controller__emxFree_cell_wrap_7(&Xtree);
  loop_ub_tmp = (int32_T)(((-1.0 - nb) + 1.0) / -1.0);
  c_aoffset = 0;
  controller_abb46_emxInit_real_T(&taui, 1);
  controller_abb46_emxInit_real_T(&b_a, 2);
  while (c_aoffset <= loop_ub_tmp - 1) {
    a_idx_0 = nb + -(real_T)c_aoffset;
    obj_tmp = (int32_T)a_idx_0 - 1;
    obj = robot->Bodies[obj_tmp];
    if (!controller_abb4600_strcmp_f3(obj->JointInternal.Type)) {
      obj = robot->Bodies[(int32_T)a_idx_0 - 1];
      e_i = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      contro_emxEnsureCapacity_real_T(S, e_i);
      aoffset = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (e_i = 0; e_i <= aoffset; e_i++) {
        S->data[e_i] = obj->JointInternal.MotionSubspace->data[e_i];
      }

      e_i = b_a->size[0] * b_a->size[1];
      b_a->size[0] = S->size[1];
      b_a->size[1] = 6;
      contro_emxEnsureCapacity_real_T(b_a, e_i);
      for (e_i = 0; e_i < 6; e_i++) {
        aoffset = S->size[1];
        for (b_m = 0; b_m < aoffset; b_m++) {
          b_a->data[b_m + b_a->size[0] * e_i] = S->data[S->size[0] * b_m + e_i];
        }
      }

      b_m = b_a->size[0];
      e_i = taui->size[0];
      taui->size[0] = b_a->size[0];
      contro_emxEnsureCapacity_real_T(taui, e_i);
      for (e_i = 1; e_i <= b_m; e_i++) {
        taui->data[e_i - 1] = 0.0;
      }

      for (i = 0; i < 6; i++) {
        e_i = obj_tmp * f->size[0] + i;
        if (f->data[e_i] != 0.0) {
          aoffset = i * b_m;
          for (b_aoffset = 0; b_aoffset < b_m; b_aoffset++) {
            e_i = ((int32_T)a_idx_0 - 1) * f->size[0] + i;
            taui->data[b_aoffset] += f->data[e_i] * b_a->data[aoffset +
              b_aoffset];
          }
        }
      }

      i = (int32_T)a_idx_0;
      b_idx_0 = robot->VelocityDoFMap[i - 1];
      b_idx_1 = robot->VelocityDoFMap[i + 7];
      if (b_idx_0 > b_idx_1) {
        b_m = 0;
        e_i = 0;
      } else {
        b_m = (int32_T)b_idx_0 - 1;
        e_i = (int32_T)b_idx_1;
      }

      i = e_i - b_m;
      for (e_i = 0; e_i < i; e_i++) {
        o_data[e_i] = b_m + e_i;
      }

      for (e_i = 0; e_i < i; e_i++) {
        tau[o_data[e_i]] = taui->data[e_i];
      }
    }

    b_idx_0 = robot->Bodies[(int32_T)a_idx_0 - 1]->ParentIndex;
    if (b_idx_0 > 0.0) {
      aoffset = (int32_T)b_idx_0;
      i = (int32_T)a_idx_0;
      b_aoffset = (int32_T)b_idx_0;
      for (e_i = 0; e_i < 6; e_i++) {
        b_idx_1 = 0.0;
        for (b_m = 0; b_m < 6; b_m++) {
          b_idx_1 += f->data[(i - 1) * f->size[0] + b_m] * X->data[obj_tmp *
            X->size[0]].f1[6 * e_i + b_m];
        }

        a0[e_i] = f->data[(aoffset - 1) * f->size[0] + e_i] + b_idx_1;
      }

      for (e_i = 0; e_i < 6; e_i++) {
        f->data[e_i + f->size[0] * (b_aoffset - 1)] = a0[e_i];
      }
    }

    c_aoffset++;
  }

  controller_abb46_emxFree_real_T(&b_a);
  controller_abb46_emxFree_real_T(&taui);
  controller_abb46_emxFree_real_T(&S);
  controller_abb46_emxFree_real_T(&f);
  controller__emxFree_cell_wrap_7(&X);
}

static void controller_abb_emxInit_real32_T(emxArray_real32_T_controller__T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real32_T_controller__T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real32_T_controller__T *)malloc(sizeof
    (emxArray_real32_T_controller__T));
  emxArray = *pEmxArray;
  emxArray->data = (real32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void cont_emxEnsureCapacity_real32_T(emxArray_real32_T_controller__T
  *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(real32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof(real32_T) * oldNumel);
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (real32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void controller_abb_emxFree_real32_T(emxArray_real32_T_controller__T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real32_T_controller__T *)NULL) {
    if (((*pEmxArray)->data != (real32_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_real32_T_controller__T *)NULL;
  }
}

static void co_emxFreeStruct_robotics_Joint(robotics_Joint_controller_abb_T
  *pStruct)
{
  controller_abb46_emxFree_char_T(&pStruct->Type);
  controller_abb46_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_d_robotics_manip_(d_robotics_manip_internal_Rig_T
  *pStruct)
{
  co_emxFreeStruct_robotics_Joint(&pStruct->JointInternal);
}

static void emxFreeStruct_e_robotics_mani_e(e_robotics_manip_internal_R_a_T
  *pStruct)
{
  emxFreeStruct_d_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_c_robotics_manip_(c_robotics_manip_internal_Rig_T
  *pStruct)
{
  co_emxFreeStruct_robotics_Joint(&pStruct->JointInternal);
}

static void emxFreeStruct_e_robotics_manip_(e_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_d_robotics_manip_(&pStruct->Base);
}

/* Model step function */
void controller_abb4600_step(real32_T qd[6], real32_T dqd[6], real32_T ddqd[6],
  real32_T q[6], real32_T dq[6], real32_T u[6])
{
  c_robotics_manip_internal_Rig_T lobj_8;
  c_robotics_manip_internal_Rig_T lobj_7;
  c_robotics_manip_internal_Rig_T lobj_6;
  c_robotics_manip_internal_Rig_T lobj_5;
  c_robotics_manip_internal_Rig_T lobj_4;
  c_robotics_manip_internal_Rig_T lobj_3;
  c_robotics_manip_internal_Rig_T lobj_2;
  c_robotics_manip_internal_Rig_T lobj_1;
  e_robotics_manip_internal_Rig_T tree;
  d_robotics_manip_internal_Rig_T *obj;
  int8_T msubspace_data[36];
  emxArray_char_T_controller_ab_T *switch_expression;
  static const int8_T b[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T c[6] = { 0, 0, 0, 0, 0, 1 };

  static const char_T e[5] = { 'f', 'i', 'x', 'e', 'd' };

  emxArray_real_T_controller_ab_T *f;
  c_robotics_manip_internal_Rig_T *g;
  c_robotics_manip_internal_Rig_T lobj_8_0;
  c_robotics_manip_internal_Rig_T lobj_7_0;
  c_robotics_manip_internal_Rig_T lobj_6_0;
  c_robotics_manip_internal_Rig_T lobj_5_0;
  c_robotics_manip_internal_Rig_T lobj_4_0;
  c_robotics_manip_internal_Rig_T lobj_3_0;
  c_robotics_manip_internal_Rig_T lobj_2_0;
  c_robotics_manip_internal_Rig_T lobj_1_0;
  e_robotics_manip_internal_R_a_T tree_0;
  int8_T msubspace_data_0[36];
  emxArray_char_T_controller_ab_T *switch_expression_0;
  static const int8_T b_0[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T c_0[6] = { 0, 0, 0, 0, 0, 1 };

  static const char_T e_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  real_T f_0[6];
  c_robotics_manip_internal_Rig_T lobj_8_1;
  c_robotics_manip_internal_Rig_T lobj_7_1;
  c_robotics_manip_internal_Rig_T lobj_6_1;
  c_robotics_manip_internal_Rig_T lobj_5_1;
  c_robotics_manip_internal_Rig_T lobj_4_1;
  c_robotics_manip_internal_Rig_T lobj_3_1;
  c_robotics_manip_internal_Rig_T lobj_2_1;
  c_robotics_manip_internal_Rig_T lobj_1_1;
  e_robotics_manip_internal_R_a_T tree_1;
  int8_T msubspace_data_1[36];
  emxArray_char_T_controller_ab_T *switch_expression_1;
  static const int8_T b_1[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T c_1[6] = { 0, 0, 0, 0, 0, 1 };

  static const char_T e_1[5] = { 'f', 'i', 'x', 'e', 'd' };

  real_T f_1[6];
  c_robotics_manip_internal_Rig_T lobj_8_2;
  c_robotics_manip_internal_Rig_T lobj_7_2;
  c_robotics_manip_internal_Rig_T lobj_6_2;
  c_robotics_manip_internal_Rig_T lobj_5_2;
  c_robotics_manip_internal_Rig_T lobj_4_2;
  c_robotics_manip_internal_Rig_T lobj_3_2;
  c_robotics_manip_internal_Rig_T lobj_2_2;
  c_robotics_manip_internal_Rig_T lobj_1_2;
  e_robotics_manip_internal_R_a_T tree_2;
  int8_T msubspace_data_2[36];
  emxArray_char_T_controller_ab_T *switch_expression_2;
  static const int8_T b_2[6] = { 0, 0, 1, 0, 0, 0 };

  static const int8_T c_2[6] = { 0, 0, 0, 0, 0, 1 };

  static const char_T e_2[5] = { 'f', 'i', 'x', 'e', 'd' };

  real_T f_2[6];
  real32_T rtb_Gain[6];
  int32_T i;
  real_T rtb_Gain_0[6];
  real_T rtb_Gain_1[6];
  real_T tmp[6];
  int32_T loop_ub;
  emxArray_real32_T_controller__T *f_3;
  int32_T i_0;
  int32_T loop_ub_0;
  real32_T tmp_0;
  emxInitStruct_c_robotics_manip_(&lobj_8);
  emxInitStruct_c_robotics_manip_(&lobj_7);
  emxInitStruct_c_robotics_manip_(&lobj_6);
  emxInitStruct_c_robotics_manip_(&lobj_5);
  emxInitStruct_c_robotics_manip_(&lobj_4);
  emxInitStruct_c_robotics_manip_(&lobj_3);
  emxInitStruct_c_robotics_manip_(&lobj_2);
  emxInitStruct_c_robotics_manip_(&lobj_1);
  emxInitStruct_e_robotics_manip_(&tree);
  emxInitStruct_c_robotics_manip_(&lobj_8_0);
  emxInitStruct_c_robotics_manip_(&lobj_7_0);
  emxInitStruct_c_robotics_manip_(&lobj_6_0);
  emxInitStruct_c_robotics_manip_(&lobj_5_0);
  emxInitStruct_c_robotics_manip_(&lobj_4_0);
  emxInitStruct_c_robotics_manip_(&lobj_3_0);
  emxInitStruct_c_robotics_manip_(&lobj_2_0);
  emxInitStruct_c_robotics_manip_(&lobj_1_0);
  emxInitStruct_e_robotics_mani_e(&tree_0);
  emxInitStruct_c_robotics_manip_(&lobj_8_1);
  emxInitStruct_c_robotics_manip_(&lobj_7_1);
  emxInitStruct_c_robotics_manip_(&lobj_6_1);
  emxInitStruct_c_robotics_manip_(&lobj_5_1);
  emxInitStruct_c_robotics_manip_(&lobj_4_1);
  emxInitStruct_c_robotics_manip_(&lobj_3_1);
  emxInitStruct_c_robotics_manip_(&lobj_2_1);
  emxInitStruct_c_robotics_manip_(&lobj_1_1);
  emxInitStruct_e_robotics_mani_e(&tree_1);
  emxInitStruct_c_robotics_manip_(&lobj_8_2);
  emxInitStruct_c_robotics_manip_(&lobj_7_2);
  emxInitStruct_c_robotics_manip_(&lobj_6_2);
  emxInitStruct_c_robotics_manip_(&lobj_5_2);
  emxInitStruct_c_robotics_manip_(&lobj_4_2);
  emxInitStruct_c_robotics_manip_(&lobj_3_2);
  emxInitStruct_c_robotics_manip_(&lobj_2_2);
  emxInitStruct_c_robotics_manip_(&lobj_1_2);
  emxInitStruct_e_robotics_mani_e(&tree_2);

  /* MATLAB Function: '<S3>/MATLAB Function' */
  g = &lobj_1;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[1]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[1].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[1].Type,
    controller_abb4600_ConstP.pooled1.Joints[1].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[1].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[1].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[1].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].ChildToJointTransform[0]);
  tree.Bodies[0] = g;
  tree.Bodies[0]->Index = 1.0;
  g = &lobj_2;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[2]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[2].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[2].Type,
    controller_abb4600_ConstP.pooled1.Joints[2].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[2].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[2].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[2].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].ChildToJointTransform[0]);
  tree.Bodies[1] = g;
  tree.Bodies[1]->Index = 2.0;
  g = &lobj_3;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[3]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[3].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[3].Type,
    controller_abb4600_ConstP.pooled1.Joints[3].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[3].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[3].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[3].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].ChildToJointTransform[0]);
  tree.Bodies[2] = g;
  tree.Bodies[2]->Index = 3.0;
  g = &lobj_4;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[4]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[4].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[4].Type,
    controller_abb4600_ConstP.pooled1.Joints[4].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[4].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[4].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[4].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].ChildToJointTransform[0]);
  tree.Bodies[3] = g;
  tree.Bodies[3]->Index = 4.0;
  g = &lobj_5;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[5]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[5].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[5].Type,
    controller_abb4600_ConstP.pooled1.Joints[5].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[5].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[5].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[5].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].ChildToJointTransform[0]);
  tree.Bodies[4] = g;
  tree.Bodies[4]->Index = 5.0;
  g = &lobj_6;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[6]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[6].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[6].Type,
    controller_abb4600_ConstP.pooled1.Joints[6].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[6].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[6].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[6].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].ChildToJointTransform[0]);
  tree.Bodies[5] = g;
  tree.Bodies[5]->Index = 6.0;
  g = &lobj_7;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[7]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[7].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[7].Type,
    controller_abb4600_ConstP.pooled1.Joints[7].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[7].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[7].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[7].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].ChildToJointTransform[0]);
  tree.Bodies[6] = g;
  tree.Bodies[6]->Index = 7.0;
  g = &lobj_8;
  controlle_RigidBody_RigidBody_j(&g, controller_abb4600_ConstP.pooled1.Bodies[8]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[8].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[8].Type,
    controller_abb4600_ConstP.pooled1.Joints[8].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[8].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[8].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[8].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].ChildToJointTransform[0]);
  tree.Bodies[7] = g;
  tree.Bodies[7]->Index = 8.0;
  tree.NumBodies = controller_abb4600_ConstP.pooled1.NumBodies;
  tree.VelocityNumber = controller_abb4600_ConstP.pooled1.VelocityNumber;
  memcpy(&tree.PositionDoFMap[0],
         &controller_abb4600_ConstP.pooled1.PositionDoFMap[0], sizeof(real_T) <<
         4U);
  memcpy(&tree.VelocityDoFMap[0],
         &controller_abb4600_ConstP.pooled1.VelocityDoFMap[0], sizeof(real_T) <<
         4U);
  obj = &tree.Base;
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    obj->JointInternal.Type->data[i] = e[i];
  }

  controller_abb46_emxInit_char_T(&switch_expression, 2);

  /* MATLAB Function: '<S3>/MATLAB Function' */
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, i);
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->JointInternal.Type->data[i];
  }

  if (controller_abb4600_strcmp(switch_expression)) {
    i = 0;
  } else if (controller_abb4600_strcmp_f(switch_expression)) {
    i = 1;
  } else {
    i = -1;
  }

  switch (i) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = c[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  controller_abb46_emxFree_char_T(&switch_expression);

  /* MATLAB Function: '<S3>/MATLAB Function' incorporates:
   *  Inport: '<Root>/q'
   */
  i = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->JointInternal.MotionSubspace->data[i] = msubspace_data[i];
  }

  for (i = 0; i < 6; i++) {
    tmp[i] = q[i];
  }

  controller_abb46_emxInit_real_T(&f, 2);

  /* MATLAB Function: '<S3>/MATLAB Function' */
  RigidBodyTreeDynamics_massMatri(&tree, tmp, f);

  /* MATLAB Function: '<S2>/MATLAB Function' */
  g = &lobj_1_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[1]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[1].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[1].Type,
    controller_abb4600_ConstP.pooled1.Joints[1].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[1].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[1].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[1].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].ChildToJointTransform[0]);
  tree_0.Bodies[0] = g;
  tree_0.Bodies[0]->Index = 1.0;
  g = &lobj_2_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[2]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[2].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[2].Type,
    controller_abb4600_ConstP.pooled1.Joints[2].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[2].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[2].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[2].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].ChildToJointTransform[0]);
  tree_0.Bodies[1] = g;
  tree_0.Bodies[1]->Index = 2.0;
  g = &lobj_3_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[3]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[3].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[3].Type,
    controller_abb4600_ConstP.pooled1.Joints[3].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[3].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[3].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[3].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].ChildToJointTransform[0]);
  tree_0.Bodies[2] = g;
  tree_0.Bodies[2]->Index = 3.0;
  g = &lobj_4_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[4]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[4].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[4].Type,
    controller_abb4600_ConstP.pooled1.Joints[4].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[4].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[4].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[4].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].ChildToJointTransform[0]);
  tree_0.Bodies[3] = g;
  tree_0.Bodies[3]->Index = 4.0;
  g = &lobj_5_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[5]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[5].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[5].Type,
    controller_abb4600_ConstP.pooled1.Joints[5].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[5].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[5].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[5].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].ChildToJointTransform[0]);
  tree_0.Bodies[4] = g;
  tree_0.Bodies[4]->Index = 5.0;
  g = &lobj_6_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[6]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[6].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[6].Type,
    controller_abb4600_ConstP.pooled1.Joints[6].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[6].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[6].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[6].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].ChildToJointTransform[0]);
  tree_0.Bodies[5] = g;
  tree_0.Bodies[5]->Index = 6.0;
  g = &lobj_7_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[7]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[7].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[7].Type,
    controller_abb4600_ConstP.pooled1.Joints[7].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[7].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[7].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[7].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].ChildToJointTransform[0]);
  tree_0.Bodies[6] = g;
  tree_0.Bodies[6]->Index = 7.0;
  g = &lobj_8_0;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[8]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[8].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[8].Type,
    controller_abb4600_ConstP.pooled1.Joints[8].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[8].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[8].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[8].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].ChildToJointTransform[0]);
  tree_0.Bodies[7] = g;
  tree_0.Bodies[7]->Index = 8.0;
  tree_0.NumBodies = controller_abb4600_ConstP.pooled1.NumBodies;
  tree_0.Gravity[0] = controller_abb4600_ConstP.pooled1.Gravity[0];
  tree_0.Gravity[1] = controller_abb4600_ConstP.pooled1.Gravity[1];
  tree_0.Gravity[2] = controller_abb4600_ConstP.pooled1.Gravity[2];
  memcpy(&tree_0.PositionDoFMap[0],
         &controller_abb4600_ConstP.pooled1.PositionDoFMap[0], sizeof(real_T) <<
         4U);
  memcpy(&tree_0.VelocityDoFMap[0],
         &controller_abb4600_ConstP.pooled1.VelocityDoFMap[0], sizeof(real_T) <<
         4U);
  obj = &tree_0.Base;
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    obj->JointInternal.Type->data[i] = e_0[i];
  }

  controller_abb46_emxInit_char_T(&switch_expression_0, 2);

  /* MATLAB Function: '<S2>/MATLAB Function' */
  i = switch_expression_0->size[0] * switch_expression_0->size[1];
  switch_expression_0->size[0] = 1;
  switch_expression_0->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression_0, i);
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression_0->data[i] = obj->JointInternal.Type->data[i];
  }

  if (controller_abb4600_strcmp(switch_expression_0)) {
    i = 0;
  } else if (controller_abb4600_strcmp_f(switch_expression_0)) {
    i = 1;
  } else {
    i = -1;
  }

  switch (i) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data_0[i] = b_0[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data_0[i] = c_0[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data_0[i] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  controller_abb46_emxFree_char_T(&switch_expression_0);

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Inport: '<Root>/q'
   */
  i = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->JointInternal.MotionSubspace->data[i] = msubspace_data_0[i];
  }

  for (i = 0; i < 6; i++) {
    tmp[i] = q[i];
    rtb_Gain_0[i] = 0.0;
  }

  RigidBodyTreeDynamics_inverseDy(&tree_0, tmp, rtb_Gain_0, f_0);

  /* Gain: '<S4>/Gain' incorporates:
   *  Inport: '<Root>/dq'
   */
  for (i = 0; i < 6; i++) {
    rtb_Gain[i] = 0.0F * dq[i];
  }

  /* End of Gain: '<S4>/Gain' */

  /* MATLAB Function: '<S4>/MATLAB Function' */
  g = &lobj_1_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[1]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[1].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[1].Type,
    controller_abb4600_ConstP.pooled1.Joints[1].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[1].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[1].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[1].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].ChildToJointTransform[0]);
  tree_1.Bodies[0] = g;
  tree_1.Bodies[0]->Index = 1.0;
  g = &lobj_2_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[2]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[2].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[2].Type,
    controller_abb4600_ConstP.pooled1.Joints[2].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[2].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[2].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[2].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].ChildToJointTransform[0]);
  tree_1.Bodies[1] = g;
  tree_1.Bodies[1]->Index = 2.0;
  g = &lobj_3_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[3]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[3].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[3].Type,
    controller_abb4600_ConstP.pooled1.Joints[3].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[3].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[3].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[3].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].ChildToJointTransform[0]);
  tree_1.Bodies[2] = g;
  tree_1.Bodies[2]->Index = 3.0;
  g = &lobj_4_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[4]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[4].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[4].Type,
    controller_abb4600_ConstP.pooled1.Joints[4].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[4].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[4].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[4].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].ChildToJointTransform[0]);
  tree_1.Bodies[3] = g;
  tree_1.Bodies[3]->Index = 4.0;
  g = &lobj_5_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[5]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[5].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[5].Type,
    controller_abb4600_ConstP.pooled1.Joints[5].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[5].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[5].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[5].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].ChildToJointTransform[0]);
  tree_1.Bodies[4] = g;
  tree_1.Bodies[4]->Index = 5.0;
  g = &lobj_6_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[6]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[6].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[6].Type,
    controller_abb4600_ConstP.pooled1.Joints[6].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[6].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[6].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[6].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].ChildToJointTransform[0]);
  tree_1.Bodies[5] = g;
  tree_1.Bodies[5]->Index = 6.0;
  g = &lobj_7_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[7]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[7].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[7].Type,
    controller_abb4600_ConstP.pooled1.Joints[7].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[7].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[7].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[7].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].ChildToJointTransform[0]);
  tree_1.Bodies[6] = g;
  tree_1.Bodies[6]->Index = 7.0;
  g = &lobj_8_1;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[8]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[8].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[8].Type,
    controller_abb4600_ConstP.pooled1.Joints[8].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[8].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[8].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[8].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].ChildToJointTransform[0]);
  tree_1.Bodies[7] = g;
  tree_1.Bodies[7]->Index = 8.0;
  tree_1.NumBodies = controller_abb4600_ConstP.pooled1.NumBodies;
  tree_1.Gravity[0] = controller_abb4600_ConstP.pooled1.Gravity[0];
  tree_1.Gravity[1] = controller_abb4600_ConstP.pooled1.Gravity[1];
  tree_1.Gravity[2] = controller_abb4600_ConstP.pooled1.Gravity[2];
  memcpy(&tree_1.PositionDoFMap[0],
         &controller_abb4600_ConstP.pooled1.PositionDoFMap[0], sizeof(real_T) <<
         4U);
  memcpy(&tree_1.VelocityDoFMap[0],
         &controller_abb4600_ConstP.pooled1.VelocityDoFMap[0], sizeof(real_T) <<
         4U);
  obj = &tree_1.Base;
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    obj->JointInternal.Type->data[i] = e_1[i];
  }

  controller_abb46_emxInit_char_T(&switch_expression_1, 2);

  /* MATLAB Function: '<S4>/MATLAB Function' */
  i = switch_expression_1->size[0] * switch_expression_1->size[1];
  switch_expression_1->size[0] = 1;
  switch_expression_1->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression_1, i);
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression_1->data[i] = obj->JointInternal.Type->data[i];
  }

  if (controller_abb4600_strcmp(switch_expression_1)) {
    i = 0;
  } else if (controller_abb4600_strcmp_f(switch_expression_1)) {
    i = 1;
  } else {
    i = -1;
  }

  switch (i) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data_1[i] = b_1[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data_1[i] = c_1[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data_1[i] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  controller_abb46_emxFree_char_T(&switch_expression_1);

  /* MATLAB Function: '<S4>/MATLAB Function' incorporates:
   *  Inport: '<Root>/dq'
   *  Inport: '<Root>/q'
   */
  i = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->JointInternal.MotionSubspace->data[i] = msubspace_data_1[i];
  }

  for (i = 0; i < 6; i++) {
    tmp[i] = q[i];
    rtb_Gain_0[i] = dq[i];
    rtb_Gain_1[i] = rtb_Gain[i];
  }

  RigidBodyTreeDynamics_inverse_o(&tree_1, tmp, rtb_Gain_0, rtb_Gain_1, f_1);

  /* MATLAB Function: '<S4>/MATLAB Function1' */
  g = &lobj_1_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[1]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[1].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[1].Type,
    controller_abb4600_ConstP.pooled1.Joints[1].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[1].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[1].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[1].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[1].ChildToJointTransform[0]);
  tree_2.Bodies[0] = g;
  tree_2.Bodies[0]->Index = 1.0;
  g = &lobj_2_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[2]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[2].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[2].Type,
    controller_abb4600_ConstP.pooled1.Joints[2].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[2].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[2].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[2].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[2].ChildToJointTransform[0]);
  tree_2.Bodies[1] = g;
  tree_2.Bodies[1]->Index = 2.0;
  g = &lobj_3_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[3]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[3].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[3].Type,
    controller_abb4600_ConstP.pooled1.Joints[3].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[3].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[3].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[3].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[3].ChildToJointTransform[0]);
  tree_2.Bodies[2] = g;
  tree_2.Bodies[2]->Index = 3.0;
  g = &lobj_4_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[4]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[4].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[4].Type,
    controller_abb4600_ConstP.pooled1.Joints[4].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[4].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[4].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[4].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[4].ChildToJointTransform[0]);
  tree_2.Bodies[3] = g;
  tree_2.Bodies[3]->Index = 4.0;
  g = &lobj_5_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[5]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[5].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[5].Type,
    controller_abb4600_ConstP.pooled1.Joints[5].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[5].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[5].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[5].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[5].ChildToJointTransform[0]);
  tree_2.Bodies[4] = g;
  tree_2.Bodies[4]->Index = 5.0;
  g = &lobj_6_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[6]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[6].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[6].Type,
    controller_abb4600_ConstP.pooled1.Joints[6].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[6].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[6].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[6].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[6].ChildToJointTransform[0]);
  tree_2.Bodies[5] = g;
  tree_2.Bodies[5]->Index = 6.0;
  g = &lobj_7_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[7]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[7].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[7].Type,
    controller_abb4600_ConstP.pooled1.Joints[7].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[7].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[7].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[7].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[7].ChildToJointTransform[0]);
  tree_2.Bodies[6] = g;
  tree_2.Bodies[6]->Index = 7.0;
  g = &lobj_8_2;
  controller__RigidBody_RigidBody(&g, controller_abb4600_ConstP.pooled1.Bodies[8]
    .ParentIndex, &controller_abb4600_ConstP.pooled1.Bodies[8].SpatialInertia[0],
    controller_abb4600_ConstP.pooled1.Joints[8].Type,
    controller_abb4600_ConstP.pooled1.Joints[8].NameLength,
    &controller_abb4600_ConstP.pooled1.Joints[8].Name[0],
    controller_abb4600_ConstP.pooled1.Joints[8].VelocityNumber,
    &controller_abb4600_ConstP.pooled1.Joints[8].MotionSubspace[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointAxis[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].JointToParentTransform[0],
    &controller_abb4600_ConstP.pooled1.Joints[8].ChildToJointTransform[0]);
  tree_2.Bodies[7] = g;
  tree_2.Bodies[7]->Index = 8.0;
  tree_2.NumBodies = controller_abb4600_ConstP.pooled1.NumBodies;
  tree_2.Gravity[0] = controller_abb4600_ConstP.pooled1.Gravity[0];
  tree_2.Gravity[1] = controller_abb4600_ConstP.pooled1.Gravity[1];
  tree_2.Gravity[2] = controller_abb4600_ConstP.pooled1.Gravity[2];
  memcpy(&tree_2.PositionDoFMap[0],
         &controller_abb4600_ConstP.pooled1.PositionDoFMap[0], sizeof(real_T) <<
         4U);
  memcpy(&tree_2.VelocityDoFMap[0],
         &controller_abb4600_ConstP.pooled1.VelocityDoFMap[0], sizeof(real_T) <<
         4U);
  obj = &tree_2.Base;
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    obj->JointInternal.Type->data[i] = e_2[i];
  }

  controller_abb46_emxInit_char_T(&switch_expression_2, 2);

  /* MATLAB Function: '<S4>/MATLAB Function1' */
  i = switch_expression_2->size[0] * switch_expression_2->size[1];
  switch_expression_2->size[0] = 1;
  switch_expression_2->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression_2, i);
  i = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression_2->data[i] = obj->JointInternal.Type->data[i];
  }

  if (controller_abb4600_strcmp(switch_expression_2)) {
    i = 0;
  } else if (controller_abb4600_strcmp_f(switch_expression_2)) {
    i = 1;
  } else {
    i = -1;
  }

  switch (i) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data_2[i] = b_2[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data_2[i] = c_2[i];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data_2[i] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  controller_abb46_emxFree_char_T(&switch_expression_2);

  /* MATLAB Function: '<S4>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/q'
   */
  i = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->JointInternal.MotionSubspace->data[i] = msubspace_data_2[i];
  }

  for (i = 0; i < 6; i++) {
    tmp[i] = q[i];
    rtb_Gain_1[i] = rtb_Gain[i];
    rtb_Gain_0[i] = rtb_Gain[i];
  }

  controller_abb_emxInit_real32_T(&f_3, 2);

  /* MATLAB Function: '<S4>/MATLAB Function1' */
  RigidBodyTreeDynamics_inverse_o(&tree_2, tmp, rtb_Gain_1, rtb_Gain_0, f_2);

  /* MATLAB Function: '<S3>/MATLAB Function' incorporates:
   *  Product: '<S1>/Product'
   */
  i = f_3->size[0] * f_3->size[1];
  f_3->size[0] = f->size[0];
  f_3->size[1] = f->size[1];
  cont_emxEnsureCapacity_real32_T(f_3, i);
  loop_ub = f->size[1];
  for (i = 0; i < loop_ub; i++) {
    loop_ub_0 = f->size[0];
    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      f_3->data[i_0 + f_3->size[0] * i] = (real32_T)f->data[f->size[0] * i + i_0];
    }
  }

  controller_abb46_emxFree_real_T(&f);

  /* Sum: '<S1>/Add' incorporates:
   *  Gain: '<S1>/Kd'
   *  Gain: '<S1>/Kp'
   *  Inport: '<Root>/ddqd'
   *  Inport: '<Root>/dq'
   *  Inport: '<Root>/dqd'
   *  Inport: '<Root>/q'
   *  Inport: '<Root>/qd'
   *  Product: '<S1>/Product'
   *  Sum: '<S1>/Add2'
   *  Sum: '<S1>/Add3'
   *  Sum: '<S1>/Add4'
   */
  for (i = 0; i < 6; i++) {
    rtb_Gain[i] = ddqd[i] - ((q[i] - qd[i]) * 100.0F + (dq[i] - dqd[i]) * 20.0F);
  }

  /* End of Sum: '<S1>/Add' */

  /* Outport: '<Root>/u' incorporates:
   *  MATLAB Function: '<S2>/MATLAB Function'
   *  MATLAB Function: '<S4>/MATLAB Function'
   *  MATLAB Function: '<S4>/MATLAB Function1'
   *  Product: '<S1>/Product'
   *  Sum: '<S1>/Add1'
   *  Sum: '<S1>/Add5'
   *  Sum: '<S4>/Sum'
   */
  for (i = 0; i < 6; i++) {
    tmp_0 = 0.0F;
    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp_0 += f_3->data[6 * i_0 + i] * rtb_Gain[i_0];
    }

    u[i] = (((real32_T)f_1[i] - (real32_T)f_2[i]) + (real32_T)f_0[i]) + tmp_0;
  }

  /* End of Outport: '<Root>/u' */
  controller_abb_emxFree_real32_T(&f_3);
  emxFreeStruct_e_robotics_mani_e(&tree_2);
  emxFreeStruct_c_robotics_manip_(&lobj_1_2);
  emxFreeStruct_c_robotics_manip_(&lobj_2_2);
  emxFreeStruct_c_robotics_manip_(&lobj_3_2);
  emxFreeStruct_c_robotics_manip_(&lobj_4_2);
  emxFreeStruct_c_robotics_manip_(&lobj_5_2);
  emxFreeStruct_c_robotics_manip_(&lobj_6_2);
  emxFreeStruct_c_robotics_manip_(&lobj_7_2);
  emxFreeStruct_c_robotics_manip_(&lobj_8_2);
  emxFreeStruct_e_robotics_mani_e(&tree_1);
  emxFreeStruct_c_robotics_manip_(&lobj_1_1);
  emxFreeStruct_c_robotics_manip_(&lobj_2_1);
  emxFreeStruct_c_robotics_manip_(&lobj_3_1);
  emxFreeStruct_c_robotics_manip_(&lobj_4_1);
  emxFreeStruct_c_robotics_manip_(&lobj_5_1);
  emxFreeStruct_c_robotics_manip_(&lobj_6_1);
  emxFreeStruct_c_robotics_manip_(&lobj_7_1);
  emxFreeStruct_c_robotics_manip_(&lobj_8_1);
  emxFreeStruct_e_robotics_mani_e(&tree_0);
  emxFreeStruct_c_robotics_manip_(&lobj_1_0);
  emxFreeStruct_c_robotics_manip_(&lobj_2_0);
  emxFreeStruct_c_robotics_manip_(&lobj_3_0);
  emxFreeStruct_c_robotics_manip_(&lobj_4_0);
  emxFreeStruct_c_robotics_manip_(&lobj_5_0);
  emxFreeStruct_c_robotics_manip_(&lobj_6_0);
  emxFreeStruct_c_robotics_manip_(&lobj_7_0);
  emxFreeStruct_c_robotics_manip_(&lobj_8_0);
  emxFreeStruct_e_robotics_manip_(&tree);
  emxFreeStruct_c_robotics_manip_(&lobj_1);
  emxFreeStruct_c_robotics_manip_(&lobj_2);
  emxFreeStruct_c_robotics_manip_(&lobj_3);
  emxFreeStruct_c_robotics_manip_(&lobj_4);
  emxFreeStruct_c_robotics_manip_(&lobj_5);
  emxFreeStruct_c_robotics_manip_(&lobj_6);
  emxFreeStruct_c_robotics_manip_(&lobj_7);
  emxFreeStruct_c_robotics_manip_(&lobj_8);
}

/* Model initialize function */
void controller_abb4600_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(controller_abb4600_M, (NULL));
}

/* Model terminate function */
void controller_abb4600_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

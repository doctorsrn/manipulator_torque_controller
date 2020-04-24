/*
 * File: controller_abb4600_types.h
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

#ifndef RTW_HEADER_controller_abb4600_types_h_
#define RTW_HEADER_controller_abb4600_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_GGlfjBrEIi3I5yy046QTKH_
#define DEFINED_TYPEDEF_FOR_struct_GGlfjBrEIi3I5yy046QTKH_

typedef struct {
  real_T NameLength;
  uint8_T Name[9];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[8];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
} struct_GGlfjBrEIi3I5yy046QTKH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_v1RC71B50AFhKpvADCemaB_
#define DEFINED_TYPEDEF_FOR_struct_v1RC71B50AFhKpvADCemaB_

typedef struct {
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[14];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
} struct_v1RC71B50AFhKpvADCemaB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_7rLeFva5xGTelC2ZmhyLwB_
#define DEFINED_TYPEDEF_FOR_struct_7rLeFva5xGTelC2ZmhyLwB_

typedef struct {
  real_T NumBodies;
  real_T Gravity[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[16];
  real_T VelocityDoFMap[16];
  real_T MaxNameLength;
  real_T MaxJointPositionNumber;
  uint8_T DataFormat;
  real_T JointPositionLimits[12];
  struct_GGlfjBrEIi3I5yy046QTKH Bodies[9];
  struct_v1RC71B50AFhKpvADCemaB Joints[9];
} struct_7rLeFva5xGTelC2ZmhyLwB;

#endif

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T_controller_ab_T
#define typedef_emxArray_char_T_controller_ab_T

typedef struct emxArray_char_T emxArray_char_T_controller_ab_T;

#endif                                 /*typedef_emxArray_char_T_controller_ab_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T_controller_ab_T
#define typedef_emxArray_real_T_controller_ab_T

typedef struct emxArray_real_T emxArray_real_T_controller_ab_T;

#endif                                 /*typedef_emxArray_real_T_controller_ab_T*/

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T

struct emxArray_real32_T
{
  real32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real32_T*/

#ifndef typedef_emxArray_real32_T_controller__T
#define typedef_emxArray_real32_T_controller__T

typedef struct emxArray_real32_T emxArray_real32_T_controller__T;

#endif                                 /*typedef_emxArray_real32_T_controller__T*/

/* Custom Type definition for MATLAB Function: '<S4>/MATLAB Function1' */
#ifndef typedef_cell_wrap_7_controller_abb460_T
#define typedef_cell_wrap_7_controller_abb460_T

typedef struct {
  real_T f1[36];
} cell_wrap_7_controller_abb460_T;

#endif                                 /*typedef_cell_wrap_7_controller_abb460_T*/

#ifndef typedef_robotics_Joint_controller_abb_T
#define typedef_robotics_Joint_controller_abb_T

typedef struct {
  emxArray_char_T_controller_ab_T *Type;
  emxArray_real_T_controller_ab_T *MotionSubspace;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  real_T JointAxisInternal[3];
} robotics_Joint_controller_abb_T;

#endif                                 /*typedef_robotics_Joint_controller_abb_T*/

/* Custom Type definition for MATLAB Function: '<S4>/MATLAB Function1' */
#ifndef typedef_c_robotics_manip_internal_Rig_T
#define typedef_c_robotics_manip_internal_Rig_T

typedef struct {
  real_T Index;
  robotics_Joint_controller_abb_T JointInternal;
  real_T ParentIndex;
  real_T SpatialInertia[36];
} c_robotics_manip_internal_Rig_T;

#endif                                 /*typedef_c_robotics_manip_internal_Rig_T*/

#ifndef typedef_d_robotics_manip_internal_Rig_T
#define typedef_d_robotics_manip_internal_Rig_T

typedef struct {
  robotics_Joint_controller_abb_T JointInternal;
} d_robotics_manip_internal_Rig_T;

#endif                                 /*typedef_d_robotics_manip_internal_Rig_T*/

/* Custom Type definition for MATLAB Function: '<S3>/MATLAB Function' */
#ifndef typedef_e_robotics_manip_internal_Rig_T
#define typedef_e_robotics_manip_internal_Rig_T

typedef struct {
  real_T NumBodies;
  d_robotics_manip_internal_Rig_T Base;
  c_robotics_manip_internal_Rig_T *Bodies[8];
  real_T VelocityNumber;
  real_T PositionDoFMap[16];
  real_T VelocityDoFMap[16];
} e_robotics_manip_internal_Rig_T;

#endif                                 /*typedef_e_robotics_manip_internal_Rig_T*/

/* Custom Type definition for MATLAB Function: '<S4>/MATLAB Function1' */
#ifndef typedef_e_robotics_manip_internal_R_a_T
#define typedef_e_robotics_manip_internal_R_a_T

typedef struct {
  real_T NumBodies;
  d_robotics_manip_internal_Rig_T Base;
  real_T Gravity[3];
  c_robotics_manip_internal_Rig_T *Bodies[8];
  real_T PositionDoFMap[16];
  real_T VelocityDoFMap[16];
} e_robotics_manip_internal_R_a_T;

#endif                                 /*typedef_e_robotics_manip_internal_R_a_T*/

#ifndef typedef_emxArray_cell_wrap_7_controll_T
#define typedef_emxArray_cell_wrap_7_controll_T

typedef struct {
  cell_wrap_7_controller_abb460_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_7_controll_T;

#endif                                 /*typedef_emxArray_cell_wrap_7_controll_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_controller_abb4600_T RT_MODEL_controller_abb4600_T;

#endif                                 /* RTW_HEADER_controller_abb4600_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

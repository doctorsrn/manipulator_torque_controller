/*
 * File: controller_abb4600.h
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

#ifndef RTW_HEADER_controller_abb4600_h_
#define RTW_HEADER_controller_abb4600_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#ifndef controller_abb4600_COMMON_INCLUDES_
# define controller_abb4600_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* controller_abb4600_COMMON_INCLUDES_ */

#include "controller_abb4600_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: TreeStruct)
   * Referenced by:
   *   '<S2>/MATLAB Function'
   *   '<S3>/MATLAB Function'
   *   '<S4>/MATLAB Function'
   *   '<S4>/MATLAB Function1'
   */
  struct_7rLeFva5xGTelC2ZmhyLwB pooled1;
} ConstP_controller_abb4600_T;

/* Real-time Model Data Structure */
struct tag_RTM_controller_abb4600_T {
  const char_T * volatile errorStatus;
};

/* Constant parameters (default storage) */
extern const ConstP_controller_abb4600_T controller_abb4600_ConstP;

/* Model entry point functions */
extern void controller_abb4600_initialize(void);
extern void controller_abb4600_terminate(void);

/* Customized model step function */
extern void controller_abb4600_step(real32_T qd[6], real32_T dqd[6], real32_T
  ddqd[6], real32_T q[6], real32_T dq[6], real32_T u[6]);

/* Real-time Model object */
extern RT_MODEL_controller_abb4600_T *const controller_abb4600_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'controller_abb4600'
 * '<S1>'   : 'controller_abb4600/Computed Torque Controller'
 * '<S2>'   : 'controller_abb4600/Computed Torque Controller/Gravity Torque'
 * '<S3>'   : 'controller_abb4600/Computed Torque Controller/Joint Space Mass Matrix'
 * '<S4>'   : 'controller_abb4600/Computed Torque Controller/Velocity Product Torque'
 * '<S5>'   : 'controller_abb4600/Computed Torque Controller/Gravity Torque/MATLAB Function'
 * '<S6>'   : 'controller_abb4600/Computed Torque Controller/Joint Space Mass Matrix/MATLAB Function'
 * '<S7>'   : 'controller_abb4600/Computed Torque Controller/Velocity Product Torque/MATLAB Function'
 * '<S8>'   : 'controller_abb4600/Computed Torque Controller/Velocity Product Torque/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_controller_abb4600_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

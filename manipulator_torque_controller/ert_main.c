/*
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>                     /* This ert_main.c example uses printf/fflush */
#include "controller_abb4600.h"        /* Model's header file */
#include "rtwtypes.h"
#include <windows.h>
/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(void);
void rt_OneStep_test(real32_T qd[6], real32_T dqd[6], real32_T ddqd[6],real32_T q[6], real32_T dq[6], real32_T u[6]);

void rt_OneStep(void)
{
    static boolean_T OverrunFlag = false;

    /* '<Root>/qd' */
    static real32_T qd[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };

    /* '<Root>/dqd' */
    static real32_T dqd[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };

    /* '<Root>/ddqd' */
    static real32_T ddqd[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };

    /* '<Root>/q' */
    static real32_T q[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };

    /* '<Root>/dq' */
    static real32_T dq[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };

    /* '<Root>/u' */
    static real32_T u[6];
    int i = 0;
    /* Disable interrupts here */

    /* Check for overrun */
    if (OverrunFlag) {
        rtmSetErrorStatus(controller_abb4600_M, "Overrun");
        return;
    }

    OverrunFlag = true;

    /* Save FPU context here (if necessary) */
    /* Re-enable timer or interrupt here */
    /* Set model inputs here */

    /* Step the model */
    controller_abb4600_step(qd, dqd, ddqd, q, dq, u);

    /* Get model outputs here */

    /* Indicate task complete */
    OverrunFlag = false;

    /* Disable interrupts here */
    /* Restore FPU context here (if necessary) */
    /* Enable interrupts here */

    printf("\n arg_u is:");
    for(i=0;i<6;i++)
    {
        printf(" %f", u[i]);
    }
}

void rt_OneStep_test(real32_T qd[6], real32_T dqd[6], real32_T ddqd[6],real32_T q[6], real32_T dq[6], real32_T u[6])
{
    static boolean_T OverrunFlag = false;

    int i = 0;
    /* Disable interrupts here */

    /* Check for overrun */
    if (OverrunFlag) {
        rtmSetErrorStatus(controller_abb4600_M, "Overrun");
        return;
    }

    OverrunFlag = true;

    /* Save FPU context here (if necessary) */
    /* Re-enable timer or interrupt here */
    /* Set model inputs here */

    /* Step the model */
    controller_abb4600_step(qd, dqd, ddqd, q, dq, u);

    /* Get model outputs here */

    /* Indicate task complete */
    OverrunFlag = false;

    /* Disable interrupts here */
    /* Restore FPU context here (if necessary) */
    /* Enable interrupts here */

    printf("\n arg_u is:");
    for(i=0;i<6;i++)
    {
        printf(" %f", u[i]);
    }
}


/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main1(int_T argc, const char *argv[])
{
    /* Unused arguments */
    (void)(argc);
    (void)(argv);
    int i = 1, t = 10;

    printf("Hello World!\n");

    /* Initialize model */
    controller_abb4600_initialize();

    /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.001 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep();
   */
    while (i < t)
    {
        rt_OneStep();
        Sleep(100);
        i++;
    }

    printf("Warning: The simulation will run forever. "
           "Generated ERT main won't simulate model step behavior. "
           "To change this behavior select the 'MAT-file logging' option.\n");
    fflush((NULL));
    while (rtmGetErrorStatus(controller_abb4600_M) == (NULL)) {
        /*  Perform other application tasks here */
    }

    /* Disable rt_OneStep() here */

    /* Terminate model */
    controller_abb4600_terminate();
    return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

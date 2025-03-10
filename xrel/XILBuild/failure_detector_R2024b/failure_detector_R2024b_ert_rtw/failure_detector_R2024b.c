/*
 * Event Support License -- for demonstration use and event support.  Not
 * for government, research, commercial, or other organizational use.
 *
 * File: failure_detector_R2024b.c
 *
 * Code generated for Simulink model 'failure_detector_R2024b'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Mar 10 18:58:53 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "failure_detector_R2024b.h"

/* External inputs (root inport signals with default storage) */
xrelExtU_failure_detector_R2024b_T xrelfailure_detector_R2024b_U;

/* External outputs (root outports fed by signals with default storage) */
xrelExtY_failure_detector_R2024b_T xrelfailure_detector_R2024b_Y;

/* Real-time model */
static xrelRT_MODEL_failure_detector_R2024b_T xrelfailure_detector_R2024b_M_;
xrelRT_MODEL_failure_detector_R2024b_T *const xrelfailure_detector_R2024b_M =
  &xrelfailure_detector_R2024b_M_;

/* Model step function */
void failure_detector_R2024b_step(void)
{
  /* S-Function (failure_detector_R2024b_sfcn): '<Root>/failure_detector_R2024b' incorporates:
   *  Inport: '<Root>/sensor1_reading'
   *  Inport: '<Root>/sensor2_reading'
   *  Outport: '<Root>/coherency_failure'
   *  Outport: '<Root>/sensor1_failure'
   *  Outport: '<Root>/sensor2_failure'
   */
  failure_detector_U.sensor1_reading =
    xrelfailure_detector_R2024b_U.sensor1_reading;
  failure_detector_U.sensor2_reading =
    xrelfailure_detector_R2024b_U.sensor2_reading;
  failure_detector_step();
  xrelfailure_detector_R2024b_Y.sensor1_failure =
    failure_detector_Y.sensor1_failure;
  xrelfailure_detector_R2024b_Y.sensor2_failure =
    failure_detector_Y.sensor2_failure;
  xrelfailure_detector_R2024b_Y.coherency_failure =
    failure_detector_Y.coherency_failure;
}

/* Model initialize function */
void failure_detector_R2024b_initialize(void)
{
  /* Start for S-Function (failure_detector_R2024b_sfcn): '<Root>/failure_detector_R2024b' incorporates:
   *  Inport: '<Root>/sensor1_reading'
   *  Inport: '<Root>/sensor2_reading'
   *  Outport: '<Root>/coherency_failure'
   *  Outport: '<Root>/sensor1_failure'
   *  Outport: '<Root>/sensor2_failure'
   */
  failure_detector_initialize();
  xrelfailure_detector_R2024b_Y.sensor1_failure =
    failure_detector_Y.sensor1_failure;
  xrelfailure_detector_R2024b_Y.sensor2_failure =
    failure_detector_Y.sensor2_failure;
  xrelfailure_detector_R2024b_Y.coherency_failure =
    failure_detector_Y.coherency_failure;
}

/* Model terminate function */
void failure_detector_R2024b_terminate(void)
{
  /* Terminate for S-Function (failure_detector_R2024b_sfcn): '<Root>/failure_detector_R2024b' incorporates:
   *  Inport: '<Root>/sensor1_reading'
   *  Inport: '<Root>/sensor2_reading'
   *  Outport: '<Root>/coherency_failure'
   *  Outport: '<Root>/sensor1_failure'
   *  Outport: '<Root>/sensor2_failure'
   */
  failure_detector_terminate();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Event Support License -- for demonstration use and event support.  Not
 * for government, research, commercial, or other organizational use.
 *
 * File: failure_detector.c
 *
 * Code generated for Simulink model 'failure_detector'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Mar 10 18:55:28 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "failure_detector.h"

/* External inputs (root inport signals with default storage) */
ExtU_failure_detector_T failure_detector_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_failure_detector_T failure_detector_Y;

/* Real-time model */
static RT_MODEL_failure_detector_T failure_detector_M_;
RT_MODEL_failure_detector_T *const failure_detector_M = &failure_detector_M_;

/* Model step function */
void failure_detector_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/failure_detector' */
  /* Outport: '<Root>/sensor1_failure' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/sensor1_reading'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   */
  failure_detector_Y.sensor1_failure = ((failure_detector_U.sensor1_reading <
    0.5) || (failure_detector_U.sensor1_reading > 4.5));

  /* Outport: '<Root>/sensor2_failure' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/sensor2_reading'
   *  RelationalOperator: '<S6>/Compare'
   */
  failure_detector_Y.sensor2_failure = (failure_detector_U.sensor2_reading !=
    4.5);

  /* Outport: '<Root>/coherency_failure' incorporates:
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/sensor1_reading'
   *  Inport: '<Root>/sensor2_reading'
   *  RelationalOperator: '<S2>/Compare'
   *  Sum: '<S1>/Subtract'
   */
  failure_detector_Y.coherency_failure = (failure_detector_U.sensor1_reading +
    failure_detector_U.sensor2_reading != 5.0);

  /* End of Outputs for SubSystem: '<Root>/failure_detector' */
}

/* Model initialize function */
void failure_detector_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void failure_detector_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

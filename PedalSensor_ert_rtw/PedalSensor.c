/*
 * Event Support License -- for demonstration use and event support.  Not
 * for government, research, commercial, or other organizational use.
 *
 * File: PedalSensor.c
 *
 * Code generated for Simulink model 'PedalSensor'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Mar 10 18:44:22 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PedalSensor.h"

/* External inputs (root inport signals with default storage) */
ExtU_PedalSensor_T PedalSensor_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PedalSensor_T PedalSensor_Y;

/* Real-time model */
static RT_MODEL_PedalSensor_T PedalSensor_M_;
RT_MODEL_PedalSensor_T *const PedalSensor_M = &PedalSensor_M_;

/* Model step function */
void PedalSensor_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/sensor1' */
  /* Sum: '<S2>/Add' incorporates:
   *  Constant: '<S2>/Constant'
   *  Gain: '<S2>/Gain'
   *  Inport: '<Root>/pedal_position'
   */
  PedalSensor_Y.sensor1_reading = 4.0 * PedalSensor_U.pedal_position + 0.5;

  /* End of Outputs for SubSystem: '<Root>/sensor1' */

  /* Outputs for Atomic SubSystem: '<Root>/sensor2' */
  /* Sum: '<S3>/Add1' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Gain: '<S3>/Gain1'
   *  Inport: '<Root>/pedal_position'
   */
  PedalSensor_Y.sensor2_reading = -4.0 * PedalSensor_U.pedal_position + 4.5;

  /* End of Outputs for SubSystem: '<Root>/sensor2' */

  /* Outputs for Atomic SubSystem: '<Root>/failure_detector' */
  /* Outport: '<Root>/sensor1_failure' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S5>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   */
  PedalSensor_Y.sensor1_failure = ((PedalSensor_Y.sensor1_reading < 0.5) ||
    (PedalSensor_Y.sensor1_reading > 4.5));

  /* Outport: '<Root>/sensor2_failure' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S8>/Compare'
   */
  PedalSensor_Y.sensor2_failure = (PedalSensor_Y.sensor2_reading != 4.5);

  /* Outport: '<Root>/coherency_failure' incorporates:
   *  Constant: '<S4>/Constant'
   *  RelationalOperator: '<S4>/Compare'
   *  Sum: '<S1>/Subtract'
   */
  PedalSensor_Y.coherency_failure = (PedalSensor_Y.sensor1_reading +
    PedalSensor_Y.sensor2_reading != 5.0);

  /* End of Outputs for SubSystem: '<Root>/failure_detector' */
}

/* Model initialize function */
void PedalSensor_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void PedalSensor_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

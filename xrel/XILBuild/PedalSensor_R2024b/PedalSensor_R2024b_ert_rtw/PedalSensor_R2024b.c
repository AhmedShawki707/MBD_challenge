/*
 * Event Support License -- for demonstration use and event support.  Not
 * for government, research, commercial, or other organizational use.
 *
 * File: PedalSensor_R2024b.c
 *
 * Code generated for Simulink model 'PedalSensor_R2024b'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Mar 10 18:53:49 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PedalSensor_R2024b.h"

/* External inputs (root inport signals with default storage) */
xrelExtU_PedalSensor_R2024b_T xrelPedalSensor_R2024b_U;

/* External outputs (root outports fed by signals with default storage) */
xrelExtY_PedalSensor_R2024b_T xrelPedalSensor_R2024b_Y;

/* Real-time model */
static xrelRT_MODEL_PedalSensor_R2024b_T xrelPedalSensor_R2024b_M_;
xrelRT_MODEL_PedalSensor_R2024b_T *const xrelPedalSensor_R2024b_M =
  &xrelPedalSensor_R2024b_M_;

/* Model step function */
void PedalSensor_R2024b_step(void)
{
  /* S-Function (PedalSensor_R2024b_sfcn): '<Root>/PedalSensor_R2024b' incorporates:
   *  Inport: '<Root>/pedal_position'
   *  Outport: '<Root>/coherency_failure'
   *  Outport: '<Root>/sensor1_failure'
   *  Outport: '<Root>/sensor1_reading'
   *  Outport: '<Root>/sensor2_failure'
   *  Outport: '<Root>/sensor2_reading'
   */
  PedalSensor_U.pedal_position = xrelPedalSensor_R2024b_U.pedal_position;
  PedalSensor_step();
  xrelPedalSensor_R2024b_Y.sensor1_reading = PedalSensor_Y.sensor1_reading;
  xrelPedalSensor_R2024b_Y.sensor2_reading = PedalSensor_Y.sensor2_reading;
  xrelPedalSensor_R2024b_Y.sensor1_failure = PedalSensor_Y.sensor1_failure;
  xrelPedalSensor_R2024b_Y.sensor2_failure = PedalSensor_Y.sensor2_failure;
  xrelPedalSensor_R2024b_Y.coherency_failure = PedalSensor_Y.coherency_failure;
}

/* Model initialize function */
void PedalSensor_R2024b_initialize(void)
{
  /* Start for S-Function (PedalSensor_R2024b_sfcn): '<Root>/PedalSensor_R2024b' incorporates:
   *  Inport: '<Root>/pedal_position'
   *  Outport: '<Root>/coherency_failure'
   *  Outport: '<Root>/sensor1_failure'
   *  Outport: '<Root>/sensor1_reading'
   *  Outport: '<Root>/sensor2_failure'
   *  Outport: '<Root>/sensor2_reading'
   */
  PedalSensor_initialize();
  xrelPedalSensor_R2024b_Y.sensor1_reading = PedalSensor_Y.sensor1_reading;
  xrelPedalSensor_R2024b_Y.sensor2_reading = PedalSensor_Y.sensor2_reading;
  xrelPedalSensor_R2024b_Y.sensor1_failure = PedalSensor_Y.sensor1_failure;
  xrelPedalSensor_R2024b_Y.sensor2_failure = PedalSensor_Y.sensor2_failure;
  xrelPedalSensor_R2024b_Y.coherency_failure = PedalSensor_Y.coherency_failure;
}

/* Model terminate function */
void PedalSensor_R2024b_terminate(void)
{
  /* Terminate for S-Function (PedalSensor_R2024b_sfcn): '<Root>/PedalSensor_R2024b' incorporates:
   *  Inport: '<Root>/pedal_position'
   *  Outport: '<Root>/coherency_failure'
   *  Outport: '<Root>/sensor1_failure'
   *  Outport: '<Root>/sensor1_reading'
   *  Outport: '<Root>/sensor2_failure'
   *  Outport: '<Root>/sensor2_reading'
   */
  PedalSensor_terminate();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

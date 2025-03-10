/*
 * Event Support License -- for demonstration use and event support.  Not
 * for government, research, commercial, or other organizational use.
 *
 * File: PedalSensor.h
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

#ifndef PedalSensor_h_
#define PedalSensor_h_
#ifndef PedalSensor_COMMON_INCLUDES_
#define PedalSensor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PedalSensor_COMMON_INCLUDES_ */

#include "PedalSensor_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T pedal_position;               /* '<Root>/pedal_position' */
} ExtU_PedalSensor_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T sensor1_reading;              /* '<Root>/sensor1_reading' */
  real_T sensor2_reading;              /* '<Root>/sensor2_reading' */
  boolean_T sensor1_failure;           /* '<Root>/sensor1_failure' */
  boolean_T sensor2_failure;           /* '<Root>/sensor2_failure' */
  boolean_T coherency_failure;         /* '<Root>/coherency_failure' */
} ExtY_PedalSensor_T;

/* Real-time Model Data Structure */
struct tag_RTM_PedalSensor_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_PedalSensor_T PedalSensor_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PedalSensor_T PedalSensor_Y;

/* Model entry point functions */
extern void PedalSensor_initialize(void);
extern void PedalSensor_step(void);
extern void PedalSensor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PedalSensor_T *const PedalSensor_M;

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
 * '<Root>' : 'PedalSensor'
 * '<S1>'   : 'PedalSensor/failure_detector'
 * '<S2>'   : 'PedalSensor/sensor1'
 * '<S3>'   : 'PedalSensor/sensor2'
 * '<S4>'   : 'PedalSensor/failure_detector/Compare To Constant'
 * '<S5>'   : 'PedalSensor/failure_detector/Compare To Constant1'
 * '<S6>'   : 'PedalSensor/failure_detector/Compare To Constant2'
 * '<S7>'   : 'PedalSensor/failure_detector/Compare To Constant3'
 * '<S8>'   : 'PedalSensor/failure_detector/Compare To Constant4'
 */
#endif                                 /* PedalSensor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

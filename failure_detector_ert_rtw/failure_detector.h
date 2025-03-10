/*
 * Event Support License -- for demonstration use and event support.  Not
 * for government, research, commercial, or other organizational use.
 *
 * File: failure_detector.h
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

#ifndef failure_detector_h_
#define failure_detector_h_
#ifndef failure_detector_COMMON_INCLUDES_
#define failure_detector_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* failure_detector_COMMON_INCLUDES_ */

#include "failure_detector_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T sensor1_reading;              /* '<Root>/sensor1_reading' */
  real_T sensor2_reading;              /* '<Root>/sensor2_reading' */
} ExtU_failure_detector_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T sensor1_failure;           /* '<Root>/sensor1_failure' */
  boolean_T sensor2_failure;           /* '<Root>/sensor2_failure' */
  boolean_T coherency_failure;         /* '<Root>/coherency_failure' */
} ExtY_failure_detector_T;

/* Real-time Model Data Structure */
struct tag_RTM_failure_detector_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_failure_detector_T failure_detector_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_failure_detector_T failure_detector_Y;

/* Model entry point functions */
extern void failure_detector_initialize(void);
extern void failure_detector_step(void);
extern void failure_detector_terminate(void);

/* Real-time Model object */
extern RT_MODEL_failure_detector_T *const failure_detector_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('PedalSensor/failure_detector')    - opens subsystem PedalSensor/failure_detector
 * hilite_system('PedalSensor/failure_detector/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PedalSensor'
 * '<S1>'   : 'PedalSensor/failure_detector'
 * '<S2>'   : 'PedalSensor/failure_detector/Compare To Constant'
 * '<S3>'   : 'PedalSensor/failure_detector/Compare To Constant1'
 * '<S4>'   : 'PedalSensor/failure_detector/Compare To Constant2'
 * '<S5>'   : 'PedalSensor/failure_detector/Compare To Constant3'
 * '<S6>'   : 'PedalSensor/failure_detector/Compare To Constant4'
 */
#endif                                 /* failure_detector_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

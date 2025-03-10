/*
 * File: PedalSensor_R2024b_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef PEDALSENSOR_R2024B_CA_H
#define PEDALSENSOR_R2024B_CA_H

/* preprocessor validation checks */
#include "PedalSensor_R2024b_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_PedalSensor_R2024b_HWRes;
extern CA_PWS_TestResults CA_PedalSensor_R2024b_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_PedalSensor_R2024b_ExpHW;
extern CA_HWImpl CA_PedalSensor_R2024b_ActHW;

/* entry point function to run tests */
void PedalSensor_R2024b_caRunTests(void);

#endif                                 /* PEDALSENSOR_R2024B_CA_H */

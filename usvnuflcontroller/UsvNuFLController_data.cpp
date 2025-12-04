/*
 * UsvNuFLController_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "UsvNuFLController".
 *
 * Model version              : 1.88
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C++ source code generated on : Thu Aug 12 18:41:44 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "UsvNuFLController.h"
#include "UsvNuFLController_private.h"

/* Block parameters (default storage) */
P_UsvNuFLController_T UsvNuFLControllerModelClass::UsvNuFLController_P = {
  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S32>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondition
   * Referenced by: '<S76>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_j
   * Referenced by: '<S37>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditi_m
   * Referenced by: '<S81>/Integrator'
   */
  0.0,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S100>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Theta */
  },

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S97>/Out1'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Z */
  },

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S3>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Z */
  },

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S2>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S4>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_jm
   * Referenced by: '<S101>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Expression: 14
   * Referenced by: '<S1>/Saturation1'
   */
  14.0,

  /* Expression: -14
   * Referenced by: '<S1>/Saturation1'
   */
  -14.0,

  /* Expression: 73
   * Referenced by: '<S1>/Saturation'
   */
  73.0,

  /* Expression: -60
   * Referenced by: '<S1>/Saturation'
   */
  -60.0,

  /* Computed Parameter: Tu_Y0
   * Referenced by: '<S1>/Tu'
   */
  0.0,

  /* Computed Parameter: Tr_ua_Y0
   * Referenced by: '<S1>/Tr_ua'
   */
  0.0,

  /* Expression: 40
   * Referenced by: '<S1>/Pu'
   */
  40.0,//139.9340,

  /* Expression: 40
   * Referenced by: '<S1>/Du'
   */
  40.0,//51.9137,

  /* Expression: 3
   * Referenced by: '<S1>/Nu'
   */
  3.0,

  /* Expression: 0
   * Referenced by: '<S1>/Stop'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/constantTu'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<S1>/Dr'
   */
  1.0,//2.7384,

  /* Expression: 0.5
   * Referenced by: '<S1>/Ir'
   */
  2.0,//4.1013,

  /* Expression: 60
   * Referenced by: '<S1>/Iu'
   */
  60.0,//123.2085,

  /* Expression: 3
   * Referenced by: '<S1>/Nr'
   */
  3.0,

  /* Expression: 3
   * Referenced by: '<S1>/Pr'
   */
  5.0,//12.2047,

  /* Expression: 0
   * Referenced by: '<S1>/Switch1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S5>/two'
   */
  2.0,

  /* Expression: 4.1
   * Referenced by: '<S5>/Iz '
   */
  4.1,

  /* Expression: -2.79
   * Referenced by: '<S5>/Nr''
   */
  -2.79,

  /* Expression: -2.25
   * Referenced by: '<S5>/Xu''
   */
  -2.25,

  /* Expression: -23.13
   * Referenced by: '<S5>/Yv''
   */
  -23.13,

  /* Expression: 0.5
   * Referenced by: '<S5>/half'
   */
  0.5,

  /* Expression: -0.52
   * Referenced by: '<S5>/Nr'
   */
  -0.52,

  /* Expression: -3.49
   * Referenced by: '<S5>/Nrr'
   */
  -3.49,

  /* Expression: 0.41
   * Referenced by: '<S5>/B'
   */
  0.41,

  /* Expression: 36.5
   * Referenced by: '<S5>/Saturation'
   */
  36.5,

  /* Expression: -30
   * Referenced by: '<S5>/Saturation'
   */
  -30.0,

  /* Expression: 0.78
   * Referenced by: '<S5>/c'
   */
  0.78,

  /* Expression: 36.5
   * Referenced by: '<S5>/Saturation1'
   */
  36.5,

  /* Expression: -30
   * Referenced by: '<S5>/Saturation1'
   */
  -30.0,

  /* Start of '<S4>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S98>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  ,

  /* End of '<S4>/Enabled Subsystem' */

  /* Start of '<S2>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S96>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  /* End of '<S2>/Enabled Subsystem' */
};

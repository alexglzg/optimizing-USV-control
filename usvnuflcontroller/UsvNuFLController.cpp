/*
 * UsvNuFLController.cpp
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

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
void UsvNuFLControllerModelClass::rt_ertODEUpdateContinuousStates(RTWSolverInfo *
  si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = static_cast<ODE3_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  UsvNuFLController_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  this->step();
  UsvNuFLController_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  this->step();
  UsvNuFLController_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for enable system:
 *    '<S2>/Enabled Subsystem'
 *    '<S4>/Enabled Subsystem'
 */
void UsvNuFLControllerModelClass::UsvNuFLCo_EnabledSubsystem_Init
  (B_EnabledSubsystem_UsvNuFLCon_T *localB, P_EnabledSubsystem_UsvNuFLCon_T
   *localP)
{
  /* SystemInitialize for Outport: '<S96>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S2>/Enabled Subsystem'
 *    '<S4>/Enabled Subsystem'
 */
void UsvNuFLControllerModelClass::UsvNuFLControl_EnabledSubsystem(boolean_T
  rtu_Enable, const SL_Bus_UsvNuFLController_std_msgs_Float64 *rtu_In1,
  B_EnabledSubsystem_UsvNuFLCon_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S96>/Enable'
   */
  if (rtu_Enable) {
    /* Inport: '<S96>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S2>/Enabled Subsystem' */
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

void UsvNuFLControllerModelClass::matlabCodegenHandle_matlabCodeg
  (ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

void UsvNuFLControllerModelClass::matlabCodegenHandle_matlabC_lnh
  (ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void UsvNuFLControllerModelClass::step()
{
  /* local block i/o variables */
  SL_Bus_UsvNuFLController_std_msgs_Float64 rtb_SourceBlock_o2_k;
  SL_Bus_UsvNuFLController_std_msgs_Float64 rtb_SourceBlock_o2_f;
  boolean_T rtb_SourceBlock_o1;
  boolean_T b_varargout_1;
  SL_Bus_UsvNuFLController_std_msgs_Float64 rtb_Tport;
  real_T rtb_Saturation1_a;
  real_T rtb_Product2;
  if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
    /* set solver stop time */
    if (!((&UsvNuFLController_M)->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&(&UsvNuFLController_M)->solverInfo,
                            (((&UsvNuFLController_M)->Timing.clockTickH0 + 1) *
        (&UsvNuFLController_M)->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&(&UsvNuFLController_M)->solverInfo,
                            (((&UsvNuFLController_M)->Timing.clockTick0 + 1) * (
        &UsvNuFLController_M)->Timing.stepSize0 + (&UsvNuFLController_M)
        ->Timing.clockTickH0 * (&UsvNuFLController_M)->Timing.stepSize0 *
        4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep((&UsvNuFLController_M))) {
    (&UsvNuFLController_M)->Timing.t[0] = rtsiGetT(&(&UsvNuFLController_M)
      ->solverInfo);
  }

  /* Outputs for Enabled SubSystem: '<Root>/Thrust Publisher' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
    /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
    /* MATLABSystem: '<S2>/SourceBlock' */
    UsvNuFLController_B.SourceBlock_o1 =
      Sub_UsvNuFLController_126.getLatestMessage(&rtb_SourceBlock_o2_f);

    /* Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' */
    UsvNuFLControl_EnabledSubsystem(UsvNuFLController_B.SourceBlock_o1,
      &rtb_SourceBlock_o2_f, &UsvNuFLController_B.EnabledSubsystem);

    /* End of Outputs for SubSystem: '<S2>/Enabled Subsystem' */
    /* End of Outputs for SubSystem: '<Root>/Subscribe' */

    /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
    /* MATLABSystem: '<S3>/SourceBlock' incorporates:
     *  Inport: '<S97>/In1'
     */
    b_varargout_1 = Sub_UsvNuFLController_172.getLatestMessage
      (&UsvNuFLController_B.b_varargout_2);

    /* Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S97>/Enable'
     */
    if (b_varargout_1) {
      UsvNuFLController_B.In1 = UsvNuFLController_B.b_varargout_2;
    }

    /* End of MATLABSystem: '<S3>/SourceBlock' */
    /* End of Outputs for SubSystem: '<S3>/Enabled Subsystem' */
    /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

    /* Outputs for Atomic SubSystem: '<Root>/Subscribe2' */
    /* MATLABSystem: '<S4>/SourceBlock' */
    rtb_SourceBlock_o1 = Sub_UsvNuFLController_187.getLatestMessage
      (&rtb_SourceBlock_o2_k);

    /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
    UsvNuFLControl_EnabledSubsystem(rtb_SourceBlock_o1, &rtb_SourceBlock_o2_k,
      &UsvNuFLController_B.EnabledSubsystem_g);

    /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
    /* End of Outputs for SubSystem: '<Root>/Subscribe2' */

    /* Outputs for Enabled SubSystem: '<Root>/PID Controller ' incorporates:
     *  EnablePort: '<S1>/Enable'
     */
    if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
      UsvNuFLController_DW.PIDController_MODE =
        UsvNuFLController_B.SourceBlock_o1;
    }

    /* End of Outputs for SubSystem: '<Root>/PID Controller ' */
    if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
      UsvNuFLController_DW.ThrustPublisher_MODE =
        UsvNuFLController_B.SourceBlock_o1;
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Thrust Publisher' */

  /* Outputs for Enabled SubSystem: '<Root>/PID Controller ' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (UsvNuFLController_DW.PIDController_MODE) {
    if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
      /* Abs: '<S1>/Abs' */
      UsvNuFLController_B.Abs = fabs
        (UsvNuFLController_B.EnabledSubsystem.In1.Data);

      /* Sum: '<S1>/Sum' */
      rtb_Product2 = UsvNuFLController_B.EnabledSubsystem.In1.Data -
        UsvNuFLController_B.In1.X;

      /* Product: '<S42>/PProd Out' incorporates:
       *  Constant: '<S1>/Pu'
       */
      UsvNuFLController_B.PProdOut = rtb_Product2 * UsvNuFLController_P.Pu_Value;

      /* Product: '<S31>/DProd Out' incorporates:
       *  Constant: '<S1>/Du'
       */
      UsvNuFLController_B.DProdOut = rtb_Product2 * UsvNuFLController_P.Du_Value;
    }

    /* Product: '<S40>/NProd Out' incorporates:
     *  Constant: '<S1>/Nu'
     *  Integrator: '<S32>/Filter'
     *  Sum: '<S32>/SumD'
     */
    UsvNuFLController_B.NProdOut = (UsvNuFLController_B.DProdOut -
      UsvNuFLController_X.Filter_CSTATE) * UsvNuFLController_P.Nu_Value;

    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Stop'
     */
    if (UsvNuFLController_B.Abs > UsvNuFLController_P.Switch_Threshold) {
      /* Sum: '<S46>/Sum' incorporates:
       *  Integrator: '<S37>/Integrator'
       */
      rtb_Saturation1_a = (UsvNuFLController_B.PProdOut +
                           UsvNuFLController_X.Integrator_CSTATE) +
        UsvNuFLController_B.NProdOut;

      /* Saturate: '<S1>/Saturation' */
      if (rtb_Saturation1_a > UsvNuFLController_P.Saturation_UpperSat) {
        rtb_Saturation1_a = UsvNuFLController_P.Saturation_UpperSat;
      } else {
        if (rtb_Saturation1_a < UsvNuFLController_P.Saturation_LowerSat) {
          rtb_Saturation1_a = UsvNuFLController_P.Saturation_LowerSat;
        }
      }

      /* End of Saturate: '<S1>/Saturation' */
    } else {
      rtb_Saturation1_a = UsvNuFLController_P.Stop_Value;
    }

    /* End of Switch: '<S1>/Switch' */

    /* Sum: '<S1>/Add' incorporates:
     *  Constant: '<S1>/constantTu'
     */
    UsvNuFLController_B.Add = rtb_Saturation1_a +
      UsvNuFLController_P.constantTu_Value;
    if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
      /* Product: '<S34>/IProd Out' incorporates:
       *  Constant: '<S1>/Iu'
       */
      UsvNuFLController_B.IProdOut = rtb_Product2 * UsvNuFLController_P.Iu_Value;

      /* Sum: '<S1>/Sum1' */
      rtb_Product2 = UsvNuFLController_B.EnabledSubsystem_g.In1.Data -
        UsvNuFLController_B.In1.Z;

      /* Product: '<S75>/DProd Out' incorporates:
       *  Constant: '<S1>/Dr'
       */
      UsvNuFLController_B.DProdOut_k = rtb_Product2 *
        UsvNuFLController_P.Dr_Value;

      /* Product: '<S78>/IProd Out' incorporates:
       *  Constant: '<S1>/Ir'
       */
      UsvNuFLController_B.IProdOut_n = rtb_Product2 *
        UsvNuFLController_P.Ir_Value;

      /* Product: '<S86>/PProd Out' incorporates:
       *  Constant: '<S1>/Pr'
       */
      UsvNuFLController_B.PProdOut_j = rtb_Product2 *
        UsvNuFLController_P.Pr_Value;
    }

    /* Product: '<S84>/NProd Out' incorporates:
     *  Constant: '<S1>/Nr'
     *  Integrator: '<S76>/Filter'
     *  Sum: '<S76>/SumD'
     */
    UsvNuFLController_B.NProdOut_b = (UsvNuFLController_B.DProdOut_k -
      UsvNuFLController_X.Filter_CSTATE_l) * UsvNuFLController_P.Nr_Value;

    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Stop'
     */
    if (UsvNuFLController_B.Abs > UsvNuFLController_P.Switch1_Threshold) {
      /* Sum: '<S90>/Sum' incorporates:
       *  Integrator: '<S81>/Integrator'
       */
      rtb_Saturation1_a = (UsvNuFLController_B.PProdOut_j +
                           UsvNuFLController_X.Integrator_CSTATE_a) +
        UsvNuFLController_B.NProdOut_b;

      /* Saturate: '<S1>/Saturation1' */
      if (rtb_Saturation1_a > UsvNuFLController_P.Saturation1_UpperSat) {
        UsvNuFLController_B.Switch1 = UsvNuFLController_P.Saturation1_UpperSat;
      } else if (rtb_Saturation1_a < UsvNuFLController_P.Saturation1_LowerSat) {
        UsvNuFLController_B.Switch1 = UsvNuFLController_P.Saturation1_LowerSat;
      } else {
        UsvNuFLController_B.Switch1 = rtb_Saturation1_a;
      }

      /* End of Saturate: '<S1>/Saturation1' */
    } else {
      UsvNuFLController_B.Switch1 = UsvNuFLController_P.Stop_Value;
    }

    /* End of Switch: '<S1>/Switch1' */
  }

  /* End of Outputs for SubSystem: '<Root>/PID Controller ' */

  /* Outputs for Enabled SubSystem: '<Root>/Thrust Publisher' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (UsvNuFLController_DW.ThrustPublisher_MODE) {
    if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
      /* Sum: '<S5>/Iz-Nr'' incorporates:
       *  Constant: '<S5>/Iz '
       *  Constant: '<S5>/Nr''
       */
      UsvNuFLController_B.IzNr = UsvNuFLController_P.Iz_Value -
        UsvNuFLController_P.Nr_Value_d;

      /* Product: '<S99>/Product' incorporates:
       *  Constant: '<S5>/Xu''
       *  Constant: '<S5>/Yv''
       *  Sum: '<S99>/-Xu'+Yv''
       */
      UsvNuFLController_B.Product = (UsvNuFLController_P.Yv_Value -
        UsvNuFLController_P.Xu_Value) * UsvNuFLController_B.In1.X *
        UsvNuFLController_B.In1.Y;

      /* Product: '<S102>/Product1' incorporates:
       *  Constant: '<S5>/half'
       *  Constant: '<S5>/two'
       *  Gain: '<S5>/Nr'
       *  Math: '<S5>/Power'
       *  Math: '<S5>/Power1'
       *  Math: '<S5>/Power2'
       *  Sum: '<S5>/Add3'
       */
      UsvNuFLController_B.Product1 = rt_powd_snf(rt_powd_snf
        (UsvNuFLController_B.In1.X, UsvNuFLController_P.two_Value) + rt_powd_snf
        (UsvNuFLController_B.In1.Y, UsvNuFLController_P.two_Value),
        UsvNuFLController_P.half_Value) * UsvNuFLController_P.Nr_Gain *
        UsvNuFLController_B.In1.Z;

      /* Product: '<S103>/Product1' incorporates:
       *  Abs: '<S103>/Abs'
       *  Constant: '<S5>/Nrr'
       *  Product: '<S103>/Product2'
       */
      UsvNuFLController_B.Product1_b = UsvNuFLController_B.In1.Z * fabs
        (UsvNuFLController_B.In1.Z) * UsvNuFLController_P.Nrr_Value;
    }

    /* Sum: '<S5>/Add2' incorporates:
     *  Product: '<S5>/Product'
     */
    rtb_Product2 = ((UsvNuFLController_B.IzNr * UsvNuFLController_B.Switch1 -
                     UsvNuFLController_B.Product) - UsvNuFLController_B.Product1)
      - UsvNuFLController_B.Product1_b;

    /* Sum: '<S5>/Add' incorporates:
     *  Constant: '<S5>/B'
     *  Constant: '<S5>/two'
     *  Product: '<S5>/Divide'
     *  Product: '<S5>/Divide2'
     */
    rtb_Saturation1_a = UsvNuFLController_B.Add / UsvNuFLController_P.two_Value
      + rtb_Product2 / UsvNuFLController_P.B_Value;

    /* Saturate: '<S5>/Saturation' */
    if (rtb_Saturation1_a > UsvNuFLController_P.Saturation_UpperSat_h) {
      /* BusAssignment: '<S5>/Tport' */
      rtb_Tport.Data = UsvNuFLController_P.Saturation_UpperSat_h;
    } else if (rtb_Saturation1_a < UsvNuFLController_P.Saturation_LowerSat_j) {
      /* BusAssignment: '<S5>/Tport' */
      rtb_Tport.Data = UsvNuFLController_P.Saturation_LowerSat_j;
    } else {
      /* BusAssignment: '<S5>/Tport' */
      rtb_Tport.Data = rtb_Saturation1_a;
    }

    /* End of Saturate: '<S5>/Saturation' */

    /* Outputs for Atomic SubSystem: '<S5>/Publish1' */
    /* MATLABSystem: '<S104>/SinkBlock' */
    Pub_UsvNuFLController_156.publish(&rtb_Tport);

    /* End of Outputs for SubSystem: '<S5>/Publish1' */

    /* BusAssignment: '<S5>/Bus Assignment1' incorporates:
     *  Constant: '<S100>/Constant'
     */
    UsvNuFLController_B.BusAssignment1 = UsvNuFLController_P.Constant_Value;
    UsvNuFLController_B.BusAssignment1.X = UsvNuFLController_B.Add;
    UsvNuFLController_B.BusAssignment1.Theta = UsvNuFLController_B.Switch1;

    /* Outputs for Atomic SubSystem: '<S5>/Publish2' */
    /* MATLABSystem: '<S105>/SinkBlock' */
    Pub_UsvNuFLController_128.publish(&UsvNuFLController_B.BusAssignment1);

    /* End of Outputs for SubSystem: '<S5>/Publish2' */
    if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
      /* Product: '<S5>/Divide3' incorporates:
       *  Constant: '<S5>/c'
       *  Constant: '<S5>/two'
       */
      UsvNuFLController_B.Divide3 = UsvNuFLController_P.two_Value *
        UsvNuFLController_P.c_Value;

      /* Product: '<S5>/Divide4' incorporates:
       *  Constant: '<S5>/B'
       *  Constant: '<S5>/c'
       */
      UsvNuFLController_B.Divide4 = UsvNuFLController_P.B_Value *
        UsvNuFLController_P.c_Value;
    }

    /* Sum: '<S5>/Add1' incorporates:
     *  Product: '<S5>/Divide1'
     *  Product: '<S5>/Divide5'
     */
    rtb_Saturation1_a = UsvNuFLController_B.Add / UsvNuFLController_B.Divide3 -
      rtb_Product2 / UsvNuFLController_B.Divide4;

    /* Saturate: '<S5>/Saturation1' */
    if (rtb_Saturation1_a > UsvNuFLController_P.Saturation1_UpperSat_i) {
      /* BusAssignment: '<S5>/Tstbd' */
      UsvNuFLController_B.Tstbd.Data =
        UsvNuFLController_P.Saturation1_UpperSat_i;
    } else if (rtb_Saturation1_a < UsvNuFLController_P.Saturation1_LowerSat_n) {
      /* BusAssignment: '<S5>/Tstbd' */
      UsvNuFLController_B.Tstbd.Data =
        UsvNuFLController_P.Saturation1_LowerSat_n;
    } else {
      /* BusAssignment: '<S5>/Tstbd' */
      UsvNuFLController_B.Tstbd.Data = rtb_Saturation1_a;
    }

    /* End of Saturate: '<S5>/Saturation1' */

    /* Outputs for Atomic SubSystem: '<S5>/Publish3' */
    /* MATLABSystem: '<S106>/SinkBlock' */
    Pub_UsvNuFLController_157.publish(&UsvNuFLController_B.Tstbd);

    /* End of Outputs for SubSystem: '<S5>/Publish3' */
  }

  /* End of Outputs for SubSystem: '<Root>/Thrust Publisher' */
  if (rtmIsMajorTimeStep((&UsvNuFLController_M))) {
    rt_ertODEUpdateContinuousStates(&(&UsvNuFLController_M)->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++(&UsvNuFLController_M)->Timing.clockTick0)) {
      ++(&UsvNuFLController_M)->Timing.clockTickH0;
    }

    (&UsvNuFLController_M)->Timing.t[0] = rtsiGetSolverStopTime
      (&(&UsvNuFLController_M)->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      (&UsvNuFLController_M)->Timing.clockTick1++;
      if (!(&UsvNuFLController_M)->Timing.clockTick1) {
        (&UsvNuFLController_M)->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void UsvNuFLControllerModelClass::UsvNuFLController_derivatives()
{
  XDot_UsvNuFLController_T *_rtXdot;
  _rtXdot = ((XDot_UsvNuFLController_T *) (&UsvNuFLController_M)->derivs);

  /* Derivatives for Enabled SubSystem: '<Root>/PID Controller ' */
  if (UsvNuFLController_DW.PIDController_MODE) {
    /* Derivatives for Integrator: '<S37>/Integrator' */
    _rtXdot->Integrator_CSTATE = UsvNuFLController_B.IProdOut;

    /* Derivatives for Integrator: '<S32>/Filter' */
    _rtXdot->Filter_CSTATE = UsvNuFLController_B.NProdOut;

    /* Derivatives for Integrator: '<S76>/Filter' */
    _rtXdot->Filter_CSTATE_l = UsvNuFLController_B.NProdOut_b;

    /* Derivatives for Integrator: '<S81>/Integrator' */
    _rtXdot->Integrator_CSTATE_a = UsvNuFLController_B.IProdOut_n;
  } else {
    {
      real_T *dx;
      int_T i;
      dx = &(((XDot_UsvNuFLController_T *) (&UsvNuFLController_M)->derivs)
             ->Integrator_CSTATE);
      for (i=0; i < 4; i++) {
        dx[i] = 0.0;
      }
    }
  }

  /* End of Derivatives for SubSystem: '<Root>/PID Controller ' */
}

/* Model initialize function */
void UsvNuFLControllerModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&(&UsvNuFLController_M)->solverInfo,
                          &(&UsvNuFLController_M)->Timing.simTimeStep);
    rtsiSetTPtr(&(&UsvNuFLController_M)->solverInfo, &rtmGetTPtr
                ((&UsvNuFLController_M)));
    rtsiSetStepSizePtr(&(&UsvNuFLController_M)->solverInfo,
                       &(&UsvNuFLController_M)->Timing.stepSize0);
    rtsiSetdXPtr(&(&UsvNuFLController_M)->solverInfo, &(&UsvNuFLController_M)
                 ->derivs);
    rtsiSetContStatesPtr(&(&UsvNuFLController_M)->solverInfo, (real_T **)
                         &(&UsvNuFLController_M)->contStates);
    rtsiSetNumContStatesPtr(&(&UsvNuFLController_M)->solverInfo,
      &(&UsvNuFLController_M)->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&(&UsvNuFLController_M)->solverInfo,
      &(&UsvNuFLController_M)->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&(&UsvNuFLController_M)->solverInfo,
      &(&UsvNuFLController_M)->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&(&UsvNuFLController_M)->solverInfo,
      &(&UsvNuFLController_M)->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&(&UsvNuFLController_M)->solverInfo,
                          (&rtmGetErrorStatus((&UsvNuFLController_M))));
    rtsiSetRTModelPtr(&(&UsvNuFLController_M)->solverInfo, (&UsvNuFLController_M));
  }

  rtsiSetSimTimeStep(&(&UsvNuFLController_M)->solverInfo, MAJOR_TIME_STEP);
  (&UsvNuFLController_M)->intgData.y = (&UsvNuFLController_M)->odeY;
  (&UsvNuFLController_M)->intgData.f[0] = (&UsvNuFLController_M)->odeF[0];
  (&UsvNuFLController_M)->intgData.f[1] = (&UsvNuFLController_M)->odeF[1];
  (&UsvNuFLController_M)->intgData.f[2] = (&UsvNuFLController_M)->odeF[2];
  (&UsvNuFLController_M)->contStates = ((X_UsvNuFLController_T *)
    &UsvNuFLController_X);
  rtsiSetSolverData(&(&UsvNuFLController_M)->solverInfo, static_cast<void *>
                    (&(&UsvNuFLController_M)->intgData));
  rtsiSetSolverName(&(&UsvNuFLController_M)->solverInfo,"ode3");
  rtmSetTPtr((&UsvNuFLController_M), &(&UsvNuFLController_M)->Timing.tArray[0]);
  (&UsvNuFLController_M)->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) memset((static_cast<void *>(&UsvNuFLController_B)), 0,
                sizeof(B_UsvNuFLController_T));

  /* states (continuous) */
  {
    (void) memset(static_cast<void *>(&UsvNuFLController_X), 0,
                  sizeof(X_UsvNuFLController_T));
  }

  /* states (dwork) */
  (void) memset(static_cast<void *>(&UsvNuFLController_DW), 0,
                sizeof(DW_UsvNuFLController_T));

  {
    char_T tmp[26];
    char_T tmp_0[24];
    int32_T i;
    static const char_T tmp_1[23] = { '/', 'g', 'u', 'i', 'd', 'a', 'n', 'c',
      'e', '/', 'd', 'e', 's', 'i', 'r', 'e', 'd', '_', 's', 'p', 'e', 'e', 'd'
    };

    static const char_T tmp_2[27] = { '/', 'v', 'e', 'c', 't', 'o', 'r', 'n',
      'a', 'v', '/', 'i', 'n', 's', '_', '2', 'd', '/', 'l', 'o', 'c', 'a', 'l',
      '_', 'v', 'e', 'l' };

    static const char_T tmp_3[25] = { '/', 'g', 'u', 'i', 'd', 'a', 'n', 'c',
      'e', '/', 'd', 'e', 's', 'i', 'r', 'e', 'd', '_', 'h', 'e', 'a', 'd', 'i',
      'n', 'g' };

    static const char_T tmp_4[37] = { '/', 'u', 's', 'v', '_', 'c', 'o', 'n',
      't', 'r', 'o', 'l', '/', 'c', 'o', 'n', 't', 'r', 'o', 'l', 'l', 'e', 'r',
      '/', 'l', 'e', 'f', 't', '_', 't', 'h', 'r', 'u', 's', 't', 'e', 'r' };

    static const char_T tmp_5[37] = { '/', 'u', 's', 'v', '_', 'c', 'o', 'n',
      't', 'r', 'o', 'l', '/', 'c', 'o', 'n', 't', 'r', 'o', 'l', 'l', 'e', 'r',
      '/', 'c', 'o', 'n', 't', 'r', 'o', 'l', '_', 'i', 'n', 'p', 'u', 't' };

    static const char_T tmp_6[38] = { '/', 'u', 's', 'v', '_', 'c', 'o', 'n',
      't', 'r', 'o', 'l', '/', 'c', 'o', 'n', 't', 'r', 'o', 'l', 'l', 'e', 'r',
      '/', 'r', 'i', 'g', 'h', 't', '_', 't', 'h', 'r', 'u', 's', 't', 'e', 'r'
    };

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S2>/SourceBlock' */
    UsvNuFLController_DW.obj_n.matlabCodegenIsDeleted = false;
    UsvNuFLController_DW.objisempty_j = true;
    UsvNuFLController_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 23; i++) {
      tmp_0[i] = tmp_1[i];
    }

    tmp_0[23] = '\x00';
    Sub_UsvNuFLController_126.createSubscriber(tmp_0, 51);
    UsvNuFLController_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S2>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S3>/SourceBlock' */
    UsvNuFLController_DW.obj_b.matlabCodegenIsDeleted = false;
    UsvNuFLController_DW.objisempty_k = true;
    UsvNuFLController_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      UsvNuFLController_B.cv2[i] = tmp_2[i];
    }

    UsvNuFLController_B.cv2[27] = '\x00';
    Sub_UsvNuFLController_172.createSubscriber(UsvNuFLController_B.cv2, 51);
    UsvNuFLController_DW.obj_b.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe2' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    UsvNuFLController_DW.obj.matlabCodegenIsDeleted = false;
    UsvNuFLController_DW.objisempty_d = true;
    UsvNuFLController_DW.obj.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      tmp[i] = tmp_3[i];
    }

    tmp[25] = '\x00';
    Sub_UsvNuFLController_187.createSubscriber(tmp, 51);
    UsvNuFLController_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe2' */

    /* Start for Enabled SubSystem: '<Root>/PID Controller ' */
    UsvNuFLController_DW.PIDController_MODE = false;

    /* End of Start for SubSystem: '<Root>/PID Controller ' */

    /* Start for Enabled SubSystem: '<Root>/Thrust Publisher' */
    UsvNuFLController_DW.ThrustPublisher_MODE = false;

    /* Start for Atomic SubSystem: '<S5>/Publish1' */
    /* Start for MATLABSystem: '<S104>/SinkBlock' */
    UsvNuFLController_DW.obj_h.matlabCodegenIsDeleted = false;
    UsvNuFLController_DW.objisempty_i = true;
    UsvNuFLController_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 37; i++) {
      UsvNuFLController_B.cv1[i] = tmp_4[i];
    }

    UsvNuFLController_B.cv1[37] = '\x00';
    Pub_UsvNuFLController_156.createPublisher(UsvNuFLController_B.cv1, 105);
    UsvNuFLController_DW.obj_h.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S104>/SinkBlock' */
    /* End of Start for SubSystem: '<S5>/Publish1' */

    /* Start for Atomic SubSystem: '<S5>/Publish2' */
    /* Start for MATLABSystem: '<S105>/SinkBlock' */
    UsvNuFLController_DW.obj_p.matlabCodegenIsDeleted = false;
    UsvNuFLController_DW.objisempty_g = true;
    UsvNuFLController_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 37; i++) {
      UsvNuFLController_B.cv1[i] = tmp_5[i];
    }

    UsvNuFLController_B.cv1[37] = '\x00';
    Pub_UsvNuFLController_128.createPublisher(UsvNuFLController_B.cv1, 105);
    UsvNuFLController_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S105>/SinkBlock' */
    /* End of Start for SubSystem: '<S5>/Publish2' */

    /* Start for Atomic SubSystem: '<S5>/Publish3' */
    /* Start for MATLABSystem: '<S106>/SinkBlock' */
    UsvNuFLController_DW.obj_c.matlabCodegenIsDeleted = false;
    UsvNuFLController_DW.objisempty = true;
    UsvNuFLController_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 38; i++) {
      UsvNuFLController_B.cv[i] = tmp_6[i];
    }

    UsvNuFLController_B.cv[38] = '\x00';
    Pub_UsvNuFLController_157.createPublisher(UsvNuFLController_B.cv, 105);
    UsvNuFLController_DW.obj_c.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S106>/SinkBlock' */
    /* End of Start for SubSystem: '<S5>/Publish3' */
    /* End of Start for SubSystem: '<Root>/Thrust Publisher' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem' */
  UsvNuFLCo_EnabledSubsystem_Init(&UsvNuFLController_B.EnabledSubsystem,
    &UsvNuFLController_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S97>/Out1' */
  UsvNuFLController_B.In1 = UsvNuFLController_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  UsvNuFLCo_EnabledSubsystem_Init(&UsvNuFLController_B.EnabledSubsystem_g,
    &UsvNuFLController_P.EnabledSubsystem_g);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe2' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/PID Controller ' */
  /* InitializeConditions for Integrator: '<S37>/Integrator' */
  UsvNuFLController_X.Integrator_CSTATE =
    UsvNuFLController_P.PIDController_InitialConditio_j;

  /* InitializeConditions for Integrator: '<S32>/Filter' */
  UsvNuFLController_X.Filter_CSTATE =
    UsvNuFLController_P.PIDController_InitialConditionF;

  /* InitializeConditions for Integrator: '<S76>/Filter' */
  UsvNuFLController_X.Filter_CSTATE_l =
    UsvNuFLController_P.PIDController1_InitialCondition;

  /* InitializeConditions for Integrator: '<S81>/Integrator' */
  UsvNuFLController_X.Integrator_CSTATE_a =
    UsvNuFLController_P.PIDController1_InitialConditi_m;

  /* SystemInitialize for Outport: '<S1>/Tu' */
  UsvNuFLController_B.Add = UsvNuFLController_P.Tu_Y0;

  /* SystemInitialize for Outport: '<S1>/Tr_ua' */
  UsvNuFLController_B.Switch1 = UsvNuFLController_P.Tr_ua_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/PID Controller ' */
}

/* Model terminate function */
void UsvNuFLControllerModelClass::terminate()
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S2>/SourceBlock' */
  matlabCodegenHandle_matlabCodeg(&UsvNuFLController_DW.obj_n);

  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S3>/SourceBlock' */
  matlabCodegenHandle_matlabCodeg(&UsvNuFLController_DW.obj_b);

  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe2' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  matlabCodegenHandle_matlabCodeg(&UsvNuFLController_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/Subscribe2' */

  /* Terminate for Enabled SubSystem: '<Root>/Thrust Publisher' */
  /* Terminate for Atomic SubSystem: '<S5>/Publish1' */
  /* Terminate for MATLABSystem: '<S104>/SinkBlock' */
  matlabCodegenHandle_matlabC_lnh(&UsvNuFLController_DW.obj_h);

  /* End of Terminate for SubSystem: '<S5>/Publish1' */

  /* Terminate for Atomic SubSystem: '<S5>/Publish2' */
  /* Terminate for MATLABSystem: '<S105>/SinkBlock' */
  matlabCodegenHandle_matlabC_lnh(&UsvNuFLController_DW.obj_p);

  /* End of Terminate for SubSystem: '<S5>/Publish2' */

  /* Terminate for Atomic SubSystem: '<S5>/Publish3' */
  /* Terminate for MATLABSystem: '<S106>/SinkBlock' */
  matlabCodegenHandle_matlabC_lnh(&UsvNuFLController_DW.obj_c);

  /* End of Terminate for SubSystem: '<S5>/Publish3' */
  /* End of Terminate for SubSystem: '<Root>/Thrust Publisher' */
}

/* Constructor */
UsvNuFLControllerModelClass::UsvNuFLControllerModelClass() : UsvNuFLController_M
  ()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
UsvNuFLControllerModelClass::~UsvNuFLControllerModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_UsvNuFLController_T * UsvNuFLControllerModelClass::getRTM()
{
  return (&UsvNuFLController_M);
}

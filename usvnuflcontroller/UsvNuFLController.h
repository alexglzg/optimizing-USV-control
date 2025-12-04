/*
 * UsvNuFLController.h
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

#ifndef RTW_HEADER_UsvNuFLController_h_
#define RTW_HEADER_UsvNuFLController_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef UsvNuFLController_COMMON_INCLUDES_
# define UsvNuFLController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 /* UsvNuFLController_COMMON_INCLUDES_ */

#include "UsvNuFLController_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals for system '<S2>/Enabled Subsystem' */
typedef struct {
  SL_Bus_UsvNuFLController_std_msgs_Float64 In1;/* '<S96>/In1' */
} B_EnabledSubsystem_UsvNuFLCon_T;

/* Block signals (default storage) */
typedef struct {
  char_T cv[39];
  char_T cv1[38];
  char_T cv2[28];
  SL_Bus_UsvNuFLController_geometry_msgs_Vector3 In1;/* '<S97>/In1' */
  SL_Bus_UsvNuFLController_geometry_msgs_Vector3 b_varargout_2;
  SL_Bus_UsvNuFLController_geometry_msgs_Pose2D BusAssignment1;/* '<S5>/Bus Assignment1' */
  real_T IzNr;                         /* '<S5>/Iz-Nr'' */
  real_T Product;                      /* '<S99>/Product' */
  real_T Product1;                     /* '<S102>/Product1' */
  real_T Product1_b;                   /* '<S103>/Product1' */
  real_T Divide3;                      /* '<S5>/Divide3' */
  real_T Divide4;                      /* '<S5>/Divide4' */
  real_T Abs;                          /* '<S1>/Abs' */
  real_T PProdOut;                     /* '<S42>/PProd Out' */
  real_T DProdOut;                     /* '<S31>/DProd Out' */
  real_T NProdOut;                     /* '<S40>/NProd Out' */
  real_T Add;                          /* '<S1>/Add' */
  real_T IProdOut;                     /* '<S34>/IProd Out' */
  real_T DProdOut_k;                   /* '<S75>/DProd Out' */
  real_T IProdOut_n;                   /* '<S78>/IProd Out' */
  real_T NProdOut_b;                   /* '<S84>/NProd Out' */
  real_T PProdOut_j;                   /* '<S86>/PProd Out' */
  real_T Switch1;                      /* '<S1>/Switch1' */
  SL_Bus_UsvNuFLController_std_msgs_Float64 Tstbd;/* '<S5>/Tstbd' */
  boolean_T SourceBlock_o1;            /* '<S2>/SourceBlock' */
  B_EnabledSubsystem_UsvNuFLCon_T EnabledSubsystem_g;/* '<S4>/Enabled Subsystem' */
  B_EnabledSubsystem_UsvNuFLCon_T EnabledSubsystem;/* '<S2>/Enabled Subsystem' */
} B_UsvNuFLController_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  ros_slros_internal_block_Subs_T obj; /* '<S4>/SourceBlock' */
  ros_slros_internal_block_Subs_T obj_b;/* '<S3>/SourceBlock' */
  ros_slros_internal_block_Subs_T obj_n;/* '<S2>/SourceBlock' */
  ros_slros_internal_block_Publ_T obj_c;/* '<S106>/SinkBlock' */
  ros_slros_internal_block_Publ_T obj_p;/* '<S105>/SinkBlock' */
  ros_slros_internal_block_Publ_T obj_h;/* '<S104>/SinkBlock' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  boolean_T objisempty;                /* '<S106>/SinkBlock' */
  boolean_T objisempty_g;              /* '<S105>/SinkBlock' */
  boolean_T objisempty_i;              /* '<S104>/SinkBlock' */
  boolean_T objisempty_d;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_k;              /* '<S3>/SourceBlock' */
  boolean_T objisempty_j;              /* '<S2>/SourceBlock' */
  boolean_T ThrustPublisher_MODE;      /* '<Root>/Thrust Publisher' */
  boolean_T PIDController_MODE;        /* '<Root>/PID Controller ' */
} DW_UsvNuFLController_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S37>/Integrator' */
  real_T Filter_CSTATE;                /* '<S32>/Filter' */
  real_T Filter_CSTATE_l;              /* '<S76>/Filter' */
  real_T Integrator_CSTATE_a;          /* '<S81>/Integrator' */
} X_UsvNuFLController_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S37>/Integrator' */
  real_T Filter_CSTATE;                /* '<S32>/Filter' */
  real_T Filter_CSTATE_l;              /* '<S76>/Filter' */
  real_T Integrator_CSTATE_a;          /* '<S81>/Integrator' */
} XDot_UsvNuFLController_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S37>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S32>/Filter' */
  boolean_T Filter_CSTATE_l;           /* '<S76>/Filter' */
  boolean_T Integrator_CSTATE_a;       /* '<S81>/Integrator' */
} XDis_UsvNuFLController_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters for system: '<S2>/Enabled Subsystem' */
struct P_EnabledSubsystem_UsvNuFLCon_T_ {
  SL_Bus_UsvNuFLController_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                                     * Referenced by: '<S96>/Out1'
                                                     */
};

/* Parameters (default storage) */
struct P_UsvNuFLController_T_ {
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S32>/Filter'
                               */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S76>/Filter'
                               */
  real_T PIDController_InitialConditio_j;
                              /* Mask Parameter: PIDController_InitialConditio_j
                               * Referenced by: '<S37>/Integrator'
                               */
  real_T PIDController1_InitialConditi_m;
                              /* Mask Parameter: PIDController1_InitialConditi_m
                               * Referenced by: '<S81>/Integrator'
                               */
  SL_Bus_UsvNuFLController_geometry_msgs_Pose2D Constant_Value;/* Computed Parameter: Constant_Value
                                                                * Referenced by: '<S100>/Constant'
                                                                */
  SL_Bus_UsvNuFLController_geometry_msgs_Vector3 Out1_Y0;/* Computed Parameter: Out1_Y0
                                                          * Referenced by: '<S97>/Out1'
                                                          */
  SL_Bus_UsvNuFLController_geometry_msgs_Vector3 Constant_Value_e;/* Computed Parameter: Constant_Value_e
                                                                   * Referenced by: '<S3>/Constant'
                                                                   */
  SL_Bus_UsvNuFLController_std_msgs_Float64 Constant_Value_p;/* Computed Parameter: Constant_Value_p
                                                              * Referenced by: '<S2>/Constant'
                                                              */
  SL_Bus_UsvNuFLController_std_msgs_Float64 Constant_Value_j;/* Computed Parameter: Constant_Value_j
                                                              * Referenced by: '<S4>/Constant'
                                                              */
  SL_Bus_UsvNuFLController_std_msgs_Float64 Constant_Value_jm;/* Computed Parameter: Constant_Value_jm
                                                               * Referenced by: '<S101>/Constant'
                                                               */
  real_T Saturation1_UpperSat;         /* Expression: 14
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -14
                                        * Referenced by: '<S1>/Saturation1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 73
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -60
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Tu_Y0;                        /* Computed Parameter: Tu_Y0
                                        * Referenced by: '<S1>/Tu'
                                        */
  real_T Tr_ua_Y0;                     /* Computed Parameter: Tr_ua_Y0
                                        * Referenced by: '<S1>/Tr_ua'
                                        */
  real_T Pu_Value;                     /* Expression: 40
                                        * Referenced by: '<S1>/Pu'
                                        */
  real_T Du_Value;                     /* Expression: 40
                                        * Referenced by: '<S1>/Du'
                                        */
  real_T Nu_Value;                     /* Expression: 3
                                        * Referenced by: '<S1>/Nu'
                                        */
  real_T Stop_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Stop'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S1>/Switch'
                                        */
  real_T constantTu_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/constantTu'
                                        */
  real_T Dr_Value;                     /* Expression: 0.1
                                        * Referenced by: '<S1>/Dr'
                                        */
  real_T Ir_Value;                     /* Expression: 0.5
                                        * Referenced by: '<S1>/Ir'
                                        */
  real_T Iu_Value;                     /* Expression: 60
                                        * Referenced by: '<S1>/Iu'
                                        */
  real_T Nr_Value;                     /* Expression: 3
                                        * Referenced by: '<S1>/Nr'
                                        */
  real_T Pr_Value;                     /* Expression: 3
                                        * Referenced by: '<S1>/Pr'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S1>/Switch1'
                                        */
  real_T two_Value;                    /* Expression: 2
                                        * Referenced by: '<S5>/two'
                                        */
  real_T Iz_Value;                     /* Expression: 4.1
                                        * Referenced by: '<S5>/Iz '
                                        */
  real_T Nr_Value_d;                   /* Expression: -2.79
                                        * Referenced by: '<S5>/Nr''
                                        */
  real_T Xu_Value;                     /* Expression: -2.25
                                        * Referenced by: '<S5>/Xu''
                                        */
  real_T Yv_Value;                     /* Expression: -23.13
                                        * Referenced by: '<S5>/Yv''
                                        */
  real_T half_Value;                   /* Expression: 0.5
                                        * Referenced by: '<S5>/half'
                                        */
  real_T Nr_Gain;                      /* Expression: -0.52
                                        * Referenced by: '<S5>/Nr'
                                        */
  real_T Nrr_Value;                    /* Expression: -3.49
                                        * Referenced by: '<S5>/Nrr'
                                        */
  real_T B_Value;                      /* Expression: 0.41
                                        * Referenced by: '<S5>/B'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 36.5
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: -30
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T c_Value;                      /* Expression: 0.78
                                        * Referenced by: '<S5>/c'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 36.5
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: -30
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  P_EnabledSubsystem_UsvNuFLCon_T EnabledSubsystem_g;/* '<S4>/Enabled Subsystem' */
  P_EnabledSubsystem_UsvNuFLCon_T EnabledSubsystem;/* '<S2>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_UsvNuFLController_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_UsvNuFLController_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[4];
  real_T odeF[3][4];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Class declaration for model UsvNuFLController */
class UsvNuFLControllerModelClass {
  /* public data and function members */
 public:
  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  UsvNuFLControllerModelClass();

  /* Destructor */
  ~UsvNuFLControllerModelClass();

  /* Real-Time Model get method */
  RT_MODEL_UsvNuFLController_T * getRTM();

  /* private data and function members */
 private:
  /* Tunable parameters */
  static P_UsvNuFLController_T UsvNuFLController_P;

  /* Block signals */
  B_UsvNuFLController_T UsvNuFLController_B;

  /* Block states */
  DW_UsvNuFLController_T UsvNuFLController_DW;
  X_UsvNuFLController_T UsvNuFLController_X;/* Block continuous states */

  /* Real-Time Model */
  RT_MODEL_UsvNuFLController_T UsvNuFLController_M;

  /* private member function(s) for subsystem '<S2>/Enabled Subsystem'*/
  void UsvNuFLCo_EnabledSubsystem_Init(B_EnabledSubsystem_UsvNuFLCon_T *localB,
    P_EnabledSubsystem_UsvNuFLCon_T *localP);
  void UsvNuFLControl_EnabledSubsystem(boolean_T rtu_Enable, const
    SL_Bus_UsvNuFLController_std_msgs_Float64 *rtu_In1,
    B_EnabledSubsystem_UsvNuFLCon_T *localB);

  /* private member function(s) for subsystem '<Root>'*/
  void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj);
  void matlabCodegenHandle_matlabC_lnh(ros_slros_internal_block_Publ_T *obj);

  /* Continuous states update member function*/
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  /* Derivatives member function */
  void UsvNuFLController_derivatives();
};

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
 * '<Root>' : 'UsvNuFLController'
 * '<S1>'   : 'UsvNuFLController/PID Controller '
 * '<S2>'   : 'UsvNuFLController/Subscribe'
 * '<S3>'   : 'UsvNuFLController/Subscribe1'
 * '<S4>'   : 'UsvNuFLController/Subscribe2'
 * '<S5>'   : 'UsvNuFLController/Thrust Publisher'
 * '<S6>'   : 'UsvNuFLController/PID Controller /PID Controller'
 * '<S7>'   : 'UsvNuFLController/PID Controller /PID Controller1'
 * '<S8>'   : 'UsvNuFLController/PID Controller /PID Controller/Anti-windup'
 * '<S9>'   : 'UsvNuFLController/PID Controller /PID Controller/D Gain'
 * '<S10>'  : 'UsvNuFLController/PID Controller /PID Controller/Filter'
 * '<S11>'  : 'UsvNuFLController/PID Controller /PID Controller/Filter ICs'
 * '<S12>'  : 'UsvNuFLController/PID Controller /PID Controller/I Gain'
 * '<S13>'  : 'UsvNuFLController/PID Controller /PID Controller/Ideal P Gain'
 * '<S14>'  : 'UsvNuFLController/PID Controller /PID Controller/Ideal P Gain Fdbk'
 * '<S15>'  : 'UsvNuFLController/PID Controller /PID Controller/Integrator'
 * '<S16>'  : 'UsvNuFLController/PID Controller /PID Controller/Integrator ICs'
 * '<S17>'  : 'UsvNuFLController/PID Controller /PID Controller/N Copy'
 * '<S18>'  : 'UsvNuFLController/PID Controller /PID Controller/N Gain'
 * '<S19>'  : 'UsvNuFLController/PID Controller /PID Controller/P Copy'
 * '<S20>'  : 'UsvNuFLController/PID Controller /PID Controller/Parallel P Gain'
 * '<S21>'  : 'UsvNuFLController/PID Controller /PID Controller/Reset Signal'
 * '<S22>'  : 'UsvNuFLController/PID Controller /PID Controller/Saturation'
 * '<S23>'  : 'UsvNuFLController/PID Controller /PID Controller/Saturation Fdbk'
 * '<S24>'  : 'UsvNuFLController/PID Controller /PID Controller/Sum'
 * '<S25>'  : 'UsvNuFLController/PID Controller /PID Controller/Sum Fdbk'
 * '<S26>'  : 'UsvNuFLController/PID Controller /PID Controller/Tracking Mode'
 * '<S27>'  : 'UsvNuFLController/PID Controller /PID Controller/Tracking Mode Sum'
 * '<S28>'  : 'UsvNuFLController/PID Controller /PID Controller/postSat Signal'
 * '<S29>'  : 'UsvNuFLController/PID Controller /PID Controller/preSat Signal'
 * '<S30>'  : 'UsvNuFLController/PID Controller /PID Controller/Anti-windup/Passthrough'
 * '<S31>'  : 'UsvNuFLController/PID Controller /PID Controller/D Gain/External Parameters'
 * '<S32>'  : 'UsvNuFLController/PID Controller /PID Controller/Filter/Cont. Filter'
 * '<S33>'  : 'UsvNuFLController/PID Controller /PID Controller/Filter ICs/Internal IC - Filter'
 * '<S34>'  : 'UsvNuFLController/PID Controller /PID Controller/I Gain/External Parameters'
 * '<S35>'  : 'UsvNuFLController/PID Controller /PID Controller/Ideal P Gain/Passthrough'
 * '<S36>'  : 'UsvNuFLController/PID Controller /PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S37>'  : 'UsvNuFLController/PID Controller /PID Controller/Integrator/Continuous'
 * '<S38>'  : 'UsvNuFLController/PID Controller /PID Controller/Integrator ICs/Internal IC'
 * '<S39>'  : 'UsvNuFLController/PID Controller /PID Controller/N Copy/Disabled'
 * '<S40>'  : 'UsvNuFLController/PID Controller /PID Controller/N Gain/External Parameters'
 * '<S41>'  : 'UsvNuFLController/PID Controller /PID Controller/P Copy/Disabled'
 * '<S42>'  : 'UsvNuFLController/PID Controller /PID Controller/Parallel P Gain/External Parameters'
 * '<S43>'  : 'UsvNuFLController/PID Controller /PID Controller/Reset Signal/Disabled'
 * '<S44>'  : 'UsvNuFLController/PID Controller /PID Controller/Saturation/Passthrough'
 * '<S45>'  : 'UsvNuFLController/PID Controller /PID Controller/Saturation Fdbk/Disabled'
 * '<S46>'  : 'UsvNuFLController/PID Controller /PID Controller/Sum/Sum_PID'
 * '<S47>'  : 'UsvNuFLController/PID Controller /PID Controller/Sum Fdbk/Disabled'
 * '<S48>'  : 'UsvNuFLController/PID Controller /PID Controller/Tracking Mode/Disabled'
 * '<S49>'  : 'UsvNuFLController/PID Controller /PID Controller/Tracking Mode Sum/Passthrough'
 * '<S50>'  : 'UsvNuFLController/PID Controller /PID Controller/postSat Signal/Forward_Path'
 * '<S51>'  : 'UsvNuFLController/PID Controller /PID Controller/preSat Signal/Forward_Path'
 * '<S52>'  : 'UsvNuFLController/PID Controller /PID Controller1/Anti-windup'
 * '<S53>'  : 'UsvNuFLController/PID Controller /PID Controller1/D Gain'
 * '<S54>'  : 'UsvNuFLController/PID Controller /PID Controller1/Filter'
 * '<S55>'  : 'UsvNuFLController/PID Controller /PID Controller1/Filter ICs'
 * '<S56>'  : 'UsvNuFLController/PID Controller /PID Controller1/I Gain'
 * '<S57>'  : 'UsvNuFLController/PID Controller /PID Controller1/Ideal P Gain'
 * '<S58>'  : 'UsvNuFLController/PID Controller /PID Controller1/Ideal P Gain Fdbk'
 * '<S59>'  : 'UsvNuFLController/PID Controller /PID Controller1/Integrator'
 * '<S60>'  : 'UsvNuFLController/PID Controller /PID Controller1/Integrator ICs'
 * '<S61>'  : 'UsvNuFLController/PID Controller /PID Controller1/N Copy'
 * '<S62>'  : 'UsvNuFLController/PID Controller /PID Controller1/N Gain'
 * '<S63>'  : 'UsvNuFLController/PID Controller /PID Controller1/P Copy'
 * '<S64>'  : 'UsvNuFLController/PID Controller /PID Controller1/Parallel P Gain'
 * '<S65>'  : 'UsvNuFLController/PID Controller /PID Controller1/Reset Signal'
 * '<S66>'  : 'UsvNuFLController/PID Controller /PID Controller1/Saturation'
 * '<S67>'  : 'UsvNuFLController/PID Controller /PID Controller1/Saturation Fdbk'
 * '<S68>'  : 'UsvNuFLController/PID Controller /PID Controller1/Sum'
 * '<S69>'  : 'UsvNuFLController/PID Controller /PID Controller1/Sum Fdbk'
 * '<S70>'  : 'UsvNuFLController/PID Controller /PID Controller1/Tracking Mode'
 * '<S71>'  : 'UsvNuFLController/PID Controller /PID Controller1/Tracking Mode Sum'
 * '<S72>'  : 'UsvNuFLController/PID Controller /PID Controller1/postSat Signal'
 * '<S73>'  : 'UsvNuFLController/PID Controller /PID Controller1/preSat Signal'
 * '<S74>'  : 'UsvNuFLController/PID Controller /PID Controller1/Anti-windup/Passthrough'
 * '<S75>'  : 'UsvNuFLController/PID Controller /PID Controller1/D Gain/External Parameters'
 * '<S76>'  : 'UsvNuFLController/PID Controller /PID Controller1/Filter/Cont. Filter'
 * '<S77>'  : 'UsvNuFLController/PID Controller /PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S78>'  : 'UsvNuFLController/PID Controller /PID Controller1/I Gain/External Parameters'
 * '<S79>'  : 'UsvNuFLController/PID Controller /PID Controller1/Ideal P Gain/Passthrough'
 * '<S80>'  : 'UsvNuFLController/PID Controller /PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S81>'  : 'UsvNuFLController/PID Controller /PID Controller1/Integrator/Continuous'
 * '<S82>'  : 'UsvNuFLController/PID Controller /PID Controller1/Integrator ICs/Internal IC'
 * '<S83>'  : 'UsvNuFLController/PID Controller /PID Controller1/N Copy/Disabled'
 * '<S84>'  : 'UsvNuFLController/PID Controller /PID Controller1/N Gain/External Parameters'
 * '<S85>'  : 'UsvNuFLController/PID Controller /PID Controller1/P Copy/Disabled'
 * '<S86>'  : 'UsvNuFLController/PID Controller /PID Controller1/Parallel P Gain/External Parameters'
 * '<S87>'  : 'UsvNuFLController/PID Controller /PID Controller1/Reset Signal/Disabled'
 * '<S88>'  : 'UsvNuFLController/PID Controller /PID Controller1/Saturation/Passthrough'
 * '<S89>'  : 'UsvNuFLController/PID Controller /PID Controller1/Saturation Fdbk/Disabled'
 * '<S90>'  : 'UsvNuFLController/PID Controller /PID Controller1/Sum/Sum_PID'
 * '<S91>'  : 'UsvNuFLController/PID Controller /PID Controller1/Sum Fdbk/Disabled'
 * '<S92>'  : 'UsvNuFLController/PID Controller /PID Controller1/Tracking Mode/Disabled'
 * '<S93>'  : 'UsvNuFLController/PID Controller /PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S94>'  : 'UsvNuFLController/PID Controller /PID Controller1/postSat Signal/Forward_Path'
 * '<S95>'  : 'UsvNuFLController/PID Controller /PID Controller1/preSat Signal/Forward_Path'
 * '<S96>'  : 'UsvNuFLController/Subscribe/Enabled Subsystem'
 * '<S97>'  : 'UsvNuFLController/Subscribe1/Enabled Subsystem'
 * '<S98>'  : 'UsvNuFLController/Subscribe2/Enabled Subsystem'
 * '<S99>'  : 'UsvNuFLController/Thrust Publisher/(-Xu'+Yv')uv'
 * '<S100>' : 'UsvNuFLController/Thrust Publisher/Blank Message'
 * '<S101>' : 'UsvNuFLController/Thrust Publisher/Blank Message1'
 * '<S102>' : 'UsvNuFLController/Thrust Publisher/Nr*r'
 * '<S103>' : 'UsvNuFLController/Thrust Publisher/N|r|r*|r|r'
 * '<S104>' : 'UsvNuFLController/Thrust Publisher/Publish1'
 * '<S105>' : 'UsvNuFLController/Thrust Publisher/Publish2'
 * '<S106>' : 'UsvNuFLController/Thrust Publisher/Publish3'
 */
#endif                                 /* RTW_HEADER_UsvNuFLController_h_ */

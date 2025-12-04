/*
 * UsvNuFLController_types.h
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

#ifndef RTW_HEADER_UsvNuFLController_types_h_
#define RTW_HEADER_UsvNuFLController_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_UsvNuFLController_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_UsvNuFLController_std_msgs_Float64_

typedef struct {
  real_T Data;
} SL_Bus_UsvNuFLController_std_msgs_Float64;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_UsvNuFLController_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_UsvNuFLController_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_UsvNuFLController_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_UsvNuFLController_geometry_msgs_Pose2D_
#define DEFINED_TYPEDEF_FOR_SL_Bus_UsvNuFLController_geometry_msgs_Pose2D_

typedef struct {
  real_T X;
  real_T Y;
  real_T Theta;
} SL_Bus_UsvNuFLController_geometry_msgs_Pose2D;

#endif

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Subs_T;

#endif                               /*typedef_ros_slros_internal_block_Subs_T*/

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Publ_T;

#endif                               /*typedef_ros_slros_internal_block_Publ_T*/

/* Parameters for system: '<S2>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_UsvNuFLCon_T_ P_EnabledSubsystem_UsvNuFLCon_T;

/* Parameters (default storage) */
typedef struct P_UsvNuFLController_T_ P_UsvNuFLController_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_UsvNuFLController_T RT_MODEL_UsvNuFLController_T;

#endif                               /* RTW_HEADER_UsvNuFLController_types_h_ */

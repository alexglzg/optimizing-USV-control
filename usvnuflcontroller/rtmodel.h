/*
 *  rtmodel.h:
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
/*
 * rtmodel.h
 *
 * Code generation for Simulink model "UsvNuFLController".
 *
 * Simulink Coder version                : 9.2 (R2019b) 18-Jul-2019
 * C++ source code generated on : Thu Aug 12 18:41:44 2021
 *
 * Note that the generated code is not dependent on this header file.
 * The file is used in cojuction with the automatic build procedure.
 * It is included by the sample main executable harness
 * MATLAB/rtw/c/src/common/rt_main.c.
 *
 */
#ifndef RTW_HEADER_rtmodel_h_
#define RTW_HEADER_rtmodel_h_

/*
 *  Includes the appropriate headers when we are using rtModel
 */
#include "UsvNuFLController.h"
#define GRTINTERFACE                   0

/*
 * ROOT_IO_FORMAT: 0 (Individual arguments)
 * ROOT_IO_FORMAT: 1 (Structure reference)
 * ROOT_IO_FORMAT: 2 (Part of model data structure)
 */
# define ROOT_IO_FORMAT                2
#include "UsvNuFLController.h"

/*
 * ROOT_IO_FORMAT: 0 (Individual arguments)
 * ROOT_IO_FORMAT: 1 (Structure reference)
 * ROOT_IO_FORMAT: 2 (Part of model data structure)
 */
# define ROOT_IO_FORMAT                2
#define MODEL_CLASSNAME                UsvNuFLControllerModelClass
#define MODEL_STEPNAME                 step
#endif                                 /* RTW_HEADER_rtmodel_h_ */

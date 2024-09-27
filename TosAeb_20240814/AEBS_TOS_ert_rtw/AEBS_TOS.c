/*
 * File: AEBS_TOS.c
 *
 * Code generated for Simulink model 'AEBS_TOS'.
 *
 * Model version                  : 4.14
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Aug 14 14:51:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AEBS_TOS.h"

/* Named constants for Chart: '<S722>/Chart' */
#define AEBS_TOS_IN_OFF                ((uint8_T)1U)
#define AEBS_TOS_IN_ON                 ((uint8_T)2U)
#define AEBS_TOS_IN_Trig               ((uint8_T)3U)

/* Named constants for Chart: '<S712>/Hysteresis' */
#define AEBS_TOS_IN_Flag_False         ((uint8_T)1U)
#define AEBS_TOS_IN_Flag_True          ((uint8_T)2U)

/* Named constants for MATLAB Function: '<S387>/SafeDivide' */
#define AEBS_TOS_DataTypeMax           (1.8446743E+19F)
#define AEBS_TOS_DataTypeMin           (-1.8446743E+19F)

/* Named constants for Chart: '<S463>/Stop_Memory' */
#define AEBS_TOS_IN_Memory             ((uint8_T)1U)
#define AEBS_TOS_IN_init               ((uint8_T)2U)

/* Named constants for Chart: '<S454>/FakeObjJudge' */
#define AEBS_TOS_IN_ErrorObj           ((uint8_T)1U)
#define AEBS_TOS_IN_Initialization     ((uint8_T)2U)
#define NumBitsPerChar                 8U
#include "dsp_rt.h"  /* DSP System Toolbox general run time support functions */
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#include "dspsrt_rt.h"         /* DSP System Toolbox run time support library */

/* Exported block signals */
real_T Meas_Index_Left_Obj;            /* '<S2>/MATLAB Function' */
real_T Meas_Index_Right_Obj;           /* '<S2>/MATLAB Function' */
real32_T Meas_ObjDx[32];               /* '<S31>/Signal Conversion6' */
real32_T Meas_ObjDy[32];               /* '<S31>/Signal Conversion7' */
real32_T Meas_ObjDyStd[32];            /* '<S31>/Signal Conversion9' */
real32_T Meas_ObjVx[32];               /* '<S31>/Signal Conversion10' */
real32_T Meas_ObjVy[32];               /* '<S31>/Signal Conversion11' */
real32_T Meas_ObjVxStd[32];            /* '<S31>/Signal Conversion12' */
real32_T Meas_ObjVxabs[32];            /* '<S31>/Signal Conversion14' */
real32_T Meas_ObjVyabs[32];            /* '<S31>/Signal Conversion15' */
real32_T Meas_ObjLength[32];           /* '<S31>/Signal Conversion16' */
real32_T Meas_ObjWidth[32];            /* '<S31>/Signal Conversion17' */
real32_T Meas_ObjAx[32];               /* '<S31>/Signal Conversion19' */
real32_T Meas_ObjAy[32];               /* '<S31>/Signal Conversion20' */
real32_T Meas_ObjAxabs[32];            /* '<S31>/Signal Conversion21' */
real32_T Meas_ObjAyabs[32];            /* '<S31>/Signal Conversion22' */
real32_T Meas_ObjHeadAngle[32];        /* '<S31>/Signal Conversion25' */
real32_T Meas_TTCLong;                 /* '<S667>/ID_Confirm' */
real32_T Meas_LongTTI[32];             /* '<S30>/ObjInfo_Assignment' */
uint8_T Meas_ObjID[32];                /* '<S31>/Signal Conversion' */
uint8_T Meas_ObjType[32];              /* '<S31>/Signal Conversion1' */
uint8_T Meas_ObjState[32];             /* '<S31>/Signal Conversion2' */
uint8_T Meas_ObjOrientation[32];       /* '<S31>/Signal Conversion3' */
uint8_T Meas_ObjConfidence[32];        /* '<S31>/Signal Conversion23' */
uint8_T Meas_ID_Long;                  /* '<S667>/ID_Confirm' */
uint8_T Meas_ObjSortNum_Long;          /* '<S667>/ID_Confirm' */
uint8_T Meas_ObjCoef[32];              /* '<S30>/ObjInfo_Assignment' */
uint8_T Meas_WeightCoef_2[32];         /* '<S30>/TA_EffectCalculate' */
uint8_T Meas_WeightCoef_1[32];         /* '<S30>/TA_EffectCalculate' */
boolean_T Meas_Utility[32];            /* '<S30>/TA_EffectCalculate' */
boolean_T Meas_Boudingbox_Calculate[32];/* '<S30>/ObjInfo_Assignment' */

/* Exported block parameters */
real_T P_TA_MotionDataLowPassFilter = 1.0;/* Variable: P_TA_MotionDataLowPassFilter
                                           * Referenced by:
                                           *   '<S457>/Constant'
                                           *   '<S457>/Constant1'
                                           *   '<S457>/Constant12'
                                           *   '<S457>/Constant13'
                                           *   '<S457>/Constant15'
                                           *   '<S457>/Constant2'
                                           *   '<S457>/Constant3'
                                           *   '<S457>/Constant4'
                                           *   '<S457>/Constant5'
                                           */
real32_T P_DM_DrvCrvtCalcWeightFactor[2] = { 0.0F, 1.0F } ;/* Variable: P_DM_DrvCrvtCalcWeightFactor
                                                            * Referenced by: '<S597>/LookUpWeightFactor'
                                                            */

real32_T P_DM_DrvVLgtForCrvtTable[2] = { 5.0F, 7.0F } ;/* Variable: P_DM_DrvVLgtForCrvtTable
                                                        * Referenced by: '<S597>/LookUpWeightFactor'
                                                        */

real32_T P_DM_LoPosValInDrvrStEstimr = 1.0E-5F;/* Variable: P_DM_LoPosValInDrvrStEstimr
                                                * Referenced by: '<S649>/Saturation2'
                                                */
real32_T P_DM_VehSelfMinSpdInDrvrStEstimr = 0.2F;
                                   /* Variable: P_DM_VehSelfMinSpdInDrvrStEstimr
                                    * Referenced by: '<S648>/Constant'
                                    */
real32_T P_TA_AccTarCfmDlyInTaSlection = 0.7F;
                                      /* Variable: P_TA_AccTarCfmDlyInTaSlection
                                       * Referenced by: '<S447>/Constant1'
                                       */
real32_T P_TA_CallFrequencyInTaSlection = 20.0F;
                                     /* Variable: P_TA_CallFrequencyInTaSlection
                                      * Referenced by: '<S447>/Constant4'
                                      */
real32_T P_TA_ObjAxLowPassFactor = 0.05F;/* Variable: P_TA_ObjAxLowPassFactor
                                          * Referenced by: '<S483>/Constant4'
                                          */
real32_T P_TA_ObjAyLowPassFactor = 0.05F;/* Variable: P_TA_ObjAyLowPassFactor
                                          * Referenced by: '<S482>/Constant4'
                                          */
real32_T P_TA_ObjBehaviorLatStationPara = 0.25F;
                                     /* Variable: P_TA_ObjBehaviorLatStationPara
                                      * Referenced by: '<S121>/Constant'
                                      */
real32_T P_TA_ObjBehaviorOnComingPara = -1.0F;/* Variable: P_TA_ObjBehaviorOnComingPara
                                               * Referenced by:
                                               *   '<S404>/Constant1'
                                               *   '<S118>/Constant'
                                               */
real32_T P_TA_ObjDistancebyVxandDxFactor = 0.5F;
                                    /* Variable: P_TA_ObjDistancebyVxandDxFactor
                                     * Referenced by: '<S502>/Constant1'
                                     */
real32_T P_TA_ObjDistancebyVyandDyFactor = 0.5F;
                                    /* Variable: P_TA_ObjDistancebyVyandDyFactor
                                     * Referenced by: '<S518>/Constant1'
                                     */
real32_T P_TA_ObjDxLowPassFactor = 0.05F;/* Variable: P_TA_ObjDxLowPassFactor
                                          * Referenced by: '<S493>/Constant'
                                          */
real32_T P_TA_ObjDxRateVarianceThredValue = 1.0F;
                                   /* Variable: P_TA_ObjDxRateVarianceThredValue
                                    * Referenced by: '<S494>/Constant'
                                    */
real32_T P_TA_ObjDxSTDThredValue = 1.0F;/* Variable: P_TA_ObjDxSTDThredValue
                                         * Referenced by: '<S495>/Constant'
                                         */
real32_T P_TA_ObjDyLowPassFactor = 0.05F;/* Variable: P_TA_ObjDyLowPassFactor
                                          * Referenced by: '<S509>/Constant'
                                          */
real32_T P_TA_ObjDyRateVarianceThredValue = 1.0F;
                                   /* Variable: P_TA_ObjDyRateVarianceThredValue
                                    * Referenced by: '<S510>/Constant'
                                    */
real32_T P_TA_ObjDySTDThredValue = 1.0F;/* Variable: P_TA_ObjDySTDThredValue
                                         * Referenced by: '<S511>/Constant'
                                         */
real32_T P_TA_ObjHeadAngleDiffThred = 0.2F;/* Variable: P_TA_ObjHeadAngleDiffThred
                                            * Referenced by: '<S525>/Constant'
                                            */
real32_T P_TA_ObjHeadAngleLowPassFactor = 0.05F;
                                     /* Variable: P_TA_ObjHeadAngleLowPassFactor
                                      * Referenced by: '<S523>/Constant'
                                      */
real32_T P_TA_ObjHeadAngleSTDThredValue = 1.0F;
                                     /* Variable: P_TA_ObjHeadAngleSTDThredValue
                                      * Referenced by: '<S526>/Constant'
                                      */
real32_T P_TA_ObjMotorVehSpdThd = 5.56F;/* Variable: P_TA_ObjMotorVehSpdThd
                                         * Referenced by: '<S465>/Constant14'
                                         */
real32_T P_TA_ObjPedestrainSpdThd = 2.22F;/* Variable: P_TA_ObjPedestrainSpdThd
                                           * Referenced by: '<S465>/Constant15'
                                           */
real32_T P_TA_ObjSpeedxbyVxandDxFactor = 0.5F;
                                      /* Variable: P_TA_ObjSpeedxbyVxandDxFactor
                                       * Referenced by: '<S557>/Constant1'
                                       */
real32_T P_TA_ObjSpeedybyVyandDyFactor = 0.5F;
                                      /* Variable: P_TA_ObjSpeedybyVyandDyFactor
                                       * Referenced by: '<S574>/Constant1'
                                       */
real32_T P_TA_ObjTruckLengthPara = 12.0F;/* Variable: P_TA_ObjTruckLengthPara
                                          * Referenced by: '<S465>/Constant'
                                          */
real32_T P_TA_ObjVxLowPassFactor = 0.05F;/* Variable: P_TA_ObjVxLowPassFactor
                                          * Referenced by: '<S549>/Constant'
                                          */
real32_T P_TA_ObjVxSTDThredValue = 1.0F;/* Variable: P_TA_ObjVxSTDThredValue
                                         * Referenced by: '<S553>/Constant'
                                         */
real32_T P_TA_ObjVxVarianceThredValue = 1.0F;/* Variable: P_TA_ObjVxVarianceThredValue
                                              * Referenced by: '<S552>/Constant'
                                              */
real32_T P_TA_ObjVyLowPassFactor = 0.05F;/* Variable: P_TA_ObjVyLowPassFactor
                                          * Referenced by: '<S565>/Constant'
                                          */
real32_T P_TA_ObjVySTDThredValue = 1.0F;/* Variable: P_TA_ObjVySTDThredValue
                                         * Referenced by: '<S569>/Constant'
                                         */
real32_T P_TA_ObjVyVarianceThredValue = 1.0F;/* Variable: P_TA_ObjVyVarianceThredValue
                                              * Referenced by: '<S568>/Constant'
                                              */
real32_T P_TA_ObjdxRangetheMax = 120.0F;/* Variable: P_TA_ObjdxRangetheMax
                                         * Referenced by: '<S405>/Constant1'
                                         */
real32_T P_TA_ObjdxRangetheMin = 0.0F; /* Variable: P_TA_ObjdxRangetheMin
                                        * Referenced by: '<S405>/Constant'
                                        */
real32_T P_TA_ObjdyRangetheMax = 20.0F;/* Variable: P_TA_ObjdyRangetheMax
                                        * Referenced by: '<S405>/Constant3'
                                        */
real32_T P_TA_ObjdyRangetheMin = -20.0F;/* Variable: P_TA_ObjdyRangetheMin
                                         * Referenced by: '<S405>/Constant2'
                                         */
real32_T P_TA_PinionAgRateFilConInAsyEvlrCritEve = 0.2F;
                            /* Variable: P_TA_PinionAgRateFilConInAsyEvlrCritEve
                             * Referenced by: '<S600>/Constant1'
                             */
real32_T P_TA_PrmForLaneWidthThred = 3.75F;/* Variable: P_TA_PrmForLaneWidthThred
                                            * Referenced by: '<S461>/Constant'
                                            */
real32_T P_TA_PrmForLatObjLatSpdThred = 0.25F;/* Variable: P_TA_PrmForLatObjLatSpdThred
                                               * Referenced by:
                                               *   '<S138>/Constant'
                                               *   '<S140>/Constant'
                                               */
real32_T P_TA_PrmForMotorSpdThred = 6.94F;/* Variable: P_TA_PrmForMotorSpdThred
                                           * Referenced by: '<S464>/Constant'
                                           */
real32_T P_TA_PrmForObjDisThrd = 0.2F; /* Variable: P_TA_PrmForObjDisThrd
                                        * Referenced by: '<S380>/Constant1'
                                        */
real32_T P_TA_PrmForObjSpdStationary = 0.25F;/* Variable: P_TA_PrmForObjSpdStationary
                                              * Referenced by:
                                              *   '<S435>/Constant1'
                                              *   '<S435>/Constant2'
                                              */
real32_T P_TA_PrmForOverlapLongThrd = 5.0F;/* Variable: P_TA_PrmForOverlapLongThrd
                                            * Referenced by: '<S185>/Constant'
                                            */
real32_T P_TA_PrmForTTCalDistanceOffset = 5.0F;
                                     /* Variable: P_TA_PrmForTTCalDistanceOffset
                                      * Referenced by:
                                      *   '<S229>/Constant'
                                      *   '<S236>/Constant'
                                      *   '<S261>/Constant'
                                      *   '<S268>/Constant'
                                      *   '<S293>/Constant'
                                      *   '<S300>/Constant'
                                      */
real32_T P_TA_PrmForVehBicycleMdlAxleDistFrnt = 1.331F;
                               /* Variable: P_TA_PrmForVehBicycleMdlAxleDistFrnt
                                * Referenced by:
                                *   '<S613>/Constant1'
                                *   '<S632>/Constant1'
                                */
real32_T P_TA_PrmForVehBicycleMdlCornrgStfnFrnt = 99471.0F;
                             /* Variable: P_TA_PrmForVehBicycleMdlCornrgStfnFrnt
                              * Referenced by:
                              *   '<S611>/Constant2'
                              *   '<S630>/Constant2'
                              */
real32_T P_TA_PrmForVehBicycleMdlCornrgStfnRe = 99471.0F;
                               /* Variable: P_TA_PrmForVehBicycleMdlCornrgStfnRe
                                * Referenced by:
                                *   '<S611>/Constant3'
                                *   '<S614>/Constant3'
                                *   '<S630>/Constant3'
                                *   '<S633>/Constant3'
                                */
real32_T P_TA_PrmForVehLongth = 4.49F; /* Variable: P_TA_PrmForVehLongth
                                        * Referenced by:
                                        *   '<S343>/Constant'
                                        *   '<S131>/Constant'
                                        *   '<S133>/Constant'
                                        */
real32_T P_TA_PrmForVehRearAxleDisttoFrnt = 3.606F;
                                   /* Variable: P_TA_PrmForVehRearAxleDisttoFrnt
                                    * Referenced by:
                                    *   '<S454>/Constant1'
                                    *   '<S476>/Constant'
                                    *   '<S50>/Constant1'
                                    *   '<S52>/Constant'
                                    *   '<S114>/Constant'
                                    *   '<S153>/Constant'
                                    *   '<S169>/Constant'
                                    *   '<S169>/Constant3'
                                    */
real32_T P_TA_PrmForVehRearAxleDisttoRear = 0.884F;
                                   /* Variable: P_TA_PrmForVehRearAxleDisttoRear
                                    * Referenced by:
                                    *   '<S52>/Constant1'
                                    *   '<S169>/Constant1'
                                    */
real32_T P_TA_PrmForVehSpdStationary = 0.25F;/* Variable: P_TA_PrmForVehSpdStationary
                                              * Referenced by:
                                              *   '<S435>/Constant'
                                              *   '<S129>/Constant'
                                              */
real32_T P_TA_PrmForVehSteerWhlAgRat = 16.18F;/* Variable: P_TA_PrmForVehSteerWhlAgRat
                                               * Referenced by:
                                               *   '<S615>/Constant'
                                               *   '<S634>/Constant'
                                               */
real32_T P_TA_PrmForVehWhlBase = 2.75F;/* Variable: P_TA_PrmForVehWhlBase
                                        * Referenced by:
                                        *   '<S611>/Constant'
                                        *   '<S613>/Constant'
                                        *   '<S616>/Constant1'
                                        *   '<S630>/Constant'
                                        *   '<S632>/Constant'
                                        *   '<S635>/Constant1'
                                        */
real32_T P_TA_PrmForVehWholeWeight = 1890.0F;/* Variable: P_TA_PrmForVehWholeWeight
                                              * Referenced by:
                                              *   '<S616>/Constant'
                                              *   '<S635>/Constant'
                                              */
real32_T P_TA_PrmForVehWidth = 1.874F; /* Variable: P_TA_PrmForVehWidth
                                        * Referenced by:
                                        *   '<S380>/Constant'
                                        *   '<S380>/Constant2'
                                        *   '<S52>/Constant2'
                                        *   '<S166>/Constant3'
                                        *   '<S134>/Constant1'
                                        *   '<S169>/Constant2'
                                        */
real32_T P_TA_SftyArUpprLimForTi = 3.0F;/* Variable: P_TA_SftyArUpprLimForTi
                                         * Referenced by:
                                         *   '<S323>/SftyArUpprLimForTiInObjPred'
                                         *   '<S324>/SftyArUpprLimForTiInObjPred'
                                         */
real32_T P_TA_TTILowerLimitNegative = -100.0F;/* Variable: P_TA_TTILowerLimitNegative
                                               * Referenced by:
                                               *   '<S212>/TiUpprLimIn'
                                               *   '<S212>/Saturation_1'
                                               *   '<S212>/Saturation_2'
                                               *   '<S214>/TiUpprLimIn1'
                                               */
real32_T P_TA_TTIUpperLimiPositive = 100.0F;/* Variable: P_TA_TTIUpperLimiPositive
                                             * Referenced by:
                                             *   '<S209>/Constant1'
                                             *   '<S212>/TiUpprLimIn1'
                                             *   '<S212>/Saturation_1'
                                             *   '<S212>/Saturation_2'
                                             *   '<S214>/TiUpprLimIn2'
                                             */
real32_T P_TA_TTIValidNumber = 10.0F;  /* Variable: P_TA_TTIValidNumber
                                        * Referenced by:
                                        *   '<S215>/Constant1'
                                        *   '<S362>/Constant'
                                        */
real32_T P_TA_TiLowrLimInAsyEvlrCritEve = -100.0F;
                                     /* Variable: P_TA_TiLowrLimInAsyEvlrCritEve
                                      * Referenced by:
                                      *   '<S226>/Constant1'
                                      *   '<S258>/Constant1'
                                      *   '<S290>/Constant1'
                                      */
real32_T P_TA_TiUpprLimInAsyEvlrCritEve = 100.0F;
                                     /* Variable: P_TA_TiUpprLimInAsyEvlrCritEve
                                      * Referenced by:
                                      *   '<S220>/TiUpprLimIn'
                                      *   '<S221>/TiUpprLimIn1'
                                      *   '<S222>/TiUpprLimIn'
                                      *   '<S226>/Constant3'
                                      *   '<S258>/Constant3'
                                      *   '<S290>/Constant3'
                                      */
real32_T P_TA_TimegapThred = 3.0F;     /* Variable: P_TA_TimegapThred
                                        * Referenced by: '<S365>/Constant'
                                        */
boolean_T P_TA_AccTarCfmDlyEnadInTaSlection = 1;
                                  /* Variable: P_TA_AccTarCfmDlyEnadInTaSlection
                                   * Referenced by: '<S447>/Constant2'
                                   */
boolean_T P_TA_ObjAccCalculateCalebration = 1;
                                    /* Variable: P_TA_ObjAccCalculateCalebration
                                     * Referenced by:
                                     *   '<S479>/Constant2'
                                     *   '<S479>/Constant3'
                                     */
boolean_T P_TA_ObjAddAttrCalValue = 1; /* Variable: P_TA_ObjAddAttrCalValue
                                        * Referenced by:
                                        *   '<S488>/Constant'
                                        *   '<S504>/Constant'
                                        *   '<S522>/Constant'
                                        *   '<S535>/Constant'
                                        *   '<S546>/Constant'
                                        *   '<S562>/Constant'
                                        */
uint8_T P_TA_PrmForOverlapCalSelect = 0U;/* Variable: P_TA_PrmForOverlapCalSelect
                                          * Referenced by:
                                          *   '<S165>/Constant'
                                          *   '<S165>/Constant1'
                                          */

/* Invariant block signals (default storage) */
const ConstB_AEBS_TOS_T AEBS_TOS_ConstB = {
  1.1,                                 /* '<S684>/Sum2' */
  0.90909090909090906,                 /* '<S684>/Product' */
  1.1,                                 /* '<S685>/Sum2' */
  0.90909090909090906,                 /* '<S685>/Product' */
  1.0,                                 /* '<S677>/Constant3' */
  1.0,                                 /* '<S677>/Constant5' */
  -4.0,                                /* '<S699>/Gain1' */
  2.7777777777777777,                  /* '<S699>/Gain3' */
  2.7777777777777777,                  /* '<S699>/Gain4' */
  2.7777777777777777,                  /* '<S699>/Gain5' */
  2.7777777777777777,                  /* '<S699>/Gain7' */
  0.75,                                /* '<S713>/Add12' */
  0.39000000953674319,                 /* '<S713>/Product11' */
  0.75,                                /* '<S711>/Add12' */
  0.39000000953674319,                 /* '<S711>/Product11' */
  0.75,                                /* '<S714>/Add12' */
  0.39000000953674319,                 /* '<S714>/Product11' */
  0.75,                                /* '<S712>/Add12' */
  0.39000000953674319,                 /* '<S712>/Product11' */
  1.0F,                                /* '<S623>/Rounding Function' */
  1.0F,                                /* '<S639>/Rounding Function' */
  1.0F,                                /* '<S640>/Rounding Function' */
  4.9F,                                /* '<S2>/Constant3' */
  0.975F,                              /* '<S674>/Gain3' */
  0.975F,                              /* '<S674>/Gain4' */
  0.001F,                              /* '<S2>/Signal Conversion4' */
  0.001F,                              /* '<S681>/Constant19' */
  0.975F,                              /* '<S699>/Gain' */
  -0.975F,                             /* '<S699>/Gain2' */
  0.975F,                              /* '<S713>/Gain2' */
  0.975F,                              /* '<S713>/Gain4' */
  0.975F,                              /* '<S711>/Gain2' */
  0.975F,                              /* '<S711>/Gain4' */
  0.975F,                              /* '<S714>/Gain2' */
  0.975F,                              /* '<S714>/Gain4' */
  0.975F,                              /* '<S712>/Gain2' */
  0.975F,                              /* '<S712>/Gain4' */

  /* Start of '<S450>/CoreSubsys' */
  {
    3.14159274F                        /* '<S529>/Gain_1' */
  }
  ,

  /* End of '<S450>/CoreSubsys' */

  /* Start of '<S30>/CoreSubsys' */
  {
    -1.0E+10,                          /* '<S293>/Gain' */
    -1.0E+10,                          /* '<S261>/Gain' */
    -1.0E+10,                          /* '<S268>/Gain' */
    -1.0E+10,                          /* '<S236>/Gain' */
    0.166666672F,                      /* '<S203>/Product2' */
    -1.0E+10F,                         /* '<S350>/Gain' */
    -1.0E+10F,                         /* '<S351>/Gain' */
    -1.0E+10F,                         /* '<S300>/Gain' */
    -1.0E+10F,                         /* '<S229>/Gain' */
    4U,                                /* '<S196>/Width' */
    4                                  /* '<S200>/Width' */
  }
  /* End of '<S30>/CoreSubsys' */
};

/* Constant parameters (default storage) */
const ConstP_AEBS_TOS_T AEBS_TOS_ConstP = {
  /* Expression: [1,2,3,4]
   * Referenced by: '<S651>/Constant'
   */
  { 1.0, 2.0, 3.0, 4.0 },

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S668>/Constant'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

  /* Pooled Parameter (Expression: zeros(1,32))
   * Referenced by:
   *   '<S681>/Constant12'
   *   '<S681>/Constant79'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

  /* Pooled Parameter (Expression: zeros(1,32))
   * Referenced by:
   *   '<S681>/Constant63'
   *   '<S681>/Constant64'
   */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0 },

  /* Pooled Parameter (Expression: zeros(10,1))
   * Referenced by:
   *   '<S424>/Constant'
   *   '<S424>/Constant1'
   *   '<S425>/Constant'
   *   '<S425>/Constant1'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
};

/* Block signals (default storage) */
B_AEBS_TOS_T AEBS_TOS_B;

/* Block states (default storage) */
DW_AEBS_TOS_T AEBS_TOS_DW;

/* External inputs (root inport signals with default storage) */
ExtU_AEBS_TOS_T AEBS_TOS_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AEBS_TOS_T AEBS_TOS_Y;

/* Real-time model */
static RT_MODEL_AEBS_TOS_T AEBS_TOS_M_;
RT_MODEL_AEBS_TOS_T *const AEBS_TOS_M = &AEBS_TOS_M_;
extern real32_T rt_hypotf_snf(real32_T u0, real32_T u1);
extern real32_T rt_powf_snf(real32_T u0, real32_T u1);
extern real32_T rt_atan2f_snf(real32_T u0, real32_T u1);
extern real32_T rt_modf_snf(real32_T u0, real32_T u1);
static real32_T look1_iflf_binlagpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
static void AEBS_TOS_Line_Info(uint8_t rtu_seg_num, boolean_T rtu_seg1_valid,
  real32_T rtu_seg1_Start, real32_T rtu_seg1_end, real32_T rtu_seg1_C0, real32_T
  rtu_seg1_C1, real32_T rtu_seg1_C2, real32_T rtu_seg1_C3, boolean_T
  rtu_seg2_valid, real32_T rtu_seg2_Start, real32_T rtu_seg2_end, real32_T
  rtu_seg2_C0, real32_T rtu_seg2_C1, real32_T rtu_seg2_C2, real32_T rtu_seg2_C3,
  boolean_T rtu_seg3_valid, real32_T rtu_seg3_Start, real32_T rtu_seg3_end,
  real32_T rtu_seg3_C0, real32_T rtu_seg3_C1, real32_T rtu_seg3_C2, real32_T
  rtu_seg3_C3, boolean_T *rty_Valid, real32_T *rty_Line_start, real32_T
  *rty_Line_end, real32_T *rty_C0, real32_T *rty_C1, real32_T *rty_C2, real32_T *
  rty_C3);
static void AEBS_TOS_PositionAndDerivative(real32_T rtu_P0, real32_T rtu_P1,
  real32_T rtu_P2, real32_T rtu_P3, real32_T rtu_tau, real32_T *rty_x, real32_T *
  rty_dx);
static void AEBS_TO_QuadraticEquationSolver(real32_T rtu_a, real32_T rtu_b,
  real32_T rtu_c, real32_T rty_x[2], boolean_T *rty_SolutionFound);
static void AEBS_TOS_LatPosition(real32_T rtu_P0, real32_T rtu_P1, real32_T
  rtu_P2, real32_T rtu_P3, real32_T rtu_tau, real32_T *rty_y, real32_T *rty_dy);
static void AEBS_TOS_Line_Info_p(uint8_t rtu_seg_num, bool_t rtu_seg1_valid,
  real32_T rtu_seg1_Start, bool_t rtu_seg2_valid, real32_T rtu_seg2_Start,
  bool_t rtu_seg3_valid, real32_T rtu_seg3_Start, uint8_T *rty_Index, boolean_T *
  rty_Valid);
static void AEBS_TOS_IfActionSubsystem2(Object_Struct *rty_Out);
static void AEBS_TOS_IfActionSubsystem1(real_T rtu_Index, const Object_Struct
  rtu_Objs_all[32], Object_Struct *rty_TargetInfo);
static void AEBS_TOS_Chart_Init(real_T *rty_Delay_Trig);
static void AEBS_TOS_Chart(boolean_T rtu_Input, real_T rtu_Delay_Trig_count,
  real_T *rty_Delay_Trig, DW_Chart_AEBS_TOS_T *localDW);
static void AEBS_TOS_Hysteresis_Init(real_T *rty_Flag);
static void AEBS_TOS_Hysteresis(real_T rtu_Input_1, real_T rtu_Input_2, real_T
  *rty_Flag, DW_Hysteresis_AEBS_TOS_T *localDW);
static void AEBS_TOS_IfActionSubsystem4(boolean_T *rty_Out);
static void AEBS_TOS_IfActionSubsystem5(boolean_T *rty_Out1);

/* Forward declaration for local functions */
static void AEBS_TOS_func_assign(boolean_T seg_flg, real32_T seg_start, real32_T
  seg_end, real32_T seg_c0, real32_T seg_c1, real32_T seg_c2, real32_T seg_c3,
  boolean_T *t_flg, real32_T *t_start, real32_T *t_end, real32_T *t_c0, real32_T
  *t_c1, real32_T *t_c2, real32_T *t_c3);
static real32_T AEBS_TOS_xnrm2(int32_T n, const real32_T x[80], int32_T ix0);
static void AEBS_TOS_qrpf(real32_T A[80], int32_T ia0, int32_T m, int32_T n,
  real32_T tau[4], int32_T jpvt[4]);
static void AEBS_TOS_polyfit(const real32_T x[20], const real32_T y[20],
  real32_T p[4]);

/* Forward declaration for local functions */
static uint8_T AEBS_TOS_func_Calculate(real32_T x, real32_T y, real32_T ty);
static real32_T AEBS_TOS_solution(real32_T a, real32_T b, real32_T c);
static real_T rtGetInf(void);
static real32_T rtGetInfF(void);
static real_T rtGetMinusInf(void);
static real32_T rtGetMinusInfF(void);
static real_T rtGetNaN(void);
static real32_T rtGetNaNF(void);

/*===========*
 * Constants *
 *===========*/
#define RT_PI                          3.14159265358979323846
#define RT_PIF                         3.1415927F
#define RT_LN_10                       2.30258509299404568402
#define RT_LN_10F                      2.3025851F
#define RT_LOG10E                      0.43429448190325182765
#define RT_LOG10EF                     0.43429449F
#define RT_E                           2.7182818284590452354
#define RT_EF                          2.7182817F

/*
 * UNUSED_PARAMETER(x)
 *   Used to specify that a function parameter (argument) is required but not
 *   accessed by the function body.
 */
#ifndef UNUSED_PARAMETER
#if defined(__LCC__)
#define UNUSED_PARAMETER(x)                                      /* do nothing */
#else

/*
 * This is the semi-ANSI standard way of indicating that an
 * unused function parameter is required.
 */
#define UNUSED_PARAMETER(x)            (void) (x)
#endif
#endif

extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
static void rt_InitInfAndNaN(size_t realSize);
static boolean_T rtIsInf(real_T value);
static boolean_T rtIsInfF(real32_T value);
static boolean_T rtIsNaN(real_T value);
static boolean_T rtIsNaNF(real32_T value);
typedef struct {
  struct {
    uint32_T wordH;
    uint32_T wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    uint32_T wordL;
    uint32_T wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    real32_T wordLreal;
    uint32_T wordLuint;
  } wordL;
} IEEESingle;

real_T rtInf;
real_T rtMinusInf;
real_T rtNaN;
real32_T rtInfF;
real32_T rtMinusInfF;
real32_T rtNaNF;

/*
 * Initialize rtInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T inf = 0.0;
  if (bitsPerReal == 32U) {
    inf = rtGetInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0x7FF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    inf = tmpVal.fltVal;
  }

  return inf;
}

/*
 * Initialize rtInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetInfF(void)
{
  IEEESingle infF;
  infF.wordL.wordLuint = 0x7F800000U;
  return infF.wordL.wordLreal;
}

/*
 * Initialize rtMinusInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetMinusInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T minf = 0.0;
  if (bitsPerReal == 32U) {
    minf = rtGetMinusInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    minf = tmpVal.fltVal;
  }

  return minf;
}

/*
 * Initialize rtMinusInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetMinusInfF(void)
{
  IEEESingle minfF;
  minfF.wordL.wordLuint = 0xFF800000U;
  return minfF.wordL.wordLreal;
}

/*
 * Initialize rtNaN needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetNaN(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T nan = 0.0;
  if (bitsPerReal == 32U) {
    nan = rtGetNaNF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF80000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    nan = tmpVal.fltVal;
  }

  return nan;
}

/*
 * Initialize rtNaNF needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetNaNF(void)
{
  IEEESingle nanF = { { 0.0F } };

  nanF.wordL.wordLuint = 0xFFC00000U;
  return nanF.wordL.wordLreal;
}

/*
 * Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 * generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
static void rt_InitInfAndNaN(size_t realSize)
{
  (void) (realSize);
  rtNaN = rtGetNaN();
  rtNaNF = rtGetNaNF();
  rtInf = rtGetInf();
  rtInfF = rtGetInfF();
  rtMinusInf = rtGetMinusInf();
  rtMinusInfF = rtGetMinusInfF();
}

/* Test if value is infinite */
static boolean_T rtIsInf(real_T value)
{
  return (boolean_T)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Test if single-precision value is infinite */
static boolean_T rtIsInfF(real32_T value)
{
  return (boolean_T)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Test if value is not a number */
static boolean_T rtIsNaN(real_T value)
{
  boolean_T result = (boolean_T) 0;
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  if (bitsPerReal == 32U) {
    result = rtIsNaNF((real32_T)value);
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.fltVal = value;
    result = (boolean_T)((tmpVal.bitVal.words.wordH & 0x7FF00000) == 0x7FF00000 &&
                         ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0 ||
                          (tmpVal.bitVal.words.wordL != 0) ));
  }

  return result;
}

/* Test if single-precision value is not a number */
static boolean_T rtIsNaNF(real32_T value)
{
  IEEESingle tmp;
  tmp.wordL.wordLreal = value;
  return (boolean_T)( (tmp.wordL.wordLuint & 0x7F800000) == 0x7F800000 &&
                     (tmp.wordL.wordLuint & 0x007FFFFF) != 0 );
}

static real32_T look1_iflf_binlagpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T y;
  real32_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'on'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'on'
   */
  if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex;
    frac = 0.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    yL_0d0 = table[iLeft];
    y = (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
  }

  return y;
}

/* Function for MATLAB Function: '<S16>/Line_Info' */
static void AEBS_TOS_func_assign(boolean_T seg_flg, real32_T seg_start, real32_T
  seg_end, real32_T seg_c0, real32_T seg_c1, real32_T seg_c2, real32_T seg_c3,
  boolean_T *t_flg, real32_T *t_start, real32_T *t_end, real32_T *t_c0, real32_T
  *t_c1, real32_T *t_c2, real32_T *t_c3)
{
  if (seg_flg && (seg_start != 0.0F) && (seg_end != 0.0F) && (seg_c0 != 0.0F) &&
      (seg_c1 != 0.0F) && (seg_c2 != 0.0F) && (seg_c3 != 0.0F)) {
    *t_flg = true;
    *t_start = seg_start;
    *t_end = seg_end;
    *t_c0 = seg_c0;
    *t_c1 = seg_c1;
    *t_c2 = seg_c2;
    *t_c3 = seg_c3;
  } else {
    *t_flg = false;
    *t_start = 0.0F;
    *t_end = 0.0F;
    *t_c0 = 0.0F;
    *t_c1 = 0.0F;
    *t_c2 = 0.0F;
    *t_c3 = 0.0F;
  }
}

/* Function for MATLAB Function: '<S16>/Line_Info' */
static real32_T AEBS_TOS_xnrm2(int32_T n, const real32_T x[80], int32_T ix0)
{
  int32_T k;
  int32_T kend;
  real32_T absxk;
  real32_T scale;
  real32_T t;
  real32_T y;
  y = 0.0F;
  if (n >= 1) {
    if (n == 1) {
      y = fabsf(x[ix0 - 1]);
    } else {
      scale = 1.29246971E-26F;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabsf(x[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0F;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrtf(y);
    }
  }

  return y;
}

real32_T rt_hypotf_snf(real32_T u0, real32_T u1)
{
  real32_T a;
  real32_T y;
  a = fabsf(u0);
  y = fabsf(u1);
  if (a < y) {
    a /= y;
    y *= sqrtf(a * a + 1.0F);
  } else if (a > y) {
    y /= a;
    y = sqrtf(y * y + 1.0F) * a;
  } else if (!rtIsNaNF(y)) {
    y = a * 1.41421354F;
  }

  return y;
}

/* Function for MATLAB Function: '<S16>/Line_Info' */
static void AEBS_TOS_qrpf(real32_T A[80], int32_T ia0, int32_T m, int32_T n,
  real32_T tau[4], int32_T jpvt[4])
{
  int32_T b_j;
  int32_T c_ix;
  int32_T e;
  int32_T exitg1;
  int32_T ia;
  int32_T ii;
  int32_T ix;
  int32_T iy;
  int32_T k;
  int32_T minmn;
  int32_T mmi;
  int32_T nmi;
  int32_T pvt;
  real32_T vn1[4];
  real32_T vn2[4];
  real32_T work[4];
  real32_T beta1;
  real32_T smax;
  boolean_T exitg2;
  if (m < n) {
    minmn = m;
  } else {
    minmn = n;
  }

  work[0] = 0.0F;
  vn1[0] = 0.0F;
  vn2[0] = 0.0F;
  work[1] = 0.0F;
  vn1[1] = 0.0F;
  vn2[1] = 0.0F;
  work[2] = 0.0F;
  vn1[2] = 0.0F;
  vn2[2] = 0.0F;
  work[3] = 0.0F;
  vn1[3] = 0.0F;
  vn2[3] = 0.0F;
  for (b_j = 0; b_j < n; b_j++) {
    vn1[b_j] = AEBS_TOS_xnrm2(m, A, b_j * 20 + ia0);
    vn2[b_j] = vn1[b_j];
  }

  for (b_j = 0; b_j < minmn; b_j++) {
    iy = b_j * 20 + ia0;
    ii = (iy + b_j) - 1;
    nmi = n - b_j;
    mmi = m - b_j;
    if (nmi < 1) {
      pvt = -1;
    } else {
      pvt = 0;
      if (nmi > 1) {
        ix = b_j;
        smax = fabsf(vn1[b_j]);
        for (k = 2; k <= nmi; k++) {
          ix++;
          beta1 = fabsf(vn1[ix]);
          if (beta1 > smax) {
            pvt = k - 1;
            smax = beta1;
          }
        }
      }
    }

    pvt += b_j;
    if (pvt + 1 != b_j + 1) {
      ix = (pvt * 20 + ia0) - 1;
      iy--;
      for (k = 0; k < m; k++) {
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix++;
        iy++;
      }

      iy = jpvt[pvt];
      jpvt[pvt] = jpvt[b_j];
      jpvt[b_j] = iy;
      vn1[pvt] = vn1[b_j];
      vn2[pvt] = vn2[b_j];
    }

    if (b_j + 1 < m) {
      smax = A[ii];
      tau[b_j] = 0.0F;
      if (mmi > 0) {
        beta1 = AEBS_TOS_xnrm2(mmi - 1, A, ii + 2);
        if (beta1 != 0.0F) {
          beta1 = rt_hypotf_snf(A[ii], beta1);
          if (A[ii] >= 0.0F) {
            beta1 = -beta1;
          }

          if (fabsf(beta1) < 9.86076132E-32F) {
            iy = -1;
            pvt = ii + mmi;
            do {
              iy++;
              for (ix = ii + 1; ix < pvt; ix++) {
                A[ix] *= 1.01412048E+31F;
              }

              beta1 *= 1.01412048E+31F;
              smax *= 1.01412048E+31F;
            } while (!(fabsf(beta1) >= 9.86076132E-32F));

            beta1 = rt_hypotf_snf(smax, AEBS_TOS_xnrm2(mmi - 1, A, ii + 2));
            if (smax >= 0.0F) {
              beta1 = -beta1;
            }

            tau[b_j] = (beta1 - smax) / beta1;
            smax = 1.0F / (smax - beta1);
            for (ix = ii + 1; ix < pvt; ix++) {
              A[ix] *= smax;
            }

            for (pvt = 0; pvt <= iy; pvt++) {
              beta1 *= 9.86076132E-32F;
            }

            smax = beta1;
          } else {
            tau[b_j] = (beta1 - A[ii]) / beta1;
            smax = 1.0F / (A[ii] - beta1);
            iy = ii + mmi;
            for (pvt = ii + 1; pvt < iy; pvt++) {
              A[pvt] *= smax;
            }

            smax = beta1;
          }
        }
      }

      A[ii] = smax;
    } else {
      tau[b_j] = 0.0F;
    }

    if (b_j + 1 < n) {
      smax = A[ii];
      A[ii] = 1.0F;
      if (tau[b_j] != 0.0F) {
        iy = mmi - 1;
        pvt = (ii + mmi) - 1;
        while ((iy + 1 > 0) && (A[pvt] == 0.0F)) {
          iy--;
          pvt--;
        }

        nmi -= 2;
        exitg2 = false;
        while ((!exitg2) && (nmi + 1 > 0)) {
          pvt = (nmi * 20 + ii) + 21;
          ix = pvt;
          do {
            exitg1 = 0;
            if (ix <= pvt + iy) {
              if (A[ix - 1] != 0.0F) {
                exitg1 = 1;
              } else {
                ix++;
              }
            } else {
              nmi--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        iy = -1;
        nmi = -1;
      }

      if (iy + 1 > 0) {
        if (nmi + 1 != 0) {
          for (pvt = 0; pvt <= nmi; pvt++) {
            work[pvt] = 0.0F;
          }

          pvt = 0;
          ix = (20 * nmi + ii) + 21;
          for (k = ii + 21; k <= ix; k += 20) {
            c_ix = ii;
            beta1 = 0.0F;
            e = k + iy;
            for (ia = k; ia <= e; ia++) {
              beta1 += A[ia - 1] * A[c_ix];
              c_ix++;
            }

            work[pvt] += beta1;
            pvt++;
          }
        }

        if (!(-tau[b_j] == 0.0F)) {
          pvt = ii + 20;
          ix = 0;
          for (k = 0; k <= nmi; k++) {
            if (work[ix] != 0.0F) {
              beta1 = work[ix] * -tau[b_j];
              c_ix = ii;
              e = iy + pvt;
              for (ia = pvt; ia < e + 1; ia++) {
                A[ia] += A[c_ix] * beta1;
                c_ix++;
              }
            }

            ix++;
            pvt += 20;
          }
        }
      }

      A[ii] = smax;
    }

    for (ii = b_j + 1; ii < n; ii++) {
      nmi = (ia0 + b_j) + ii * 20;
      if (vn1[ii] != 0.0F) {
        smax = fabsf(A[nmi - 1]) / vn1[ii];
        smax = 1.0F - smax * smax;
        if (smax < 0.0F) {
          smax = 0.0F;
        }

        beta1 = vn1[ii] / vn2[ii];
        beta1 = beta1 * beta1 * smax;
        if (beta1 <= 0.000345266977F) {
          if (b_j + 1 < m) {
            vn1[ii] = AEBS_TOS_xnrm2(mmi - 1, A, nmi + 1);
            vn2[ii] = vn1[ii];
          } else {
            vn1[ii] = 0.0F;
            vn2[ii] = 0.0F;
          }
        } else {
          vn1[ii] *= sqrtf(smax);
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<S16>/Line_Info' */
static void AEBS_TOS_polyfit(const real32_T x[20], const real32_T y[20],
  real32_T p[4])
{
  int32_T jpvt[4];
  int32_T assumedRank;
  int32_T i;
  real32_T V[80];
  real32_T B[20];
  real32_T tau[4];
  real32_T wj;
  for (assumedRank = 0; assumedRank < 20; assumedRank++) {
    V[assumedRank + 60] = 1.0F;
    V[assumedRank + 40] = x[assumedRank];
  }

  for (assumedRank = 0; assumedRank < 20; assumedRank++) {
    for (i = 0; i < 2; i++) {
      V[assumedRank + 20 * (1 - i)] = V[(2 - i) * 20 + assumedRank] *
        x[assumedRank];
    }
  }

  jpvt[0] = 1;
  tau[0] = 0.0F;
  jpvt[1] = 2;
  tau[1] = 0.0F;
  jpvt[2] = 3;
  tau[2] = 0.0F;
  jpvt[3] = 4;
  tau[3] = 0.0F;
  AEBS_TOS_qrpf(V, 1, 20, 4, tau, jpvt);
  assumedRank = -1;
  if (V[0] != 0.0F) {
    assumedRank = 0;
  }

  p[0] = 0.0F;
  if (V[21] != 0.0F) {
    assumedRank++;
  }

  p[1] = 0.0F;
  if (V[42] != 0.0F) {
    assumedRank++;
  }

  p[2] = 0.0F;
  if (V[63] != 0.0F) {
    assumedRank++;
  }

  p[3] = 0.0F;
  memcpy(&B[0], &y[0], 20U * sizeof(real32_T));
  if (tau[0] != 0.0F) {
    wj = B[0];
    for (i = 1; i + 1 < 21; i++) {
      wj += V[i] * B[i];
    }

    wj *= tau[0];
    if (wj != 0.0F) {
      B[0] -= wj;
      for (i = 1; i + 1 < 21; i++) {
        B[i] -= V[i] * wj;
      }
    }
  }

  if (tau[1] != 0.0F) {
    wj = B[1];
    for (i = 2; i + 1 < 21; i++) {
      wj += V[i + 20] * B[i];
    }

    wj *= tau[1];
    if (wj != 0.0F) {
      B[1] -= wj;
      for (i = 2; i + 1 < 21; i++) {
        B[i] -= V[i + 20] * wj;
      }
    }
  }

  if (tau[2] != 0.0F) {
    wj = B[2];
    for (i = 3; i + 1 < 21; i++) {
      wj += V[i + 40] * B[i];
    }

    wj *= tau[2];
    if (wj != 0.0F) {
      B[2] -= wj;
      for (i = 3; i + 1 < 21; i++) {
        B[i] -= V[i + 40] * wj;
      }
    }
  }

  if (tau[3] != 0.0F) {
    wj = B[3];
    for (i = 4; i + 1 < 21; i++) {
      wj += V[i + 60] * B[i];
    }

    wj *= tau[3];
    if (wj != 0.0F) {
      B[3] -= wj;
      for (i = 4; i + 1 < 21; i++) {
        B[i] -= V[i + 60] * wj;
      }
    }
  }

  for (i = 0; i <= assumedRank; i++) {
    p[jpvt[i] - 1] = B[i];
  }

  while (assumedRank + 1 > 0) {
    p[jpvt[assumedRank] - 1] /= V[20 * assumedRank + assumedRank];
    for (i = 0; i < assumedRank; i++) {
      p[jpvt[i] - 1] -= V[20 * assumedRank + i] * p[jpvt[assumedRank] - 1];
    }

    assumedRank--;
  }
}

/*
 * Output and update for atomic system:
 *    '<S16>/Line_Info'
 *    '<S15>/Line_Info'
 */
static void AEBS_TOS_Line_Info(uint8_t rtu_seg_num, boolean_T rtu_seg1_valid,
  real32_T rtu_seg1_Start, real32_T rtu_seg1_end, real32_T rtu_seg1_C0, real32_T
  rtu_seg1_C1, real32_T rtu_seg1_C2, real32_T rtu_seg1_C3, boolean_T
  rtu_seg2_valid, real32_T rtu_seg2_Start, real32_T rtu_seg2_end, real32_T
  rtu_seg2_C0, real32_T rtu_seg2_C1, real32_T rtu_seg2_C2, real32_T rtu_seg2_C3,
  boolean_T rtu_seg3_valid, real32_T rtu_seg3_Start, real32_T rtu_seg3_end,
  real32_T rtu_seg3_C0, real32_T rtu_seg3_C1, real32_T rtu_seg3_C2, real32_T
  rtu_seg3_C3, boolean_T *rty_Valid, real32_T *rty_Line_start, real32_T
  *rty_Line_end, real32_T *rty_C0, real32_T *rty_C1, real32_T *rty_C2, real32_T *
  rty_C3)
{
  int32_T e_i;
  real32_T posx[20];
  real32_T posy[20];
  real32_T coef[4];
  real32_T seg1_Start;
  real32_T seg2_Start;
  real32_T seg2_end;
  real32_T seg3_Start;
  real32_T seg3_end;
  real32_T t_dx;
  real32_T t_size;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;
  seg1_Start = rtu_seg1_Start;
  seg2_Start = rtu_seg2_Start;
  seg2_end = rtu_seg2_end;
  seg3_Start = rtu_seg3_Start;
  seg3_end = rtu_seg3_end;
  *rty_Valid = false;
  *rty_Line_start = 0.0F;
  *rty_Line_end = 0.0F;
  *rty_C0 = 0.0F;
  *rty_C1 = 0.0F;
  *rty_C2 = 0.0F;
  *rty_C3 = 0.0F;
  switch (rtu_seg_num) {
   case 0:
    break;

   case 1:
    tmp = !rtu_seg3_valid;
    tmp_1 = !rtu_seg2_valid;
    if (rtu_seg1_valid && tmp_1 && tmp) {
      AEBS_TOS_func_assign(true, rtu_seg1_Start, rtu_seg1_end, rtu_seg1_C0,
                           rtu_seg1_C1, rtu_seg1_C2, rtu_seg1_C3, rty_Valid,
                           rty_Line_start, rty_Line_end, rty_C0, rty_C1, rty_C2,
                           rty_C3);
    } else {
      tmp_0 = !rtu_seg1_valid;
      if (rtu_seg2_valid && tmp_0 && tmp) {
        AEBS_TOS_func_assign(true, rtu_seg2_Start, rtu_seg2_end, rtu_seg2_C0,
                             rtu_seg2_C1, rtu_seg2_C2, rtu_seg2_C3, rty_Valid,
                             rty_Line_start, rty_Line_end, rty_C0, rty_C1,
                             rty_C2, rty_C3);
      } else if (rtu_seg3_valid && tmp_0 && tmp_1) {
        AEBS_TOS_func_assign(true, rtu_seg3_Start, rtu_seg3_end, rtu_seg3_C0,
                             rtu_seg3_C1, rtu_seg3_C2, rtu_seg3_C3, rty_Valid,
                             rty_Line_start, rty_Line_end, rty_C0, rty_C1,
                             rty_C2, rty_C3);
      }
    }
    break;

   case 2:
    if (rtu_seg1_valid && rtu_seg2_valid && (!rtu_seg3_valid)) {
      if (rtu_seg1_Start > rtu_seg2_Start) {
        if (rtu_seg2_Start > 0.0F) {
          seg2_Start = rtu_seg1_Start;
        }
      } else {
        seg2_Start = rtu_seg1_Start;
      }

      seg3_end = rtu_seg2_end;
      if (rtu_seg2_end > 150.0F) {
        seg3_end = 150.0F;
      }

      t_size = (seg3_end - rtu_seg1_end) * 0.05F;
      for (e_i = 0; e_i < 20; e_i++) {
        t_dx = (((real32_T)e_i + 1.0F) - 1.0F) * t_size + rtu_seg1_end;
        posx[e_i] = t_dx;
        if (t_dx <= seg2_Start) {
          posy[e_i] = ((rtu_seg1_C1 * t_dx + rtu_seg1_C0) + rtu_seg1_C2 * t_dx *
                       t_dx) + rtu_seg1_C3 * t_dx * t_dx * t_dx;
        } else {
          posy[e_i] = ((rtu_seg2_C1 * t_dx + rtu_seg2_C0) + rtu_seg2_C2 * t_dx *
                       t_dx) + rtu_seg2_C3 * t_dx * t_dx * t_dx;
        }
      }

      AEBS_TOS_polyfit(posx, posy, coef);
      *rty_Valid = true;
      *rty_Line_start = rtu_seg1_end;
      *rty_Line_end = rtu_seg2_end;
      *rty_C0 = coef[3];
      *rty_C1 = coef[2];
      *rty_C2 = coef[1];
      *rty_C3 = coef[0];
    } else if ((!rtu_seg1_valid) && rtu_seg2_valid && rtu_seg3_valid) {
      if (!(rtu_seg2_Start > 30.0F)) {
        if (rtu_seg2_end < rtu_seg3_end) {
          if (rtu_seg2_end <= rtu_seg3_Start) {
            seg3_Start = rtu_seg2_end;
          }
        } else {
          seg3_end = rtu_seg2_end;
        }

        seg1_Start = seg3_end;
        if (seg3_end > 150.0F) {
          seg1_Start = 150.0F;
        }

        t_size = (seg1_Start - rtu_seg2_Start) * 0.05F;
        for (e_i = 0; e_i < 20; e_i++) {
          t_dx = (((real32_T)e_i + 1.0F) - 1.0F) * t_size + rtu_seg2_Start;
          posx[e_i] = t_dx;
          if (t_dx <= seg3_Start) {
            posy[e_i] = ((rtu_seg2_C1 * t_dx + rtu_seg2_C0) + rtu_seg2_C2 * t_dx
                         * t_dx) + rtu_seg2_C3 * t_dx * t_dx * t_dx;
          } else {
            posy[e_i] = ((rtu_seg3_C1 * t_dx + rtu_seg3_C0) + rtu_seg3_C2 * t_dx
                         * t_dx) + rtu_seg3_C3 * t_dx * t_dx * t_dx;
          }
        }

        AEBS_TOS_polyfit(posx, posy, coef);
        *rty_Valid = true;
        *rty_Line_start = rtu_seg2_Start;
        *rty_Line_end = seg3_end;
        *rty_C0 = coef[3];
        *rty_C1 = coef[2];
        *rty_C2 = coef[1];
        *rty_C3 = coef[0];
      }
    } else if (rtu_seg1_valid && (!rtu_seg2_valid) && rtu_seg3_valid) {
      seg2_Start = rtu_seg3_Start - rtu_seg1_Start;
      if (seg2_Start > 30.0F) {
        seg3_end = rtu_seg1_Start;
      } else {
        seg1_Start = seg2_Start * 0.5F + rtu_seg1_Start;
      }

      seg2_Start = seg3_end;
      if (seg3_end > 150.0F) {
        seg2_Start = 150.0F;
      }

      t_size = (seg2_Start - rtu_seg1_end) * 0.05F;
      for (e_i = 0; e_i < 20; e_i++) {
        t_dx = (((real32_T)e_i + 1.0F) - 1.0F) * t_size + rtu_seg2_Start;
        posx[e_i] = t_dx;
        if (t_dx <= seg1_Start) {
          posy[e_i] = ((rtu_seg1_C1 * t_dx + rtu_seg1_C0) + rtu_seg1_C2 * t_dx *
                       t_dx) + rtu_seg1_C3 * t_dx * t_dx * t_dx;
        } else {
          posy[e_i] = ((rtu_seg3_C1 * t_dx + rtu_seg3_C0) + rtu_seg3_C2 * t_dx *
                       t_dx) + rtu_seg3_C3 * t_dx * t_dx * t_dx;
        }
      }

      AEBS_TOS_polyfit(posx, posy, coef);
      *rty_Valid = true;
      *rty_Line_start = rtu_seg1_end;
      *rty_Line_end = seg3_end;
      *rty_C0 = coef[3];
      *rty_C1 = coef[2];
      *rty_C2 = coef[1];
      *rty_C3 = coef[0];
    }
    break;

   default:
    if (rtu_seg1_Start > rtu_seg2_Start) {
      seg2_Start = rtu_seg1_Start;
    }

    if (rtu_seg2_end > rtu_seg3_Start) {
      seg2_end = rtu_seg3_Start;
    }

    if (rtu_seg3_Start >= 150.0F) {
      if (seg2_end > 150.0F) {
        seg2_end = 150.0F;
      }

      t_size = (seg2_end - rtu_seg1_end) * 0.05F;
      for (e_i = 0; e_i < 20; e_i++) {
        t_dx = (((real32_T)e_i + 1.0F) - 1.0F) * t_size + seg2_Start;
        posx[e_i] = t_dx;
        if (t_dx <= rtu_seg1_Start) {
          posy[e_i] = ((rtu_seg1_C1 * t_dx + rtu_seg1_C0) + rtu_seg1_C2 * t_dx *
                       t_dx) + rtu_seg1_C3 * t_dx * t_dx * t_dx;
        } else {
          posy[e_i] = ((rtu_seg2_C1 * t_dx + rtu_seg2_C0) + rtu_seg2_C2 * t_dx *
                       t_dx) + rtu_seg2_C3 * t_dx * t_dx * t_dx;
        }
      }
    } else {
      if (rtu_seg3_end > 150.0F) {
        seg3_end = 150.0F;
      }

      t_size = (seg3_end - rtu_seg1_end) * 0.05F;
      for (e_i = 0; e_i < 20; e_i++) {
        t_dx = (((real32_T)e_i + 1.0F) - 1.0F) * t_size + seg2_Start;
        posx[e_i] = t_dx;
        if (t_dx <= rtu_seg1_Start) {
          posy[e_i] = ((rtu_seg1_C1 * t_dx + rtu_seg1_C0) + rtu_seg1_C2 * t_dx *
                       t_dx) + rtu_seg1_C3 * t_dx * t_dx * t_dx;
        } else if ((t_dx > rtu_seg1_Start) && (t_dx <= seg2_end)) {
          posy[e_i] = ((rtu_seg2_C1 * t_dx + rtu_seg2_C0) + rtu_seg2_C2 * t_dx *
                       t_dx) + rtu_seg2_C3 * t_dx * t_dx * t_dx;
        } else {
          posy[e_i] = ((rtu_seg3_C1 * t_dx + rtu_seg3_C0) + rtu_seg3_C2 * t_dx *
                       t_dx) + rtu_seg3_C3 * t_dx * t_dx * t_dx;
        }
      }
    }

    AEBS_TOS_polyfit(posx, posy, coef);
    *rty_Valid = true;
    *rty_Line_start = rtu_seg1_end;
    *rty_Line_end = rtu_seg3_end;
    *rty_C0 = coef[3];
    *rty_C1 = coef[2];
    *rty_C2 = coef[1];
    *rty_C3 = coef[0];
    break;
  }
}

/*
 * Output and update for atomic system:
 *    '<S385>/PositionAndDerivative'
 *    '<S187>/LongPosition'
 *    '<S84>/LongPosition'
 */
static void AEBS_TOS_PositionAndDerivative(real32_T rtu_P0, real32_T rtu_P1,
  real32_T rtu_P2, real32_T rtu_P3, real32_T rtu_tau, real32_T *rty_x, real32_T *
  rty_dx)
{
  real32_T tauPov2;
  tauPov2 = rtu_tau * rtu_tau;
  *rty_x = (((((rtu_P1 - rtu_P2) * 3.0F - rtu_P0) + rtu_P3) * (rtu_tau * tauPov2)
             + ((rtu_P0 - 2.0F * rtu_P1) + rtu_P2) * 3.0F * tauPov2) + (rtu_P1 -
             rtu_P0) * 3.0F * rtu_tau) + rtu_P0;
  *rty_dx = (((((9.0F * rtu_P1 - 3.0F * rtu_P0) - 9.0F * rtu_P2) + 3.0F * rtu_P3)
              * tauPov2 + ((6.0F * rtu_P0 - 12.0F * rtu_P1) + 6.0F * rtu_P2) *
              rtu_tau) - 3.0F * rtu_P0) + 3.0F * rtu_P1;
}

/*
 * Output and update for atomic system:
 *    '<S226>/QuadraticEquationSolver'
 *    '<S258>/QuadraticEquationSolver'
 *    '<S290>/QuadraticEquationSolver'
 */
static void AEBS_TO_QuadraticEquationSolver(real32_T rtu_a, real32_T rtu_b,
  real32_T rtu_c, real32_T rty_x[2], boolean_T *rty_SolutionFound)
{
  real32_T bSquared;
  real32_T squareRoot;
  boolean_T tf;
  tf = ((rtu_a < 0.01F) && (rtu_a > -0.01F));
  if (tf && ((rtu_b < 0.01F) && (rtu_b > -0.01F))) {
    *rty_SolutionFound = ((rtu_c < 0.01F) && (rtu_c > -0.01F));
    rty_x[0] = 0.0F;
    rty_x[1] = 0.0F;
  } else if (tf) {
    *rty_SolutionFound = true;
    squareRoot = -rtu_c / rtu_b;
    rty_x[0] = squareRoot;
    rty_x[1] = squareRoot;
  } else {
    bSquared = rtu_b * rtu_b;
    squareRoot = 4.0F * rtu_a * rtu_c;
    if (squareRoot > bSquared) {
      *rty_SolutionFound = false;
      rty_x[0] = 0.0F;
      rty_x[1] = 0.0F;
    } else {
      *rty_SolutionFound = true;
      squareRoot = sqrtf(bSquared - squareRoot);
      bSquared = (-rtu_b + squareRoot) / (2.0F * rtu_a);
      squareRoot = (-rtu_b - squareRoot) / (2.0F * rtu_a);
      if (bSquared > squareRoot) {
        rty_x[0] = bSquared;
        rty_x[1] = squareRoot;
      } else {
        rty_x[0] = squareRoot;
        rty_x[1] = bSquared;
      }
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S187>/LatPosition'
 *    '<S84>/LatPosition'
 */
static void AEBS_TOS_LatPosition(real32_T rtu_P0, real32_T rtu_P1, real32_T
  rtu_P2, real32_T rtu_P3, real32_T rtu_tau, real32_T *rty_y, real32_T *rty_dy)
{
  real32_T tauPov2;
  tauPov2 = rtu_tau * rtu_tau;
  *rty_y = (((((rtu_P1 - rtu_P2) * 3.0F - rtu_P0) + rtu_P3) * (rtu_tau * tauPov2)
             + ((rtu_P0 - 2.0F * rtu_P1) + rtu_P2) * 3.0F * tauPov2) + (rtu_P1 -
             rtu_P0) * 3.0F * rtu_tau) + rtu_P0;
  *rty_dy = (((((9.0F * rtu_P1 - 3.0F * rtu_P0) - 9.0F * rtu_P2) + 3.0F * rtu_P3)
              * tauPov2 + ((6.0F * rtu_P0 - 12.0F * rtu_P1) + 6.0F * rtu_P2) *
              rtu_tau) - 3.0F * rtu_P0) + 3.0F * rtu_P1;
}

/*
 * Output and update for atomic system:
 *    '<S688>/Line_Info'
 *    '<S689>/Line_Info'
 */
static void AEBS_TOS_Line_Info_p(uint8_t rtu_seg_num, bool_t rtu_seg1_valid,
  real32_T rtu_seg1_Start, bool_t rtu_seg2_valid, real32_T rtu_seg2_Start,
  bool_t rtu_seg3_valid, real32_T rtu_seg3_Start, uint8_T *rty_Index, boolean_T *
  rty_Valid)
{
  *rty_Index = 1U;
  *rty_Valid = false;
  if (rtu_seg_num != 0) {
    if ((rtu_seg1_valid == 1) && (rtu_seg2_valid == 0) && (rtu_seg3_valid == 0))
    {
      *rty_Valid = true;
      *rty_Index = 1U;
    } else if ((rtu_seg2_valid == 1) && (rtu_seg1_valid == 0) && (rtu_seg3_valid
                == 0)) {
      *rty_Valid = true;
      *rty_Index = 2U;
    } else if ((rtu_seg3_valid == 1) && (rtu_seg1_valid == 0) && (rtu_seg2_valid
                == 0)) {
      *rty_Valid = true;
      *rty_Index = 3U;
    } else if ((rtu_seg1_valid == 1) && (rtu_seg2_valid == 1)) {
      if ((rtu_seg1_Start > rtu_seg2_Start) && (rtu_seg1_Start > 0.0F)) {
        *rty_Valid = true;
        *rty_Index = 1U;
      } else {
        *rty_Valid = true;
        *rty_Index = 2U;
      }
    } else if ((rtu_seg1_valid == 1) && (rtu_seg3_valid == 1) && (rtu_seg2_valid
                == 0)) {
      if ((rtu_seg1_Start > 0.0F) && (rtu_seg3_Start > 30.0F)) {
        *rty_Valid = true;
        *rty_Index = 1U;
      } else {
        *rty_Valid = true;
        *rty_Index = 3U;
      }
    } else if ((rtu_seg1_valid == 0) && (rtu_seg3_valid == 1) && (rtu_seg2_valid
                == 1)) {
      if ((rtu_seg2_Start < rtu_seg3_Start) || (rtu_seg2_Start < 20.0F)) {
        *rty_Valid = true;
        *rty_Index = 2U;
      } else {
        *rty_Valid = true;
        *rty_Index = 3U;
      }
    }
  }
}

/*
 * Output and update for action system:
 *    '<S679>/If Action Subsystem2'
 *    '<S680>/If Action Subsystem2'
 */
static void AEBS_TOS_IfActionSubsystem2(Object_Struct *rty_Out)
{
  /* BusCreator: '<S693>/Bus Creator1' incorporates:
   *  Constant: '<S693>/Constant'
   *  Constant: '<S693>/Constant1'
   *  Constant: '<S693>/Constant10'
   *  Constant: '<S693>/Constant11'
   *  Constant: '<S693>/Constant12'
   *  Constant: '<S693>/Constant13'
   *  Constant: '<S693>/Constant14'
   *  Constant: '<S693>/Constant15'
   *  Constant: '<S693>/Constant16'
   *  Constant: '<S693>/Constant17'
   *  Constant: '<S693>/Constant18'
   *  Constant: '<S693>/Constant19'
   *  Constant: '<S693>/Constant2'
   *  Constant: '<S693>/Constant20'
   *  Constant: '<S693>/Constant21'
   *  Constant: '<S693>/Constant22'
   *  Constant: '<S693>/Constant23'
   *  Constant: '<S693>/Constant24'
   *  Constant: '<S693>/Constant25'
   *  Constant: '<S693>/Constant26'
   *  Constant: '<S693>/Constant27'
   *  Constant: '<S693>/Constant28'
   *  Constant: '<S693>/Constant29'
   *  Constant: '<S693>/Constant3'
   *  Constant: '<S693>/Constant30'
   *  Constant: '<S693>/Constant31'
   *  Constant: '<S693>/Constant32'
   *  Constant: '<S693>/Constant33'
   *  Constant: '<S693>/Constant34'
   *  Constant: '<S693>/Constant35'
   *  Constant: '<S693>/Constant36'
   *  Constant: '<S693>/Constant37'
   *  Constant: '<S693>/Constant38'
   *  Constant: '<S693>/Constant39'
   *  Constant: '<S693>/Constant4'
   *  Constant: '<S693>/Constant40'
   *  Constant: '<S693>/Constant41'
   *  Constant: '<S693>/Constant42'
   *  Constant: '<S693>/Constant47'
   *  Constant: '<S693>/Constant5'
   *  Constant: '<S693>/Constant50'
   *  Constant: '<S693>/Constant51'
   *  Constant: '<S693>/Constant52'
   *  Constant: '<S693>/Constant53'
   *  Constant: '<S693>/Constant54'
   *  Constant: '<S693>/Constant55'
   *  Constant: '<S693>/Constant57'
   *  Constant: '<S693>/Constant6'
   *  Constant: '<S693>/Constant62'
   *  Constant: '<S693>/Constant63'
   *  Constant: '<S693>/Constant64'
   *  Constant: '<S693>/Constant65'
   *  Constant: '<S693>/Constant66'
   *  Constant: '<S693>/Constant67'
   *  Constant: '<S693>/Constant68'
   *  Constant: '<S693>/Constant69'
   *  Constant: '<S693>/Constant7'
   *  Constant: '<S693>/Constant70'
   *  Constant: '<S693>/Constant71'
   *  Constant: '<S693>/Constant72'
   *  Constant: '<S693>/Constant73'
   *  Constant: '<S693>/Constant74'
   *  Constant: '<S693>/Constant8'
   *  Constant: '<S693>/Constant9'
   */
  rty_Out->objTimeStamp = 0;
  rty_Out->objID = ((uint16_T)0U);
  rty_Out->objValid = 0;
  rty_Out->objExitProb = 0.0F;
  rty_Out->objIsobsProb = 0.0F;
  rty_Out->objLifeCycle = 0.0F;
  rty_Out->fusionType = 0;
  rty_Out->objType = ((uint8_T)0U);
  rty_Out->objTypeProb = 0.0F;
  rty_Out->dxCenter = 0.0F;
  rty_Out->dxCenterStd = 0.0F;
  rty_Out->dyCenter = 0.0F;
  rty_Out->dyCenterStd = 0.0F;
  rty_Out->dxRef = 0.0F;
  rty_Out->dyRef = 0.0F;
  rty_Out->refPosition = ((uint8_T)0U);
  rty_Out->dxRefSurface = 0.0F;
  rty_Out->dyRefSurface = 0.0F;
  rty_Out->surfacePos = ((uint8_T)0U);
  rty_Out->vxRel = 0.0F;
  rty_Out->vyRel = 0.0F;
  rty_Out->axRel = 0.0F;
  rty_Out->ayRel = 0.0F;
  rty_Out->vxRelStd = 0.0F;
  rty_Out->vyRelStd = 0.0F;
  rty_Out->axRelStd = 0.0F;
  rty_Out->ayRelStd = 0.0F;
  rty_Out->vxAbs = 0.0F;
  rty_Out->vyAbs = 0.0F;
  rty_Out->axAbs = 0.0F;
  rty_Out->ayAbs = 0.0F;
  rty_Out->vxAbsStd = 0.0F;
  rty_Out->vyAbsStd = 0.0F;
  rty_Out->axAbsStd = 0.0F;
  rty_Out->ayAbsStd = 0.0F;
  rty_Out->yawAngle = 0.0F;
  rty_Out->yawAngleStd = 0.0F;
  rty_Out->azimuthAngle = 0.0F;
  rty_Out->azimuthAngleStd = 0.0F;
  rty_Out->yawRate = 0.0F;
  rty_Out->yawRateStd = 0.0F;
  rty_Out->objLength = 0.0F;
  rty_Out->objWidth = 0.0F;
  rty_Out->objHeight = 0.0F;
  rty_Out->objLengthStd = 0.0F;
  rty_Out->objWidthStd = 0.0F;
  rty_Out->objHeightStd = 0.0F;
  rty_Out->movingStatus = ((uint8_T)0U);
  rty_Out->movingDirection = ((uint8_T)0U);
  rty_Out->lightStatus = ((uint16_T)0U);
  rty_Out->doorStatus = ((uint16_T)0U);
  rty_Out->trailerStatus = 0;
  rty_Out->laneAssign = ((uint8_T)0U);
  rty_Out->laneAssociateConf = 0.0F;
  rty_Out->laneLeftPortion = 0.0F;
  rty_Out->laneRightPortion = 0.0F;
  rty_Out->laneLeftConf = 0.0F;
  rty_Out->laneRightConf = 0.0F;
  rty_Out->objIntention = ((uint8_T)0U);
  rty_Out->objIntentionProb = 0.0F;
  rty_Out->objTTC = 100.0F;
  rty_Out->objLatDist2LaneCenter = 0.0F;
  rty_Out->objLatDist2EgoCenter = 0.0F;
  rty_Out->objPosition = ((uint8_T)0U);
}

/*
 * Output and update for action system:
 *    '<S679>/If Action Subsystem1'
 *    '<S680>/If Action Subsystem1'
 */
static void AEBS_TOS_IfActionSubsystem1(real_T rtu_Index, const Object_Struct
  rtu_Objs_all[32], Object_Struct *rty_TargetInfo)
{
  /* Selector: '<S692>/Selector' */
  *rty_TargetInfo = rtu_Objs_all[(int32_T)rtu_Index - 1];
}

/*
 * System initialize for atomic system:
 *    '<S722>/Chart'
 *    '<S723>/Chart'
 *    '<S732>/Chart'
 *    '<S733>/Chart'
 *    '<S717>/Chart'
 *    '<S718>/Chart'
 *    '<S727>/Chart'
 *    '<S728>/Chart'
 */
static void AEBS_TOS_Chart_Init(real_T *rty_Delay_Trig)
{
  *rty_Delay_Trig = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S722>/Chart'
 *    '<S723>/Chart'
 *    '<S732>/Chart'
 *    '<S733>/Chart'
 *    '<S717>/Chart'
 *    '<S718>/Chart'
 *    '<S727>/Chart'
 *    '<S728>/Chart'
 */
static void AEBS_TOS_Chart(boolean_T rtu_Input, real_T rtu_Delay_Trig_count,
  real_T *rty_Delay_Trig, DW_Chart_AEBS_TOS_T *localDW)
{
  /* Chart: '<S722>/Chart' */
  if (localDW->is_active_c262_AEBS_TOS == 0U) {
    localDW->is_active_c262_AEBS_TOS = 1U;
    localDW->is_c262_AEBS_TOS = AEBS_TOS_IN_OFF;

    /* _GWMH9P4.LKAFN.111_17_ */
    *rty_Delay_Trig = 0.0;
    localDW->count = 0.0;
  } else {
    switch (localDW->is_c262_AEBS_TOS) {
     case AEBS_TOS_IN_OFF:
      *rty_Delay_Trig = 0.0;
      if (rtu_Input) {
        localDW->is_c262_AEBS_TOS = AEBS_TOS_IN_ON;

        /* _GWMH9P4.LKAFN.111_18_ */
        *rty_Delay_Trig = 0.0;
        localDW->count++;
      }
      break;

     case AEBS_TOS_IN_ON:
      *rty_Delay_Trig = 0.0;
      if (rtu_Input && (localDW->count >= rtu_Delay_Trig_count)) {
        localDW->is_c262_AEBS_TOS = AEBS_TOS_IN_Trig;

        /* _GWMH9P4.LKAFN.111_19_ */
        *rty_Delay_Trig = 1.0;
      } else if (!rtu_Input) {
        localDW->is_c262_AEBS_TOS = AEBS_TOS_IN_OFF;

        /* _GWMH9P4.LKAFN.111_17_ */
        *rty_Delay_Trig = 0.0;
        localDW->count = 0.0;
      } else {
        localDW->count++;
      }
      break;

     default:
      /* case IN_Trig: */
      *rty_Delay_Trig = 1.0;
      if (!rtu_Input) {
        localDW->is_c262_AEBS_TOS = AEBS_TOS_IN_OFF;

        /* _GWMH9P4.LKAFN.111_17_ */
        *rty_Delay_Trig = 0.0;
        localDW->count = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S722>/Chart' */
}

/*
 * System initialize for atomic system:
 *    '<S712>/Hysteresis'
 *    '<S714>/Hysteresis'
 *    '<S711>/Hysteresis'
 *    '<S713>/Hysteresis'
 */
static void AEBS_TOS_Hysteresis_Init(real_T *rty_Flag)
{
  *rty_Flag = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S712>/Hysteresis'
 *    '<S714>/Hysteresis'
 *    '<S711>/Hysteresis'
 *    '<S713>/Hysteresis'
 */
static void AEBS_TOS_Hysteresis(real_T rtu_Input_1, real_T rtu_Input_2, real_T
  *rty_Flag, DW_Hysteresis_AEBS_TOS_T *localDW)
{
  /* Chart: '<S712>/Hysteresis' */
  if (localDW->is_active_c264_AEBS_TOS == 0U) {
    localDW->is_active_c264_AEBS_TOS = 1U;
    localDW->is_c264_AEBS_TOS = AEBS_TOS_IN_Flag_False;

    /* _GWMH9P5.ELKFN.111_3_ */
    *rty_Flag = 0.0;
  } else if (localDW->is_c264_AEBS_TOS == AEBS_TOS_IN_Flag_False) {
    if (rtu_Input_1 == 1.0) {
      localDW->is_c264_AEBS_TOS = AEBS_TOS_IN_Flag_True;

      /* _GWMH9P5.ELKFN.111_4_ */
      *rty_Flag = 1.0;
    } else {
      *rty_Flag = 0.0;
    }

    /* case IN_Flag_True: */
  } else if (rtu_Input_2 == 1.0) {
    localDW->is_c264_AEBS_TOS = AEBS_TOS_IN_Flag_False;

    /* _GWMH9P5.ELKFN.111_3_ */
    *rty_Flag = 0.0;
  } else {
    *rty_Flag = 1.0;
  }

  /* End of Chart: '<S712>/Hysteresis' */
}

/*
 * Output and update for action system:
 *    '<S699>/If Action Subsystem4'
 *    '<S699>/If Action Subsystem'
 */
static void AEBS_TOS_IfActionSubsystem4(boolean_T *rty_Out)
{
  /* SignalConversion generated from: '<S709>/Out' incorporates:
   *  Constant: '<S709>/Constant'
   */
  *rty_Out = false;
}

/*
 * Output and update for action system:
 *    '<S699>/If Action Subsystem5'
 *    '<S699>/If Action Subsystem1'
 */
static void AEBS_TOS_IfActionSubsystem5(boolean_T *rty_Out1)
{
  /* SignalConversion generated from: '<S710>/Out1' incorporates:
   *  Constant: '<S710>/Constant'
   */
  *rty_Out1 = false;
}

/* Function for MATLAB Function: '<S20>/MATLAB Function' */
static uint8_T AEBS_TOS_func_Calculate(real32_T x, real32_T y, real32_T ty)
{
  uint8_T t_objposition;
  if (x > 2.5F) {
    if ((y > ty - 1.75F) && (y < ty + 1.75F)) {
      t_objposition = 10U;
    } else if (y < ty - 1.75F) {
      t_objposition = 80U;
    } else {
      t_objposition = 20U;
    }
  } else if ((x < 2.5F) && (x > -2.5F)) {
    if (fabsf(ty) < 1.25F) {
      t_objposition = 0U;
    } else if (ty > 1.25F) {
      t_objposition = 30U;
    } else {
      t_objposition = 70U;
    }
  } else if ((y > ty - 1.75F) && (y < ty + 1.75F)) {
    t_objposition = 50U;
  } else if (y < ty - 1.75F) {
    t_objposition = 60U;
  } else {
    t_objposition = 40U;
  }

  return t_objposition;
}

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T tmp;
  real32_T tmp_0;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    tmp = fabsf(u0);
    tmp_0 = fabsf(u1);
    if (rtIsInfF(u1)) {
      if (tmp == 1.0F) {
        y = 1.0F;
      } else if (tmp > 1.0F) {
        if (u1 > 0.0F) {
          y = (rtInfF);
        } else {
          y = 0.0F;
        }
      } else if (u1 > 0.0F) {
        y = 0.0F;
      } else {
        y = (rtInfF);
      }
    } else if (tmp_0 == 0.0F) {
      y = 1.0F;
    } else if (tmp_0 == 1.0F) {
      if (u1 > 0.0F) {
        y = u0;
      } else {
        y = 1.0F / u0;
      }
    } else if (u1 == 2.0F) {
      y = u0 * u0;
    } else if ((u1 == 0.5F) && (u0 >= 0.0F)) {
      y = sqrtf(u0);
    } else if ((u0 < 0.0F) && (u1 > floorf(u1))) {
      y = (rtNaNF);
    } else {
      y = powf(u0, u1);
    }
  }

  return y;
}

real32_T rt_atan2f_snf(real32_T u0, real32_T u1)
{
  int32_T u0_0;
  int32_T u1_0;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else if (rtIsInfF(u0) && rtIsInfF(u1)) {
    if (u0 > 0.0F) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0F) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2f((real32_T)u0_0, (real32_T)u1_0);
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = atan2f(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S131>/L2R_Calculate' */
static real32_T AEBS_TOS_solution(real32_T a, real32_T b, real32_T c)
{
  real32_T delta;
  real32_T result;
  delta = b * b - 4.0F * a * c;
  if ((fabsf(a) <= 0.01F) && (b != 0.0F)) {
    result = fabsf(c / b);
  } else if (delta > 0.0F) {
    delta = sqrtf(delta);
    result = (-b - delta) / (2.0F * a);
    delta = (-b + delta) / (2.0F * a);
    if ((result > 0.0F) && (delta > 0.0F)) {
      result = fminf(result, delta);
    } else if ((!(result > 0.0F)) || (!(delta <= 0.0F))) {
      if ((result <= 0.0F) && (delta > 0.0F)) {
        result = delta;
      } else {
        result = 100.0F;
      }
    }
  } else if (delta == 0.0F) {
    result = -b / (2.0F * a);
    if (!(result > 0.0F)) {
      result = 100.0F;
    }
  } else {
    result = 100.0F;
  }

  return result;
}

real32_T rt_modf_snf(real32_T u0, real32_T u1)
{
  real32_T q;
  real32_T y;
  boolean_T yEq;
  y = u0;
  if (u1 == 0.0F) {
    if (u0 == 0.0F) {
      y = u1;
    }
  } else if (rtIsNaNF(u0) || rtIsNaNF(u1) || rtIsInfF(u0)) {
    y = (rtNaNF);
  } else if (u0 == 0.0F) {
    y = 0.0F / u1;
  } else if (rtIsInfF(u1)) {
    if ((u1 < 0.0F) != (u0 < 0.0F)) {
      y = u1;
    }
  } else {
    y = fmodf(u0, u1);
    yEq = (y == 0.0F);
    if ((!yEq) && (u1 > floorf(u1))) {
      q = fabsf(u0 / u1);
      yEq = !(fabsf(q - floorf(q + 0.5F)) > FLT_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0F;
    } else if ((u0 < 0.0F) != (u1 < 0.0F)) {
      y += u1;
    }
  }

  return y;
}

/* Model step function */
void AEBS_TOS_step(void)
{
  /* local block i/o variables */
  Object_Struct rtb_UnitDelay1;
  Object_Struct rtb_UnitDelay4;
  Object_Struct rtb_Merge;
  Object_Struct rtb_Merge_o;
  Object_Struct rtb_UnitDelay1_j;
  Object_Struct rtb_UnitDelay4_o;
  real_T rtb_Add10;
  real_T rtb_Add8;
  uint32_T rtb_Sort[32];
  uint32_T rtb_Sort_b[32];
  real32_T rtb_Add6_o;
  real32_T rtb_Add3_p;
  real32_T rtb_x_o[2];
  real32_T rtb_x_m[2];
  real32_T rtb_x_c[2];
  uint16_t rtb_UnitDelay_di;
  uint16_t rtb_UnitDelay6;
  uint16_t rtb_UnitDelay_jo;
  uint16_t rtb_UnitDelay6_k;
  boolean_T rtb_SolutionFound;
  boolean_T rtb_Valid_o;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_i;
  int32_T ForEach_itr_d;

  {
    const LineSeg_Struct *expl_temp;
    PahEstimn *expl_temp_0;
    real_T rtb_Add_ed;
    real_T rtb_Delay_Trig;
    real_T rtb_Delay_Trig_b;
    real_T rtb_Delay_Trig_e;
    real_T rtb_Delay_Trig_fv;
    real_T rtb_Delay_Trig_h;
    real_T rtb_Delay_Trig_k;
    real_T rtb_Delay_Trig_mf;
    real_T rtb_Delay_Trig_o;
    real_T rtb_Divide6;
    real_T rtb_Flag;
    real_T rtb_Flag_c;
    real_T rtb_Flag_j;
    real_T rtb_Flag_pw;
    real_T rtb_R2L;
    real_T rtb_Switch2_oz;
    real_T rtb_Switch3_e;
    real_T rtb_Switch_gr;
    int32_T exitg1;
    int32_T exitg2;
    int32_T j;
    int32_T p;
    int32_T q;
    int32_T s647_iter;
    real32_T rtb_Assignment3[32];
    real32_T rtb_ImpAsg_InsertedFor_Lat_TTR_[32];
    real32_T rtb_ImpAsg_InsertedFor_axRelStd[32];
    real32_T rtb_ImpAsg_InsertedFor_axRel_at[32];
    real32_T rtb_ImpAsg_InsertedFor_ayRelStd[32];
    real32_T rtb_ImpAsg_InsertedFor_ayRel_at[32];
    real32_T rtb_ImpAsg_InsertedFor_azimut_f[32];
    real32_T rtb_ImpAsg_InsertedFor_azimuthA[32];
    real32_T rtb_ImpAsg_InsertedFor_objLatDi[32];
    real32_T rtb_ImpAsg_InsertedFor_objLat_i[32];
    real32_T rtb_ImpAsg_InsertedFor_vxRelStd[32];
    real32_T rtb_ImpAsg_InsertedFor_vxRel_at[32];
    real32_T rtb_ImpAsg_InsertedFor_vyRelStd[32];
    real32_T rtb_ImpAsg_InsertedFor_vyRel_at[32];
    real32_T rtb_re_TTC[32];
    real32_T rtb_re_dx[32];
    real32_T rtb_re_dy[32];
    real32_T num_Vecter[10];
    real32_T rtb_Assignment[10];
    real32_T rtb_TmpSignalConversionAtSFun_i[4];
    real32_T rtb_TmpSignalConversionAtSFun_l[4];
    real32_T rtb_TmpSignalConversionAtSFun_m[4];
    real32_T rtb_TmpSignalConversionAtSFunct[4];
    real32_T dxMin_Left;
    real32_T rtb_ARelHalf;
    real32_T rtb_ARelHalf_b;
    real32_T rtb_ARelHalf_k;
    real32_T rtb_ARelStationaryObject;
    real32_T rtb_Add1_kc;
    real32_T rtb_Add4_l;
    real32_T rtb_Add5_p;
    real32_T rtb_Add_a;
    real32_T rtb_Add_cl;
    real32_T rtb_Add_pz;
    real32_T rtb_C0;
    real32_T rtb_C1;
    real32_T rtb_C1_e;
    real32_T rtb_C2;
    real32_T rtb_C2_i;
    real32_T rtb_C3;
    real32_T rtb_C3_b;
    real32_T rtb_Line_end;
    real32_T rtb_Line_end_a;
    real32_T rtb_Line_start;
    real32_T rtb_Line_start_g;
    real32_T rtb_Product14_er;
    real32_T rtb_Product14_h;
    real32_T rtb_Product_gz;
    real32_T rtb_Quotient_c;
    real32_T rtb_Quotient_dg;
    real32_T rtb_Quotient_e;
    real32_T rtb_Quotient_e4;
    real32_T rtb_Quotient_ed;
    real32_T rtb_Quotient_el;
    real32_T rtb_Quotient_en;
    real32_T rtb_Quotient_f;
    real32_T rtb_Quotient_fz;
    real32_T rtb_Quotient_g;
    real32_T rtb_Quotient_is;
    real32_T rtb_Quotient_j;
    real32_T rtb_Quotient_kp;
    real32_T rtb_Quotient_p;
    real32_T rtb_RadiusRear_j;
    real32_T rtb_Sum1_p;
    real32_T rtb_Switch2_b1;
    real32_T rtb_Switch2_c;
    real32_T rtb_Switch2_d;
    real32_T rtb_Switch2_e;
    real32_T rtb_Switch2_ff;
    real32_T rtb_Switch2_i;
    real32_T rtb_Switch2_iz;
    real32_T rtb_Switch2_m;
    real32_T rtb_Switch2_o;
    real32_T rtb_Switch_aq;
    real32_T rtb_Switch_bc;
    real32_T rtb_Switch_dw;
    real32_T rtb_Switch_hs;
    real32_T rtb_Switch_ht;
    real32_T rtb_Switch_i;
    real32_T rtb_Switch_lco;
    real32_T rtb_Switch_ma;
    real32_T rtb_Switch_mt;
    real32_T rtb_Switch_ov;
    real32_T rtb_Switch_p;
    real32_T rtb_VRelStationaryHost_p;
    real32_T rtb_VRelStationaryObject_j;
    real32_T rtb_VRel_h;
    real32_T rtb_cosCoef_j;
    real32_T rtb_dx;
    real32_T rtb_dx_d;
    real32_T rtb_dx_ie;
    real32_T rtb_dy;
    real32_T rtb_dy_b;
    real32_T rtb_tau;
    real32_T rtb_tau_g;
    real32_T rtb_x;
    real32_T rtb_x_h;
    real32_T rtb_x_l;
    real32_T rtb_y;
    real32_T rtb_y_d;
    real32_T t_radObjAngleToRear_f;
    real32_T t_sinObjAngle_f;
    real32_T t_tempvx_f;
    real32_T t_tempvy_f;
    uint32_T qY;
    uint16_t rtb_Switch_j_objID;
    uint16_t rtb_Switch_objID;
    int8_T rtAction;
    int8_T s200_iter;
    uint8_T rtb_ImpAsg_InsertedFor_objPosit[32];
    uint8_T rtb_re_ID[32];
    uint8_T rtb_re_Valid[32];
    uint8_T rtb_Merge1_d[10];
    uint8_T rtb_Merge_pv[10];
    uint8_T i;
    uint8_T num;
    uint8_T rtb_AccTgtIdn;
    uint8_T rtb_DataTypeConversion_j;
    uint8_T temp_ID;
    boolean_T rtb_Assignment4[32];
    boolean_T rtb_Assignment5[32];
    boolean_T rtb_ImpAsg_InsertedFor_LatObj_V[32];
    boolean_T rtb_ImpAsg_InsertedFor_Lat_ObjI[32];
    boolean_T rtb_ImpAsg_InsertedFor_Overlap_[32];
    boolean_T rtb_Assignment1_o[4];
    boolean_T rtb_TimeWithinSegment_p[4];
    boolean_T exitg3;
    boolean_T guard1 = false;
    boolean_T guard11 = false;
    boolean_T guard2 = false;
    boolean_T guard21 = false;
    boolean_T guard3 = false;
    boolean_T guard31 = false;
    boolean_T guard4 = false;
    boolean_T guard5 = false;
    boolean_T rtb_Compare_hg;
    boolean_T rtb_DataTypeConversion1_c;
    boolean_T rtb_DataTypeConversion1_j;
    boolean_T rtb_DataTypeConversion2_d;
    boolean_T rtb_DataTypeConversion2_j;
    boolean_T rtb_DataTypeConversion_c1;
    boolean_T rtb_DataTypeConversion_l;
    boolean_T rtb_LogicalOperator10_m;
    boolean_T rtb_LogicalOperator11;
    boolean_T rtb_LogicalOperator19;
    boolean_T rtb_LogicalOperator20;
    boolean_T rtb_LogicalOperator5;
    boolean_T rtb_LogicalOperator7;
    boolean_T rtb_LogicalOperator7_e;
    boolean_T rtb_Merge2_n;
    boolean_T rtb_Merge_e;
    boolean_T rtb_NoSolution_d;
    boolean_T rtb_RelationalOperator30;
    boolean_T rtb_RelationalOperator30_g;
    boolean_T rtb_RelationalOperator30_h;
    boolean_T rtb_RelationalOperator30_k;
    boolean_T rtb_RelationalOperator8_gu;
    boolean_T rtb_RelationalOperator9;
    boolean_T rtb_RelationalOperator9_f;
    boolean_T rtb_RelationalOperator9_gp;
    boolean_T rtb_RelationalOperator9_h;
    boolean_T rtb_SolutionFound_c;
    boolean_T rtb_SolutionFound_l;
    boolean_T rtb_Valid;
    boolean_T rtb_Valid_g;
    boolean_T rtb_Valid_l5;

    /* Outputs for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
    /* Outputs for Iterator SubSystem: '<S449>/For Each Subsystem' incorporates:
     *  ForEach: '<S450>/For Each'
     */
    for (ForEach_itr = 0; ForEach_itr < 32; ForEach_itr++) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector18'
       */
      rtb_Switch_aq = AEBS_TOS_U.Fus_TargetBus.Cam_ObsAccX_s[ForEach_itr];

      /* ForEachSliceAssignment generated from: '<S450>/Fus_AxAbs' incorporates:
       *  SignalConversion: '<S458>/Signal Conversion6'
       */
      Meas_ObjAxabs[ForEach_itr] = rtb_Switch_aq;

      /* MultiPortSwitch: '<S452>/Index Vector23' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       */
      rtb_C1_e = AEBS_TOS_U.Fus_TargetBus.Cam_ObsAccY_s[ForEach_itr];

      /* ForEachSliceAssignment generated from: '<S450>/Fus_AyAbs' incorporates:
       *  SignalConversion: '<S458>/Signal Conversion7'
       */
      Meas_ObjAyabs[ForEach_itr] = rtb_C1_e;

      /* MultiPortSwitch: '<S452>/Index Vector27' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       */
      rtb_C2_i = AEBS_TOS_U.Fus_TargetBus.Cam_ObsCenterAngle_s[ForEach_itr];

      /* ForEachSliceAssignment generated from: '<S450>/Fus_CenterAngle' incorporates:
       *  SignalConversion: '<S458>/Signal Conversion5'
       */
      rtb_re_dx[ForEach_itr] = rtb_C2_i;

      /* MultiPortSwitch: '<S452>/Index Vector34' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelYAbs_s[ForEach_itr];

      /* MultiPortSwitch: '<S452>/Index Vector' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8 =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsID_u8[ForEach_itr];

      /* If: '<S460>/If' incorporates:
       *  Constant: '<S587>/Constant'
       *  RelationalOperator: '<S587>/Compare'
       */
      if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8 == ((uint8_T)0U)) {
        /* Outputs for IfAction SubSystem: '<S460>/Invalid' incorporates:
         *  ActionPort: '<S583>/Action Port'
         */
        /* SignalConversion generated from: '<S583>/ID_Change' incorporates:
         *  Constant: '<S583>/Constant'
         */
        rtb_LogicalOperator5 = false;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjID' incorporates:
         *  SignalConversion: '<S583>/Signal Conversion'
         */
        Meas_ObjID[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8;

        /* End of Outputs for SubSystem: '<S460>/Invalid' */
      } else {
        /* Outputs for IfAction SubSystem: '<S460>/IDValid_check' incorporates:
         *  ActionPort: '<S581>/Action Port'
         */
        /* Logic: '<S581>/Logical Operator' incorporates:
         *  Constant: '<S584>/Constant'
         *  Constant: '<S585>/Constant'
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S452>/Index Vector1'
         *  MultiPortSwitch: '<S452>/Index Vector2'
         *  RelationalOperator: '<S584>/Compare'
         *  RelationalOperator: '<S585>/Compare'
         */
        rtb_LogicalOperator7 =
          ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsValid_u8[ForEach_itr] >= ((uint8_T)
             1U)) && (AEBS_TOS_U.Fus_TargetBus.Cam_ObsAge_u16[ForEach_itr] >=
                      ((uint16_T)1U)));

        /* Logic: '<S581>/Logical Operator1' */
        rtb_LogicalOperator5 = !rtb_LogicalOperator7;

        /* Switch: '<S581>/Switch' */
        if (rtb_LogicalOperator7) {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjID' */
          Meas_ObjID[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
            ObsID_u8;
        } else {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjID' incorporates:
           *  Constant: '<S581>/Constant'
           */
          Meas_ObjID[ForEach_itr] = ((uint8_T)0U);
        }

        /* End of Switch: '<S581>/Switch' */
        /* End of Outputs for SubSystem: '<S460>/IDValid_check' */
      }

      /* End of If: '<S460>/If' */

      /* MultiPortSwitch: '<S452>/Index Vector30' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr];

      /* RelationalOperator: '<S455>/Compare' incorporates:
       *  Constant: '<S455>/Constant'
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector29'
       */
      rtb_LogicalOperator7 = (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr]
        < 0.0F);

      /* Chart: '<S454>/FakeObjJudge' incorporates:
       *  UnitDelay: '<S454>/Unit Delay2'
       */
      if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_active_c205_AEBS_TOS == 0U)
      {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_active_c205_AEBS_TOS = 1U;
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c205_AEBS_TOS =
          AEBS_TOS_IN_Initialization;
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ConfFlg = true;
      } else if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c205_AEBS_TOS == 1) {
        if ((!rtb_LogicalOperator7) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
             ObsID_u8 != AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].CurentID) &&
            (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8 !=
             AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].UnitDelay2_DSTATE)) {
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c205_AEBS_TOS =
            AEBS_TOS_IN_Initialization;
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ConfFlg = true;
        } else {
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ConfFlg = false;
        }

        /* case IN_Initialization: */
      } else if (rtb_LogicalOperator7) {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c205_AEBS_TOS =
          AEBS_TOS_IN_ErrorObj;
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].CurentID =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8;
      } else {
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ConfFlg = true;
      }

      /* End of Chart: '<S454>/FakeObjJudge' */

      /* Switch: '<S454>/Switch' incorporates:
       *  Constant: '<S454>/Constant'
       *  Inport: '<Root>/Fus_TargetBus'
       *  Logic: '<S454>/Logical Operator'
       *  MultiPortSwitch: '<S452>/Index Vector29'
       *  Sum: '<S454>/Add'
       *  UnaryMinus: '<S454>/Unary Minus'
       */
      if (!AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ConfFlg) {
        rtb_C2_i = -AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr] + 262.0F;
      } else {
        rtb_C2_i = AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr];
      }

      /* End of Switch: '<S454>/Switch' */

      /* Sum: '<S454>/Add1' incorporates:
       *  Constant: '<S454>/Constant1'
       *  Inport: '<Root>/Fus_TargetBus'
       *  MinMax: '<S454>/Max'
       *  MultiPortSwitch: '<S452>/Index Vector29'
       */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 = fmaxf(rtb_C2_i,
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr]) -
        P_TA_PrmForVehRearAxleDisttoFrnt;

      /* MultiPortSwitch: '<S452>/Index Vector17' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelY_s[ForEach_itr];

      /* Sum: '<S594>/Add' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector33'
       *  Product: '<S594>/Product'
       *  Product: '<S594>/Product1'
       *  Sum: '<S462>/Add'
       *  Sum: '<S591>/Add'
       */
      rtb_RadiusRear_j = AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] *
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] +
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s *
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s;
      rtb_C2_i = rtb_RadiusRear_j;

      /* Sqrt: '<S594>/Sqrt' incorporates:
       *  Sqrt: '<S462>/Sqrt'
       */
      dxMin_Left = sqrtf(rtb_C2_i);

      /* MATLAB Function: '<S464>/Type_comfig' incorporates:
       *  Chart: '<S463>/Stop_Memory'
       *  Constant: '<S464>/Constant'
       *  Inport: '<Root>/Fus_TargetBus'
       *  MATLAB Function: '<S462>/Orientation_Classify3'
       *  MultiPortSwitch: '<S452>/Index Vector10'
       *  MultiPortSwitch: '<S452>/Index Vector7'
       *  MultiPortSwitch: '<S452>/Index Vector8'
       *  MultiPortSwitch: '<S452>/Index Vector9'
       *  Sqrt: '<S594>/Sqrt'
       */
      num = 0U;
      rtb_LogicalOperator7 = !rtb_LogicalOperator5;
      if (rtb_LogicalOperator7 && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
           ObsID_u8 != 0)) {
        if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsClass_u8[ForEach_itr] != 2) &&
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsClass_u8[ForEach_itr] != 3)) {
          if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsClass_u8[ForEach_itr] == 1) &&
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVhSubType_u8[ForEach_itr] == 0))
          {
            num = 13U;
          } else {
            num = AEBS_TOS_U.Fus_TargetBus.Cam_ObsVhSubType_u8[ForEach_itr];
          }
        } else {
          switch (AEBS_TOS_U.Fus_TargetBus.Cam_ObsClass_u8[ForEach_itr]) {
           case 2:
            if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedSubType_u8[ForEach_itr] == 0)
                || (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedPos_u8[ForEach_itr] == 0))
            {
              num = 13U;
            } else {
              switch (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedSubType_u8[ForEach_itr])
              {
               case 1:
                num = 11U;
                break;

               case 2:
                num = 12U;
                break;
              }
            }
            break;

           case 3:
            if (dxMin_Left >= P_TA_PrmForMotorSpdThred) {
              num = 9U;
            } else if (dxMin_Left < P_TA_PrmForMotorSpdThred) {
              num = 10U;
            }
            break;
          }
        }
      }

      /* End of MATLAB Function: '<S464>/Type_comfig' */

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' incorporates:
       *  MATLAB Function: '<S462>/Orientation_Classify3'
       */
      Meas_ObjOrientation[ForEach_itr] = 0U;

      /* MATLAB Function: '<S462>/Orientation_Classify3' incorporates:
       *  Delay: '<S462>/Delay'
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector28'
       *  MultiPortSwitch: '<S452>/Index Vector33'
       *  MultiPortSwitch: '<S452>/Index Vector4'
       *  MultiPortSwitch: '<S452>/Index Vector54'
       */
      if (rtb_LogicalOperator7 && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
           ObsID_u8 != 0)) {
        guard1 = false;
        guard2 = false;
        guard3 = false;
        guard4 = false;
        guard5 = false;
        if ((num > 0) && (num < 9)) {
          if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F) {
            dxMin_Left = fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s);
            if ((dxMin_Left <= 10.5F) &&
                (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >= -0.5F))
            {
              rtb_ARelStationaryObject = fabsf
                (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s);
              if (rtb_ARelStationaryObject <= fabsf
                  (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]) +
                  0.5F) {
                rtb_Quotient_f = fabsf
                  (AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr]);
                if (((rtb_Quotient_f < 0.785398185F) || (rtb_Quotient_f >
                      2.3561945F)) &&
                    (((AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                       >= 2) &&
                      (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                       <= 7)) ||
                     (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                      == 12))) {
                  if (((AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                        == 5) ||
                       (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                        == 6)) &&
                      (AEBS_TOS_U.Fus_TargetBus.Cam_ObsCutInFlg_u8[ForEach_itr] ==
                       1) && (fabsf
                              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsCutInSpd_s[ForEach_itr])
                              > 0.0F) &&
                      AEBS_TOS_U.Fus_TargetBus.Cam_ObsCutInSpdValid_b[ForEach_itr]
                      && (rtb_ARelStationaryObject > 0.0F)) {
                    /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                    Meas_ObjOrientation[ForEach_itr] = 4U;
                  } else if
                      (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                       == 7) {
                    if (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                              Delay_DSTATE[0]) - dxMin_Left > 0.0F) {
                      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                      Meas_ObjOrientation[ForEach_itr] = 5U;
                    } else {
                      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                      Meas_ObjOrientation[ForEach_itr] = 1U;
                    }
                  } else {
                    /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                    Meas_ObjOrientation[ForEach_itr] = 1U;
                  }
                } else {
                  guard5 = true;
                }
              } else {
                guard5 = true;
              }
            } else {
              guard5 = true;
            }
          } else {
            guard5 = true;
          }
        } else if ((num == 9) || (num == 10)) {
          if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F) {
            rtb_Product14_h = fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
              ObsPosY_s);
            if ((rtb_Product14_h <= 10.5F) &&
                (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >= -0.5F))
            {
              dxMin_Left = fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                 ObsVelYAbs_s);
              if (dxMin_Left <= fabsf
                  (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]) +
                  0.5F) {
                rtb_ARelStationaryObject = fabsf
                  (AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr]);
                if ((rtb_ARelStationaryObject < 0.785398185F) ||
                    (rtb_ARelStationaryObject > 2.3561945F)) {
                  if ((dxMin_Left > 0.5F) && (dxMin_Left < 2.0F) &&
                      (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                       AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s) &&
                      (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr]
                             .Delay_DSTATE[0U]) - fabsf
                       (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s) < 0.0F))
                  {
                    /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                    Meas_ObjOrientation[ForEach_itr] = 4U;
                  } else if (dxMin_Left > 0.5F) {
                    if (dxMin_Left < 2.0F) {
                      if (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]
                          > AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s)
                      {
                        if (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                                  Delay_DSTATE[0]) - rtb_Product14_h > 0.0F) {
                          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                          Meas_ObjOrientation[ForEach_itr] = 5U;
                        } else {
                          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                          Meas_ObjOrientation[ForEach_itr] = 1U;
                        }
                      } else {
                        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                        Meas_ObjOrientation[ForEach_itr] = 1U;
                      }
                    } else {
                      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                      Meas_ObjOrientation[ForEach_itr] = 1U;
                    }
                  } else {
                    /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                    Meas_ObjOrientation[ForEach_itr] = 1U;
                  }
                } else {
                  guard3 = true;
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }
        } else if
            (((AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               1) ||
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               5) ||
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               8)) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F)) {
          if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] < -1.0F) &&
              (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s) <=
               fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]) +
               0.5F) && (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                               Delay_DSTATE[0U]) - fabsf
                         (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s) <
                         1.0F) && (dxMin_Left >= 0.5F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 6U;
          } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                      -0.5F) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                       ObsVelYAbs_s) >= fabsf
                                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
                      + 0.5F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsVelY_s > 0.0F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 2U;
          } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                      -0.5F) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                       ObsVelYAbs_s) >= fabsf
                                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
                      + 0.5F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsVelY_s < 0.0F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 3U;
          } else if (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s) <=
                     0.5F) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 1U;
          } else if (dxMin_Left <= 0.5F) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 1U;
          }
        } else if
            (((AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               2) ||
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               4) ||
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               7)) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F)) {
          if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] < -1.0F) &&
              (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s) <=
               fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]) +
               0.5F) && (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                               Delay_DSTATE[0U]) - fabsf
                         (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s) <
                         1.0F) && (dxMin_Left >= 0.5F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 6U;
          } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                      -0.5F) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                       ObsVelYAbs_s) >= fabsf
                                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
                      + 0.5F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsVelY_s > 0.0F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 2U;
          } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                      -0.5F) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                       ObsVelYAbs_s) >= fabsf
                                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
                      + 0.5F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsVelY_s < 0.0F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 3U;
          } else if (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s) <=
                     0.5F) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 1U;
          } else if (dxMin_Left <= 0.5F) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 1U;
          }
        } else if
            (((AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               3) ||
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPedOrientation_u8[ForEach_itr] ==
               6)) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F)) {
          if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] < -1.0F) &&
              (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s) <=
               fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]) +
               0.5F) && (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                               Delay_DSTATE[0U] -
                               AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s) <
                         0.5F) && (dxMin_Left >= 0.5F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 6U;
          } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                      -0.5F) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                       ObsVelYAbs_s) >= fabsf
                                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
                      + 0.5F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsVelY_s > 0.0F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 2U;
          } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                      -0.5F) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                       ObsVelYAbs_s) >= fabsf
                                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
                      + 0.5F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsVelY_s < 0.0F)) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 3U;
          } else if (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s) <=
                     0.5F) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 1U;
          } else if (dxMin_Left <= 0.5F) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 1U;
          }
        }

        if (guard5) {
          if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F) {
            dxMin_Left = fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                               ObsVelYAbs_s);
            if ((dxMin_Left >= 0.0F) && (dxMin_Left >= fabsf
                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] + 0.5F)))
            {
              dxMin_Left = fabsf
                (AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr]);
              if ((dxMin_Left > 0.785398185F) && (dxMin_Left < 2.3561945F) &&
                  (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                   == 12)) {
                dxMin_Left = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr]
                  .Delay_DSTATE[0U] - AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                  ObsPosY_s;
                if ((AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s > 0.0F) &&
                    (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosType_u8[ForEach_itr] !=
                     7) && (dxMin_Left < 0.0F)) {
                  /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                  Meas_ObjOrientation[ForEach_itr] = 2U;
                } else if ((AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s <
                            0.0F) &&
                           (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosType_u8[ForEach_itr]
                            != 8) && (dxMin_Left > 0.0F)) {
                  /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
                  Meas_ObjOrientation[ForEach_itr] = 3U;
                }
              } else {
                guard4 = true;
              }
            } else {
              guard4 = true;
            }
          } else {
            guard4 = true;
          }
        }

        if (guard4) {
          if ((AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F) && (fabsf
               (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s) <= 10.5F) &&
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] < 0.0F) &&
              (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s) <=
               fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]))) {
            dxMin_Left = fabsf
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr]);
            if (((dxMin_Left < 0.785398185F) || (dxMin_Left > 2.3561945F)) &&
                ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr]
                  == 13) &&
                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosType_u8[ForEach_itr] >= 4) &&
                 (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosType_u8[ForEach_itr] <= 6)))
            {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
              Meas_ObjOrientation[ForEach_itr] = 6U;
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        }

        if (guard3) {
          if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F) {
            if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] > -0.5F)
                && ((fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s) >=
                     fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
                     + 0.5F) || (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                   Delay_DSTATE[0U]) - fabsf
                                 (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsPosY_s) >= 0.05F)) &&
                ((AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s > 0.0F) &&
                 (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE[0U] -
                  AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s < 0.0F)) &&
                (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s) > 0.5F))
            {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
              Meas_ObjOrientation[ForEach_itr] = 2U;
            } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                        -0.5F) && ((fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                          ObsVelYAbs_s) >= fabsf
                                    (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
              + 0.5F) || (fabsf(AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                                Delay_DSTATE[0U]) - fabsf
                          (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s) >=
                          0.05F)) && ((AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                         ObsVelY_s < 0.0F) &&
                        (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE[0U]
                         - AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s >
                         0.0F)) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                         ObsVelY_s) > 0.5F)) {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
              Meas_ObjOrientation[ForEach_itr] = 3U;
            }
          } else if ((AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 > 0.0F) &&
                     (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s) <=
                      10.5F) &&
                     (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] <
                      0.0F) && (fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                       ObsVelYAbs_s) <= fabsf
                                (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])))
          {
            dxMin_Left = fabsf
              (AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr]);
            if (dxMin_Left < 0.785398185F) {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
              Meas_ObjOrientation[ForEach_itr] = 6U;
            } else if (dxMin_Left > 2.3561945F) {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
              Meas_ObjOrientation[ForEach_itr] = 6U;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        }

        if (guard2) {
          switch (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionCategory_u8[ForEach_itr])
          {
           case 9:
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 7U;
            break;

           case 10:
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 8U;
            break;
          }
        }

        if (guard1) {
          dxMin_Left = fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr]);
          if ((dxMin_Left > 0.785398185F) && (dxMin_Left < 2.3561945F) &&
              ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] < -0.5F) &&
               (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s < -0.5F))) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 7U;
          } else if ((dxMin_Left > 0.785398185F) && (dxMin_Left < 2.3561945F) &&
                     ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] <
                       -0.5F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
                                  ObsVelYAbs_s > -0.5F))) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjOrientation' */
            Meas_ObjOrientation[ForEach_itr] = 8U;
          }
        }
      }

      /* Switch: '<S471>/Switch' incorporates:
       *  Constant: '<S471>/Constant'
       *  Constant: '<S471>/Constant1'
       *  Constant: '<S533>/Constant'
       *  Constant: '<S534>/Constant'
       *  Logic: '<S471>/Logical Operator'
       *  RelationalOperator: '<S533>/Compare'
       *  RelationalOperator: '<S534>/Compare'
       */
      if ((rtb_LogicalOperator5 == true) ||
          (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8 != ((uint8_T)0U))) {
        temp_ID = ((uint8_T)1U);
      } else {
        temp_ID = ((uint8_T)0U);
      }

      /* End of Switch: '<S471>/Switch' */

      /* Switch: '<S488>/Switch' incorporates:
       *  Constant: '<S488>/Constant'
       *  Constant: '<S488>/Constant1'
       *  Constant: '<S491>/Constant'
       *  RelationalOperator: '<S491>/Compare'
       */
      if (P_TA_ObjAddAttrCalValue) {
        rtb_Valid_g = (temp_ID > ((uint8_T)0U));
      } else {
        rtb_Valid_g = true;
      }

      /* End of Switch: '<S488>/Switch' */

      /* DataTypeConversion: '<S488>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion = rtb_Valid_g;

      /* If: '<S468>/If' */
      if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion > 0.0) {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem = 0;

        /* Outputs for IfAction SubSystem: '<S468>/dx_nocharge' incorporates:
         *  ActionPort: '<S490>/Action Port'
         */
        /* SignalConversion: '<S490>/Signal Conversion' */
        rtb_C2_i = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;

        /* End of Outputs for SubSystem: '<S468>/dx_nocharge' */
      } else {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem = 1;

        /* Outputs for IfAction SubSystem: '<S468>/dx_charge' incorporates:
         *  ActionPort: '<S489>/Action Port'
         */
        /* Sum: '<S503>/Add3' incorporates:
         *  Constant: '<S493>/Constant'
         *  Delay: '<S503>/Delay1'
         *  Product: '<S503>/Product1'
         *  Sum: '<S503>/Subtract'
         */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_a +=
          (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 -
           AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_a) *
          P_TA_ObjDxLowPassFactor;

        /* Switch: '<S493>/Switch' incorporates:
         *  Constant: '<S493>/Constant1'
         */
        if (false) {
          /* SignalConversion: '<S489>/Signal Conversion' incorporates:
           *  Delay: '<S503>/Delay1'
           */
          rtb_C2_i = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_a;
        } else {
          /* SignalConversion: '<S489>/Signal Conversion' */
          rtb_C2_i = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;
        }

        /* End of Switch: '<S493>/Switch' */
        /* End of Outputs for SubSystem: '<S468>/dx_charge' */
      }

      /* End of If: '<S468>/If' */

      /* Switch: '<S457>/Switch1' incorporates:
       *  Constant: '<S457>/Constant1'
       */
      if (P_TA_MotionDataLowPassFilter != 0.0) {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjDx' */
        Meas_ObjDx[ForEach_itr] = rtb_C2_i;
      } else {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjDx' */
        Meas_ObjDx[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;
      }

      /* End of Switch: '<S457>/Switch1' */

      /* MultiPortSwitch: '<S452>/Index Vector31' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelX_s[ForEach_itr];

      /* Switch: '<S546>/Switch' incorporates:
       *  Constant: '<S546>/Constant'
       *  Constant: '<S546>/Constant1'
       *  Constant: '<S548>/Constant'
       *  RelationalOperator: '<S548>/Compare'
       */
      if (P_TA_ObjAddAttrCalValue) {
        rtb_Valid_g = (temp_ID > ((uint8_T)0U));
      } else {
        rtb_Valid_g = true;
      }

      /* End of Switch: '<S546>/Switch' */

      /* DataTypeConversion: '<S546>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_f = rtb_Valid_g;

      /* If: '<S473>/If' */
      if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_f > 0.0) {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_b = 0;

        /* Outputs for IfAction SubSystem: '<S473>/If Action Subsystem' incorporates:
         *  ActionPort: '<S545>/Action Port'
         */
        /* Merge: '<S473>/Merge' incorporates:
         *  SignalConversion: '<S545>/Signal Conversion'
         */
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* End of Outputs for SubSystem: '<S473>/If Action Subsystem' */
      } else {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_b = 1;

        /* Outputs for IfAction SubSystem: '<S473>/Subsystem3' incorporates:
         *  ActionPort: '<S547>/Action Port'
         */
        /* Product: '<S559>/Divide' incorporates:
         *  Constant: '<S559>/Constant'
         *  S-Function (sfix_udelay): '<S559>/Tapped Delay'
         *  Sum: '<S559>/Sum of Elements'
         */
        dxMin_Left = (((AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[0]
                        + AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr]
                        .TappedDelay_X_m[1]) +
                       AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[2])
                      + AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[3])
          / 5.0F;

        /* Product: '<S558>/Divide' incorporates:
         *  Constant: '<S558>/Constant'
         *  Delay: '<S558>/Delay'
         *  Sum: '<S558>/Add'
         */
        rtb_Product_gz = (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1 -
                          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b
                          [0]) / 0.25F;

        /* Sum: '<S557>/Add1' incorporates:
         *  Constant: '<S557>/Constant'
         *  Product: '<S557>/Divide'
         *  Sum: '<S557>/Add'
         */
        rtb_Switch_gr = rtb_Product_gz - (rtb_Product_gz + dxMin_Left) / 2.0;

        /* UnitDelay: '<S556>/Unit Delay' */
        rtb_Product_gz = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
          UnitDelay_DSTATE_jb;

        /* Product: '<S556>/Divide' incorporates:
         *  Constant: '<S556>/Constant'
         *  Delay: '<S556>/Delay'
         *  Delay: '<S556>/Delay1'
         *  Delay: '<S556>/Delay2'
         *  Delay: '<S556>/Delay3'
         *  Sum: '<S556>/Sum of Elements2'
         */
        rtb_Quotient_ed = ((((rtb_Product_gz +
                              AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                              Delay_DSTATE_og[0]) +
                             AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                             Delay1_DSTATE_o[0]) +
                            AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                            Delay2_DSTATE_g[0]) +
                           AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                           Delay3_DSTATE_c[0]) / 5.0F;

        /* Sum: '<S556>/Add' */
        rtb_Product_gz -= rtb_Quotient_ed;

        /* Product: '<S556>/Product' */
        rtb_Quotient_f = rtb_Product_gz * rtb_Product_gz;

        /* Sum: '<S556>/Add1' incorporates:
         *  Delay: '<S556>/Delay'
         */
        rtb_Product_gz = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_og
          [0] - rtb_Quotient_ed;

        /* Product: '<S556>/Product1' */
        rtb_Quotient_g = rtb_Product_gz * rtb_Product_gz;

        /* Sum: '<S556>/Add2' incorporates:
         *  Delay: '<S556>/Delay1'
         */
        rtb_Product_gz = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_o
          [0] - rtb_Quotient_ed;

        /* Product: '<S556>/Product2' */
        rtb_Add_cl = rtb_Product_gz * rtb_Product_gz;

        /* Sum: '<S556>/Add3' incorporates:
         *  Delay: '<S556>/Delay2'
         */
        rtb_Product_gz = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g
          [0] - rtb_Quotient_ed;

        /* Sum: '<S556>/Add4' incorporates:
         *  Delay: '<S556>/Delay3'
         */
        rtb_Quotient_ed = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr]
          .Delay3_DSTATE_c[0] - rtb_Quotient_ed;

        /* Sum: '<S551>/Add3' incorporates:
         *  Constant: '<S549>/Constant'
         *  Delay: '<S551>/Delay1'
         *  Product: '<S551>/Product1'
         *  Sum: '<S551>/Subtract'
         */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_j +=
          (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s -
           AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_j) *
          P_TA_ObjVxLowPassFactor;

        /* Switch: '<S549>/Switch' incorporates:
         *  Constant: '<S552>/Constant'
         *  Constant: '<S553>/Constant'
         *  Constant: '<S556>/Constant1'
         *  Constant: '<S557>/Constant1'
         *  Constant: '<S560>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         *  Inport: '<Root>/Fus_TargetBus'
         *  Logic: '<S550>/Logical Operator'
         *  Logic: '<S550>/Logical Operator1'
         *  MultiPortSwitch: '<S452>/Index Vector21'
         *  Product: '<S556>/Divide1'
         *  Product: '<S556>/Product3'
         *  Product: '<S556>/Product4'
         *  Product: '<S557>/Divide1'
         *  RelationalOperator: '<S552>/Compare'
         *  RelationalOperator: '<S553>/Compare'
         *  RelationalOperator: '<S557>/Relational Operator'
         *  RelationalOperator: '<S560>/Compare'
         *  Sum: '<S556>/Add5'
         */
        if (((((((rtb_Quotient_f + rtb_Quotient_g) + rtb_Add_cl) +
                rtb_Product_gz * rtb_Product_gz) + rtb_Quotient_ed *
               rtb_Quotient_ed) / 5.0F >= P_TA_ObjVxVarianceThredValue) ||
             (rtb_Switch_gr >= dxMin_Left * P_TA_ObjSpeedxbyVxandDxFactor) ||
             (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXSTD_s[ForEach_itr] >=
              P_TA_ObjVxSTDThredValue)) &&
            (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP == ((uint8_T)
              0U))) {
          /* Merge: '<S473>/Merge' incorporates:
           *  Delay: '<S551>/Delay1'
           *  SignalConversion: '<S547>/Signal Conversion'
           */
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge =
            AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_j;
        } else {
          /* Merge: '<S473>/Merge' incorporates:
           *  SignalConversion: '<S547>/Signal Conversion'
           */
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge =
            AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;
        }

        /* End of Switch: '<S549>/Switch' */
        /* End of Outputs for SubSystem: '<S473>/Subsystem3' */
      }

      /* End of If: '<S473>/If' */

      /* Sum: '<S591>/Add' */
      rtb_C2_i = rtb_RadiusRear_j;

      /* Chart: '<S463>/Stop_Memory' incorporates:
       *  Sqrt: '<S591>/Sqrt'
       */
      if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_active_c214_AEBS_TOS == 0U)
      {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_active_c214_AEBS_TOS = 1U;
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c214_AEBS_TOS =
          AEBS_TOS_IN_init;
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Spd_Stay = 0.0F;
      } else if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c214_AEBS_TOS == 1) {
        if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8 == 0) {
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c214_AEBS_TOS =
            AEBS_TOS_IN_init;
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Spd_Stay = 0.0F;
        }

        /* case IN_init: */
      } else if ((AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8 != 0) &&
                 rtb_LogicalOperator7) {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].is_c214_AEBS_TOS =
          AEBS_TOS_IN_Memory;
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Spd_Stay = sqrtf(rtb_C2_i);
      }

      /* MATLAB Function: '<S463>/State_Classify1' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector33'
       *  MultiPortSwitch: '<S452>/Index Vector5'
       */
      if (rtb_LogicalOperator5 || (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
           ObsID_u8 == 0)) {
        rtb_AccTgtIdn = 0U;
      } else if ((num > 0) && (num < 9)) {
        if (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionStatus_u8[ForEach_itr] == 1) {
          dxMin_Left = fabsf
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr]) + fabsf
            (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s);
          if (dxMin_Left > 2.5F) {
            rtb_AccTgtIdn = 1U;
          } else if ((dxMin_Left <= 0.9F) &&
                     (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Spd_Stay <= 0.5F)) {
            rtb_AccTgtIdn = 2U;
          } else if ((dxMin_Left <= 0.9F) &&
                     (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Spd_Stay > 0.5F)) {
            rtb_AccTgtIdn = 3U;
          } else if (dxMin_Left >= 0.9F) {
            if (dxMin_Left <= 2.5F) {
              rtb_AccTgtIdn = 4U;
            } else {
              rtb_AccTgtIdn = 0U;
            }
          } else {
            rtb_AccTgtIdn = 0U;
          }
        } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionStatus_u8[ForEach_itr]
                    >= 2) &&
                   (AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionStatus_u8[ForEach_itr]
                    <= 5)) {
          s647_iter =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsMotionStatus_u8[ForEach_itr];
          qY = s647_iter - 1U;
          if (s647_iter - 1U > (uint32_T)s647_iter) {
            qY = 0U;
          }

          rtb_AccTgtIdn = (uint8_T)qY;
        } else {
          rtb_AccTgtIdn = 0U;
        }
      } else {
        dxMin_Left = fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr])
          + fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s);
        if (dxMin_Left > 2.5F) {
          rtb_AccTgtIdn = 1U;
        } else if ((dxMin_Left <= 0.9F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr]
                    .Spd_Stay <= 0.5F)) {
          rtb_AccTgtIdn = 2U;
        } else if ((dxMin_Left <= 1.0F) && (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr]
                    .Spd_Stay > 0.5F)) {
          rtb_AccTgtIdn = 3U;
        } else if (dxMin_Left >= 0.9F) {
          if (dxMin_Left <= 2.5F) {
            rtb_AccTgtIdn = 4U;
          } else {
            rtb_AccTgtIdn = 0U;
          }
        } else {
          rtb_AccTgtIdn = 0U;
        }
      }

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' incorporates:
       *  MATLAB Function: '<S465>/ObjType_rebuild'
       */
      Meas_ObjType[ForEach_itr] = 0U;

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
       *  MATLAB Function: '<S465>/ObjType_rebuild'
       */
      Meas_ObjLength[ForEach_itr] = 0.0F;

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
       *  MATLAB Function: '<S465>/ObjType_rebuild'
       */
      Meas_ObjWidth[ForEach_itr] = 0.0F;

      /* MATLAB Function: '<S465>/ObjType_rebuild' incorporates:
       *  Constant: '<S465>/Constant'
       *  Constant: '<S465>/Constant14'
       *  Constant: '<S465>/Constant15'
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector13'
       *  MultiPortSwitch: '<S452>/Index Vector14'
       *  MultiPortSwitch: '<S452>/Index Vector33'
       */
      if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8 == 0) {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
        Meas_ObjType[ForEach_itr] = 0U;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' */
        Meas_ObjLength[ForEach_itr] = 0.0F;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' */
        Meas_ObjWidth[ForEach_itr] = 0.0F;
      } else if (num == 13) {
        if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr] != 0.0F) &&
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr] != 0.0F)) {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 0U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' */
          Meas_ObjLength[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' */
          Meas_ObjWidth[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
        } else {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 0U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' */
          Meas_ObjLength[ForEach_itr] = 0.0F;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' */
          Meas_ObjWidth[ForEach_itr] = 0.0F;
        }
      } else if ((num == 1) || (num == 3) || (num == 5) || (num == 7)) {
        if (num == 1) {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 1U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector13'
           */
          Meas_ObjLength[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector14'
           */
          Meas_ObjWidth[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
        } else if ((num == 3) || ((num == 5) &&
                    (AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr] >
                     P_TA_ObjTruckLengthPara))) {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 3U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector13'
           */
          Meas_ObjLength[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector14'
           */
          Meas_ObjWidth[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
        } else if ((num == 7) || ((num == 5) &&
                    (AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr] <
                     P_TA_ObjTruckLengthPara))) {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 3U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector13'
           */
          Meas_ObjLength[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector14'
           */
          Meas_ObjWidth[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
        } else {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 0U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector13'
           */
          Meas_ObjLength[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector14'
           */
          Meas_ObjWidth[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
        }
      } else if ((num == 2) || (num == 4) || (num == 6) || (num == 8)) {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
        Meas_ObjType[ForEach_itr] = 2U;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S452>/Index Vector13'
         */
        Meas_ObjLength[ForEach_itr] =
          AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S452>/Index Vector14'
         */
        Meas_ObjWidth[ForEach_itr] =
          AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
      } else if ((num == 9) || (num == 10) || (num == 11) || (num == 12)) {
        if (((num == 11) || (num == 12)) &&
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
             P_TA_ObjPedestrainSpdThd)) {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 5U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
           *  MultiPortSwitch: '<S452>/Index Vector13'
           */
          Meas_ObjLength[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
           *  MultiPortSwitch: '<S452>/Index Vector14'
           */
          Meas_ObjWidth[ForEach_itr] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
        } else if (((num == 11) || (num == 12)) &&
                   (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] <
                    P_TA_ObjPedestrainSpdThd)) {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
          Meas_ObjType[ForEach_itr] = 6U;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' */
          Meas_ObjLength[ForEach_itr] = 0.5F;

          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' */
          Meas_ObjWidth[ForEach_itr] = 0.5F;
        } else {
          switch (num) {
           case 9:
            if (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >=
                P_TA_ObjMotorVehSpdThd) {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
              Meas_ObjType[ForEach_itr] = 4U;

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
               *  MultiPortSwitch: '<S452>/Index Vector13'
               */
              Meas_ObjLength[ForEach_itr] =
                AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
               *  MultiPortSwitch: '<S452>/Index Vector14'
               */
              Meas_ObjWidth[ForEach_itr] =
                AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
            } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] <
                        P_TA_ObjMotorVehSpdThd) &&
                       (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr] >
                        P_TA_ObjPedestrainSpdThd)) {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
              Meas_ObjType[ForEach_itr] = 5U;

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
               *  MultiPortSwitch: '<S452>/Index Vector13'
               */
              Meas_ObjLength[ForEach_itr] =
                AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
               *  MultiPortSwitch: '<S452>/Index Vector14'
               */
              Meas_ObjWidth[ForEach_itr] =
                AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
            } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr] >
                        1.0F) ||
                       (AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr] >
                        1.0F)) {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
              Meas_ObjType[ForEach_itr] = 4U;

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
               *  MultiPortSwitch: '<S452>/Index Vector13'
               */
              Meas_ObjLength[ForEach_itr] =
                AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
               *  MultiPortSwitch: '<S452>/Index Vector14'
               */
              Meas_ObjWidth[ForEach_itr] =
                AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
            } else {
              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
              Meas_ObjType[ForEach_itr] = 6U;

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' */
              Meas_ObjLength[ForEach_itr] = 0.5F;

              /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' */
              Meas_ObjWidth[ForEach_itr] = 0.5F;
            }
            break;

           case 10:
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
            Meas_ObjType[ForEach_itr] = 5U;

            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
             *  MultiPortSwitch: '<S452>/Index Vector13'
             */
            Meas_ObjLength[ForEach_itr] =
              AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
             *  MultiPortSwitch: '<S452>/Index Vector14'
             */
            Meas_ObjWidth[ForEach_itr] =
              AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
            break;
          }
        }
      } else {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjType' */
        Meas_ObjType[ForEach_itr] = 0U;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjLength' incorporates:
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S452>/Index Vector13'
         */
        Meas_ObjLength[ForEach_itr] =
          AEBS_TOS_U.Fus_TargetBus.Cam_ObsLength_s[ForEach_itr];

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjWidth' incorporates:
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S452>/Index Vector14'
         */
        Meas_ObjWidth[ForEach_itr] =
          AEBS_TOS_U.Fus_TargetBus.Cam_ObsWidth_s[ForEach_itr];
      }

      /* Switch: '<S562>/Switch' incorporates:
       *  Constant: '<S562>/Constant'
       *  Constant: '<S562>/Constant1'
       *  Constant: '<S564>/Constant'
       *  RelationalOperator: '<S564>/Compare'
       */
      if (P_TA_ObjAddAttrCalValue) {
        rtb_Valid_g = (temp_ID > ((uint8_T)0U));
      } else {
        rtb_Valid_g = true;
      }

      /* End of Switch: '<S562>/Switch' */

      /* DataTypeConversion: '<S562>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_i = rtb_Valid_g;

      /* If: '<S474>/If' */
      if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_i > 0.0) {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_c = 0;

        /* Outputs for IfAction SubSystem: '<S474>/If Action Subsystem' incorporates:
         *  ActionPort: '<S561>/Action Port'
         */
        /* Merge: '<S474>/Merge' incorporates:
         *  SignalConversion: '<S561>/Signal Conversion'
         */
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* End of Outputs for SubSystem: '<S474>/If Action Subsystem' */
      } else {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_c = 1;

        /* Outputs for IfAction SubSystem: '<S474>/Subsystem3' incorporates:
         *  ActionPort: '<S563>/Action Port'
         */
        /* Sum: '<S567>/Add3' incorporates:
         *  Constant: '<S565>/Constant'
         *  Delay: '<S567>/Delay1'
         *  Product: '<S567>/Product1'
         *  Sum: '<S567>/Subtract'
         */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_c +=
          (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s -
           AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_c) *
          P_TA_ObjVyLowPassFactor;

        /* UnitDelay: '<S573>/Unit Delay' */
        rtb_Quotient_ed = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
          UnitDelay_DSTATE_jn;

        /* Product: '<S573>/Divide' incorporates:
         *  Constant: '<S573>/Constant'
         *  Delay: '<S573>/Delay'
         *  Delay: '<S573>/Delay1'
         *  Delay: '<S573>/Delay2'
         *  Delay: '<S573>/Delay3'
         *  Sum: '<S573>/Sum of Elements2'
         */
        dxMin_Left = ((((rtb_Quotient_ed + AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr]
                         .Delay_DSTATE_h[0]) +
                        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_nl
                        [0]) + AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
                       Delay2_DSTATE_e[0]) +
                      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[0])
          / 5.0F;

        /* Sum: '<S573>/Add' */
        rtb_Quotient_ed -= dxMin_Left;

        /* Product: '<S573>/Product' */
        rtb_RadiusRear_j = rtb_Quotient_ed * rtb_Quotient_ed;

        /* Sum: '<S573>/Add1' incorporates:
         *  Delay: '<S573>/Delay'
         */
        rtb_Quotient_ed = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_h
          [0] - dxMin_Left;

        /* Product: '<S573>/Product1' */
        rtb_Product_gz = rtb_Quotient_ed * rtb_Quotient_ed;

        /* Sum: '<S573>/Add2' incorporates:
         *  Delay: '<S573>/Delay1'
         */
        rtb_Quotient_ed = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
          Delay1_DSTATE_nl[0] - dxMin_Left;

        /* Product: '<S573>/Product2' */
        rtb_Quotient_f = rtb_Quotient_ed * rtb_Quotient_ed;

        /* Sum: '<S573>/Add3' incorporates:
         *  Delay: '<S573>/Delay2'
         */
        rtb_Quotient_ed = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr]
          .Delay2_DSTATE_e[0] - dxMin_Left;

        /* Sum: '<S573>/Add4' incorporates:
         *  Delay: '<S573>/Delay3'
         */
        dxMin_Left = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[0]
          - dxMin_Left;

        /* Switch: '<S565>/Switch2' incorporates:
         *  Abs: '<S572>/Abs'
         *  Constant: '<S568>/Constant'
         *  Constant: '<S569>/Constant'
         *  Constant: '<S573>/Constant1'
         *  Constant: '<S574>/Constant2'
         *  Constant: '<S577>/Constant'
         *  Constant: '<S578>/Constant'
         *  Constant: '<S579>/Constant'
         *  Constant: '<S580>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         *  Inport: '<Root>/Fus_TargetBus'
         *  Logic: '<S566>/Logical Operator'
         *  Logic: '<S566>/Logical Operator1'
         *  Logic: '<S572>/Logical Operator'
         *  Logic: '<S572>/Logical Operator1'
         *  MATLAB Function: '<S463>/State_Classify1'
         *  MultiPortSwitch: '<S452>/Index Vector22'
         *  Product: '<S573>/Divide1'
         *  Product: '<S573>/Product3'
         *  Product: '<S573>/Product4'
         *  RelationalOperator: '<S568>/Compare'
         *  RelationalOperator: '<S569>/Compare'
         *  RelationalOperator: '<S577>/Compare'
         *  RelationalOperator: '<S578>/Compare'
         *  RelationalOperator: '<S579>/Compare'
         *  RelationalOperator: '<S580>/Compare'
         *  Sum: '<S573>/Add5'
         *  Switch: '<S565>/Switch'
         */
        if (((rtb_AccTgtIdn == ((uint8_T)2U)) || (rtb_AccTgtIdn == ((uint8_T)3U)))
            && (fabsf(AEBS_TOS_U.Extension_input_Bus_j.YawRate) <= 0.02F)) {
          /* Merge: '<S474>/Merge' incorporates:
           *  Constant: '<S565>/Constant1'
           */
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c = 0.0F;
        } else if (((((((rtb_RadiusRear_j + rtb_Product_gz) + rtb_Quotient_f) +
                       rtb_Quotient_ed * rtb_Quotient_ed) + dxMin_Left *
                      dxMin_Left) / 5.0F >= P_TA_ObjVyVarianceThredValue) ||
                    false ||
                    (AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelYSTD_s[ForEach_itr] >=
                     P_TA_ObjVySTDThredValue)) &&
                   (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP ==
                    ((uint8_T)1U))) {
          /* Switch: '<S565>/Switch' incorporates:
           *  Delay: '<S567>/Delay1'
           *  Merge: '<S474>/Merge'
           */
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c =
            AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_c;
        } else {
          /* Merge: '<S474>/Merge' incorporates:
           *  Switch: '<S565>/Switch'
           */
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c =
            AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;
        }

        /* End of Switch: '<S565>/Switch2' */
        /* End of Outputs for SubSystem: '<S474>/Subsystem3' */
      }

      /* End of If: '<S474>/If' */

      /* Switch: '<S504>/Switch' incorporates:
       *  Constant: '<S504>/Constant'
       *  Constant: '<S504>/Constant1'
       *  Constant: '<S507>/Constant'
       *  RelationalOperator: '<S507>/Compare'
       */
      if (P_TA_ObjAddAttrCalValue) {
        rtb_Valid_g = (temp_ID > ((uint8_T)0U));
      } else {
        rtb_Valid_g = true;
      }

      /* End of Switch: '<S504>/Switch' */

      /* DataTypeConversion: '<S504>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_j = rtb_Valid_g;

      /* If: '<S469>/If' */
      if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_j > 0.0) {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_m = 0;

        /* Outputs for IfAction SubSystem: '<S469>/dy_nocharge' incorporates:
         *  ActionPort: '<S506>/Action Port'
         */
        /* SignalConversion: '<S506>/Signal Conversion' */
        rtb_C2_i = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

        /* End of Outputs for SubSystem: '<S469>/dy_nocharge' */
      } else {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_m = 1;

        /* Outputs for IfAction SubSystem: '<S469>/dy_charge' incorporates:
         *  ActionPort: '<S505>/Action Port'
         */
        /* Sum: '<S519>/Add3' incorporates:
         *  Constant: '<S509>/Constant'
         *  Delay: '<S519>/Delay1'
         *  Product: '<S519>/Product1'
         *  Sum: '<S519>/Subtract'
         */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_gt +=
          (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s -
           AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_gt) *
          P_TA_ObjDyLowPassFactor;

        /* Switch: '<S509>/Switch' incorporates:
         *  Constant: '<S509>/Constant1'
         */
        if (false) {
          /* SignalConversion: '<S505>/Signal Conversion' incorporates:
           *  Delay: '<S519>/Delay1'
           */
          rtb_C2_i = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_gt;
        } else {
          /* SignalConversion: '<S505>/Signal Conversion' */
          rtb_C2_i = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;
        }

        /* End of Switch: '<S509>/Switch' */
        /* End of Outputs for SubSystem: '<S469>/dy_charge' */
      }

      /* End of If: '<S469>/If' */

      /* Switch: '<S457>/Switch' incorporates:
       *  Constant: '<S457>/Constant'
       */
      if (P_TA_MotionDataLowPassFilter != 0.0) {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjDy' */
        Meas_ObjDy[ForEach_itr] = rtb_C2_i;
      } else {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjDy' */
        Meas_ObjDy[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
          ObsPosY_s;
      }

      /* End of Switch: '<S457>/Switch' */

      /* Switch: '<S522>/Switch' incorporates:
       *  Constant: '<S522>/Constant'
       *  Constant: '<S522>/Constant1'
       *  Constant: '<S532>/Constant'
       *  RelationalOperator: '<S532>/Compare'
       */
      if (P_TA_ObjAddAttrCalValue) {
        rtb_Valid_g = (temp_ID > ((uint8_T)0U));
      } else {
        rtb_Valid_g = true;
      }

      /* End of Switch: '<S522>/Switch' */

      /* DataTypeConversion: '<S522>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_h = rtb_Valid_g;

      /* If: '<S470>/If1' */
      if (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].DataTypeConversion_h > 0.0) {
        /* Outputs for IfAction SubSystem: '<S470>/If Action Subsystem' incorporates:
         *  ActionPort: '<S520>/Action Port'
         */
        /* SignalConversion generated from: '<S520>/Fus_ObjHeadAngle' incorporates:
         *  Constant: '<S520>/Constant'
         */
        rtb_C2_i = 0.0F;

        /* End of Outputs for SubSystem: '<S470>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S470>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S521>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S521>/HeadAngle_c' */
        /* Sum: '<S529>/Subtract_2' incorporates:
         *  Constant: '<S528>/Constant'
         *  Math: '<S529>/Modulus'
         *  Sum: '<S529>/Subtract_1'
         *  Trigonometry: '<S528>/Atan2'
         */
        dxMin_Left = (real32_T)(1.5707963267948966 - rt_modf_snf((real32_T)
          (1.5707963267948966 - rt_atan2f_snf
           (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge,
            AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c)),
          AEBS_TOS_ConstB.CoreSubsys_pn.Gain_1));

        /* Sum: '<S527>/Add3' incorporates:
         *  Constant: '<S523>/Constant'
         *  Constant: '<S523>/Constant1'
         *  Delay: '<S527>/Delay1'
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S452>/Index Vector54'
         *  Product: '<S523>/Product'
         *  Product: '<S527>/Product1'
         *  Sum: '<S523>/Add1'
         *  Sum: '<S527>/Subtract'
         */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_ax += ((dxMin_Left
          + AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr]) * 0.5F -
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_ax) *
          P_TA_ObjHeadAngleLowPassFactor;

        /* Switch: '<S523>/Switch1' incorporates:
         *  Constant: '<S523>/Constant2'
         *  Constant: '<S525>/Constant'
         *  Constant: '<S526>/Constant'
         *  Constant: '<S530>/Constant'
         *  Constant: '<S531>/Constant'
         *  Delay: '<S527>/Delay1'
         *  Inport: '<Root>/Fus_TargetBus'
         *  Logic: '<S523>/Logical Operator'
         *  Logic: '<S524>/Logical Operator'
         *  MultiPortSwitch: '<S452>/Index Vector32'
         *  MultiPortSwitch: '<S452>/Index Vector54'
         *  RelationalOperator: '<S525>/Compare'
         *  RelationalOperator: '<S526>/Compare'
         *  RelationalOperator: '<S530>/Compare'
         *  RelationalOperator: '<S531>/Compare'
         *  Sum: '<S523>/Add'
         *  Switch: '<S523>/Switch'
         */
        if ((num < ((uint8_T)1U)) || (num > ((uint8_T)10U))) {
          rtb_C2_i = 0.0F;
        } else if ((AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngleSTD_s[ForEach_itr] <
                    P_TA_ObjHeadAngleSTDThredValue) &&
                   (AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr] -
                    dxMin_Left < P_TA_ObjHeadAngleDiffThred)) {
          /* Switch: '<S523>/Switch' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S452>/Index Vector54'
           */
          rtb_C2_i = AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr];
        } else {
          rtb_C2_i = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_ax;
        }

        /* End of Switch: '<S523>/Switch1' */
        /* End of Outputs for SubSystem: '<S521>/HeadAngle_c' */
        /* End of Outputs for SubSystem: '<S470>/If Action Subsystem1' */
      }

      /* End of If: '<S470>/If1' */

      /* Sum: '<S479>/Add1' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       */
      dxMin_Left = rtb_Switch_aq - AEBS_TOS_U.Extension_input_Bus_j.AX1;

      /* Sum: '<S487>/Add3' incorporates:
       *  Constant: '<S483>/Constant4'
       *  Delay: '<S487>/Delay1'
       *  Product: '<S487>/Product1'
       *  Sum: '<S487>/Subtract'
       */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE += (dxMin_Left -
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE) *
        P_TA_ObjAxLowPassFactor;

      /* RelationalOperator: '<S480>/Compare' incorporates:
       *  Constant: '<S480>/Constant'
       *  Inport: '<Root>/Extension_input_Bus'
       */
      rtb_LogicalOperator5 =
        (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP == ((uint8_T)0U));

      /* Switch: '<S457>/Switch15' incorporates:
       *  Constant: '<S457>/Constant15'
       *  Switch: '<S457>/Switch5'
       */
      if (P_TA_MotionDataLowPassFilter != 0.0) {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjHeadAngle' */
        Meas_ObjHeadAngle[ForEach_itr] = rtb_C2_i;

        /* Switch: '<S479>/Switch2' */
        if (rtb_LogicalOperator5) {
          /* Switch: '<S479>/Switch4' incorporates:
           *  Constant: '<S479>/Constant3'
           *  Constant: '<S483>/Constant'
           *  Constant: '<S486>/Constant'
           *  Delay: '<S483>/Delay'
           *  Product: '<S483>/Divide'
           *  RelationalOperator: '<S486>/Compare'
           *  Sum: '<S483>/Add'
           *  Sum: '<S483>/Add2'
           *  Switch: '<S479>/Switch1'
           *  Switch: '<S483>/Switch'
           */
          if (temp_ID != 0) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAx' */
            Meas_ObjAx[ForEach_itr] = dxMin_Left;
          } else if (P_TA_ObjAccCalculateCalebration) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAx' incorporates:
             *  Switch: '<S479>/Switch1'
             */
            Meas_ObjAx[ForEach_itr] = dxMin_Left;
          } else if (dxMin_Left - (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge +
                      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_m[0]) /
                     0.04F >= 2.0F) {
            /* Switch: '<S483>/Switch' incorporates:
             *  Delay: '<S487>/Delay1'
             *  ForEachSliceAssignment generated from: '<S450>/Fus_ObjAx'
             *  Switch: '<S479>/Switch1'
             */
            Meas_ObjAx[ForEach_itr] = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
              Delay1_DSTATE;
          } else {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAx' incorporates:
             *  Switch: '<S479>/Switch1'
             *  Switch: '<S483>/Switch'
             */
            Meas_ObjAx[ForEach_itr] = dxMin_Left;
          }

          /* End of Switch: '<S479>/Switch4' */
        } else {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAx' incorporates:
           *  Constant: '<S479>/Constant'
           */
          Meas_ObjAx[ForEach_itr] = 0.0F;
        }

        /* End of Switch: '<S479>/Switch2' */
      } else {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjHeadAngle' incorporates:
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S452>/Index Vector54'
         */
        Meas_ObjHeadAngle[ForEach_itr] =
          AEBS_TOS_U.Fus_TargetBus.Cam_ObsAngle_s[ForEach_itr];

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAx' */
        Meas_ObjAx[ForEach_itr] = rtb_C1_e;
      }

      /* End of Switch: '<S457>/Switch15' */

      /* Delay: '<S481>/Delay1' */
      rtb_C2_i = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_p;

      /* Sum: '<S481>/Subtract' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       */
      rtb_C3_b = AEBS_TOS_U.Extension_input_Bus_j.AY1 - rtb_C2_i;

      /* Sum: '<S481>/Add3' incorporates:
       *  Constant: '<S479>/Constant4'
       *  Delay: '<S481>/Delay1'
       *  Product: '<S481>/Product1'
       */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_p = 0.2F * rtb_C3_b +
        rtb_C2_i;

      /* Sum: '<S479>/Add' incorporates:
       *  Delay: '<S481>/Delay1'
       */
      dxMin_Left = rtb_C1_e - AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
        Delay1_DSTATE_p;

      /* Sum: '<S485>/Add3' incorporates:
       *  Constant: '<S482>/Constant4'
       *  Delay: '<S485>/Delay1'
       *  Product: '<S485>/Product1'
       *  Sum: '<S485>/Subtract'
       */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_b += (dxMin_Left -
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_b) *
        P_TA_ObjAyLowPassFactor;

      /* Switch: '<S457>/Switch4' incorporates:
       *  Constant: '<S457>/Constant4'
       *  Switch: '<S457>/Switch2'
       *  Switch: '<S457>/Switch3'
       */
      if (P_TA_MotionDataLowPassFilter != 0.0) {
        /* Switch: '<S479>/Switch3' */
        if (rtb_LogicalOperator5) {
          /* Switch: '<S479>/Switch5' incorporates:
           *  Constant: '<S479>/Constant2'
           *  Constant: '<S482>/Constant'
           *  Constant: '<S484>/Constant'
           *  Delay: '<S482>/Delay'
           *  Product: '<S482>/Divide'
           *  RelationalOperator: '<S484>/Compare'
           *  Sum: '<S482>/Add'
           *  Sum: '<S482>/Add2'
           *  Switch: '<S479>/Switch'
           *  Switch: '<S482>/Switch'
           */
          if (temp_ID != 0) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAy' */
            Meas_ObjAy[ForEach_itr] = dxMin_Left;
          } else if (P_TA_ObjAccCalculateCalebration) {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAy' incorporates:
             *  Switch: '<S479>/Switch'
             */
            Meas_ObjAy[ForEach_itr] = dxMin_Left;
          } else if (dxMin_Left - (AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c
                      + AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_c[0])
                     / 0.04F >= 2.0F) {
            /* Switch: '<S482>/Switch' incorporates:
             *  Delay: '<S485>/Delay1'
             *  ForEachSliceAssignment generated from: '<S450>/Fus_ObjAy'
             *  Switch: '<S479>/Switch'
             */
            Meas_ObjAy[ForEach_itr] = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].
              Delay1_DSTATE_b;
          } else {
            /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAy' incorporates:
             *  Switch: '<S479>/Switch'
             *  Switch: '<S482>/Switch'
             */
            Meas_ObjAy[ForEach_itr] = dxMin_Left;
          }

          /* End of Switch: '<S479>/Switch5' */
        } else {
          /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAy' incorporates:
           *  Constant: '<S479>/Constant1'
           */
          Meas_ObjAy[ForEach_itr] = 0.0F;
        }

        /* End of Switch: '<S479>/Switch3' */

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjVy' */
        Meas_ObjVy[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjVx' */
        Meas_ObjVx[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge;
      } else {
        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjAy' */
        Meas_ObjAy[ForEach_itr] = rtb_Switch_aq;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjVy' */
        Meas_ObjVy[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
          ObsVelY_s;

        /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjVx' */
        Meas_ObjVx[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
          ObsVelX_s;
      }

      /* End of Switch: '<S457>/Switch4' */

      /* Switch: '<S10>/Switch' incorporates:
       *  Abs: '<S590>/Abs'
       */
      rtb_Switch_aq = fabsf(AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s);

      /* UnitDelay: '<S590>/Unit Delay' */
      rtb_C1_e = AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].UnitDelay_DSTATE;

      /* Abs: '<S590>/Abs1' */
      rtb_C1_e = fabsf(rtb_C1_e);

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjState' incorporates:
       *  MATLAB Function: '<S463>/State_Classify1'
       */
      Meas_ObjState[ForEach_itr] = rtb_AccTgtIdn;

      /* ForEachSliceAssignment generated from: '<S450>/Fus_dySTD' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector20'
       */
      Meas_ObjDyStd[ForEach_itr] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosYSTD_s[ForEach_itr];

      /* ForEachSliceAssignment generated from: '<S450>/Fus_VelxSTD' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector21'
       */
      Meas_ObjVxStd[ForEach_itr] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXSTD_s[ForEach_itr];

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjVyAbs' incorporates:
       *  Switch: '<S457>/Switch13'
       */
      Meas_ObjVyabs[ForEach_itr] = AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].
        ObsVelYAbs_s;

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjVxAbs' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector33'
       */
      Meas_ObjVxabs[ForEach_itr] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelXAbs_s[ForEach_itr];

      /* ForEachSliceAssignment generated from: '<S450>/Fus_ObjQuality' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S452>/Index Vector3'
       */
      Meas_ObjConfidence[ForEach_itr] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsConfidence_u8[ForEach_itr];
    }

    /* End of Outputs for SubSystem: '<S449>/For Each Subsystem' */
    /* End of Outputs for SubSystem: '<S445>/TAObjInfoCalc' */

    /* Outputs for Iterator SubSystem: '<S28>/Data_precess' incorporates:
     *  ForEach: '<S30>/For Each'
     */
    /* Outputs for IfAction SubSystem: '<S145>/CalculateTTRAndTTM_else' incorporates:
     *  ActionPort: '<S208>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S351>/SafeDivide' */
    /* Outputs for Atomic SubSystem: '<S597>/SafeDivide' */
    /* If: '<S145>/If' incorporates:
     *  Inport: '<Root>/Extension_input_Bus'
     *  MATLAB Function: '<S357>/SafeDivide'
     *  MATLAB Function: '<S601>/SafeDivide'
     */
    dxMin_Left = fabsf(AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed);

    /* End of Outputs for SubSystem: '<S351>/SafeDivide' */
    /* End of Outputs for SubSystem: '<S145>/CalculateTTRAndTTM_else' */
    /* End of Outputs for SubSystem: '<S28>/Data_precess' */

    /* MATLAB Function: '<S601>/SafeDivide' incorporates:
     *  Inport: '<Root>/Extension_input_Bus'
     */
    if (dxMin_Left > fabsf(AEBS_TOS_U.Extension_input_Bus_j.YawRate) *
        5.42101151E-20F) {
      rtb_Quotient_ed = AEBS_TOS_U.Extension_input_Bus_j.YawRate /
        AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
    } else if (AEBS_TOS_U.Extension_input_Bus_j.YawRate > 0.0F) {
      rtb_Quotient_ed = AEBS_TOS_DataTypeMax;
    } else if (AEBS_TOS_U.Extension_input_Bus_j.YawRate < 0.0F) {
      rtb_Quotient_ed = AEBS_TOS_DataTypeMin;
    } else {
      rtb_Quotient_ed = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S597>/SafeDivide' */

    /* Lookup_n-D: '<S597>/LookUpWeightFactor' incorporates:
     *  Inport: '<Root>/Extension_input_Bus'
     */
    rtb_C1 = look1_iflf_binlagpw
      (AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed,
       P_DM_DrvVLgtForCrvtTable, P_DM_DrvCrvtCalcWeightFactor, 1U);

    /* Saturate: '<S605>/Saturation'
     *
     * Block description for '<S605>/Saturation':
     *  _3p3p4p5.ACC.000_21_
     */
    if (rtb_C1 > 1.0F) {
      /* Saturate: '<S606>/Saturation'
       *
       * Block description for '<S606>/Saturation':
       *  _3p3p4p5.ACC.000_21_
       */
      rtb_C1 = 1.0F;
    } else if (rtb_C1 < 0.0F) {
      /* Saturate: '<S606>/Saturation'
       *
       * Block description for '<S606>/Saturation':
       *  _3p3p4p5.ACC.000_21_
       */
      rtb_C1 = 0.0F;
    }

    rtb_C0 = rtb_C1;

    /* End of Saturate: '<S605>/Saturation' */

    /* Product: '<S605>/Product'
     *
     * Block description for '<S605>/Product':
     *  _3p3p4p5.ACC.000_19_
     */
    rtb_Product_gz = rtb_Quotient_ed * rtb_C0;

    /* Sum: '<S605>/Add' incorporates:
     *  Constant: '<S605>/Constant'
     *
     * Block description for '<S605>/Add':
     *  _3p3p4p5.ACC.000_11_
     *
     * Block description for '<S605>/Constant':
     *  _3p3p4p5.ACC.000_13_
     */
    rtb_Add_cl = 1.0F - rtb_C0;

    /* Sum: '<S613>/Sum2' incorporates:
     *  Constant: '<S613>/Constant'
     *  Constant: '<S613>/Constant1'
     *  Sum: '<S632>/Sum2'
     */
    rtb_RadiusRear_j = P_TA_PrmForVehWhlBase -
      P_TA_PrmForVehBicycleMdlAxleDistFrnt;

    /* Switch: '<S618>/Switch' incorporates:
     *  Constant: '<S611>/Constant2'
     *  Product: '<S618>/Divide'
     *  Rounding: '<S618>/Rounding Function'
     *  Sum: '<S613>/Sum2'
     */
    if (P_TA_PrmForVehBicycleMdlCornrgStfnFrnt != 0.0F) {
      rtb_C0 = rtb_RadiusRear_j / P_TA_PrmForVehBicycleMdlCornrgStfnFrnt;
    } else {
      rtb_C0 = truncf(rtb_RadiusRear_j);
    }

    /* End of Switch: '<S618>/Switch' */

    /* Switch: '<S619>/Switch' incorporates:
     *  Constant: '<S611>/Constant3'
     *  Constant: '<S613>/Constant1'
     *  Product: '<S619>/Divide'
     *  Rounding: '<S619>/Rounding Function'
     */
    if (P_TA_PrmForVehBicycleMdlCornrgStfnRe != 0.0F) {
      rtb_C3_b = P_TA_PrmForVehBicycleMdlAxleDistFrnt /
        P_TA_PrmForVehBicycleMdlCornrgStfnRe;
    } else {
      rtb_C3_b = truncf(P_TA_PrmForVehBicycleMdlAxleDistFrnt);
    }

    /* End of Switch: '<S619>/Switch' */

    /* Outputs for Iterator SubSystem: '<S28>/Data_precess' incorporates:
     *  ForEach: '<S30>/For Each'
     */
    /* Outputs for IfAction SubSystem: '<S38>/Lat_Objelse' incorporates:
     *  ActionPort: '<S108>/Action Port'
     */
    /* If: '<S38>/If' incorporates:
     *  Inport: '<Root>/Extension_input_Bus'
     *  Product: '<S114>/Product'
     *  Product: '<S616>/Multiply_1'
     */
    rtb_Quotient_ed = AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed *
      AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;

    /* End of Outputs for SubSystem: '<S38>/Lat_Objelse' */
    /* End of Outputs for SubSystem: '<S28>/Data_precess' */

    /* Product: '<S616>/Multiply_1' incorporates:
     *  Constant: '<S616>/Constant'
     *  Product: '<S635>/Multiply_1'
     */
    rtb_Quotient_g = rtb_Quotient_ed * P_TA_PrmForVehWholeWeight;

    /* Outputs for Atomic SubSystem: '<S635>/SafeDivide' */
    /* Outputs for Atomic SubSystem: '<S616>/SafeDivide' */
    /* MATLAB Function: '<S628>/SafeDivide' incorporates:
     *  Constant: '<S616>/Constant1'
     *  MATLAB Function: '<S645>/SafeDivide'
     *  Product: '<S616>/Multiply_1'
     */
    rtb_ARelStationaryObject = fabsf(P_TA_PrmForVehWhlBase);
    rtb_Product14_h = fabsf(rtb_Quotient_g) * 5.42101151E-20F;

    /* End of Outputs for SubSystem: '<S635>/SafeDivide' */
    if (rtb_ARelStationaryObject > rtb_Product14_h) {
      rtb_Quotient_e4 = rtb_Quotient_g / P_TA_PrmForVehWhlBase;
    } else if (rtb_Quotient_g > 0.0F) {
      rtb_Quotient_e4 = AEBS_TOS_DataTypeMax;
    } else if (rtb_Quotient_g < 0.0F) {
      rtb_Quotient_e4 = AEBS_TOS_DataTypeMin;
    } else {
      rtb_Quotient_e4 = 0.0F;
    }

    /* End of MATLAB Function: '<S628>/SafeDivide' */
    /* End of Outputs for SubSystem: '<S616>/SafeDivide' */

    /* Sum: '<S611>/Sum1' incorporates:
     *  Constant: '<S611>/Constant'
     *  Product: '<S611>/Divide2'
     *  Sum: '<S611>/Sum2'
     */
    rtb_Sum1_p = (rtb_C0 - rtb_C3_b) * rtb_Quotient_e4 + P_TA_PrmForVehWhlBase;

    /* Outputs for Atomic SubSystem: '<S634>/SafeDivide' */
    /* Outputs for Atomic SubSystem: '<S615>/SafeDivide' */
    /* MATLAB Function: '<S626>/SafeDivide' incorporates:
     *  Constant: '<S615>/Constant'
     *  Inport: '<Root>/Extension_input_Bus'
     *  MATLAB Function: '<S643>/SafeDivide'
     */
    rtb_Quotient_f = fabsf(P_TA_PrmForVehSteerWhlAgRat);

    /* End of Outputs for SubSystem: '<S634>/SafeDivide' */
    if (rtb_Quotient_f > fabsf
        (AEBS_TOS_U.Extension_input_Bus_j.SAS_SteeringWheelAngle) *
        5.42101151E-20F) {
      rtb_Quotient_dg = AEBS_TOS_U.Extension_input_Bus_j.SAS_SteeringWheelAngle /
        P_TA_PrmForVehSteerWhlAgRat;
    } else if (AEBS_TOS_U.Extension_input_Bus_j.SAS_SteeringWheelAngle > 0.0F) {
      rtb_Quotient_dg = AEBS_TOS_DataTypeMax;
    } else if (AEBS_TOS_U.Extension_input_Bus_j.SAS_SteeringWheelAngle < 0.0F) {
      rtb_Quotient_dg = AEBS_TOS_DataTypeMin;
    } else {
      rtb_Quotient_dg = 0.0F;
    }

    /* End of MATLAB Function: '<S626>/SafeDivide' */
    /* End of Outputs for SubSystem: '<S615>/SafeDivide' */

    /* Switch: '<S620>/Switch' incorporates:
     *  Product: '<S620>/Divide'
     *  Rounding: '<S620>/Rounding Function'
     */
    if (rtb_Sum1_p != 0.0F) {
      rtb_C3_b = rtb_Quotient_dg / rtb_Sum1_p;
    } else {
      rtb_C3_b = truncf(rtb_Quotient_dg);
    }

    /* End of Switch: '<S620>/Switch' */

    /* Switch: '<S625>/Switch' incorporates:
     *  Constant: '<S613>/Constant1'
     *  Constant: '<S614>/Constant3'
     *  Product: '<S625>/Divide'
     *  Rounding: '<S625>/Rounding Function'
     */
    if (P_TA_PrmForVehBicycleMdlCornrgStfnRe != 0.0F) {
      rtb_C0 = P_TA_PrmForVehBicycleMdlAxleDistFrnt /
        P_TA_PrmForVehBicycleMdlCornrgStfnRe;
    } else {
      rtb_C0 = truncf(P_TA_PrmForVehBicycleMdlAxleDistFrnt);
    }

    /* End of Switch: '<S625>/Switch' */

    /* Product: '<S614>/Multiply_3' incorporates:
     *  Product: '<S614>/Multiply_1'
     *  Sum: '<S613>/Sum2'
     *  Sum: '<S614>/Sum3'
     */
    rtb_C0 = (rtb_RadiusRear_j - rtb_Quotient_e4 * rtb_C0) * rtb_C3_b;

    /* Switch: '<S617>/Switch1' incorporates:
     *  Constant: '<S617>/Constant'
     *  Constant: '<S622>/Constant'
     *  RelationalOperator: '<S622>/Compare'
     */
    if (rtb_C3_b < 1.0E-6F) {
      rtb_C3_b = 1.0E-6F;
    }

    /* End of Switch: '<S617>/Switch1' */

    /* Product: '<S617>/Divide' incorporates:
     *  Constant: '<S611>/Constant1'
     */
    rtb_C3_b = 1.0F / rtb_C3_b;

    /* Switch: '<S617>/Switch' incorporates:
     *  Constant: '<S617>/Constant4'
     *  Constant: '<S621>/Constant'
     *  RelationalOperator: '<S621>/Compare'
     */
    if (rtb_C3_b >= 100000.0F) {
      rtb_C3_b = 100000.0F;
    }

    /* End of Switch: '<S617>/Switch' */

    /* Sum: '<S612>/Sum1' incorporates:
     *  Product: '<S612>/Multipl2'
     *  Sum: '<S613>/Sum2'
     *  Trigonometry: '<S612>/Sin'
     */
    rtb_C2_i = rtb_RadiusRear_j - sinf(rtb_C0) * rtb_C3_b;

    /* Product: '<S612>/Multipl1' */
    rtb_Quotient_e4 = rtb_C2_i * rtb_C2_i;

    /* Product: '<S612>/Multipl3' incorporates:
     *  Trigonometry: '<S612>/Cos'
     */
    rtb_C2_i = cosf(rtb_C0) * rtb_C3_b;

    /* Signum: '<S612>/Sign' */
    if (rtb_C3_b < 0.0F) {
      rtb_C3_b = -1.0F;
    } else if (rtb_C3_b > 0.0F) {
      rtb_C3_b = 1.0F;
    } else if (rtb_C3_b == 0.0F) {
      rtb_C3_b = 0.0F;
    } else {
      rtb_C3_b = (rtNaNF);
    }

    /* End of Signum: '<S612>/Sign' */

    /* Product: '<S612>/Multipl4' incorporates:
     *  Product: '<S612>/Multipl'
     *  Sqrt: '<S612>/Sqrt'
     *  Sum: '<S612>/Sum3'
     */
    rtb_Quotient_e4 = sqrtf(rtb_C2_i * rtb_C2_i + rtb_Quotient_e4) * rtb_C3_b;

    /* Switch: '<S623>/Switch' incorporates:
     *  Constant: '<S612>/Constant'
     *  Product: '<S623>/Divide'
     */
    if (rtb_Quotient_e4 != 0.0F) {
      rtb_C2_i = 1.0F / rtb_Quotient_e4;
    } else {
      rtb_C2_i = AEBS_TOS_ConstB.RoundingFunction;
    }

    /* End of Switch: '<S623>/Switch' */

    /* Sum: '<S605>/Add1' incorporates:
     *  Product: '<S605>/Product1'
     *
     * Block description for '<S605>/Add1':
     *  _3p3p4p5.ACC.000_12_
     *
     * Block description for '<S605>/Product1':
     *  _3p3p4p5.ACC.000_20_
     */
    rtb_Product_gz += rtb_Add_cl * rtb_C2_i;

    /* Saturate: '<S597>/Saturation1' */
    if (rtb_Product_gz > 0.1F) {
      rtb_Product_gz = 0.1F;
    } else if (rtb_Product_gz < (-0.1F)) {
      rtb_Product_gz = (-0.1F);
    }

    /* End of Saturate: '<S597>/Saturation1' */

    /* Switch: '<S636>/Switch' incorporates:
     *  Constant: '<S630>/Constant2'
     *  Product: '<S636>/Divide'
     *  Rounding: '<S636>/Rounding Function'
     */
    if (P_TA_PrmForVehBicycleMdlCornrgStfnFrnt != 0.0F) {
      rtb_C2_i = rtb_RadiusRear_j / P_TA_PrmForVehBicycleMdlCornrgStfnFrnt;
    } else {
      rtb_C2_i = truncf(rtb_RadiusRear_j);
    }

    /* End of Switch: '<S636>/Switch' */

    /* Switch: '<S637>/Switch' incorporates:
     *  Constant: '<S630>/Constant3'
     *  Constant: '<S632>/Constant1'
     *  Product: '<S637>/Divide'
     *  Rounding: '<S637>/Rounding Function'
     */
    if (P_TA_PrmForVehBicycleMdlCornrgStfnRe != 0.0F) {
      rtb_C3_b = P_TA_PrmForVehBicycleMdlAxleDistFrnt /
        P_TA_PrmForVehBicycleMdlCornrgStfnRe;
    } else {
      rtb_C3_b = truncf(P_TA_PrmForVehBicycleMdlAxleDistFrnt);
    }

    /* End of Switch: '<S637>/Switch' */

    /* Outputs for Atomic SubSystem: '<S635>/SafeDivide' */
    /* MATLAB Function: '<S645>/SafeDivide' incorporates:
     *  Constant: '<S635>/Constant1'
     */
    if (rtb_ARelStationaryObject > rtb_Product14_h) {
      rtb_Quotient_g /= P_TA_PrmForVehWhlBase;
    } else if (rtb_Quotient_g > 0.0F) {
      rtb_Quotient_g = AEBS_TOS_DataTypeMax;
    } else if (rtb_Quotient_g < 0.0F) {
      rtb_Quotient_g = AEBS_TOS_DataTypeMin;
    } else {
      rtb_Quotient_g = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S635>/SafeDivide' */

    /* Sum: '<S630>/Sum1' incorporates:
     *  Constant: '<S630>/Constant'
     *  Product: '<S630>/Divide2'
     *  Sum: '<S630>/Sum2'
     */
    rtb_Add_cl = (rtb_C2_i - rtb_C3_b) * rtb_Quotient_g + P_TA_PrmForVehWhlBase;

    /* Product: '<S608>/Product1' incorporates:
     *  Constant: '<S600>/Constant1'
     *  Inport: '<Root>/Extension_input_Bus'
     */
    rtb_C2_i = AEBS_TOS_U.Extension_input_Bus_j.SAS_SteeringWheelSpeed *
      P_TA_PinionAgRateFilConInAsyEvlrCritEve;

    /* Sum: '<S608>/Sum2' incorporates:
     *  Constant: '<S600>/Constant1'
     *  Product: '<S608>/Product'
     *  Sum: '<S608>/Sum1'
     *  UnitDelay: '<S607>/UD_1'
     *
     * Block description for '<S607>/UD_1':
     *  _3p1p0.CLib.000_109_
     */
    AEBS_TOS_DW.UD_1_DSTATE = (AEBS_TOS_DW.UD_1_DSTATE -
      P_TA_PinionAgRateFilConInAsyEvlrCritEve * AEBS_TOS_DW.UD_1_DSTATE) +
      rtb_C2_i;

    /* Outputs for Atomic SubSystem: '<S634>/SafeDivide' */
    /* MATLAB Function: '<S643>/SafeDivide' incorporates:
     *  Constant: '<S634>/Constant'
     *  UnitDelay: '<S607>/UD_1'
     *
     * Block description for '<S607>/UD_1':
     *  _3p1p0.CLib.000_109_
     */
    if (rtb_Quotient_f > fabsf(AEBS_TOS_DW.UD_1_DSTATE) * 5.42101151E-20F) {
      rtb_Quotient_f = AEBS_TOS_DW.UD_1_DSTATE / P_TA_PrmForVehSteerWhlAgRat;
    } else if (AEBS_TOS_DW.UD_1_DSTATE > 0.0F) {
      rtb_Quotient_f = AEBS_TOS_DataTypeMax;
    } else if (AEBS_TOS_DW.UD_1_DSTATE < 0.0F) {
      rtb_Quotient_f = AEBS_TOS_DataTypeMin;
    } else {
      rtb_Quotient_f = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S634>/SafeDivide' */

    /* Switch: '<S638>/Switch' incorporates:
     *  Product: '<S638>/Divide'
     *  Rounding: '<S638>/Rounding Function'
     */
    if (rtb_Add_cl != 0.0F) {
      rtb_Quotient_f /= rtb_Add_cl;
    } else {
      rtb_Quotient_f = truncf(rtb_Quotient_f);
    }

    /* End of Switch: '<S638>/Switch' */

    /* Switch: '<S642>/Switch' incorporates:
     *  Constant: '<S632>/Constant1'
     *  Constant: '<S633>/Constant3'
     *  Product: '<S642>/Divide'
     *  Rounding: '<S642>/Rounding Function'
     */
    if (P_TA_PrmForVehBicycleMdlCornrgStfnRe != 0.0F) {
      rtb_C2_i = P_TA_PrmForVehBicycleMdlAxleDistFrnt /
        P_TA_PrmForVehBicycleMdlCornrgStfnRe;
    } else {
      rtb_C2_i = truncf(P_TA_PrmForVehBicycleMdlAxleDistFrnt);
    }

    /* End of Switch: '<S642>/Switch' */

    /* Product: '<S633>/Multiply_3' incorporates:
     *  Product: '<S633>/Multiply_1'
     *  Sum: '<S633>/Sum3'
     */
    rtb_C2_i = (rtb_RadiusRear_j - rtb_Quotient_g * rtb_C2_i) * rtb_Quotient_f;

    /* Switch: '<S639>/Switch' incorporates:
     *  Constant: '<S630>/Constant1'
     *  Product: '<S639>/Divide'
     */
    if (rtb_Quotient_f != 0.0F) {
      rtb_C3_b = 1.0F / rtb_Quotient_f;
    } else {
      rtb_C3_b = AEBS_TOS_ConstB.RoundingFunction_m;
    }

    /* End of Switch: '<S639>/Switch' */

    /* Sum: '<S631>/Sum1' incorporates:
     *  Product: '<S631>/Multipl2'
     *  Trigonometry: '<S631>/Sin'
     */
    rtb_C0 = rtb_RadiusRear_j - sinf(rtb_C2_i) * rtb_C3_b;

    /* Product: '<S631>/Multipl3' incorporates:
     *  Trigonometry: '<S631>/Cos'
     */
    rtb_C2_i = cosf(rtb_C2_i) * rtb_C3_b;

    /* Signum: '<S631>/Sign' */
    if (rtb_C3_b < 0.0F) {
      rtb_RadiusRear_j = -1.0F;
    } else if (rtb_C3_b > 0.0F) {
      rtb_RadiusRear_j = 1.0F;
    } else if (rtb_C3_b == 0.0F) {
      rtb_RadiusRear_j = 0.0F;
    } else {
      rtb_RadiusRear_j = (rtNaNF);
    }

    /* End of Signum: '<S631>/Sign' */

    /* Product: '<S631>/Multipl4' incorporates:
     *  Product: '<S631>/Multipl'
     *  Product: '<S631>/Multipl1'
     *  Sqrt: '<S631>/Sqrt'
     *  Sum: '<S631>/Sum3'
     */
    rtb_RadiusRear_j *= sqrtf(rtb_C0 * rtb_C0 + rtb_C2_i * rtb_C2_i);

    /* Switch: '<S640>/Switch' incorporates:
     *  Constant: '<S631>/Constant'
     *  Product: '<S640>/Divide'
     */
    if (rtb_RadiusRear_j != 0.0F) {
      rtb_C2_i = 1.0F / rtb_RadiusRear_j;
    } else {
      rtb_C2_i = AEBS_TOS_ConstB.RoundingFunction_j;
    }

    /* End of Switch: '<S640>/Switch' */

    /* Sum: '<S606>/Add1' incorporates:
     *  Constant: '<S597>/Constant1'
     *  Constant: '<S606>/Constant'
     *  Product: '<S606>/Product'
     *  Product: '<S606>/Product1'
     *  Sum: '<S606>/Add'
     *
     * Block description for '<S606>/Add1':
     *  _3p3p4p5.ACC.000_12_
     *
     * Block description for '<S606>/Constant':
     *  _3p3p4p5.ACC.000_13_
     *
     * Block description for '<S606>/Product':
     *  _3p3p4p5.ACC.000_19_
     *
     * Block description for '<S606>/Product1':
     *  _3p3p4p5.ACC.000_20_
     *
     * Block description for '<S606>/Add':
     *  _3p3p4p5.ACC.000_11_
     */
    rtb_Quotient_f = (1.0F - rtb_C1) * rtb_C2_i + 0.0F * rtb_C1;

    /* Saturate: '<S597>/Saturation2' */
    if (rtb_Quotient_f > 0.1F) {
      rtb_Quotient_f = 0.1F;
    } else if (rtb_Quotient_f < (-0.1F)) {
      rtb_Quotient_f = (-0.1F);
    }

    /* End of Saturate: '<S597>/Saturation2' */

    /* Outputs for Iterator SubSystem: '<S599>/For Iterator PahEstimn' incorporates:
     *  ForIterator: '<S647>/For Iterator'
     */
    /* BusCreator: '<S651>/Bus Creator' incorporates:
     *  Constant: '<S651>/Constant'
     *  DataTypeConversion: '<S651>/Data Type Conversion'
     *  Selector: '<S651>/Selector'
     *  SignalConversion generated from: '<S651>/Vector Concatenate2'
     *  UnitDelay: '<S651>/Unit Delay'
     */
    for (s647_iter = 0; s647_iter < 4; s647_iter++) {
      /* RelationalOperator: '<S665>/Compare' incorporates:
       *  Constant: '<S665>/Constant'
       */
      rtb_Valid_g = (s647_iter + 1 == 1);

      /* UnitDelay: '<S652>/Unit Delay4' */
      rtb_C2_i = AEBS_TOS_DW.UnitDelay4_DSTATE_f;

      /* Switch: '<S652>/Switch4' incorporates:
       *  Constant: '<S652>/Constant1'
       */
      if (rtb_Valid_g) {
        rtb_Quotient_e4 = 0.0F;
      } else {
        rtb_Quotient_e4 = rtb_C2_i;
      }

      /* End of Switch: '<S652>/Switch4' */

      /* SignalConversion: '<S662>/Signal Conversion1' */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[0] = rtb_Quotient_e4;

      /* UnitDelay: '<S652>/Unit Delay7' */
      rtb_C2_i = AEBS_TOS_DW.UnitDelay7_DSTATE;

      /* Switch: '<S652>/Switch8' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       */
      if (rtb_Valid_g) {
        rtb_Quotient_g = AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
      } else {
        rtb_Quotient_g = rtb_C2_i;
      }

      /* End of Switch: '<S652>/Switch8' */

      /* UnitDelay: '<S652>/Unit Delay2' */
      rtb_C2_i = AEBS_TOS_DW.UnitDelay2_DSTATE_p;

      /* Switch: '<S652>/Switch2' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       */
      if (rtb_Valid_g) {
        rtb_Add_cl = AEBS_TOS_U.Extension_input_Bus_j.AX1;
      } else {
        rtb_Add_cl = rtb_C2_i;
      }

      /* End of Switch: '<S652>/Switch2' */

      /* Outputs for Atomic SubSystem: '<S648>/SafetyDivide' */
      /* MATLAB Function: '<S655>/SafeDivide' incorporates:
       *  Abs: '<S648>/Abs'
       *  UnaryMinus: '<S648>/Unary Minus'
       */
      rtb_C2_i = fabsf(rtb_Quotient_g);
      if (fabsf(-rtb_Add_cl) > rtb_C2_i * 5.42101151E-20F) {
        rtb_ARelStationaryObject = rtb_Quotient_g / -rtb_Add_cl;
      } else if (rtb_Quotient_g > 0.0F) {
        rtb_ARelStationaryObject = AEBS_TOS_DataTypeMax;
      } else if (rtb_Quotient_g < 0.0F) {
        rtb_ARelStationaryObject = AEBS_TOS_DataTypeMin;
      } else {
        rtb_ARelStationaryObject = 0.0F;
      }

      /* End of MATLAB Function: '<S655>/SafeDivide' */
      /* End of Outputs for SubSystem: '<S648>/SafetyDivide' */

      /* Saturate: '<S648>/Saturation' */
      if (rtb_ARelStationaryObject > 4.0F) {
        rtb_ARelStationaryObject = 4.0F;
      } else if (rtb_ARelStationaryObject < 0.0F) {
        rtb_ARelStationaryObject = 0.0F;
      }

      /* End of Saturate: '<S648>/Saturation' */

      /* RelationalOperator: '<S648>/Relational Operator' incorporates:
       *  Constant: '<S648>/Constant'
       */
      rtb_Valid_o = (rtb_C2_i <= P_DM_VehSelfMinSpdInDrvrStEstimr);

      /* Switch: '<S648>/Switch' incorporates:
       *  Constant: '<S648>/Constant1'
       */
      if (rtb_Valid_o) {
        rtb_C2_i = 0.1F;
      } else {
        rtb_C2_i = rtb_ARelStationaryObject;
      }

      /* End of Switch: '<S648>/Switch' */

      /* Logic: '<S648>/Logical Operator' incorporates:
       *  Constant: '<S653>/Constant'
       *  Constant: '<S654>/Constant'
       *  RelationalOperator: '<S653>/Compare'
       *  RelationalOperator: '<S654>/Compare'
       */
      rtb_LogicalOperator5 = ((rtb_C2_i > 0.0F) && (rtb_C2_i < 1.0F));

      /* UnitDelay: '<S652>/Unit Delay5' */
      rtb_C2_i = AEBS_TOS_DW.UnitDelay5_DSTATE_o;

      /* Switch: '<S652>/Switch5' incorporates:
       *  Constant: '<S652>/Constant2'
       */
      if (rtb_Valid_g) {
        rtb_Quotient_dg = 0.0F;
      } else {
        rtb_Quotient_dg = rtb_C2_i;
      }

      /* End of Switch: '<S652>/Switch5' */

      /* UnitDelay: '<S652>/Unit Delay6' */
      rtb_C2_i = AEBS_TOS_DW.UnitDelay6_DSTATE;

      /* Switch: '<S652>/Switch6' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       *  Product: '<S652>/Product'
       */
      if (rtb_Valid_g) {
        rtb_Sum1_p = rtb_Product_gz *
          AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed *
          AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
      } else {
        rtb_Sum1_p = rtb_C2_i;
      }

      /* End of Switch: '<S652>/Switch6' */

      /* Switch: '<S648>/Switch2' incorporates:
       *  Constant: '<S648>/Constant3'
       *  Math: '<S648>/Square1'
       *  Product: '<S648>/Product2'
       *  Product: '<S648>/Product3'
       *  Sum: '<S648>/Add1'
       */
      if (rtb_Valid_o) {
        rtb_RadiusRear_j = 0.0F;
      } else {
        rtb_RadiusRear_j = rtb_ARelStationaryObject * rtb_ARelStationaryObject *
          rtb_Sum1_p + rtb_Quotient_dg * rtb_ARelStationaryObject;
      }

      /* End of Switch: '<S648>/Switch2' */

      /* Sum: '<S662>/Add2' incorporates:
       *  MATLAB Function: '<S650>/MATLAB Function'
       */
      rtb_RadiusRear_j += rtb_Quotient_e4;
      rtb_C2_i = rtb_RadiusRear_j;

      /* Sum: '<S662>/Add4' incorporates:
       *  Gain: '<S662>/Gain2'
       */
      rtb_Quotient_dg = 0.333333343F * rtb_Quotient_dg + rtb_Quotient_e4;

      /* Switch: '<S662>/Switch3' incorporates:
       *  Gain: '<S662>/Gain4'
       *  Gain: '<S662>/Gain5'
       *  Sum: '<S662>/Add5'
       *  Switch: '<S662>/Switch2'
       */
      if (rtb_LogicalOperator5) {
        rtb_C3_b = rtb_C2_i;
      } else {
        rtb_C3_b = rtb_Quotient_dg;
        rtb_C2_i = (2.0F * rtb_Quotient_dg - rtb_Quotient_e4) + 0.166666672F *
          rtb_Sum1_p;
      }

      /* End of Switch: '<S662>/Switch3' */

      /* SignalConversion generated from: '<S651>/Vector Concatenate' */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[1] = rtb_C3_b;

      /* SignalConversion generated from: '<S651>/Vector Concatenate' */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[2] = rtb_C2_i;

      /* UnitDelay: '<S652>/Unit Delay1' */
      rtb_C0 = AEBS_TOS_DW.UnitDelay1_DSTATE_p;

      /* Switch: '<S652>/Switch1' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       */
      if (rtb_Valid_g) {
        rtb_Product14_er = AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
      } else {
        rtb_Product14_er = rtb_C0;
      }

      /* End of Switch: '<S652>/Switch1' */

      /* UnitDelay: '<S652>/Unit Delay3' */
      rtb_C0 = AEBS_TOS_DW.UnitDelay3_DSTATE_b;

      /* Switch: '<S652>/Switch3' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       *  Switch: '<S652>/Switch9'
       */
      if (rtb_Valid_g) {
        rtb_Quotient_dg = AEBS_TOS_U.Extension_input_Bus_j.AX1;

        /* Switch: '<S652>/Switch9' incorporates:
         *  Inport: '<Root>/Extension_input_Bus'
         */
        AEBS_TOS_DW.UnitDelay8_DSTATE = rtb_Product_gz;
      } else {
        rtb_Quotient_dg = rtb_C0;
      }

      /* End of Switch: '<S652>/Switch3' */

      /* Switch: '<S648>/Switch1' incorporates:
       *  Constant: '<S648>/Constant2'
       *  Gain: '<S648>/Gain'
       *  Math: '<S648>/Square'
       *  Product: '<S648>/Product'
       *  Product: '<S648>/Product1'
       *  Sum: '<S648>/Add'
       */
      if (rtb_Valid_o) {
        rtb_Add_pz = 0.0F;
      } else {
        rtb_Add_pz = 0.5F * rtb_Quotient_dg * (rtb_ARelStationaryObject *
          rtb_ARelStationaryObject) + rtb_Product14_er *
          rtb_ARelStationaryObject;
      }

      /* End of Switch: '<S648>/Switch1' */

      /* MultiPortSwitch: '<S652>/Multiport Switch' incorporates:
       *  Constant: '<S652>/Constant3'
       *  UnaryMinus: '<S652>/Unary Minus'
       */
      switch (s647_iter + 1) {
       case 1:
        rtb_Sum1_p = rtb_Quotient_f;
        break;

       case 2:
        rtb_Sum1_p = -rtb_Quotient_f;
        break;

       case 3:
        rtb_Sum1_p = 0.0F;
        break;

       default:
        rtb_Sum1_p = 0.0F;
        break;
      }

      /* End of MultiPortSwitch: '<S652>/Multiport Switch' */

      /* UnitDelay: '<S652>/Unit Delay' */
      rtb_C0 = AEBS_TOS_DW.UnitDelay_DSTATE_i;

      /* Switch: '<S652>/Switch' incorporates:
       *  Constant: '<S652>/Constant'
       *  Switch: '<S652>/Switch7'
       */
      if (rtb_Valid_g) {
        rtb_Product14_h = 0.0F;

        /* Switch: '<S652>/Switch7' incorporates:
         *  Constant: '<S652>/Constant'
         *  Constant: '<S652>/Constant4'
         */
        AEBS_TOS_DW.UnitDelay9_DSTATE = 0.0F;
      } else {
        rtb_Product14_h = rtb_C0;
      }

      /* End of Switch: '<S652>/Switch' */

      /* MATLAB Function: '<S650>/MATLAB Function' incorporates:
       *  UnitDelay: '<S652>/Unit Delay'
       */
      guard1 = false;
      if (fabs(AEBS_TOS_DW.UnitDelay8_DSTATE) > 9.9999997473787516E-6) {
        rtb_ARelStationaryObject = (real32_T)AEBS_TOS_DW.UnitDelay8_DSTATE +
          rtb_Sum1_p;
        if (fabsf(rtb_ARelStationaryObject) > 1.0E-5F) {
          rtb_Add_a = rtb_Add_cl / 2.0F + rtb_Quotient_g;
          rtb_Switch_gr = 1.0 / AEBS_TOS_DW.UnitDelay8_DSTATE;
          t_radObjAngleToRear_f = 1.0F / rtb_ARelStationaryObject;
          t_sinObjAngle_f = rtb_Add_a / (real32_T)rtb_Switch_gr;
          t_tempvx_f = rtb_Add_a / t_radObjAngleToRear_f;
          rtb_ARelStationaryObject = (real32_T)rtb_Switch_gr * sinf
            (t_sinObjAngle_f);
          t_sinObjAngle_f = (real32_T)-rtb_Switch_gr * cosf(t_sinObjAngle_f) +
            (real32_T)rtb_Switch_gr;
          rtb_Add_a = t_radObjAngleToRear_f * sinf(t_tempvx_f);
          t_tempvx_f = -t_radObjAngleToRear_f * cosf(t_tempvx_f) +
            t_radObjAngleToRear_f;
          t_radObjAngleToRear_f = (real32_T)cos(AEBS_TOS_DW.UnitDelay9_DSTATE);
          t_tempvy_f = (real32_T)sin(AEBS_TOS_DW.UnitDelay9_DSTATE);
          AEBS_TOS_DW.UnitDelay_DSTATE_i = ((rtb_ARelStationaryObject *
            t_radObjAngleToRear_f - t_sinObjAngle_f * t_tempvy_f) * 0.7F +
            rtb_Product14_h) + (rtb_Add_a * t_radObjAngleToRear_f - t_tempvx_f *
                                t_tempvy_f) * 0.3F;
          AEBS_TOS_DW.UnitDelay4_DSTATE_f = ((rtb_ARelStationaryObject *
            t_tempvy_f + t_sinObjAngle_f * t_radObjAngleToRear_f) * 0.7F +
            rtb_Quotient_e4) + (rtb_Add_a * t_tempvy_f + t_tempvx_f *
                                t_radObjAngleToRear_f) * 0.3F;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        t_radObjAngleToRear_f = rtb_Add_cl / 2.0F + rtb_Quotient_g;
        AEBS_TOS_DW.UnitDelay_DSTATE_i = t_radObjAngleToRear_f * (real32_T)cos
          (AEBS_TOS_DW.UnitDelay9_DSTATE) + rtb_Product14_h;
        AEBS_TOS_DW.UnitDelay4_DSTATE_f = t_radObjAngleToRear_f * (real32_T)sin
          (AEBS_TOS_DW.UnitDelay9_DSTATE) + rtb_Quotient_e4;
      }

      if (rtb_LogicalOperator5) {
        AEBS_TOS_DW.UnitDelay_DSTATE_i = rtb_Product14_h + rtb_Add_pz;
        AEBS_TOS_DW.UnitDelay4_DSTATE_f = rtb_RadiusRear_j;
      }

      /* SignalConversion generated from: '<S651>/Vector Concatenate' */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[3] =
        AEBS_TOS_DW.UnitDelay4_DSTATE_f;

      /* SignalConversion: '<S662>/Signal Conversion' */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[0] = rtb_Product14_h;

      /* Sum: '<S662>/Add1' */
      rtb_C0 = rtb_Add_pz + rtb_Product14_h;

      /* Sum: '<S662>/Add' incorporates:
       *  Gain: '<S662>/Gain'
       */
      rtb_RadiusRear_j = 0.333333343F * rtb_Product14_er + rtb_Product14_h;

      /* Switch: '<S662>/Switch' incorporates:
       *  Gain: '<S662>/Gain1'
       *  Gain: '<S662>/Gain3'
       *  Sum: '<S662>/Add3'
       *  Switch: '<S662>/Switch1'
       */
      if (rtb_LogicalOperator5) {
        rtb_C1 = rtb_C0;
      } else {
        rtb_C1 = rtb_RadiusRear_j;
        rtb_C0 = (2.0F * rtb_RadiusRear_j - rtb_Product14_h) + 0.166666672F *
          rtb_Quotient_dg;
      }

      /* End of Switch: '<S662>/Switch' */

      /* SignalConversion generated from: '<S651>/Vector  Concatenate1' */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[1] = rtb_C1;

      /* SignalConversion generated from: '<S651>/Vector  Concatenate1' */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[2] = rtb_C0;

      /* SignalConversion generated from: '<S651>/Vector  Concatenate1' incorporates:
       *  UnitDelay: '<S652>/Unit Delay'
       */
      AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[3] =
        AEBS_TOS_DW.UnitDelay_DSTATE_i;

      /* Switch: '<S651>/Switch' incorporates:
       *  Constant: '<S651>/Zero'
       *  Constant: '<S664>/Constant'
       *  RelationalOperator: '<S664>/Compare'
       *  UnitDelay: '<S651>/Unit Delay'
       */
      if (s647_iter + 1 == 1) {
        rtb_Switch_gr = 0.0;
      } else {
        rtb_Switch_gr = AEBS_TOS_DW.UnitDelay_DSTATE_d;
      }

      /* End of Switch: '<S651>/Switch' */
      AEBS_TOS_DW.UnitDelay_DSTATE_d =
        AEBS_TOS_ConstP.Constant_Value_l[s647_iter];
      AEBS_TOS_B.PahEstimn_i[s647_iter].TiAry[0] = (real32_T)rtb_Switch_gr;
      AEBS_TOS_B.PahEstimn_i[s647_iter].TiAry[1] = (real32_T)
        AEBS_TOS_DW.UnitDelay_DSTATE_d;

      /* Trigonometry: '<S658>/Atan2' incorporates:
       *  Constant: '<S651>/Constant'
       *  DataTypeConversion: '<S651>/Data Type Conversion'
       *  Gain: '<S660>/Gain'
       *  Gain: '<S660>/Gain1'
       *  Gain: '<S660>/Gain5'
       *  Gain: '<S660>/Gain6'
       *  SignalConversion generated from: '<S651>/Vector Concatenate2'
       *  Sum: '<S660>/Add'
       *  Sum: '<S660>/Add2'
       *  UnitDelay: '<S651>/Unit Delay'
       *  UnitDelay: '<S652>/Unit Delay'
       */
      rtb_C1_e = rt_atan2f_snf(3.0F * AEBS_TOS_DW.UnitDelay4_DSTATE_f - 3.0F *
        rtb_C2_i, 3.0F * AEBS_TOS_DW.UnitDelay_DSTATE_i - 3.0F * rtb_C0);

      /* Switch: '<S10>/Switch' incorporates:
       *  Abs: '<S658>/Abs'
       */
      rtb_Switch_aq = fabsf(rtb_C1_e);

      /* Switch: '<S658>/Switch' incorporates:
       *  Constant: '<S661>/Constant'
       *  RelationalOperator: '<S661>/Compare'
       */
      if (rtb_Switch_aq > 0.0F) {
        /* Switch: '<S652>/Switch7' */
        AEBS_TOS_DW.UnitDelay9_DSTATE = rtb_C1_e;
      }

      /* End of Switch: '<S658>/Switch' */

      /* Switch: '<S657>/Switch' */
      if (rtb_LogicalOperator5) {
        /* Switch: '<S657>/Switch' incorporates:
         *  Constant: '<S657>/Constant'
         */
        AEBS_TOS_DW.UnitDelay2_DSTATE_p = 0.0F;
      } else {
        /* Switch: '<S657>/Switch' */
        AEBS_TOS_DW.UnitDelay2_DSTATE_p = rtb_Add_cl;
      }

      /* End of Switch: '<S657>/Switch' */

      /* Switch: '<S10>/Switch' incorporates:
       *  Sum: '<S649>/Add2'
       */
      rtb_Switch_aq = rtb_Quotient_g + rtb_Add_cl;

      /* Saturate: '<S649>/Saturation2' */
      if ((rtb_Switch_aq <= P_DM_LoPosValInDrvrStEstimr) || rtIsNaNF
          (P_DM_LoPosValInDrvrStEstimr)) {
        /* Saturate: '<S649>/Saturation2' */
        AEBS_TOS_DW.UnitDelay7_DSTATE = P_DM_LoPosValInDrvrStEstimr;
      } else {
        /* Saturate: '<S649>/Saturation2' */
        AEBS_TOS_DW.UnitDelay7_DSTATE = rtb_Switch_aq;
      }

      /* End of Saturate: '<S649>/Saturation2' */

      /* Switch: '<S652>/Switch9' incorporates:
       *  Sum: '<S649>/Add1'
       */
      AEBS_TOS_DW.UnitDelay8_DSTATE += rtb_Sum1_p;

      /* Saturate: '<S649>/Saturation1' */
      if (AEBS_TOS_DW.UnitDelay8_DSTATE > 0.5) {
        /* Switch: '<S652>/Switch9' */
        AEBS_TOS_DW.UnitDelay8_DSTATE = 0.5;
      } else if (AEBS_TOS_DW.UnitDelay8_DSTATE < (-0.5)) {
        /* Switch: '<S652>/Switch9' */
        AEBS_TOS_DW.UnitDelay8_DSTATE = (-0.5);
      }

      /* End of Saturate: '<S649>/Saturation1' */

      /* MATLAB Function: '<S649>/MATLAB Function' incorporates:
       *  UnitDelay: '<S652>/Unit Delay1'
       *  UnitDelay: '<S652>/Unit Delay3'
       *  UnitDelay: '<S652>/Unit Delay6'
       *  UnitDelay: '<S652>/Unit Delay8'
       *  UnitDelay: '<S652>/Unit Delay9'
       */
      rtb_Quotient_g = (real32_T)AEBS_TOS_DW.UnitDelay8_DSTATE *
        AEBS_TOS_DW.UnitDelay7_DSTATE * AEBS_TOS_DW.UnitDelay7_DSTATE;
      rtb_Add_cl = (real32_T)cos(AEBS_TOS_DW.UnitDelay9_DSTATE);
      rtb_RadiusRear_j = (real32_T)sin(AEBS_TOS_DW.UnitDelay9_DSTATE);
      AEBS_TOS_DW.UnitDelay3_DSTATE_b = -rtb_Quotient_g * rtb_RadiusRear_j +
        AEBS_TOS_DW.UnitDelay2_DSTATE_p * rtb_Add_cl;
      AEBS_TOS_DW.UnitDelay6_DSTATE = rtb_Quotient_g * rtb_Add_cl +
        AEBS_TOS_DW.UnitDelay2_DSTATE_p * rtb_RadiusRear_j;
      AEBS_TOS_DW.UnitDelay1_DSTATE_p = rtb_RadiusRear_j *
        AEBS_TOS_DW.UnitDelay7_DSTATE;

      /* Update for UnitDelay: '<S652>/Unit Delay5' incorporates:
       *  UnitDelay: '<S652>/Unit Delay1'
       */
      AEBS_TOS_DW.UnitDelay5_DSTATE_o = AEBS_TOS_DW.UnitDelay1_DSTATE_p;
    }

    /* End of BusCreator: '<S651>/Bus Creator' */
    /* End of Outputs for SubSystem: '<S599>/For Iterator PahEstimn' */

    /* Outputs for Iterator SubSystem: '<S28>/Data_precess' incorporates:
     *  ForEach: '<S30>/For Each'
     */
    for (ForEach_itr_i = 0; ForEach_itr_i < 32; ForEach_itr_i++) {
      /* MultiPortSwitch: '<S33>/Index Vector' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsID = Meas_ObjID[ForEach_itr_i];

      /* RelationalOperator: '<S419>/Compare' incorporates:
       *  Constant: '<S419>/Constant'
       */
      rtb_Valid_g = (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsID ==
                     ((uint8_T)0U));

      /* MultiPortSwitch: '<S33>/Index Vector6' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion6'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx = Meas_ObjDx[ForEach_itr_i];

      /* MultiPortSwitch: '<S33>/Index Vector7' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion7'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy = Meas_ObjDy[ForEach_itr_i];

      /* MultiPortSwitch: '<S33>/Index Vector14' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion14'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs =
        Meas_ObjVxabs[ForEach_itr_i];

      /* If: '<S376>/If' incorporates:
       *  DataTypeConversion: '<S403>/Data Type Conversion'
       *  If: '<S408>/If'
       */
      if (rtb_Valid_g) {
        /* Outputs for IfAction SubSystem: '<S376>/If Action Subsystem' incorporates:
         *  ActionPort: '<S401>/Action Port'
         */
        /* SignalConversion generated from: '<S401>/Obj_Enable' incorporates:
         *  Constant: '<S401>/Constant'
         */
        rtb_Valid_g = false;

        /* End of Outputs for SubSystem: '<S376>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S376>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S402>/Action Port'
         */
        if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx > 0.0F) {
          /* Outputs for IfAction SubSystem: '<S408>/dxCalc_if' incorporates:
           *  ActionPort: '<S409>/Action Port'
           */
          /* If: '<S408>/If' incorporates:
           *  Inport: '<S409>/ObsDx'
           */
          rtb_RadiusRear_j = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx;

          /* End of Outputs for SubSystem: '<S408>/dxCalc_if' */
        } else {
          /* Outputs for IfAction SubSystem: '<S408>/dxcalc' incorporates:
           *  ActionPort: '<S410>/Action Port'
           */
          /* If: '<S408>/If' incorporates:
           *  Constant: '<S410>/Constant'
           *  SignalConversion generated from: '<S410>/Obsdx'
           */
          rtb_RadiusRear_j = 0.0F;

          /* End of Outputs for SubSystem: '<S408>/dxcalc' */
        }

        /* Logic: '<S402>/Logical Operator' incorporates:
         *  Constant: '<S404>/Constant'
         *  Constant: '<S404>/Constant1'
         *  Constant: '<S404>/Constant2'
         *  Constant: '<S404>/Constant3'
         *  Constant: '<S405>/Constant'
         *  Constant: '<S405>/Constant1'
         *  Constant: '<S405>/Constant2'
         *  Constant: '<S405>/Constant3'
         *  Constant: '<S411>/Constant'
         *  Constant: '<S412>/Constant8'
         *  Constant: '<S413>/Constant6'
         *  Constant: '<S414>/Constant3'
         *  Constant: '<S415>/Constant1'
         *  Constant: '<S415>/Constant8'
         *  Constant: '<S416>/Constant7'
         *  Constant: '<S417>/Constant8'
         *  Constant: '<S418>/Constant2'
         *  Logic: '<S404>/Logical Operator'
         *  Logic: '<S404>/Logical Operator1'
         *  Logic: '<S404>/Logical Operator2'
         *  Logic: '<S404>/Logical Operator3'
         *  Logic: '<S405>/Logical Operator'
         *  Logic: '<S407>/Logical Operator'
         *  Logic: '<S407>/Logical Operator1'
         *  Logic: '<S415>/Logical Operator'
         *  Logic: '<S415>/Logical Operator1'
         *  MultiPortSwitch: '<S33>/Index Vector1'
         *  MultiPortSwitch: '<S33>/Index Vector10'
         *  MultiPortSwitch: '<S33>/Index Vector18'
         *  MultiPortSwitch: '<S33>/Index Vector3'
         *  RelationalOperator: '<S404>/Relational Operator'
         *  RelationalOperator: '<S404>/Relational Operator1'
         *  RelationalOperator: '<S404>/Relational Operator2'
         *  RelationalOperator: '<S404>/Relational Operator3'
         *  RelationalOperator: '<S405>/Relational Operator'
         *  RelationalOperator: '<S405>/Relational Operator1'
         *  RelationalOperator: '<S405>/Relational Operator2'
         *  RelationalOperator: '<S405>/Relational Operator3'
         *  RelationalOperator: '<S411>/Compare'
         *  RelationalOperator: '<S412>/Relational Operator8'
         *  RelationalOperator: '<S413>/Relational Operator6'
         *  RelationalOperator: '<S414>/Relational Operator3'
         *  RelationalOperator: '<S415>/Relational Operator1'
         *  RelationalOperator: '<S415>/Relational Operator8'
         *  RelationalOperator: '<S416>/Relational Operator7'
         *  RelationalOperator: '<S417>/Relational Operator8'
         *  RelationalOperator: '<S418>/Relational Operator2'
         *  SignalConversion: '<S31>/Signal Conversion1'
         *  SignalConversion: '<S31>/Signal Conversion10'
         *  SignalConversion: '<S31>/Signal Conversion23'
         *  SignalConversion: '<S31>/Signal Conversion3'
         */
        rtb_Valid_g = (((Meas_ObjType[ForEach_itr_i] == ((uint8_T)3U)) ||
                        (Meas_ObjType[ForEach_itr_i] == ((uint8_T)2U)) ||
                        (Meas_ObjType[ForEach_itr_i] == ((uint8_T)1U)) ||
                        (Meas_ObjType[ForEach_itr_i] == ((uint8_T)4U)) ||
                        (Meas_ObjType[ForEach_itr_i] == ((uint8_T)5U)) ||
                        (Meas_ObjType[ForEach_itr_i] == ((uint8_T)6U))) &&
                       ((Meas_ObjType[ForEach_itr_i] != ((uint8_T)0U)) &&
                        (Meas_ObjType[ForEach_itr_i] != ((uint8_T)7U))) &&
                       ((rtb_RadiusRear_j <= P_TA_ObjdxRangetheMax) &&
                        (rtb_RadiusRear_j >= P_TA_ObjdxRangetheMin) &&
                        (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy <=
                         P_TA_ObjdyRangetheMax) &&
                        (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy >=
                         P_TA_ObjdyRangetheMin)) &&
                       (Meas_ObjConfidence[ForEach_itr_i] >= ((uint8_T)1U)) &&
                       ((Meas_ObjOrientation[ForEach_itr_i] == ((uint8_T)0U)) ||
                        ((Meas_ObjOrientation[ForEach_itr_i] != ((uint8_T)6U)) &&
                         ((!(((uint8_T)0U) >= Meas_ObjVx[ForEach_itr_i])) ||
                          (!(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs <=
                             P_TA_ObjBehaviorOnComingPara))))));

        /* End of Outputs for SubSystem: '<S376>/If Action Subsystem1' */
      }

      /* End of If: '<S376>/If' */

      /* RelationalOperator: '<S400>/Compare' incorporates:
       *  Constant: '<S400>/Constant'
       */
      rtb_LogicalOperator5 = (rtb_Valid_g == true);

      /* DataTypeConversion: '<S379>/Data Type Conversion' incorporates:
       *  Constant: '<S399>/Constant'
       *  RelationalOperator: '<S399>/Compare'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion = (rtb_Valid_g ==
        false);

      /* MultiPortSwitch: '<S33>/Index Vector23' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion17'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsWidth =
        Meas_ObjWidth[ForEach_itr_i];

      /* MultiPortSwitch: '<S33>/Index Vector22' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion16'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsLength =
        Meas_ObjLength[ForEach_itr_i];

      /* MultiPortSwitch: '<S33>/Index Vector11' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion11'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy = Meas_ObjVy[ForEach_itr_i];

      /* If: '<S375>/If' incorporates:
       *  Constant: '<S396>/Constant'
       *  Constant: '<S397>/Constant'
       *  Logic: '<S396>/Logical Operator'
       *  Logic: '<S396>/Logical Operator1'
       *  MinMax: '<S396>/Min'
       *  MinMax: '<S396>/Min1'
       *  RelationalOperator: '<S396>/Relational Operator'
       *  RelationalOperator: '<S396>/Relational Operator1'
       *  RelationalOperator: '<S396>/Relational Operator2'
       *  RelationalOperator: '<S397>/Compare'
       *  Selector: '<S396>/Selector'
       *  Switch: '<S396>/Switch'
       */
      if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion > 0.0) {
        /* Outputs for IfAction SubSystem: '<S375>/ObjPos_Calculateif' incorporates:
         *  ActionPort: '<S378>/Action Port'
         */
        /* SignalConversion generated from: '<S378>/Overlap_Current' incorporates:
         *  Constant: '<S378>/Constant'
         */
        rtb_LogicalOperator7 = false;

        /* SignalConversion generated from: '<S378>/Overlap_Prediction' incorporates:
         *  Constant: '<S378>/Constant1'
         */
        rtb_LogicalOperator11 = false;

        /* End of Outputs for SubSystem: '<S375>/ObjPos_Calculateif' */
      } else {
        /* Outputs for IfAction SubSystem: '<S375>/ObjPos_Calculateelse' incorporates:
         *  ActionPort: '<S377>/Action Port'
         */
        /* Gain: '<S381>/OppositeSign' incorporates:
         *  MultiPortSwitch: '<S33>/Index Vector10'
         *  SignalConversion: '<S31>/Signal Conversion10'
         */
        rtb_RadiusRear_j = (-1.0F) * Meas_ObjVx[ForEach_itr_i];

        /* Outputs for Atomic SubSystem: '<S384>/SafeDivide' */
        /* MATLAB Function: '<S387>/SafeDivide' */
        if (fabsf(rtb_RadiusRear_j) > fabsf
            (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx) * 5.42101151E-20F)
        {
          rtb_Quotient_p = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx /
            rtb_RadiusRear_j;
        } else if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx > 0.0F) {
          rtb_Quotient_p = AEBS_TOS_DataTypeMax;
        } else if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx < 0.0F) {
          rtb_Quotient_p = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_p = 0.0F;
        }

        /* End of MATLAB Function: '<S387>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S384>/SafeDivide' */

        /* Switch: '<S388>/Switch' incorporates:
         *  Constant: '<S384>/Constant1'
         *  RelationalOperator: '<S388>/UpperRelop'
         */
        if (rtb_Quotient_p < (-1000.0F)) {
          /* Switch: '<S388>/Switch' */
          rtb_Switch_mt = (-1000.0F);
        } else {
          /* Switch: '<S388>/Switch' */
          rtb_Switch_mt = rtb_Quotient_p;
        }

        /* End of Switch: '<S388>/Switch' */

        /* Switch: '<S388>/Switch2' incorporates:
         *  Constant: '<S384>/Constant5'
         *  RelationalOperator: '<S388>/LowerRelop1'
         */
        if (rtb_Quotient_p > 1000.0F) {
          /* Switch: '<S388>/Switch2' */
          rtb_Switch2_d = 1000.0F;
        } else {
          /* Switch: '<S388>/Switch2' */
          rtb_Switch2_d = rtb_Switch_mt;
        }

        /* End of Switch: '<S388>/Switch2' */

        /* Outputs for Iterator SubSystem: '<S393>/ForEachSegmentInPahEstimn' incorporates:
         *  ForIterator: '<S396>/For Iterator'
         */
        for (s647_iter = 0; s647_iter < 4; s647_iter++) {
          rtb_RadiusRear_j = fmaxf(AEBS_TOS_B.PahEstimn_i[s647_iter].TiAry[0],
            AEBS_TOS_B.PahEstimn_i[s647_iter].TiAry[1]);
          if ((s647_iter + 1 == 4) && (rtb_Switch2_d > rtb_RadiusRear_j)) {
            rtb_TimeWithinSegment_p[s647_iter] = true;
          } else {
            rtb_TimeWithinSegment_p[s647_iter] = ((rtb_Switch2_d <=
              rtb_RadiusRear_j) && (rtb_Switch2_d > fminf
              (AEBS_TOS_B.PahEstimn_i[s647_iter].TiAry[0],
               AEBS_TOS_B.PahEstimn_i[s647_iter].TiAry[1])));
          }
        }

        /* End of Outputs for SubSystem: '<S393>/ForEachSegmentInPahEstimn' */

        /* Switch: '<S393>/Switch' incorporates:
         *  Constant: '<S393>/Constant'
         *  Constant: '<S396>/Constant'
         *  Constant: '<S397>/Constant'
         *  Logic: '<S393>/Logop_1'
         *  Logic: '<S396>/Logical Operator'
         *  Logic: '<S396>/Logical Operator1'
         *  MinMax: '<S396>/Min'
         *  MinMax: '<S396>/Min1'
         *  RelationalOperator: '<S396>/Relational Operator'
         *  RelationalOperator: '<S396>/Relational Operator1'
         *  RelationalOperator: '<S396>/Relational Operator2'
         *  RelationalOperator: '<S397>/Compare'
         *  Selector: '<S396>/Selector'
         *  Switch: '<S396>/Switch'
         */
        if (rtb_TimeWithinSegment_p[0] || rtb_TimeWithinSegment_p[1] ||
            rtb_TimeWithinSegment_p[2] || rtb_TimeWithinSegment_p[3]) {
          /* Product: '<S393>/Product' incorporates:
           *  Constant: '<S393>/Indices'
           */
          num = (uint8_T)(rtb_TimeWithinSegment_p[0] ? (int32_T)((uint8_T)1U) :
                          0);
          temp_ID = (uint8_T)(rtb_TimeWithinSegment_p[1] ? (int32_T)((uint8_T)2U)
                              : 0);
          rtb_AccTgtIdn = (uint8_T)(rtb_TimeWithinSegment_p[2] ? (int32_T)
            ((uint8_T)3U) : 0);
          i = (uint8_T)(rtb_TimeWithinSegment_p[3] ? (int32_T)((uint8_T)4U) : 0);

          /* MinMax: '<S393>/Max of Elements' */
          if (num > temp_ID) {
            temp_ID = num;
          }

          if (temp_ID <= rtb_AccTgtIdn) {
            temp_ID = rtb_AccTgtIdn;
          }

          if (temp_ID > i) {
            i = temp_ID;
          }

          /* End of MinMax: '<S393>/Max of Elements' */
        } else {
          i = ((uint8_T)4U);
        }

        /* End of Switch: '<S393>/Switch' */

        /* Sum: '<S392>/Add1' incorporates:
         *  Selector: '<S392>/Selector10'
         */
        rtb_RadiusRear_j = rtb_Switch2_d - AEBS_TOS_B.PahEstimn_i[i - 1].TiAry[0];

        /* Sum: '<S392>/time duration' incorporates:
         *  Selector: '<S392>/Selector10'
         */
        rtb_Product_gz = AEBS_TOS_B.PahEstimn_i[i - 1].TiAry[1] -
          AEBS_TOS_B.PahEstimn_i[i - 1].TiAry[0];

        /* Saturate: '<S392>/Saturation1' */
        if ((rtb_Product_gz <= 0.001F) || rtIsNaNF(0.001F)) {
          rtb_Product_gz = 0.001F;
        }

        /* End of Saturate: '<S392>/Saturation1' */

        /* Outputs for Atomic SubSystem: '<S392>/SafeDivide' */
        /* MATLAB Function: '<S394>/SafeDivide' */
        if (fabsf(rtb_Product_gz) > fabsf(rtb_RadiusRear_j) * 5.42101151E-20F) {
          rtb_tau_g = rtb_RadiusRear_j / rtb_Product_gz;
        } else if (rtb_RadiusRear_j > 0.0F) {
          rtb_tau_g = AEBS_TOS_DataTypeMax;
        } else if (rtb_RadiusRear_j < 0.0F) {
          rtb_tau_g = AEBS_TOS_DataTypeMin;
        } else {
          rtb_tau_g = 0.0F;
        }

        /* End of MATLAB Function: '<S394>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S392>/SafeDivide' */

        /* Saturate: '<S392>/Saturation' */
        if (rtb_tau_g > 1.0F) {
          /* Saturate: '<S392>/Saturation' */
          rtb_tau_g = 1.0F;
        } else if (rtb_tau_g < 0.0F) {
          /* Saturate: '<S392>/Saturation' */
          rtb_tau_g = 0.0F;
        }

        /* End of Saturate: '<S392>/Saturation' */

        /* MATLAB Function: '<S385>/PositionAndDerivative1' */
        rtb_RadiusRear_j = rtb_tau_g * rtb_tau_g;

        /* RelationalOperator: '<S383>/Compare' incorporates:
         *  Abs: '<S381>/Abs'
         *  Constant: '<S380>/Constant2'
         *  Constant: '<S381>/Constant'
         *  Constant: '<S381>/Constant2'
         *  Constant: '<S383>/Constant'
         *  Constant: '<S386>/Constant'
         *  MATLAB Function: '<S385>/PositionAndDerivative1'
         *  MultiPortSwitch: '<S33>/Index Vector15'
         *  MultiPortSwitch: '<S33>/Index Vector17'
         *  Product: '<S381>/Divide4'
         *  Product: '<S386>/Product1'
         *  Product: '<S386>/Product4'
         *  Product: '<S386>/Product5'
         *  Selector: '<S392>/Selector10'
         *  SignalConversion: '<S31>/Signal Conversion15'
         *  SignalConversion: '<S31>/Signal Conversion22'
         *  Sum: '<S381>/Add1'
         *  Sum: '<S381>/Add2'
         *  Sum: '<S381>/Add3'
         *  Sum: '<S381>/Add4'
         *  Sum: '<S386>/Sum6'
         */
        rtb_LogicalOperator11 = (fabsf((rtb_Switch2_d * rtb_Switch2_d *
          Meas_ObjAyabs[ForEach_itr_i] * 0.5F + (Meas_ObjVyabs[ForEach_itr_i] *
          rtb_Switch2_d + AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy)) -
          ((((((AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[1] -
                AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[2]) * 3.0F -
               AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[0]) +
              AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[3]) * (rtb_tau_g *
          rtb_RadiusRear_j) + ((AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[0] -
          AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[1] * 2.0F) +
          AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[2]) * 3.0F * rtb_RadiusRear_j)
            + (AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[1] -
               AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[0]) * 3.0F * rtb_tau_g)
           + AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLat[0])) -
          ((P_TA_PrmForVehWidth + 1.8F) + AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i]
           .TA_ObsWidth) * 0.5F < 0.0F);

        /* MATLAB Function: '<S385>/PositionAndDerivative' incorporates:
         *  Selector: '<S392>/Selector10'
         */
        AEBS_TOS_PositionAndDerivative(AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLgt
          [0], AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLgt[1],
          AEBS_TOS_B.PahEstimn_i[i - 1].CtrlAryLgt[2], AEBS_TOS_B.PahEstimn_i[i
          - 1].CtrlAryLgt[3], rtb_tau_g, &rtb_x_l, &rtb_dx_d);

        /* MATLAB Function: '<S380>/Position_InPath' incorporates:
         *  Constant: '<S380>/Constant'
         *  Constant: '<S380>/Constant1'
         *  MultiPortSwitch: '<S33>/Index Vector20'
         *  SignalConversion: '<S31>/Signal Conversion25'
         */
        rtb_RadiusRear_j = P_TA_PrmForVehWidth / 2.0F;
        rtb_Product_gz = -P_TA_PrmForVehWidth / 2.0F;
        rtb_Quotient_f = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsWidth /
          2.0F + AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy;
        rtb_Quotient_g = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy -
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsWidth / 2.0F;
        if ((Meas_ObjHeadAngle[ForEach_itr_i] >= 0.0F) &&
            (Meas_ObjHeadAngle[ForEach_itr_i] < 0.75F) && (fabsf
             (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy) > 0.0F)) {
          rtb_Add_cl = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsLength *
            sinf(Meas_ObjHeadAngle[ForEach_itr_i]);
          rtb_Quotient_f += rtb_Add_cl;
          rtb_Quotient_g -= rtb_Add_cl;
        } else if ((Meas_ObjHeadAngle[ForEach_itr_i] < 0.0F) &&
                   (Meas_ObjHeadAngle[ForEach_itr_i] > -0.75F) && (fabsf
                    (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy) > 0.0F)) {
          rtb_Add_cl = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsLength *
            sinf(Meas_ObjHeadAngle[ForEach_itr_i]);
          rtb_Quotient_f -= rtb_Add_cl;
          rtb_Quotient_g += rtb_Add_cl;
        }

        if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx >=
            P_TA_PrmForObjDisThrd) {
          if ((rtb_Quotient_f <= rtb_Product_gz) || (rtb_Quotient_g >=
               rtb_RadiusRear_j)) {
            rtb_Add_cl = 0.0F;
          } else if (rtb_Quotient_f >= rtb_RadiusRear_j) {
            rtb_Add_cl = (rtb_RadiusRear_j - rtb_Quotient_g) /
              P_TA_PrmForVehWidth;
          } else {
            rtb_Add_cl = (rtb_Quotient_f - rtb_Product_gz) / P_TA_PrmForVehWidth;
          }

          if ((rtb_RadiusRear_j >= rtb_Quotient_f) && (rtb_Product_gz <=
               rtb_Quotient_g)) {
            rtb_Add_cl = 1.0F;
          }
        } else {
          rtb_Add_cl = 0.0F;
        }

        if (rtb_Add_cl < 0.0F) {
          rtb_Add_cl = 0.0F;
        }

        rtb_Add_cl = fminf(rtb_Add_cl, 1.0F);
        AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].Overlap_Rate = rtb_Add_cl;

        /* SignalConversion generated from: '<S377>/Overlap_Current' incorporates:
         *  MATLAB Function: '<S380>/Position_InPath'
         */
        rtb_LogicalOperator7 = (rtb_Add_cl > 0.15F);

        /* End of Outputs for SubSystem: '<S375>/ObjPos_Calculateelse' */
      }

      /* End of If: '<S375>/If' */

      /* Switch: '<S40>/Switch' incorporates:
       *  Constant: '<S367>/Constant'
       *  Constant: '<S368>/Constant'
       *  Constant: '<S369>/Constant'
       *  Constant: '<S370>/Constant'
       *  Constant: '<S371>/Constant'
       *  Constant: '<S372>/Constant'
       *  Constant: '<S373>/Constant'
       *  Constant: '<S374>/Constant'
       *  Constant: '<S40>/Constant'
       *  Inport: '<Root>/Extension_input_Bus'
       *  Logic: '<S40>/Logical Operator'
       *  Logic: '<S40>/Logical Operator1'
       *  Logic: '<S40>/Logical Operator2'
       *  RelationalOperator: '<S367>/Compare'
       *  RelationalOperator: '<S368>/Compare'
       *  RelationalOperator: '<S369>/Compare'
       *  RelationalOperator: '<S370>/Compare'
       *  RelationalOperator: '<S371>/Compare'
       *  RelationalOperator: '<S372>/Compare'
       *  RelationalOperator: '<S373>/Compare'
       *  RelationalOperator: '<S374>/Compare'
       *  Switch: '<S40>/Switch1'
       *  Switch: '<S40>/Switch2'
       *  Switch: '<S40>/Switch3'
       *  Switch: '<S40>/Switch4'
       */
      if (rtb_LogicalOperator5 == false) {
        num = ((uint8_T)255U);
      } else if (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP ==
                 ((uint8_T)1U)) {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S368>/Constant'
         *  RelationalOperator: '<S368>/Compare'
         */
        num = (uint8_T)(rtb_LogicalOperator7 == true);
      } else if ((rtb_LogicalOperator7 == true) && (rtb_LogicalOperator11 ==
                  false)) {
        /* Switch: '<S40>/Switch2' incorporates:
         *  Constant: '<S40>/Constant1'
         *  Switch: '<S40>/Switch1'
         */
        num = ((uint8_T)1U);
      } else if ((rtb_LogicalOperator7 == false) && (rtb_LogicalOperator11 ==
                  true)) {
        /* Switch: '<S40>/Switch3' incorporates:
         *  Constant: '<S40>/Constant2'
         *  Switch: '<S40>/Switch1'
         *  Switch: '<S40>/Switch2'
         */
        num = ((uint8_T)2U);
      } else if ((rtb_LogicalOperator7 == true) && (rtb_LogicalOperator11 ==
                  true)) {
        /* Switch: '<S40>/Switch4' incorporates:
         *  Constant: '<S40>/Constant3'
         *  Switch: '<S40>/Switch1'
         *  Switch: '<S40>/Switch2'
         *  Switch: '<S40>/Switch3'
         */
        num = ((uint8_T)3U);
      } else {
        /* Switch: '<S40>/Switch2' incorporates:
         *  Constant: '<S40>/Constant4'
         *  Switch: '<S40>/Switch1'
         *  Switch: '<S40>/Switch3'
         *  Switch: '<S40>/Switch4'
         */
        num = ((uint8_T)0U);
      }

      /* End of Switch: '<S40>/Switch' */

      /* RelationalOperator: '<S158>/Compare' incorporates:
       *  Constant: '<S158>/Constant'
       */
      rtb_Valid_g = (num == ((uint8_T)255U));

      /* DataTypeConversion: '<S148>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion_e = rtb_Valid_g;

      /* If: '<S143>/If' incorporates:
       *  Inport: '<Root>/Extension_input_Bus'
       *  Switch: '<S153>/Switch1'
       */
      if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion_e > 0.0) {
        /* Outputs for IfAction SubSystem: '<S143>/ObjWeight_Invalid' incorporates:
         *  ActionPort: '<S146>/Action Port'
         */
        /* SignalConversion generated from: '<S146>/Long_ObjWeightCoef' incorporates:
         *  Constant: '<S146>/Constant'
         */
        temp_ID = ((uint8_T)255U);

        /* End of Outputs for SubSystem: '<S143>/ObjWeight_Invalid' */
      } else {
        /* Outputs for IfAction SubSystem: '<S143>/ObjWeight_Jugement' incorporates:
         *  ActionPort: '<S147>/Action Port'
         */
        if (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP == 0) {
          /* Switch: '<S153>/Switch' incorporates:
           *  Constant: '<S154>/Constant'
           *  Constant: '<S157>/Constant'
           *  Logic: '<S153>/Logical Operator3'
           *  MultiPortSwitch: '<S33>/Index Vector2'
           *  RelationalOperator: '<S154>/Compare'
           *  RelationalOperator: '<S157>/Compare'
           *  SignalConversion: '<S31>/Signal Conversion2'
           *  Switch: '<S153>/Switch1'
           */
          if ((Meas_ObjState[ForEach_itr_i] == ((uint8_T)2U)) ||
              (Meas_ObjState[ForEach_itr_i] == ((uint8_T)3U))) {
            /* UnitDelay: '<S153>/Unit Delay' incorporates:
             *  Constant: '<S153>/Constant1'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_o = false;
          } else {
            /* Abs: '<S153>/Abs2' incorporates:
             *  MultiPortSwitch: '<S33>/Index Vector20'
             *  SignalConversion: '<S31>/Signal Conversion25'
             */
            rtb_RadiusRear_j = fabsf(Meas_ObjHeadAngle[ForEach_itr_i]);

            /* UnitDelay: '<S153>/Unit Delay' incorporates:
             *  Abs: '<S153>/Abs'
             *  Abs: '<S153>/Abs1'
             *  Constant: '<S153>/Constant'
             *  Constant: '<S153>/Constant2'
             *  Constant: '<S155>/Constant'
             *  Constant: '<S156>/Constant'
             *  Inport: '<Root>/Extension_input_Bus'
             *  Logic: '<S153>/Logical Operator1'
             *  Logic: '<S153>/Logical Operator2'
             *  MultiPortSwitch: '<S33>/Index Vector10'
             *  Product: '<S153>/Product'
             *  RelationalOperator: '<S153>/Relational Operator'
             *  RelationalOperator: '<S155>/Compare'
             *  RelationalOperator: '<S156>/Compare'
             *  SignalConversion: '<S31>/Signal Conversion10'
             *  Sum: '<S153>/Add'
             *  Sum: '<S153>/Add1'
             *  Sum: '<S153>/Add2'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_o = ((fabsf
              (AEBS_TOS_U.Extension_input_Bus_j.YawRate *
               P_TA_PrmForVehRearAxleDisttoFrnt +
               AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy) >= fabsf
              (Meas_ObjVx[ForEach_itr_i] +
               AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed) + 0.5F) ||
              ((rtb_RadiusRear_j >= 0.78F) && (rtb_RadiusRear_j <= 2.36F)));
          }

          /* End of Switch: '<S153>/Switch' */
        }

        /* Switch: '<S147>/Switch' incorporates:
         *  Constant: '<S147>/Constant'
         *  Constant: '<S147>/Constant1'
         *  Constant: '<S147>/Constant2'
         *  Constant: '<S149>/Constant'
         *  Constant: '<S150>/Constant'
         *  Logic: '<S147>/Logical Operator'
         *  Logic: '<S147>/Logical Operator1'
         *  MultiPortSwitch: '<S33>/Index Vector3'
         *  RelationalOperator: '<S149>/Compare'
         *  RelationalOperator: '<S150>/Compare'
         *  SignalConversion: '<S31>/Signal Conversion3'
         *  UnitDelay: '<S153>/Unit Delay'
         */
        if ((Meas_ObjOrientation[ForEach_itr_i] == ((uint8_T)3U)) ||
            (Meas_ObjOrientation[ForEach_itr_i] == ((uint8_T)4U)) || false ||
            false || AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_o)
        {
          temp_ID = ((uint8_T)255U);
        } else {
          temp_ID = num;
        }

        /* End of Switch: '<S147>/Switch' */
        /* End of Outputs for SubSystem: '<S143>/ObjWeight_Jugement' */
      }

      /* End of If: '<S143>/If' */

      /* RelationalOperator: '<S366>/Compare' incorporates:
       *  Constant: '<S366>/Constant'
       */
      rtb_Valid_g = (temp_ID == ((uint8_T)255U));

      /* DataTypeConversion: '<S210>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion_o = rtb_Valid_g;

      /* MultiPortSwitch: '<S33>/Index Vector16' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion21'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAxAbs =
        Meas_ObjAxabs[ForEach_itr_i];

      /* If: '<S145>/If' */
      if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion_o > 0.0) {
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_a = 0;

        /* Outputs for IfAction SubSystem: '<S145>/CalculateTTRAndTTM_if' incorporates:
         *  ActionPort: '<S209>/Action Port'
         */
        /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
         *  Constant: '<S209>/Constant'
         *  SignalConversion generated from: '<S209>/Long_ObjWeightCoefTTI'
         */
        rtb_DataTypeConversion_j = ((uint8_T)255U);

        /* SignalConversion generated from: '<S209>/TimeToReachLgt' incorporates:
         *  Constant: '<S209>/Constant1'
         */
        rtb_RadiusRear_j = P_TA_TTIUpperLimiPositive;

        /* End of Outputs for SubSystem: '<S145>/CalculateTTRAndTTM_if' */
      } else {
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_a = 1;

        /* Outputs for IfAction SubSystem: '<S145>/CalculateTTRAndTTM_else' incorporates:
         *  ActionPort: '<S208>/Action Port'
         */
        /* Sum: '<S343>/Add2' incorporates:
         *  Constant: '<S343>/Constant'
         */
        rtb_Product_gz = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx +
          P_TA_PrmForVehLongth;

        /* Switch generated from: '<S218>/Switch_1' incorporates:
         *  Abs: '<S321>/Abs'
         *  Constant: '<S319>/Constant'
         *  Constant: '<S320>/Constant'
         *  Constant: '<S321>/LimitSource'
         *  Inport: '<Root>/Extension_input_Bus'
         *  Logic: '<S217>/Logop_1'
         *  Logic: '<S217>/Logop_2'
         *  Logic: '<S217>/Logop_3'
         *  MultiPortSwitch: '<S33>/Index Vector10'
         *  MultiPortSwitch: '<S33>/Index Vector25'
         *  RelationalOperator: '<S319>/Compare'
         *  RelationalOperator: '<S320>/Compare'
         *  RelationalOperator: '<S321>/Relational Operator'
         *  SignalConversion: '<S31>/Signal Conversion10'
         *  SignalConversion: '<S31>/Signal Conversion19'
         *  Switch: '<S218>/Switch_2'
         *  Switch generated from: '<S218>/Switch_3'
         *  Switch: '<S218>/Switch_4'
         *  UnaryMinus: '<S342>/Unary Minus'
         *  UnaryMinus: '<S342>/Unary Minus1'
         *  UnaryMinus: '<S342>/Unary Minus2'
         *  UnaryMinus: '<S342>/Unary Minus3'
         *  UnaryMinus: '<S342>/Unary Minus4'
         *  UnaryMinus: '<S342>/Unary Minus5'
         *  UnaryMinus: '<S343>/Unary Minus6'
         */
        if ((Meas_ObjVx[ForEach_itr_i] < 0.0F) || ((!(fabsf
               (Meas_ObjVx[ForEach_itr_i]) > 0.01F)) &&
             (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx > 0.0F))) {
          rtb_VRel_h = Meas_ObjVx[ForEach_itr_i];
          rtb_VRelStationaryHost_p = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
            TA_ObsVxAbs;
          rtb_VRelStationaryObject_j =
            -AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
          t_sinObjAngle_f = Meas_ObjAx[ForEach_itr_i];
          rtb_Product14_er = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAxAbs;
          rtb_ARelStationaryObject = -AEBS_TOS_U.Extension_input_Bus_j.AX1;
          rtb_Add_pz = -Meas_ObjVx[ForEach_itr_i];
          rtb_Quotient_dg = -AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs;
          rtb_Add_cl = AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
          rtb_Product14_h = -Meas_ObjAx[ForEach_itr_i];
          rtb_Sum1_p = -AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAxAbs;
          rtb_Quotient_f = AEBS_TOS_U.Extension_input_Bus_j.AX1;
          rtb_Quotient_e4 = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx;
          rtb_Quotient_g = -rtb_Product_gz;
        } else {
          rtb_VRel_h = -Meas_ObjVx[ForEach_itr_i];
          rtb_VRelStationaryHost_p = -AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
            TA_ObsVxAbs;
          rtb_VRelStationaryObject_j =
            AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
          t_sinObjAngle_f = -Meas_ObjAx[ForEach_itr_i];
          rtb_Product14_er = -AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAxAbs;
          rtb_ARelStationaryObject = AEBS_TOS_U.Extension_input_Bus_j.AX1;
          rtb_Add_pz = Meas_ObjVx[ForEach_itr_i];
          rtb_Quotient_dg = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs;
          rtb_Add_cl = -AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
          rtb_Product14_h = Meas_ObjAx[ForEach_itr_i];
          rtb_Sum1_p = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAxAbs;
          rtb_Quotient_f = -AEBS_TOS_U.Extension_input_Bus_j.AX1;
          rtb_Quotient_e4 = -rtb_Product_gz;
          rtb_Quotient_g = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx;
        }

        /* End of Switch generated from: '<S218>/Switch_1' */

        /* Logic: '<S345>/Logical Operator' incorporates:
         *  Constant: '<S348>/Constant'
         *  Constant: '<S349>/Constant'
         *  MultiPortSwitch: '<S33>/Index Vector2'
         *  RelationalOperator: '<S348>/Compare'
         *  RelationalOperator: '<S349>/Compare'
         *  SignalConversion: '<S31>/Signal Conversion2'
         */
        rtb_LogicalOperator11 = ((Meas_ObjState[ForEach_itr_i] == ((uint8_T)2U))
          || (Meas_ObjState[ForEach_itr_i] == ((uint8_T)3U)));

        /* Gain: '<S345>/Gain_1' */
        rtb_RadiusRear_j = (-1.0F) * AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
          TA_ObsAxAbs;

        /* Outputs for Atomic SubSystem: '<S350>/SafeDivide' */
        /* MATLAB Function: '<S354>/SafeDivide' */
        if (fabsf(rtb_RadiusRear_j) > fabsf
            (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs) *
            5.42101151E-20F) {
          rtb_Quotient_is = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs /
            rtb_RadiusRear_j;
        } else if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs > 0.0F) {
          rtb_Quotient_is = AEBS_TOS_DataTypeMax;
        } else if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs < 0.0F) {
          rtb_Quotient_is = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_is = 0.0F;
        }

        /* End of MATLAB Function: '<S354>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S350>/SafeDivide' */

        /* Switch: '<S355>/Switch' incorporates:
         *  RelationalOperator: '<S355>/UpperRelop'
         */
        if (rtb_Quotient_is < AEBS_TOS_ConstB.CoreSubsys_p.Gain_p) {
          /* Switch: '<S355>/Switch' */
          rtb_Switch_lco = AEBS_TOS_ConstB.CoreSubsys_p.Gain_p;
        } else {
          /* Switch: '<S355>/Switch' */
          rtb_Switch_lco = rtb_Quotient_is;
        }

        /* End of Switch: '<S355>/Switch' */

        /* Switch: '<S355>/Switch2' incorporates:
         *  Constant: '<S350>/Constant5'
         *  RelationalOperator: '<S355>/LowerRelop1'
         */
        if (rtb_Quotient_is > 1.0E+10F) {
          /* Switch: '<S355>/Switch2' */
          rtb_Switch2_i = 1.0E+10F;
        } else {
          /* Switch: '<S355>/Switch2' */
          rtb_Switch2_i = rtb_Switch_lco;
        }

        /* End of Switch: '<S355>/Switch2' */

        /* Gain: '<S345>/Gain_2' incorporates:
         *  Inport: '<Root>/Extension_input_Bus'
         */
        rtb_RadiusRear_j = (-1.0F) * AEBS_TOS_U.Extension_input_Bus_j.AX1;

        /* Outputs for Atomic SubSystem: '<S351>/SafeDivide' */
        /* MATLAB Function: '<S357>/SafeDivide' incorporates:
         *  Inport: '<Root>/Extension_input_Bus'
         */
        if (fabsf(rtb_RadiusRear_j) > dxMin_Left * 5.42101151E-20F) {
          rtb_Quotient_kp = AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed /
            rtb_RadiusRear_j;
        } else if (AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed > 0.0F) {
          rtb_Quotient_kp = AEBS_TOS_DataTypeMax;
        } else if (AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed < 0.0F) {
          rtb_Quotient_kp = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_kp = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S351>/SafeDivide' */

        /* Switch: '<S358>/Switch' incorporates:
         *  RelationalOperator: '<S358>/UpperRelop'
         */
        if (rtb_Quotient_kp < AEBS_TOS_ConstB.CoreSubsys_p.Gain_c) {
          /* Switch: '<S358>/Switch' */
          rtb_Switch_hs = AEBS_TOS_ConstB.CoreSubsys_p.Gain_c;
        } else {
          /* Switch: '<S358>/Switch' */
          rtb_Switch_hs = rtb_Quotient_kp;
        }

        /* End of Switch: '<S358>/Switch' */

        /* Switch: '<S358>/Switch2' incorporates:
         *  Constant: '<S351>/Constant5'
         *  RelationalOperator: '<S358>/LowerRelop1'
         */
        if (rtb_Quotient_kp > 1.0E+10F) {
          /* Switch: '<S358>/Switch2' */
          rtb_Switch2_m = 1.0E+10F;
        } else {
          /* Switch: '<S358>/Switch2' */
          rtb_Switch2_m = rtb_Switch_hs;
        }

        /* End of Switch: '<S358>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S211>/CalculateTTI' */
        /* Outputs for Atomic SubSystem: '<S216>/HostAndObjectMoving' */
        /* Gain: '<S223>/Gain' */
        rtb_RadiusRear_j = 2.0F * t_sinObjAngle_f;

        /* Math: '<S223>/Square' */
        rtb_Add_a = rtb_VRel_h * rtb_VRel_h;

        /* Outputs for Atomic SubSystem: '<S229>/SafeDivide' */
        /* MATLAB Function: '<S231>/SafeDivide' */
        if (fabsf(rtb_RadiusRear_j) > fabsf(rtb_Add_a) * 5.42101151E-20F) {
          rtb_Quotient_e = rtb_Add_a / rtb_RadiusRear_j;
        } else if (rtb_Add_a > 0.0F) {
          rtb_Quotient_e = AEBS_TOS_DataTypeMax;
        } else if (rtb_Add_a < 0.0F) {
          rtb_Quotient_e = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_e = 0.0F;
        }

        /* End of MATLAB Function: '<S231>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S229>/SafeDivide' */

        /* Switch: '<S232>/Switch' incorporates:
         *  RelationalOperator: '<S232>/UpperRelop'
         */
        if (rtb_Quotient_e < AEBS_TOS_ConstB.CoreSubsys_p.Gain_a) {
          /* Switch: '<S232>/Switch' */
          rtb_Switch_ma = AEBS_TOS_ConstB.CoreSubsys_p.Gain_a;
        } else {
          /* Switch: '<S232>/Switch' */
          rtb_Switch_ma = rtb_Quotient_e;
        }

        /* End of Switch: '<S232>/Switch' */

        /* Switch: '<S232>/Switch2' incorporates:
         *  Constant: '<S229>/Constant5'
         *  RelationalOperator: '<S232>/LowerRelop1'
         */
        if (rtb_Quotient_e > 1.0E+10F) {
          /* Switch: '<S232>/Switch2' */
          rtb_Switch2_iz = 1.0E+10F;
        } else {
          /* Switch: '<S232>/Switch2' */
          rtb_Switch2_iz = rtb_Switch_ma;
        }

        /* End of Switch: '<S232>/Switch2' */

        /* Switch: '<S223>/Switch' incorporates:
         *  Abs: '<S230>/Abs'
         *  Constant: '<S223>/Constant'
         *  Constant: '<S227>/Constant'
         *  Constant: '<S228>/Constant'
         *  Constant: '<S230>/LimitSource'
         *  Logic: '<S223>/Logop_1'
         *  Logic: '<S223>/Logop_2'
         *  Logic: '<S223>/Logop_3'
         *  RelationalOperator: '<S223>/Relop_1'
         *  RelationalOperator: '<S223>/Relop_2'
         *  RelationalOperator: '<S227>/Compare'
         *  RelationalOperator: '<S228>/Compare'
         *  RelationalOperator: '<S230>/Relational Operator'
         */
        if (fabsf(t_sinObjAngle_f) > 0.01F) {
          /* Sum: '<S229>/Add' incorporates:
           *  Constant: '<S229>/Constant'
           */
          rtb_RadiusRear_j = rtb_Switch2_iz + P_TA_PrmForTTCalDistanceOffset;
          rtb_SolutionFound_c = (((rtb_Quotient_e4 > rtb_RadiusRear_j) &&
            (t_sinObjAngle_f > 0.0F)) || ((rtb_Quotient_e4 < rtb_RadiusRear_j) &&
            (t_sinObjAngle_f < 0.0F)));
        } else {
          rtb_SolutionFound_c = false;
        }

        /* End of Switch: '<S223>/Switch' */

        /* RelationalOperator: '<S225>/Compare' incorporates:
         *  Constant: '<S225>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         */
        rtb_SolutionFound_l =
          (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP == ((uint8_T)0U));

        /* Switch generated from: '<S220>/Switch_1' incorporates:
         *  Logic: '<S220>/Logical Operator'
         *  Logic: '<S220>/Logop_1'
         *  Switch: '<S220>/Switch_2'
         */
        if ((!rtb_SolutionFound_c) || (!rtb_SolutionFound_l)) {
          /* Switch: '<S220>/Switch_2' */
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistance = rtb_Quotient_e4;
        } else {
          /* Switch generated from: '<S220>/Switch_1' */
          rtb_VRel_h = rtb_Add_pz;

          /* Switch: '<S220>/Switch_2' */
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistance = rtb_Quotient_g;
          t_sinObjAngle_f = rtb_Product14_h;
        }

        /* End of Switch generated from: '<S220>/Switch_1' */

        /* Gain: '<S226>/Gain' */
        rtb_ARelHalf_b = 0.5F * t_sinObjAngle_f;

        /* MATLAB Function: '<S226>/QuadraticEquationSolver' */
        AEBS_TO_QuadraticEquationSolver(rtb_ARelHalf_b, rtb_VRel_h,
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistance, rtb_x_c,
          &rtb_SolutionFound);

        /* Abs: '<S226>/Abs' */
        rtb_RadiusRear_j = fabsf(rtb_VRel_h);

        /* Switch: '<S226>/Switch3' incorporates:
         *  Constant: '<S226>/Constant'
         *  Constant: '<S245>/Constant'
         *  RelationalOperator: '<S245>/Compare'
         */
        if (rtb_RadiusRear_j <= 0.2F) {
          rtb_RadiusRear_j = 1.0F;
        }

        /* End of Switch: '<S226>/Switch3' */

        /* Product: '<S226>/Divide' */
        rtb_RadiusRear_j = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistance /
          rtb_RadiusRear_j;

        /* Switch: '<S226>/Switch4' incorporates:
         *  Constant: '<S243>/Constant'
         *  Constant: '<S246>/Constant'
         *  Constant: '<S247>/Constant'
         *  Constant: '<S248>/Constant'
         *  Constant: '<S249>/Constant'
         *  Constant: '<S250>/Constant'
         *  Logic: '<S226>/Logical Operator1'
         *  Logic: '<S226>/Logical Operator2'
         *  Logic: '<S226>/Logical Operator3'
         *  RelationalOperator: '<S243>/Compare'
         *  RelationalOperator: '<S246>/Compare'
         *  RelationalOperator: '<S247>/Compare'
         *  RelationalOperator: '<S248>/Compare'
         *  RelationalOperator: '<S249>/Compare'
         *  RelationalOperator: '<S250>/Compare'
         *  UnitDelay: '<S226>/Unit Delay'
         */
        if ((!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_b !=
               100.0F)) || (!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
                              UnitDelay_DSTATE_b != (-100.0F))) ||
            (!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_b <=
               6.0F)) || ((!(rtb_RadiusRear_j != 0.0F)) || (!(rtb_RadiusRear_j <=
               6.0F))) || (rtb_SolutionFound != false)) {
          /* Switch: '<S226>/Switch' incorporates:
           *  Abs: '<S226>/Abs1'
           *  Constant: '<S241>/Constant'
           *  Constant: '<S242>/Constant'
           *  Constant: '<S244>/Constant'
           *  Constant: '<S251>/Constant'
           *  Inport: '<Root>/Extension_input_Bus'
           *  Logic: '<S226>/Logical Operator'
           *  RelationalOperator: '<S241>/Compare'
           *  RelationalOperator: '<S242>/Compare'
           *  RelationalOperator: '<S244>/Compare'
           *  RelationalOperator: '<S251>/Compare'
           *  Switch: '<S226>/Switch1'
           *  Switch: '<S226>/Switch2'
           */
          if ((fabsf(t_sinObjAngle_f) <= 0.25F) || (rtb_SolutionFound == false) ||
              (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP !=
               ((uint8_T)0U))) {
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_b =
              rtb_RadiusRear_j;
          } else if (rtb_SolutionFound) {
            /* Switch: '<S253>/Switch3' incorporates:
             *  Constant: '<S254>/Constant'
             *  RelationalOperator: '<S254>/Compare'
             *  Switch: '<S226>/Switch2'
             */
            if (t_sinObjAngle_f < 0.0F) {
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_b =
                rtb_x_c[0];
            } else {
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_b =
                rtb_x_c[1];
            }

            /* End of Switch: '<S253>/Switch3' */
          } else if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistance < 0.0F)
          {
            /* Switch: '<S226>/Switch1' incorporates:
             *  Constant: '<S226>/Constant1'
             *  Switch: '<S226>/Switch2'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_b =
              P_TA_TiLowrLimInAsyEvlrCritEve;
          } else {
            /* Switch: '<S226>/Switch2' incorporates:
             *  Constant: '<S226>/Constant3'
             *  Switch: '<S226>/Switch1'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_b =
              P_TA_TiUpprLimInAsyEvlrCritEve;
          }

          /* End of Switch: '<S226>/Switch' */
        }

        /* End of Switch: '<S226>/Switch4' */

        /* Gain: '<S224>/Gain' */
        rtb_RadiusRear_j = 2.0F * rtb_Product14_h;

        /* Math: '<S224>/Square' */
        rtb_Add_pz *= rtb_Add_pz;

        /* Outputs for Atomic SubSystem: '<S236>/SafeDivide' */
        /* MATLAB Function: '<S238>/SafeDivide' */
        if (fabsf(rtb_RadiusRear_j) > fabsf(rtb_Add_pz) * 5.42101151E-20F) {
          rtb_Quotient_c = rtb_Add_pz / rtb_RadiusRear_j;
        } else if (rtb_Add_pz > 0.0F) {
          rtb_Quotient_c = AEBS_TOS_DataTypeMax;
        } else if (rtb_Add_pz < 0.0F) {
          rtb_Quotient_c = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_c = 0.0F;
        }

        /* End of MATLAB Function: '<S238>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S236>/SafeDivide' */

        /* Switch: '<S239>/Switch' incorporates:
         *  RelationalOperator: '<S239>/UpperRelop'
         */
        if (rtb_Quotient_c < AEBS_TOS_ConstB.CoreSubsys_p.Gain_no) {
          /* Switch: '<S239>/Switch' */
          rtb_Switch_bc = (real32_T)AEBS_TOS_ConstB.CoreSubsys_p.Gain_no;
        } else {
          /* Switch: '<S239>/Switch' */
          rtb_Switch_bc = rtb_Quotient_c;
        }

        /* End of Switch: '<S239>/Switch' */

        /* Switch: '<S239>/Switch2' incorporates:
         *  Constant: '<S236>/Constant5'
         *  RelationalOperator: '<S239>/LowerRelop1'
         */
        if (rtb_Quotient_c > 1.0E+10) {
          /* Switch: '<S239>/Switch2' */
          rtb_Switch2_b1 = (real32_T)1.0E+10;
        } else {
          /* Switch: '<S239>/Switch2' */
          rtb_Switch2_b1 = rtb_Switch_bc;
        }

        /* End of Switch: '<S239>/Switch2' */

        /* Switch: '<S224>/Switch' incorporates:
         *  Abs: '<S237>/Abs'
         *  Constant: '<S224>/Constant'
         *  Constant: '<S234>/Constant'
         *  Constant: '<S235>/Constant'
         *  Constant: '<S237>/LimitSource'
         *  Logic: '<S224>/Logop_1'
         *  Logic: '<S224>/Logop_2'
         *  Logic: '<S224>/Logop_3'
         *  RelationalOperator: '<S224>/Relop_1'
         *  RelationalOperator: '<S224>/Relop_2'
         *  RelationalOperator: '<S234>/Compare'
         *  RelationalOperator: '<S235>/Compare'
         *  RelationalOperator: '<S237>/Relational Operator'
         */
        if (fabsf(rtb_Product14_h) > 0.01F) {
          /* Sum: '<S236>/Add' incorporates:
           *  Constant: '<S236>/Constant'
           */
          rtb_RadiusRear_j = rtb_Switch2_b1 - P_TA_PrmForTTCalDistanceOffset;
          rtb_LogicalOperator7_e = (((rtb_Quotient_g > rtb_RadiusRear_j) &&
            (rtb_Product14_h > 0.0F)) || ((rtb_Quotient_g < rtb_RadiusRear_j) &&
            (rtb_Product14_h < 0.0F)));
        } else {
          rtb_LogicalOperator7_e = false;
        }

        /* End of Switch: '<S224>/Switch' */

        /* Logic: '<S220>/Logop_3' */
        rtb_SolutionFound_c = (rtb_SolutionFound_c && rtb_SolutionFound_l &&
          rtb_LogicalOperator7_e);

        /* Switch: '<S220>/Switch_3' incorporates:
         *  Constant: '<S220>/TiUpprLimIn'
         *  UnitDelay: '<S226>/Unit Delay'
         */
        if (rtb_SolutionFound_c) {
          rtb_RadiusRear_j = P_TA_TiUpprLimInAsyEvlrCritEve;
        } else {
          rtb_RadiusRear_j = AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
            UnitDelay_DSTATE_b;
        }

        /* End of Switch: '<S220>/Switch_3' */

        /* Logic: '<S220>/Logop_2' */
        rtb_LogicalOperator10_m = !rtb_SolutionFound_c;

        /* End of Outputs for SubSystem: '<S216>/HostAndObjectMoving' */

        /* Outputs for Atomic SubSystem: '<S216>/StationaryHost' */
        /* Gain: '<S255>/Gain' */
        rtb_Product14_h = 2.0F * rtb_Product14_er;

        /* Math: '<S255>/Square' */
        rtb_Add_pz = rtb_VRelStationaryHost_p * rtb_VRelStationaryHost_p;

        /* Outputs for Atomic SubSystem: '<S261>/SafeDivide' */
        /* MATLAB Function: '<S263>/SafeDivide' */
        if (fabsf(rtb_Product14_h) > fabsf(rtb_Add_pz) * 5.42101151E-20F) {
          rtb_Quotient_el = rtb_Add_pz / rtb_Product14_h;
        } else if (rtb_Add_pz > 0.0F) {
          rtb_Quotient_el = AEBS_TOS_DataTypeMax;
        } else if (rtb_Add_pz < 0.0F) {
          rtb_Quotient_el = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_el = 0.0F;
        }

        /* End of MATLAB Function: '<S263>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S261>/SafeDivide' */

        /* RelationalOperator: '<S264>/LowerRelop1' incorporates:
         *  Constant: '<S261>/Constant5'
         */
        rtb_SolutionFound_l = (rtb_Quotient_el > 1.0E+10);

        /* Switch: '<S264>/Switch' incorporates:
         *  RelationalOperator: '<S264>/UpperRelop'
         */
        if (rtb_Quotient_el < AEBS_TOS_ConstB.CoreSubsys_p.Gain_f) {
          /* Switch: '<S264>/Switch' */
          rtb_Switch_ht = (real32_T)AEBS_TOS_ConstB.CoreSubsys_p.Gain_f;
        } else {
          /* Switch: '<S264>/Switch' */
          rtb_Switch_ht = rtb_Quotient_el;
        }

        /* End of Switch: '<S264>/Switch' */

        /* Switch: '<S264>/Switch2' */
        if (rtb_SolutionFound_l) {
          /* Switch: '<S264>/Switch2' incorporates:
           *  Constant: '<S261>/Constant5'
           */
          rtb_Switch2_c = (real32_T)1.0E+10;
        } else {
          /* Switch: '<S264>/Switch2' */
          rtb_Switch2_c = rtb_Switch_ht;
        }

        /* End of Switch: '<S264>/Switch2' */

        /* Switch: '<S255>/Switch' incorporates:
         *  Abs: '<S262>/Abs'
         *  Constant: '<S255>/Constant'
         *  Constant: '<S259>/Constant'
         *  Constant: '<S260>/Constant'
         *  Constant: '<S262>/LimitSource'
         *  Logic: '<S255>/Logop_1'
         *  Logic: '<S255>/Logop_2'
         *  Logic: '<S255>/Logop_3'
         *  RelationalOperator: '<S255>/Relop_1'
         *  RelationalOperator: '<S255>/Relop_2'
         *  RelationalOperator: '<S259>/Compare'
         *  RelationalOperator: '<S260>/Compare'
         *  RelationalOperator: '<S262>/Relational Operator'
         */
        if (fabsf(rtb_Product14_er) > 0.01F) {
          /* Sum: '<S261>/Add' incorporates:
           *  Constant: '<S261>/Constant'
           */
          rtb_Product14_h = rtb_Switch2_c + P_TA_PrmForTTCalDistanceOffset;
          rtb_SolutionFound_l = (((rtb_Quotient_e4 > rtb_Product14_h) &&
            (rtb_Product14_er > 0.0F)) || ((rtb_Quotient_e4 < rtb_Product14_h) &&
            (rtb_Product14_er < 0.0F)));
        } else {
          rtb_SolutionFound_l = false;
        }

        /* End of Switch: '<S255>/Switch' */

        /* RelationalOperator: '<S257>/Compare' incorporates:
         *  Constant: '<S257>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         */
        rtb_LogicalOperator7_e =
          (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP == ((uint8_T)0U));

        /* Switch: '<S221>/Switch_4' incorporates:
         *  Logic: '<S221>/Logical Operator'
         *  Logic: '<S221>/Logop_1'
         *  Switch generated from: '<S221>/Switch_1'
         */
        if ((!rtb_SolutionFound_l) || (!rtb_LogicalOperator7_e)) {
          rtb_Product14_h = rtb_Quotient_e4;
        } else {
          rtb_Product14_h = rtb_Quotient_g;

          /* Switch generated from: '<S221>/Switch_1' */
          rtb_VRelStationaryHost_p = rtb_Quotient_dg;
          rtb_Product14_er = rtb_Sum1_p;
        }

        /* End of Switch: '<S221>/Switch_4' */

        /* Sum: '<S221>/Subtract' incorporates:
         *  Constant: '<S345>/Constant4'
         *  Constant: '<S352>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         *  Product: '<S352>/Product1'
         *  Product: '<S352>/Product4'
         *  Product: '<S352>/Product5'
         *  Sum: '<S352>/Sum6'
         */
        AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistanceStationaryHost =
          rtb_Product14_h - (rtb_Switch2_m * rtb_Switch2_m *
                             AEBS_TOS_U.Extension_input_Bus_j.AX1 * 0.5F +
                             (AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed *
                              rtb_Switch2_m + 0.0F));

        /* Gain: '<S258>/Gain' */
        rtb_ARelHalf_k = 0.5F * rtb_Product14_er;

        /* MATLAB Function: '<S258>/QuadraticEquationSolver' */
        AEBS_TO_QuadraticEquationSolver(rtb_ARelHalf_k, rtb_VRelStationaryHost_p,
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistanceStationaryHost,
          rtb_x_m, &rtb_SolutionFound_c);

        /* Switch: '<S258>/Switch3' incorporates:
         *  Abs: '<S258>/Abs'
         *  Constant: '<S258>/Constant'
         *  Constant: '<S277>/Constant'
         *  RelationalOperator: '<S277>/Compare'
         */
        if (rtb_VRelStationaryHost_p == 0.0F) {
          rtb_Product14_h = 1.0F;
        } else {
          rtb_Product14_h = fabsf(rtb_VRelStationaryHost_p);
        }

        /* End of Switch: '<S258>/Switch3' */

        /* Product: '<S258>/Divide' */
        rtb_Product14_h = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
          EdgeDistanceStationaryHost / rtb_Product14_h;

        /* Switch: '<S258>/Switch4' incorporates:
         *  Constant: '<S275>/Constant'
         *  Constant: '<S278>/Constant'
         *  Constant: '<S279>/Constant'
         *  Constant: '<S280>/Constant'
         *  Constant: '<S281>/Constant'
         *  Constant: '<S282>/Constant'
         *  Logic: '<S258>/Logical Operator1'
         *  Logic: '<S258>/Logical Operator2'
         *  Logic: '<S258>/Logical Operator3'
         *  RelationalOperator: '<S275>/Compare'
         *  RelationalOperator: '<S278>/Compare'
         *  RelationalOperator: '<S279>/Compare'
         *  RelationalOperator: '<S280>/Compare'
         *  RelationalOperator: '<S281>/Compare'
         *  RelationalOperator: '<S282>/Compare'
         *  UnitDelay: '<S258>/Unit Delay'
         */
        if ((!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_a !=
               100.0F)) || (!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
                              UnitDelay_DSTATE_a != (-100.0F))) ||
            (!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_a <=
               6.0F)) || ((!(rtb_Product14_h != 0.0F)) || (!(rtb_Product14_h <=
               6.0F))) || (rtb_SolutionFound_c != false)) {
          /* Switch: '<S258>/Switch' incorporates:
           *  Abs: '<S258>/Abs1'
           *  Constant: '<S273>/Constant'
           *  Constant: '<S274>/Constant'
           *  Constant: '<S276>/Constant'
           *  Constant: '<S283>/Constant'
           *  Inport: '<Root>/Extension_input_Bus'
           *  Logic: '<S258>/Logical Operator'
           *  RelationalOperator: '<S273>/Compare'
           *  RelationalOperator: '<S274>/Compare'
           *  RelationalOperator: '<S276>/Compare'
           *  RelationalOperator: '<S283>/Compare'
           *  Switch: '<S258>/Switch1'
           *  Switch: '<S258>/Switch2'
           */
          if ((fabsf(rtb_Product14_er) <= 0.25F) || (rtb_SolutionFound_c ==
               false) || (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP
                          != ((uint8_T)0U))) {
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_a =
              rtb_Product14_h;
          } else if (rtb_SolutionFound_c) {
            /* Switch: '<S285>/Switch3' incorporates:
             *  Constant: '<S286>/Constant'
             *  RelationalOperator: '<S286>/Compare'
             *  Switch: '<S258>/Switch2'
             */
            if (rtb_Product14_er < 0.0F) {
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_a =
                rtb_x_m[0];
            } else {
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_a =
                rtb_x_m[1];
            }

            /* End of Switch: '<S285>/Switch3' */
          } else if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                     EdgeDistanceStationaryHost < 0.0F) {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Constant: '<S258>/Constant1'
             *  Switch: '<S258>/Switch2'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_a =
              P_TA_TiLowrLimInAsyEvlrCritEve;
          } else {
            /* Switch: '<S258>/Switch2' incorporates:
             *  Constant: '<S258>/Constant3'
             *  Switch: '<S258>/Switch1'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_a =
              P_TA_TiUpprLimInAsyEvlrCritEve;
          }

          /* End of Switch: '<S258>/Switch' */
        }

        /* End of Switch: '<S258>/Switch4' */

        /* Gain: '<S256>/Gain' */
        rtb_Product14_er = 2.0F * rtb_Sum1_p;

        /* Math: '<S256>/Square' */
        rtb_Quotient_dg *= rtb_Quotient_dg;

        /* Outputs for Atomic SubSystem: '<S268>/SafeDivide' */
        /* MATLAB Function: '<S270>/SafeDivide' */
        if (fabsf(rtb_Product14_er) > fabsf(rtb_Quotient_dg) * 5.42101151E-20F)
        {
          rtb_Quotient_j = rtb_Quotient_dg / rtb_Product14_er;
        } else if (rtb_Quotient_dg > 0.0F) {
          rtb_Quotient_j = AEBS_TOS_DataTypeMax;
        } else if (rtb_Quotient_dg < 0.0F) {
          rtb_Quotient_j = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_j = 0.0F;
        }

        /* End of MATLAB Function: '<S270>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S268>/SafeDivide' */

        /* Switch: '<S271>/Switch' incorporates:
         *  RelationalOperator: '<S271>/UpperRelop'
         */
        if (rtb_Quotient_j < AEBS_TOS_ConstB.CoreSubsys_p.Gain_n) {
          /* Switch: '<S271>/Switch' */
          rtb_Switch_ov = (real32_T)AEBS_TOS_ConstB.CoreSubsys_p.Gain_n;
        } else {
          /* Switch: '<S271>/Switch' */
          rtb_Switch_ov = rtb_Quotient_j;
        }

        /* End of Switch: '<S271>/Switch' */

        /* Switch: '<S271>/Switch2' incorporates:
         *  Constant: '<S268>/Constant5'
         *  RelationalOperator: '<S271>/LowerRelop1'
         */
        if (rtb_Quotient_j > 1.0E+10) {
          /* Switch: '<S271>/Switch2' */
          rtb_Switch2_ff = (real32_T)1.0E+10;
        } else {
          /* Switch: '<S271>/Switch2' */
          rtb_Switch2_ff = rtb_Switch_ov;
        }

        /* End of Switch: '<S271>/Switch2' */

        /* Switch: '<S256>/Switch' incorporates:
         *  Abs: '<S269>/Abs'
         *  Constant: '<S256>/Constant'
         *  Constant: '<S266>/Constant'
         *  Constant: '<S267>/Constant'
         *  Constant: '<S269>/LimitSource'
         *  Logic: '<S256>/Logop_1'
         *  Logic: '<S256>/Logop_2'
         *  Logic: '<S256>/Logop_3'
         *  RelationalOperator: '<S256>/Relop_1'
         *  RelationalOperator: '<S256>/Relop_2'
         *  RelationalOperator: '<S266>/Compare'
         *  RelationalOperator: '<S267>/Compare'
         *  RelationalOperator: '<S269>/Relational Operator'
         */
        if (fabsf(rtb_Sum1_p) > 0.01F) {
          /* Sum: '<S268>/Add' incorporates:
           *  Constant: '<S268>/Constant'
           */
          rtb_Quotient_dg = rtb_Switch2_ff - P_TA_PrmForTTCalDistanceOffset;
          rtb_NoSolution_d = (((rtb_Quotient_g > rtb_Quotient_dg) && (rtb_Sum1_p
            > 0.0F)) || ((rtb_Quotient_g < rtb_Quotient_dg) && (rtb_Sum1_p <
            0.0F)));
        } else {
          rtb_NoSolution_d = false;
        }

        /* End of Switch: '<S256>/Switch' */

        /* Logic: '<S221>/Logop_4' */
        rtb_SolutionFound_l = (rtb_SolutionFound_l && rtb_LogicalOperator7_e &&
          rtb_NoSolution_d);

        /* Switch: '<S221>/Switch_5' incorporates:
         *  Constant: '<S221>/TiUpprLimIn1'
         *  UnitDelay: '<S258>/Unit Delay'
         */
        if (rtb_SolutionFound_l) {
          rtb_Sum1_p = P_TA_TiUpprLimInAsyEvlrCritEve;
        } else {
          rtb_Sum1_p = AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
            UnitDelay_DSTATE_a;
        }

        /* End of Switch: '<S221>/Switch_5' */

        /* Logic: '<S221>/Logop_2' */
        rtb_LogicalOperator19 = !rtb_SolutionFound_l;

        /* End of Outputs for SubSystem: '<S216>/StationaryHost' */

        /* Outputs for Atomic SubSystem: '<S216>/StationaryObject' */
        /* Gain: '<S287>/Gain' */
        rtb_Quotient_dg = 2.0F * rtb_ARelStationaryObject;

        /* Math: '<S287>/Square' */
        rtb_Product14_er = rtb_VRelStationaryObject_j *
          rtb_VRelStationaryObject_j;

        /* Outputs for Atomic SubSystem: '<S293>/SafeDivide' */
        /* MATLAB Function: '<S295>/SafeDivide' */
        if (fabsf(rtb_Quotient_dg) > fabsf(rtb_Product14_er) * 5.42101151E-20F)
        {
          rtb_Quotient_fz = rtb_Product14_er / rtb_Quotient_dg;
        } else if (rtb_Product14_er > 0.0F) {
          rtb_Quotient_fz = AEBS_TOS_DataTypeMax;
        } else if (rtb_Product14_er < 0.0F) {
          rtb_Quotient_fz = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_fz = 0.0F;
        }

        /* End of MATLAB Function: '<S295>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S293>/SafeDivide' */

        /* Switch: '<S296>/Switch' incorporates:
         *  RelationalOperator: '<S296>/UpperRelop'
         */
        if (rtb_Quotient_fz < AEBS_TOS_ConstB.CoreSubsys_p.Gain) {
          /* Switch: '<S296>/Switch' */
          rtb_Switch_i = (real32_T)AEBS_TOS_ConstB.CoreSubsys_p.Gain;
        } else {
          /* Switch: '<S296>/Switch' */
          rtb_Switch_i = rtb_Quotient_fz;
        }

        /* End of Switch: '<S296>/Switch' */

        /* Switch: '<S296>/Switch2' incorporates:
         *  Constant: '<S293>/Constant5'
         *  RelationalOperator: '<S296>/LowerRelop1'
         */
        if (rtb_Quotient_fz > 1.0E+10) {
          /* Switch: '<S296>/Switch2' */
          rtb_Switch2_o = (real32_T)1.0E+10;
        } else {
          /* Switch: '<S296>/Switch2' */
          rtb_Switch2_o = rtb_Switch_i;
        }

        /* End of Switch: '<S296>/Switch2' */

        /* Switch: '<S287>/Switch' incorporates:
         *  Abs: '<S294>/Abs'
         *  Constant: '<S287>/Constant'
         *  Constant: '<S291>/Constant'
         *  Constant: '<S292>/Constant'
         *  Constant: '<S294>/LimitSource'
         *  Logic: '<S287>/Logop_1'
         *  Logic: '<S287>/Logop_2'
         *  Logic: '<S287>/Logop_3'
         *  RelationalOperator: '<S287>/Relop_1'
         *  RelationalOperator: '<S287>/Relop_2'
         *  RelationalOperator: '<S291>/Compare'
         *  RelationalOperator: '<S292>/Compare'
         *  RelationalOperator: '<S294>/Relational Operator'
         */
        if (fabsf(rtb_ARelStationaryObject) > 0.01F) {
          /* Sum: '<S293>/Add' incorporates:
           *  Constant: '<S293>/Constant'
           */
          rtb_Quotient_dg = rtb_Switch2_o + P_TA_PrmForTTCalDistanceOffset;
          rtb_NoSolution_d = (((rtb_Quotient_e4 > rtb_Quotient_dg) &&
                               (rtb_ARelStationaryObject > 0.0F)) ||
                              ((rtb_Quotient_e4 < rtb_Quotient_dg) &&
                               (rtb_ARelStationaryObject < 0.0F)));
        } else {
          rtb_NoSolution_d = false;
        }

        /* End of Switch: '<S287>/Switch' */

        /* RelationalOperator: '<S289>/Compare' incorporates:
         *  Constant: '<S289>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         */
        rtb_LogicalOperator20 =
          (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP == ((uint8_T)0U));

        /* Logic: '<S222>/Logop_1' incorporates:
         *  Logic: '<S222>/Logical Operator'
         */
        rtb_LogicalOperator7_e = ((!rtb_NoSolution_d) || (!rtb_LogicalOperator20));

        /* Switch: '<S222>/Switch_4' */
        if (!rtb_LogicalOperator7_e) {
          rtb_Quotient_e4 = rtb_Quotient_g;
        }

        /* End of Switch: '<S222>/Switch_4' */
        /* End of Outputs for SubSystem: '<S216>/StationaryObject' */
        /* End of Outputs for SubSystem: '<S211>/CalculateTTI' */

        /* Switch: '<S345>/Switch1' incorporates:
         *  Constant: '<S345>/Constant1'
         *  Constant: '<S345>/Constant3'
         *  Constant: '<S353>/Constant'
         *  Product: '<S353>/Product1'
         *  Product: '<S353>/Product4'
         *  Product: '<S353>/Product5'
         *  Sum: '<S353>/Sum6'
         */
        if (rtb_LogicalOperator11) {
          rtb_Quotient_dg = 0.0F;
        } else {
          rtb_Quotient_dg = rtb_Switch2_i * rtb_Switch2_i *
            AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAxAbs * 0.5F +
            (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs * rtb_Switch2_i
             + 0.0F);
        }

        /* End of Switch: '<S345>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S211>/CalculateTTI' */
        /* Outputs for Atomic SubSystem: '<S216>/StationaryObject' */
        /* Sum: '<S222>/Subtract' */
        AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistanceStationaryObject =
          rtb_Quotient_e4 + rtb_Quotient_dg;

        /* Switch generated from: '<S222>/Switch_1' */
        if (!rtb_LogicalOperator7_e) {
          /* Switch generated from: '<S222>/Switch_1' */
          rtb_VRelStationaryObject_j = rtb_Add_cl;
          rtb_ARelStationaryObject = rtb_Quotient_f;
        }

        /* End of Switch generated from: '<S222>/Switch_1' */

        /* Gain: '<S290>/Gain' */
        rtb_ARelHalf = 0.5F * rtb_ARelStationaryObject;

        /* MATLAB Function: '<S290>/QuadraticEquationSolver' */
        AEBS_TO_QuadraticEquationSolver(rtb_ARelHalf, rtb_VRelStationaryObject_j,
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistanceStationaryObject,
          rtb_x_o, &rtb_SolutionFound_l);

        /* Switch: '<S290>/Switch3' incorporates:
         *  Abs: '<S290>/Abs'
         *  Constant: '<S290>/Constant'
         *  Constant: '<S309>/Constant'
         *  RelationalOperator: '<S309>/Compare'
         */
        if (rtb_VRelStationaryObject_j == 0.0F) {
          rtb_Quotient_e4 = 1.0F;
        } else {
          rtb_Quotient_e4 = fabsf(rtb_VRelStationaryObject_j);
        }

        /* End of Switch: '<S290>/Switch3' */

        /* Product: '<S290>/Divide' */
        rtb_Quotient_e4 = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
          EdgeDistanceStationaryObject / rtb_Quotient_e4;

        /* Switch: '<S290>/Switch4' incorporates:
         *  Constant: '<S307>/Constant'
         *  Constant: '<S310>/Constant'
         *  Constant: '<S311>/Constant'
         *  Constant: '<S312>/Constant'
         *  Constant: '<S313>/Constant'
         *  Constant: '<S314>/Constant'
         *  Logic: '<S290>/Logical Operator1'
         *  Logic: '<S290>/Logical Operator2'
         *  Logic: '<S290>/Logical Operator3'
         *  RelationalOperator: '<S307>/Compare'
         *  RelationalOperator: '<S310>/Compare'
         *  RelationalOperator: '<S311>/Compare'
         *  RelationalOperator: '<S312>/Compare'
         *  RelationalOperator: '<S313>/Compare'
         *  RelationalOperator: '<S314>/Compare'
         *  UnitDelay: '<S290>/Unit Delay'
         */
        if ((!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_e !=
               100.0F)) || (!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
                              UnitDelay_DSTATE_e != (-100.0F))) ||
            (!(AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_e <=
               6.0F)) || ((!(rtb_Quotient_e4 != 0.0F)) || (!(rtb_Quotient_e4 <=
               6.0F))) || (rtb_SolutionFound_l != false)) {
          /* Switch: '<S290>/Switch' incorporates:
           *  Abs: '<S290>/Abs1'
           *  Constant: '<S305>/Constant'
           *  Constant: '<S306>/Constant'
           *  Constant: '<S308>/Constant'
           *  Constant: '<S315>/Constant'
           *  Inport: '<Root>/Extension_input_Bus'
           *  Logic: '<S290>/Logical Operator'
           *  RelationalOperator: '<S305>/Compare'
           *  RelationalOperator: '<S306>/Compare'
           *  RelationalOperator: '<S308>/Compare'
           *  RelationalOperator: '<S315>/Compare'
           *  Switch: '<S290>/Switch1'
           *  Switch: '<S290>/Switch2'
           */
          if ((fabsf(rtb_ARelStationaryObject) <= 0.25F) || (rtb_SolutionFound_l
               == false) ||
              (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP !=
               ((uint8_T)0U))) {
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_e =
              rtb_Quotient_e4;
          } else if (rtb_SolutionFound_l) {
            /* Switch: '<S317>/Switch3' incorporates:
             *  Constant: '<S318>/Constant'
             *  RelationalOperator: '<S318>/Compare'
             *  Switch: '<S290>/Switch2'
             */
            if (rtb_ARelStationaryObject < 0.0F) {
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_e =
                rtb_x_o[0];
            } else {
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_e =
                rtb_x_o[1];
            }

            /* End of Switch: '<S317>/Switch3' */
          } else if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                     EdgeDistanceStationaryObject < 0.0F) {
            /* Switch: '<S290>/Switch1' incorporates:
             *  Constant: '<S290>/Constant1'
             *  Switch: '<S290>/Switch2'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_e =
              P_TA_TiLowrLimInAsyEvlrCritEve;
          } else {
            /* Switch: '<S290>/Switch2' incorporates:
             *  Constant: '<S290>/Constant3'
             *  Switch: '<S290>/Switch1'
             */
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE_e =
              P_TA_TiUpprLimInAsyEvlrCritEve;
          }

          /* End of Switch: '<S290>/Switch' */
        }

        /* End of Switch: '<S290>/Switch4' */

        /* Gain: '<S288>/Gain' */
        rtb_ARelStationaryObject = 2.0F * rtb_Quotient_f;

        /* Math: '<S288>/Square' */
        rtb_Add_cl *= rtb_Add_cl;

        /* Outputs for Atomic SubSystem: '<S300>/SafeDivide' */
        /* MATLAB Function: '<S302>/SafeDivide' */
        if (fabsf(rtb_ARelStationaryObject) > fabsf(rtb_Add_cl) *
            5.42101151E-20F) {
          rtb_Quotient_en = rtb_Add_cl / rtb_ARelStationaryObject;
        } else if (rtb_Add_cl > 0.0F) {
          rtb_Quotient_en = AEBS_TOS_DataTypeMax;
        } else if (rtb_Add_cl < 0.0F) {
          rtb_Quotient_en = AEBS_TOS_DataTypeMin;
        } else {
          rtb_Quotient_en = 0.0F;
        }

        /* End of MATLAB Function: '<S302>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S300>/SafeDivide' */

        /* Switch: '<S303>/Switch' incorporates:
         *  RelationalOperator: '<S303>/UpperRelop'
         */
        if (rtb_Quotient_en < AEBS_TOS_ConstB.CoreSubsys_p.Gain_j) {
          /* Switch: '<S303>/Switch' */
          rtb_Switch_p = AEBS_TOS_ConstB.CoreSubsys_p.Gain_j;
        } else {
          /* Switch: '<S303>/Switch' */
          rtb_Switch_p = rtb_Quotient_en;
        }

        /* End of Switch: '<S303>/Switch' */

        /* Switch: '<S303>/Switch2' incorporates:
         *  Constant: '<S300>/Constant5'
         *  RelationalOperator: '<S303>/LowerRelop1'
         */
        if (rtb_Quotient_en > 1.0E+10F) {
          /* Switch: '<S303>/Switch2' */
          rtb_Switch2_e = 1.0E+10F;
        } else {
          /* Switch: '<S303>/Switch2' */
          rtb_Switch2_e = rtb_Switch_p;
        }

        /* End of Switch: '<S303>/Switch2' */

        /* Switch: '<S288>/Switch' incorporates:
         *  Abs: '<S301>/Abs'
         *  Constant: '<S288>/Constant'
         *  Constant: '<S298>/Constant'
         *  Constant: '<S299>/Constant'
         *  Constant: '<S301>/LimitSource'
         *  Logic: '<S288>/Logop_1'
         *  Logic: '<S288>/Logop_2'
         *  Logic: '<S288>/Logop_3'
         *  RelationalOperator: '<S288>/Relop_1'
         *  RelationalOperator: '<S288>/Relop_2'
         *  RelationalOperator: '<S298>/Compare'
         *  RelationalOperator: '<S299>/Compare'
         *  RelationalOperator: '<S301>/Relational Operator'
         */
        if (fabsf(rtb_Quotient_f) > 0.01F) {
          /* Sum: '<S300>/Add' incorporates:
           *  Constant: '<S300>/Constant'
           */
          rtb_Add_cl = rtb_Switch2_e - P_TA_PrmForTTCalDistanceOffset;
          rtb_LogicalOperator7_e = (((rtb_Quotient_g > rtb_Add_cl) &&
            (rtb_Quotient_f > 0.0F)) || ((rtb_Quotient_g < rtb_Add_cl) &&
            (rtb_Quotient_f < 0.0F)));
        } else {
          rtb_LogicalOperator7_e = false;
        }

        /* End of Switch: '<S288>/Switch' */

        /* Logic: '<S222>/Logop_3' */
        rtb_NoSolution_d = (rtb_NoSolution_d && rtb_LogicalOperator20 &&
                            rtb_LogicalOperator7_e);

        /* Switch: '<S222>/Switch_3' incorporates:
         *  Constant: '<S222>/TiUpprLimIn'
         *  UnitDelay: '<S290>/Unit Delay'
         */
        if (rtb_NoSolution_d) {
          rtb_Quotient_f = P_TA_TiUpprLimInAsyEvlrCritEve;
        } else {
          rtb_Quotient_f = AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
            UnitDelay_DSTATE_e;
        }

        /* End of Switch: '<S222>/Switch_3' */

        /* Logic: '<S222>/Logop_2' */
        rtb_LogicalOperator7_e = !rtb_NoSolution_d;

        /* End of Outputs for SubSystem: '<S216>/StationaryObject' */
        /* End of Outputs for SubSystem: '<S211>/CalculateTTI' */

        /* Switch: '<S345>/Switch' incorporates:
         *  Constant: '<S345>/Constant2'
         */
        if (rtb_LogicalOperator11) {
          rtb_Quotient_g = 0.01F;
        } else {
          rtb_Quotient_g = rtb_Switch2_i;
        }

        /* End of Switch: '<S345>/Switch' */

        /* Logic: '<S323>/Logop_2' incorporates:
         *  Constant: '<S323>/SftyArUpprLimForTiInObjPred'
         *  Constant: '<S328>/Constant'
         *  Constant: '<S329>/Constant'
         *  Logic: '<S323>/Logop_1'
         *  Logic: '<S323>/Logop_3'
         *  RelationalOperator: '<S323>/Relop_1'
         *  RelationalOperator: '<S323>/Relop_2'
         *  RelationalOperator: '<S323>/Relop_4'
         *  RelationalOperator: '<S328>/Compare'
         *  RelationalOperator: '<S329>/Compare'
         */
        rtb_LogicalOperator11 = ((rtb_Quotient_f > rtb_Quotient_g) &&
          (rtb_Quotient_g > 0.0F) && (rtb_Quotient_g < P_TA_SftyArUpprLimForTi) &&
          ((!(rtb_Quotient_g > rtb_RadiusRear_j)) || (!(rtb_RadiusRear_j > 0.0F))));

        /* Logic: '<S324>/Logop_2' incorporates:
         *  Constant: '<S324>/SftyArUpprLimForTiInObjPred'
         *  Constant: '<S330>/Constant'
         *  Constant: '<S331>/Constant'
         *  Logic: '<S324>/Logop_1'
         *  Logic: '<S324>/Logop_3'
         *  RelationalOperator: '<S324>/Relop_1'
         *  RelationalOperator: '<S324>/Relop_2'
         *  RelationalOperator: '<S324>/Relop_4'
         *  RelationalOperator: '<S330>/Compare'
         *  RelationalOperator: '<S331>/Compare'
         */
        rtb_LogicalOperator20 = ((rtb_Sum1_p > rtb_Switch2_m) && (rtb_Switch2_m >
          0.0F) && (rtb_Switch2_m < P_TA_SftyArUpprLimForTi) &&
          ((!(rtb_Switch2_m > rtb_RadiusRear_j)) || (!(rtb_RadiusRear_j > 0.0F))));

        /* If: '<S219>/If' incorporates:
         *  Logic: '<S219>/Logop_3'
         */
        if (rtb_LogicalOperator11 && rtb_LogicalOperator20) {
          /* Outputs for IfAction SubSystem: '<S219>/BothHostAndObjectWillStop' incorporates:
           *  ActionPort: '<S322>/Action Port'
           */
          /* Switch: '<S322>/Switch_1' incorporates:
           *  RelationalOperator: '<S322>/Relop_3'
           *  Switch: '<S322>/Switch_2'
           */
          if (rtb_Quotient_g < rtb_Switch2_m) {
            rtb_RadiusRear_j = rtb_Quotient_f;
            rtb_LogicalOperator10_m = rtb_LogicalOperator7_e;
          } else {
            rtb_RadiusRear_j = rtb_Sum1_p;
            rtb_LogicalOperator10_m = rtb_LogicalOperator19;
          }

          /* End of Switch: '<S322>/Switch_1' */
          /* End of Outputs for SubSystem: '<S219>/BothHostAndObjectWillStop' */
        } else if (rtb_LogicalOperator20) {
          /* Outputs for IfAction SubSystem: '<S219>/HostOnlyWillStop' incorporates:
           *  ActionPort: '<S326>/Action Port'
           */
          /* SignalConversion: '<S334>/Signal Conversion' */
          rtb_RadiusRear_j = rtb_Sum1_p;

          /* SignalConversion: '<S335>/Signal Conversion' */
          rtb_LogicalOperator10_m = rtb_LogicalOperator19;

          /* End of Outputs for SubSystem: '<S219>/HostOnlyWillStop' */
        } else if (rtb_LogicalOperator11) {
          /* Outputs for IfAction SubSystem: '<S219>/ObjectOnlyWillStop' incorporates:
           *  ActionPort: '<S327>/Action Port'
           */
          /* SignalConversion: '<S336>/Signal Conversion' */
          rtb_RadiusRear_j = rtb_Quotient_f;

          /* SignalConversion: '<S337>/Signal Conversion' */
          rtb_LogicalOperator10_m = rtb_LogicalOperator7_e;

          /* End of Outputs for SubSystem: '<S219>/ObjectOnlyWillStop' */
        }

        /* End of If: '<S219>/If' */

        /* Switch: '<S212>/Switch' incorporates:
         *  Abs: '<S340>/Abs'
         *  Abs: '<S341>/Abs'
         *  Constant: '<S340>/LimitSource'
         *  Constant: '<S341>/LimitSource'
         *  Logic: '<S212>/Logical Operator1'
         *  MultiPortSwitch: '<S33>/Index Vector10'
         *  MultiPortSwitch: '<S33>/Index Vector25'
         *  RelationalOperator: '<S340>/Relational Operator'
         *  RelationalOperator: '<S341>/Relational Operator'
         *  SignalConversion: '<S31>/Signal Conversion10'
         *  SignalConversion: '<S31>/Signal Conversion19'
         *  Switch: '<S214>/Switch2'
         */
        if ((fabsf(Meas_ObjVx[ForEach_itr_i]) < 0.01F) && (fabsf
             (Meas_ObjAx[ForEach_itr_i]) < 0.01F)) {
          /* Switch: '<S212>/Switch1' incorporates:
           *  Constant: '<S212>/TiUpprLimIn'
           *  Constant: '<S212>/TiUpprLimIn1'
           *  Constant: '<S338>/Constant'
           *  Constant: '<S339>/Constant'
           *  Logic: '<S212>/Logical Operator'
           *  RelationalOperator: '<S338>/Compare'
           *  RelationalOperator: '<S339>/Compare'
           */
          if ((boolean_T)((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx <
                           0.0F) ^ (rtb_Product_gz < 0.0F))) {
            rtb_RadiusRear_j = P_TA_TTILowerLimitNegative;
          } else {
            rtb_RadiusRear_j = P_TA_TTIUpperLimiPositive;
          }

          /* End of Switch: '<S212>/Switch1' */
        } else if (!rtb_LogicalOperator10_m) {
          /* Switch: '<S214>/Switch1' incorporates:
           *  Constant: '<S214>/TiUpprLimIn1'
           *  Constant: '<S214>/TiUpprLimIn2'
           *  Constant: '<S360>/Constant'
           *  Constant: '<S361>/Constant'
           *  Logic: '<S214>/Logical Operator'
           *  RelationalOperator: '<S360>/Compare'
           *  RelationalOperator: '<S361>/Compare'
           *  Switch: '<S214>/Switch2'
           */
          if ((boolean_T)((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx <
                           0.0F) ^ (rtb_Product_gz < 0.0F))) {
            rtb_RadiusRear_j = P_TA_TTILowerLimitNegative;
          } else {
            rtb_RadiusRear_j = P_TA_TTIUpperLimiPositive;
          }

          /* End of Switch: '<S214>/Switch1' */
        }

        /* End of Switch: '<S212>/Switch' */

        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S215>/Constant2'
         *  Constant: '<S364>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         *  RelationalOperator: '<S364>/Compare'
         */
        if (AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed < 0.1F) {
          rtb_ARelStationaryObject = 0.1F;
        } else {
          rtb_ARelStationaryObject =
            AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
        }

        /* End of Switch: '<S215>/Switch1' */

        /* Saturate: '<S212>/Saturation_2' incorporates:
         *  Saturate: '<S212>/Saturation_1'
         */
        if (rtb_RadiusRear_j > P_TA_TTIUpperLimiPositive) {
          rtb_Product_gz = P_TA_TTIUpperLimiPositive;
          rtb_RadiusRear_j = P_TA_TTIUpperLimiPositive;
        } else {
          if (rtb_RadiusRear_j < P_TA_TTILowerLimitNegative) {
            rtb_Product_gz = P_TA_TTILowerLimitNegative;
          } else {
            rtb_Product_gz = rtb_RadiusRear_j;
          }

          if (rtb_RadiusRear_j < P_TA_TTILowerLimitNegative) {
            rtb_RadiusRear_j = P_TA_TTILowerLimitNegative;
          }
        }

        /* End of Saturate: '<S212>/Saturation_2' */

        /* Switch: '<S215>/Switch' incorporates:
         *  Abs: '<S212>/Abs'
         *  Constant: '<S362>/Constant'
         *  Constant: '<S363>/Constant'
         *  Constant: '<S365>/Constant'
         *  Logic: '<S215>/Logical Operator'
         *  Logic: '<S215>/Logical Operator1'
         *  Logic: '<S215>/Logical Operator2'
         *  Product: '<S215>/Divide'
         *  RelationalOperator: '<S362>/Compare'
         *  RelationalOperator: '<S363>/Compare'
         *  RelationalOperator: '<S365>/Compare'
         */
        if ((temp_ID != ((uint8_T)255U)) ||
            ((!(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx /
                rtb_ARelStationaryObject >= P_TA_TimegapThred)) || (!(fabsf
               (rtb_Product_gz) >= P_TA_TTIValidNumber)))) {
          /* DataTypeConversion: '<S21>/Data Type Conversion' */
          rtb_DataTypeConversion_j = temp_ID;
        } else {
          /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
           *  Constant: '<S215>/Constant'
           */
          rtb_DataTypeConversion_j = ((uint8_T)255U);
        }

        /* End of Switch: '<S215>/Switch' */
        /* End of Outputs for SubSystem: '<S145>/CalculateTTRAndTTM_else' */
      }

      /* RelationalOperator: '<S207>/Compare' incorporates:
       *  Constant: '<S207>/Constant'
       */
      rtb_Valid_g = (rtb_DataTypeConversion_j == ((uint8_T)255U));

      /* DataTypeConversion: '<S161>/Data Type Conversion' */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion_o2 = rtb_Valid_g;

      /* MultiPortSwitch: '<S33>/Index Vector26' incorporates:
       *  SignalConversion: '<S31>/Signal Conversion20'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy = Meas_ObjAy[ForEach_itr_i];

      /* If: '<S144>/If' */
      if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].DataTypeConversion_o2 > 0.0) {
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_g4 = 0;

        /* Outputs for IfAction SubSystem: '<S144>/BoudingBoxCalculate_if' incorporates:
         *  ActionPort: '<S160>/Action Port'
         */
        /* SignalConversion generated from: '<S160>/Boudingbox_Calculate' incorporates:
         *  Constant: '<S160>/Constant'
         */
        rtb_Valid_g = false;

        /* End of Outputs for SubSystem: '<S144>/BoudingBoxCalculate_if' */
      } else {
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_g4 = 1;

        /* Outputs for IfAction SubSystem: '<S144>/BoudingBoxCalculate_Else' incorporates:
         *  ActionPort: '<S159>/Action Port'
         */
        /* Outputs for Iterator SubSystem: '<S196>/ForEachSegmentInPahEstimn' incorporates:
         *  ForIterator: '<S200>/For Iterator'
         */
        rtAction = AEBS_TOS_ConstB.CoreSubsys_p.Width;
        if (AEBS_TOS_ConstB.CoreSubsys_p.Width > 126) {
          rtAction = 126;
        } else if (AEBS_TOS_ConstB.CoreSubsys_p.Width < 0) {
          rtAction = 0;
        }

        for (s200_iter = 1; s200_iter <= rtAction; s200_iter++) {
          /* Assignment: '<S200>/Assignment1' incorporates:
           *  Logic: '<S200>/Logical Operator'
           *  MinMax: '<S200>/Min'
           *  MinMax: '<S200>/Min1'
           *  RelationalOperator: '<S200>/Relational Operator'
           *  RelationalOperator: '<S200>/Relational Operator1'
           *  Selector: '<S200>/Selector2'
           */
          rtb_Assignment1_o[s200_iter - 1] = ((rtb_RadiusRear_j <= fmaxf
            (AEBS_TOS_B.PahEstimn_i[s200_iter - 1].TiAry[0],
             AEBS_TOS_B.PahEstimn_i[s200_iter - 1].TiAry[1])) &&
            (rtb_RadiusRear_j > fminf(AEBS_TOS_B.PahEstimn_i[s200_iter - 1].
            TiAry[0], AEBS_TOS_B.PahEstimn_i[s200_iter - 1].TiAry[1])));
        }

        /* End of Outputs for SubSystem: '<S196>/ForEachSegmentInPahEstimn' */

        /* Switch: '<S196>/Switch' incorporates:
         *  Constant: '<S196>/Indices'
         *  Logic: '<S196>/Logop_1'
         *  Product: '<S196>/Product'
         *  Sum: '<S196>/Sum of Elements'
         */
        if (rtb_Assignment1_o[0] || rtb_Assignment1_o[1] || rtb_Assignment1_o[2]
            || rtb_Assignment1_o[3]) {
          rtb_AccTgtIdn = (uint8_T)((((uint32_T)(uint8_T)(rtb_Assignment1_o[0] ?
            (int32_T)((uint8_T)1U) : 0) + (uint8_T)(rtb_Assignment1_o[1] ?
            (int32_T)((uint8_T)2U) : 0)) + (uint8_T)(rtb_Assignment1_o[2] ?
            (int32_T)((uint8_T)3U) : 0)) + (uint8_T)(rtb_Assignment1_o[3] ?
            (int32_T)((uint8_T)4U) : 0));
        } else {
          rtb_AccTgtIdn = AEBS_TOS_ConstB.CoreSubsys_p.LastSegment;
        }

        /* End of Switch: '<S196>/Switch' */

        /* Sum: '<S195>/Add1' incorporates:
         *  Selector: '<S196>/Selector'
         */
        rtb_Product_gz = rtb_RadiusRear_j - AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn
          - 1].TiAry[0];

        /* Sum: '<S195>/time duration' incorporates:
         *  Selector: '<S196>/Selector'
         */
        rtb_Quotient_f = AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1].TiAry[1] -
          AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1].TiAry[0];

        /* Saturate: '<S195>/Saturation1' */
        if ((rtb_Quotient_f <= 0.001F) || rtIsNaNF(0.001F)) {
          rtb_Quotient_f = 0.001F;
        }

        /* End of Saturate: '<S195>/Saturation1' */

        /* Outputs for Atomic SubSystem: '<S195>/SafeDivide' */
        /* MATLAB Function: '<S198>/SafeDivide' */
        if (fabsf(rtb_Quotient_f) > fabsf(rtb_Product_gz) * 5.42101151E-20F) {
          rtb_tau = rtb_Product_gz / rtb_Quotient_f;
        } else if (rtb_Product_gz > 0.0F) {
          rtb_tau = AEBS_TOS_DataTypeMax;
        } else if (rtb_Product_gz < 0.0F) {
          rtb_tau = AEBS_TOS_DataTypeMin;
        } else {
          rtb_tau = 0.0F;
        }

        /* End of MATLAB Function: '<S198>/SafeDivide' */
        /* End of Outputs for SubSystem: '<S195>/SafeDivide' */

        /* Saturate: '<S195>/Saturation' */
        if (rtb_tau > 1.0F) {
          /* Saturate: '<S195>/Saturation' */
          rtb_tau = 1.0F;
        } else if (rtb_tau < 0.0F) {
          /* Saturate: '<S195>/Saturation' */
          rtb_tau = 0.0F;
        }

        /* End of Saturate: '<S195>/Saturation' */

        /* MATLAB Function: '<S187>/LongPosition' incorporates:
         *  Selector: '<S196>/Selector'
         */
        AEBS_TOS_PositionAndDerivative(AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1]
          .CtrlAryLgt[0], AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1].CtrlAryLgt[1],
          AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1].CtrlAryLgt[2],
          AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1].CtrlAryLgt[3], rtb_tau,
          &rtb_x_h, &rtb_dx_ie);

        /* MATLAB Function: '<S187>/LatPosition' incorporates:
         *  Selector: '<S196>/Selector'
         */
        AEBS_TOS_LatPosition(AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1].
                             CtrlAryLat[0], AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn
                             - 1].CtrlAryLat[1],
                             AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1].
                             CtrlAryLat[2], AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn
                             - 1].CtrlAryLat[3], rtb_tau, &rtb_y_d, &rtb_dy_b);

        /* Sum: '<S203>/Sum7' incorporates:
         *  MultiPortSwitch: '<S33>/Index Vector15'
         *  Product: '<S203>/Product6'
         *  SignalConversion: '<S31>/Signal Conversion15'
         *  Sum: '<S203>/Sum6'
         *  UnitDelay: '<S203>/Unit Delay'
         */
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].UnitDelay_DSTATE +=
          (Meas_ObjVyabs[ForEach_itr_i] - AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i]
           .UnitDelay_DSTATE) * AEBS_TOS_ConstB.CoreSubsys_p.Product2;

        /* SignalConversion generated from: '<S159>/Boudingbox_Calculate' incorporates:
         *  Constant: '<S165>/Constant2'
         */
        rtb_Valid_g = true;

        /* MATLAB Function: '<S187>/LongPosition1' incorporates:
         *  Constant: '<S187>/Constant'
         *  MATLAB Function: '<S187>/LatPosition1'
         */
        rtb_Product_gz = rt_powf_snf(1.0F - 1.0F, 3.0F);
        rtb_Quotient_f = rt_powf_snf(1.0F, 3.0F);

        /* Selector: '<S196>/Selector1' incorporates:
         *  Constant: '<S196>/Constant'
         */
        s647_iter = ((uint8_T)1U) - 1;

        /* MATLAB Function: '<S187>/LongPosition1' incorporates:
         *  Constant: '<S187>/Constant'
         *  MATLAB Function: '<S187>/LatPosition1'
         *  Selector: '<S196>/Selector1'
         */
        rtb_Quotient_g = (1.0F - 1.0F) * (1.0F - 1.0F) * 3.0F * 1.0F;
        rtb_Add_cl = (1.0F - 1.0F) * 3.0F * (1.0F * 1.0F);
        AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].x = ((rtb_Quotient_g *
          AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[1] +
          AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[0] * rtb_Product_gz) +
          rtb_Add_cl * AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[2]) +
          AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLgt[3] * rtb_Quotient_f;

        /* MATLAB Function: '<S187>/LatPosition1' incorporates:
         *  Selector: '<S196>/Selector1'
         */
        AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].y = ((rtb_Quotient_g *
          AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[1] +
          AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[0] * rtb_Product_gz) +
          rtb_Add_cl * AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[2]) +
          AEBS_TOS_B.PahEstimn_i[s647_iter].CtrlAryLat[3] * rtb_Quotient_f;

        /* End of Outputs for SubSystem: '<S144>/BoudingBoxCalculate_Else' */
      }

      /* End of If: '<S144>/If' */

      /* ForEachSliceAssignment generated from: '<S30>/Boudingbox_Calculate' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion1'
       */
      Meas_Boudingbox_Calculate[ForEach_itr_i] = rtb_Valid_g;

      /* Switch: '<S98>/Switch' incorporates:
       *  Constant: '<S101>/Constant'
       *  Constant: '<S102>/Constant'
       *  Constant: '<S103>/Constant'
       *  Constant: '<S104>/Constant'
       *  Constant: '<S98>/Constant'
       *  Logic: '<S98>/Logical Operator'
       *  MultiPortSwitch: '<S33>/Index Vector1'
       *  RelationalOperator: '<S101>/Compare'
       *  RelationalOperator: '<S102>/Compare'
       *  RelationalOperator: '<S103>/Compare'
       *  RelationalOperator: '<S104>/Compare'
       *  SignalConversion: '<S31>/Signal Conversion1'
       */
      if ((Meas_ObjType[ForEach_itr_i] != ((uint8_T)5U)) &&
          (Meas_ObjType[ForEach_itr_i] != ((uint8_T)6U)) &&
          (Meas_ObjType[ForEach_itr_i] != ((uint8_T)7U))) {
        rtb_Valid_g = (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs <=
                       (-0.5F));
      } else {
        rtb_Valid_g = true;
      }

      /* End of Switch: '<S98>/Switch' */

      /* Outputs for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
      /* MultiPortSwitch: '<S33>/Index Vector19' incorporates:
       *  SignalConversion: '<S451>/Signal Conversion24'
       */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsCenterAngle =
        rtb_re_dx[ForEach_itr_i];

      /* End of Outputs for SubSystem: '<S445>/TAObjInfoCalc' */

      /* Chart: '<S37>/CollisionProbCalcFlow' */
      rtb_Product_gz = 0.0F;
      do {
        exitg1 = 0;
        if (rtb_Product_gz <= 2.0F) {
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].tPredictTimeOut =
            rtb_Product_gz;
          if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsID == ((uint8_T)0U))
          {
            AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].Merge = false;
          } else {
            rtb_Quotient_dg = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              tPredictTimeOut * AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              tPredictTimeOut;
            rtb_Quotient_g = rtb_Quotient_dg *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAxAbs * 0.5F +
              ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDx +
                P_TA_PrmForVehRearAxleDisttoFrnt) +
               AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVxAbs *
               AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].tPredictTimeOut);
            rtb_Add_cl = (180.0F - AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                          TA_ObsCenterAngle) * 0.0174532924F * (-1.0F);
            rtb_Quotient_f = sinf(rtb_Add_cl);
            rtb_Quotient_e4 = cosf(rtb_Add_cl);
            rtb_Add_cl = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsWidth *
              rtb_Quotient_f * 0.5F;
            rtb_ARelStationaryObject = rtb_Quotient_g - rtb_Add_cl;
            rtb_LogicalOperator11 = (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsAy >= 0.01F);
            rtb_Product14_er = AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
              Delay_DSTATE;
            rtb_LogicalOperator10_m = (rtb_Product14_er >= 0.01F);
            rtb_LogicalOperator19 = (AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
              Delay1_DSTATE[0] >= 0.01F);
            rtb_LogicalOperator20 = (AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
              Delay2_DSTATE[0] >= 0.01F);
            if (rtb_LogicalOperator11) {
              rtb_Product14_h = 1.0F;
            } else {
              rtb_Product14_h = 0.0F;
            }

            if (rtb_LogicalOperator10_m) {
              rtb_Sum1_p = 1.0F;
            } else {
              rtb_Sum1_p = 0.0F;
            }

            if (rtb_LogicalOperator19) {
              rtb_Add_pz = 1.0F;
            } else {
              rtb_Add_pz = 0.0F;
            }

            if (rtb_LogicalOperator20) {
              t_sinObjAngle_f = 1.0F;
            } else {
              t_sinObjAngle_f = 0.0F;
            }

            rtb_Sum1_p = ((rtb_Product14_h + rtb_Sum1_p) + rtb_Add_pz) +
              t_sinObjAngle_f;
            if (rtb_LogicalOperator11) {
              rtb_Product14_h = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy;
            } else {
              rtb_Product14_h = 0.0F;
            }

            if (!rtb_LogicalOperator10_m) {
              rtb_Product14_er = 0.0F;
            }

            if (rtb_LogicalOperator19) {
              rtb_Add_pz = AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i]
                .Delay1_DSTATE[0];
            } else {
              rtb_Add_pz = 0.0F;
            }

            if (rtb_LogicalOperator20) {
              t_sinObjAngle_f = AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].
                Delay2_DSTATE[0];
            } else {
              t_sinObjAngle_f = 0.0F;
            }

            if (!(rtb_Sum1_p != 0.0F)) {
              rtb_Sum1_p = 1.0F;
            }

            rtb_Sum1_p = (((((rtb_Product14_h + rtb_Product14_er) + rtb_Add_pz)
                            + t_sinObjAngle_f) / rtb_Sum1_p +
                           AEBS_TOS_U.Extension_input_Bus_j.AY1) *
                          rtb_Quotient_dg * 0.5F +
                          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy *
                          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].tPredictTimeOut)
              + AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy;
            rtb_Quotient_dg = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsWidth
              * rtb_Quotient_e4 * 0.5F;
            rtb_Product14_er = rtb_Quotient_dg + rtb_Sum1_p;
            rtb_Add_pz = rtb_Add_cl + rtb_Quotient_g;
            rtb_Product14_h = rtb_Sum1_p - rtb_Quotient_dg;
            if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].tPredictTimeOut <= 1.0F)
            {
              rtb_AccTgtIdn = ((uint8_T)1U);
            } else {
              rtb_AccTgtIdn = ((uint8_T)2U);
            }

            expl_temp_0 = &AEBS_TOS_B.PahEstimn_i[rtb_AccTgtIdn - 1];
            if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].tPredictTimeOut <= 1.0F)
            {
              rtb_Switch_dw = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                tPredictTimeOut;
            } else {
              rtb_Switch_dw = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                tPredictTimeOut + 1.0F;
            }

            AEBS_TOS_PositionAndDerivative(expl_temp_0->CtrlAryLgt[0],
              expl_temp_0->CtrlAryLgt[1], expl_temp_0->CtrlAryLgt[2],
              expl_temp_0->CtrlAryLgt[3], rtb_Switch_dw, &rtb_x, &rtb_dx);
            AEBS_TOS_LatPosition(expl_temp_0->CtrlAryLat[0],
                                 expl_temp_0->CtrlAryLat[1],
                                 expl_temp_0->CtrlAryLat[2],
                                 expl_temp_0->CtrlAryLat[3], rtb_Switch_dw,
                                 &rtb_y, &rtb_dy);
            rtb_Add_a = rt_atan2f_snf(rtb_dx, rtb_dy);
            t_sinObjAngle_f = sinf(rtb_Add_a);
            rtb_cosCoef_j = cosf(rtb_Add_a);
            t_tempvy_f = P_TA_PrmForVehRearAxleDisttoFrnt * rtb_cosCoef_j +
              rtb_x;
            rtb_Add_a = P_TA_PrmForVehWidth * t_sinObjAngle_f * 0.5F;
            t_radObjAngleToRear_f = t_tempvy_f - rtb_Add_a;
            t_tempvx_f = fabsf(P_TA_PrmForVehRearAxleDisttoRear);
            rtb_Add4_l = t_tempvy_f + rtb_Add_a;
            rtb_Add5_p = P_TA_PrmForVehRearAxleDisttoFrnt * t_sinObjAngle_f +
              rtb_y;
            t_tempvy_f = P_TA_PrmForVehWidth * rtb_cosCoef_j * 0.5F;
            rtb_Add1_kc = rtb_Add5_p + t_tempvy_f;
            rtb_Add5_p -= t_tempvy_f;
            rtb_TmpSignalConversionAtSFunct[0] = rtb_Add4_l;
            rtb_TmpSignalConversionAtSFunct[1] = t_radObjAngleToRear_f;
            rtb_cosCoef_j = rtb_x - t_tempvx_f * rtb_cosCoef_j;
            rtb_TmpSignalConversionAtSFunct[2] = t_radObjAngleToRear_f -
              (t_radObjAngleToRear_f - (rtb_cosCoef_j - rtb_Add_a)) *
              0.333333343F;
            rtb_TmpSignalConversionAtSFunct[3] = rtb_Add4_l - (rtb_Add4_l -
              (rtb_cosCoef_j + rtb_Add_a)) * 0.333333343F;
            rtb_TmpSignalConversionAtSFun_l[0] = rtb_Add5_p;
            rtb_TmpSignalConversionAtSFun_l[1] = rtb_Add1_kc;
            t_sinObjAngle_f = rtb_y - t_tempvx_f * t_sinObjAngle_f;
            rtb_TmpSignalConversionAtSFun_l[2] = rtb_Add1_kc - (rtb_Add1_kc -
              (t_sinObjAngle_f + t_tempvy_f)) * 0.333333343F;
            rtb_TmpSignalConversionAtSFun_l[3] = rtb_Add5_p - (rtb_Add5_p -
              (t_sinObjAngle_f - t_tempvy_f)) * 0.333333343F;
            rtb_Quotient_g += AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsLength * rtb_Quotient_e4;
            rtb_TmpSignalConversionAtSFun_m[0] = ((rtb_Quotient_g - rtb_Add_cl)
              - rtb_ARelStationaryObject) * 0.333333343F +
              rtb_ARelStationaryObject;
            rtb_TmpSignalConversionAtSFun_m[1] = ((rtb_Quotient_g + rtb_Add_cl)
              - rtb_Add_pz) * 0.333333343F + rtb_Add_pz;
            rtb_TmpSignalConversionAtSFun_m[2] = rtb_ARelStationaryObject;
            rtb_TmpSignalConversionAtSFun_m[3] = rtb_Add_pz;
            rtb_Quotient_f = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsLength
              * rtb_Quotient_f + rtb_Sum1_p;
            rtb_TmpSignalConversionAtSFun_i[0] = ((rtb_Quotient_f +
              rtb_Quotient_dg) - rtb_Product14_er) * 0.333333343F +
              rtb_Product14_er;
            rtb_TmpSignalConversionAtSFun_i[1] = ((rtb_Quotient_f -
              rtb_Quotient_dg) - rtb_Product14_h) * 0.333333343F +
              rtb_Product14_h;
            rtb_TmpSignalConversionAtSFun_i[2] = rtb_Product14_er;
            rtb_TmpSignalConversionAtSFun_i[3] = rtb_Product14_h;
            AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].Merge = false;
            s647_iter = 0;
            exitg3 = false;
            while ((!exitg3) && (s647_iter < 4)) {
              p = (s647_iter + 1) % 4;
              j = 0;
              do {
                exitg2 = 0;
                if (j < 4) {
                  q = (j + 1) % 4;
                  rtb_Sum1_p = rtb_TmpSignalConversionAtSFun_m[q] -
                    rtb_TmpSignalConversionAtSFun_m[j];
                  rtb_Quotient_dg = rtb_TmpSignalConversionAtSFun_i[q] -
                    rtb_TmpSignalConversionAtSFun_i[j];
                  rtb_Quotient_f = rtb_TmpSignalConversionAtSFunct[p] -
                    rtb_TmpSignalConversionAtSFunct[s647_iter];
                  rtb_Quotient_g = rtb_TmpSignalConversionAtSFun_l[p] -
                    rtb_TmpSignalConversionAtSFun_l[s647_iter];
                  rtb_Add_cl = rtb_Quotient_f * rtb_Quotient_dg - rtb_Quotient_g
                    * rtb_Sum1_p;
                  if (fabsf(rtb_Add_cl) < 1.0E-6F) {
                    rtb_LogicalOperator11 = false;
                  } else {
                    rtb_ARelStationaryObject =
                      rtb_TmpSignalConversionAtSFun_l[s647_iter] -
                      rtb_TmpSignalConversionAtSFun_i[j];
                    rtb_Quotient_e4 = rtb_TmpSignalConversionAtSFunct[s647_iter]
                      - rtb_TmpSignalConversionAtSFun_m[j];
                    rtb_Sum1_p = (rtb_Sum1_p * rtb_ARelStationaryObject -
                                  rtb_Quotient_dg * rtb_Quotient_e4) /
                      rtb_Add_cl;
                    rtb_LogicalOperator11 = (rtb_Sum1_p >= 0.0F);
                    rtb_LogicalOperator10_m = (rtb_Sum1_p <= 1.0F);
                    rtb_Sum1_p = (rtb_Quotient_f * rtb_ARelStationaryObject -
                                  rtb_Quotient_g * rtb_Quotient_e4) / rtb_Add_cl;
                    rtb_LogicalOperator11 = (rtb_LogicalOperator11 &&
                      rtb_LogicalOperator10_m && (rtb_Sum1_p >= 0.0F) &&
                      (rtb_Sum1_p <= 1.0F));
                  }

                  AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].Merge =
                    rtb_LogicalOperator11;
                  if (rtb_LogicalOperator11) {
                    exitg2 = 1;
                  } else {
                    j++;
                  }
                } else {
                  s647_iter++;
                  exitg2 = 2;
                }
              } while (exitg2 == 0);

              if (exitg2 == 1) {
                exitg3 = true;
              }
            }

            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE =
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy;
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay1_DSTATE[0] =
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay1_DSTATE[1];
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay1_DSTATE[1] =
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy;
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay2_DSTATE[0] =
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay2_DSTATE[1];
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay2_DSTATE[1] =
              AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay2_DSTATE[2];
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay2_DSTATE[2] =
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy;
          }

          if (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].Merge) {
            rtb_Switch_aq = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              tPredictTimeOut;
            exitg1 = 1;
          } else {
            rtb_Product_gz += 0.02F;
          }
        } else {
          rtb_Switch_aq = 256.0F;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      /* Switch: '<S37>/Switch' incorporates:
       *  Constant: '<S105>/Constant'
       *  Constant: '<S106>/Constant'
       *  Constant: '<S107>/Constant'
       *  Logic: '<S100>/Logical Operator'
       *  Logic: '<S37>/Logical Operator'
       *  Logic: '<S97>/Logical Operator'
       *  MultiPortSwitch: '<S33>/Index Vector1'
       *  MultiPortSwitch: '<S33>/Index Vector18'
       *  RelationalOperator: '<S105>/Compare'
       *  RelationalOperator: '<S106>/Compare'
       *  RelationalOperator: '<S107>/Compare'
       *  SignalConversion: '<S31>/Signal Conversion1'
       *  SignalConversion: '<S31>/Signal Conversion23'
       */
      if ((Meas_ObjType[ForEach_itr_i] == ((uint8_T)0U)) ||
          (Meas_ObjType[ForEach_itr_i] == ((uint8_T)7U)) || (!rtb_Valid_g) ||
          (Meas_ObjConfidence[ForEach_itr_i] < ((uint8_T)1U))) {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S37>/Constant1'
         */
        rtb_Switch_aq = 100.0F;
      }

      /* End of Switch: '<S37>/Switch' */

      /* ForEachSliceAssignment generated from: '<S30>/JA_TTRAssign' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion7'
       */
      AEBS_TOS_Y.TTC_JA[ForEach_itr_i] = rtb_Switch_aq;

      /* RelationalOperator: '<S142>/Compare' incorporates:
       *  Constant: '<S142>/Constant'
       */
      rtb_Valid_g = (rtb_LogicalOperator5 == false);

      /* If: '<S38>/If' incorporates:
       *  DataTypeConversion: '<S110>/Data Type Conversion'
       */
      if (rtb_Valid_g) {
        /* Outputs for IfAction SubSystem: '<S38>/Lat_Objif' incorporates:
         *  ActionPort: '<S109>/Action Port'
         */
        /* SignalConversion generated from: '<S109>/LatObj_Valid' incorporates:
         *  Constant: '<S109>/Constant'
         */
        rtb_Valid_g = false;

        /* SignalConversion generated from: '<S109>/Lat_ObjIntersect' incorporates:
         *  Constant: '<S109>/Constant1'
         */
        rtb_Valid_o = false;

        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S109>/Constant2'
         *  SignalConversion generated from: '<S109>/Lat_TTR'
         */
        rtb_Switch_aq = 100.0F;

        /* End of Outputs for SubSystem: '<S38>/Lat_Objif' */
      } else {
        /* Outputs for IfAction SubSystem: '<S38>/Lat_Objelse' incorporates:
         *  ActionPort: '<S108>/Action Port'
         */
        /* Sum: '<S112>/Add' incorporates:
         *  Inport: '<Root>/Extension_input_Bus'
         *  MultiPortSwitch: '<S33>/Index Vector10'
         *  SignalConversion: '<S31>/Signal Conversion10'
         */
        rtb_Product_gz = Meas_ObjVx[ForEach_itr_i] +
          AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;

        /* Logic: '<S112>/Logical Operator' incorporates:
         *  Constant: '<S117>/Constant'
         *  Constant: '<S118>/Constant'
         *  Constant: '<S122>/Constant'
         *  MultiPortSwitch: '<S33>/Index Vector3'
         *  RelationalOperator: '<S117>/Compare'
         *  RelationalOperator: '<S118>/Compare'
         *  RelationalOperator: '<S122>/Compare'
         *  SignalConversion: '<S31>/Signal Conversion3'
         */
        rtb_LogicalOperator11 = ((Meas_ObjOrientation[ForEach_itr_i] !=
          ((uint8_T)1U)) || (Meas_ObjOrientation[ForEach_itr_i] != ((uint8_T)6U))
          || (rtb_Product_gz > P_TA_ObjBehaviorOnComingPara));

        /* Abs: '<S112>/Abs' */
        rtb_Product_gz = fabsf(rtb_Product_gz);

        /* Abs: '<S112>/Abs1' incorporates:
         *  MultiPortSwitch: '<S33>/Index Vector15'
         *  SignalConversion: '<S31>/Signal Conversion15'
         */
        rtb_Quotient_f = fabsf(Meas_ObjVyabs[ForEach_itr_i]);

        /* Trigonometry: '<S112>/Sin' */
        rtb_Quotient_g = rt_atan2f_snf(rtb_Quotient_f, rtb_Product_gz);

        /* RelationalOperator: '<S112>/Relational Operator' */
        rtb_LogicalOperator10_m = (rtb_Product_gz <= rtb_Quotient_f);

        /* Product: '<S114>/Product1' incorporates:
         *  Constant: '<S114>/Constant'
         *  Inport: '<Root>/Extension_input_Bus'
         */
        rtb_Product_gz = AEBS_TOS_U.Extension_input_Bus_j.YawRate *
          P_TA_PrmForVehRearAxleDisttoFrnt;

        /* Logic: '<S116>/Logical Operator' incorporates:
         *  Constant: '<S119>/Constant'
         *  Constant: '<S120>/Constant'
         *  Constant: '<S121>/Constant'
         *  Constant: '<S123>/Constant'
         *  Constant: '<S124>/Constant'
         *  Constant: '<S125>/Constant'
         *  Constant: '<S126>/Constant'
         *  Constant: '<S127>/Constant'
         *  Constant: '<S128>/Constant'
         *  Constant: '<S129>/Constant'
         *  Logic: '<S112>/Logical Operator1'
         *  Logic: '<S112>/Logical Operator2'
         *  Logic: '<S112>/Logical Operator3'
         *  Logic: '<S112>/Logical Operator4'
         *  Logic: '<S112>/Logical Operator5'
         *  Logic: '<S113>/Logical Operator'
         *  MultiPortSwitch: '<S33>/Index Vector1'
         *  MultiPortSwitch: '<S33>/Index Vector2'
         *  MultiPortSwitch: '<S33>/Index Vector3'
         *  Product: '<S114>/Product2'
         *  RelationalOperator: '<S119>/Compare'
         *  RelationalOperator: '<S120>/Compare'
         *  RelationalOperator: '<S121>/Compare'
         *  RelationalOperator: '<S123>/Compare'
         *  RelationalOperator: '<S124>/Compare'
         *  RelationalOperator: '<S125>/Compare'
         *  RelationalOperator: '<S126>/Compare'
         *  RelationalOperator: '<S127>/Compare'
         *  RelationalOperator: '<S128>/Compare'
         *  RelationalOperator: '<S129>/Compare'
         *  SignalConversion: '<S31>/Signal Conversion1'
         *  SignalConversion: '<S31>/Signal Conversion2'
         *  SignalConversion: '<S31>/Signal Conversion3'
         *  Sqrt: '<S114>/Sqrt'
         *  Sum: '<S114>/Add'
         */
        rtb_Valid_g = (((Meas_ObjType[ForEach_itr_i] == ((uint8_T)4U)) ||
                        (Meas_ObjType[ForEach_itr_i] == ((uint8_T)5U)) ||
                        (Meas_ObjType[ForEach_itr_i] == ((uint8_T)6U))) &&
                       (((rtb_Quotient_g >= 0.78F) ||
                         (Meas_ObjOrientation[ForEach_itr_i] == ((uint8_T)2U)) ||
                         (Meas_ObjOrientation[ForEach_itr_i] == ((uint8_T)3U))) &&
                        rtb_LogicalOperator11 && (rtb_LogicalOperator10_m &&
          (rtb_Quotient_f >= P_TA_ObjBehaviorLatStationPara) &&
          ((Meas_ObjState[ForEach_itr_i] != ((uint8_T)2U)) ||
           (Meas_ObjState[ForEach_itr_i] != ((uint8_T)3U))))) && (sqrtf
          (rtb_Quotient_ed + rtb_Product_gz * rtb_Product_gz) >
          P_TA_PrmForVehSpdStationary));

        /* DataTypeConversion: '<S132>/Data Type Conversion' incorporates:
         *  Constant: '<S137>/Constant'
         *  Constant: '<S138>/Constant'
         *  Gain: '<S132>/Gain1'
         *  Logic: '<S132>/Logical Operator'
         *  MultiPortSwitch: '<S33>/Index Vector3'
         *  RelationalOperator: '<S137>/Compare'
         *  RelationalOperator: '<S138>/Compare'
         *  SignalConversion: '<S31>/Signal Conversion3'
         */
        rtb_Switch_gr = ((Meas_ObjOrientation[ForEach_itr_i] == ((uint8_T)3U)) &&
                         ((-1.0F) * AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                          TA_ObsVy > P_TA_PrmForLatObjLatSpdThred));

        /* DataTypeConversion: '<S132>/Data Type Conversion1' incorporates:
         *  Constant: '<S139>/Constant'
         *  Constant: '<S140>/Constant'
         *  Logic: '<S132>/Logical Operator1'
         *  MultiPortSwitch: '<S33>/Index Vector3'
         *  RelationalOperator: '<S139>/Compare'
         *  RelationalOperator: '<S140>/Compare'
         *  SignalConversion: '<S31>/Signal Conversion3'
         */
        rtb_R2L = ((Meas_ObjOrientation[ForEach_itr_i] == ((uint8_T)2U)) &&
                   (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy >
                    P_TA_PrmForLatObjLatSpdThred));

        /* Sum: '<S134>/Add' incorporates:
         *  Constant: '<S134>/Constant'
         *  Constant: '<S134>/Constant1'
         *  Product: '<S134>/Product'
         *  Product: '<S134>/Product1'
         */
        rtb_Switch3_e = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsWidth * 0.5
          + 0.5 * P_TA_PrmForVehWidth;

        /* If: '<S130>/If' */
        if (rtb_Switch_gr > 0.0) {
          /* Outputs for IfAction SubSystem: '<S130>/L2R' incorporates:
           *  ActionPort: '<S131>/Action Port'
           */
          /* MATLAB Function: '<S131>/L2R_Calculate' incorporates:
           *  MultiPortSwitch: '<S33>/Index Vector10'
           *  MultiPortSwitch: '<S33>/Index Vector25'
           *  SignalConversion: '<S31>/Signal Conversion10'
           *  SignalConversion: '<S31>/Signal Conversion19'
           */
          if ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy <= 0.0F) &&
              (fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy) >
               rtb_Switch3_e) && (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                                  TA_ObsVy < 0.0F)) {
            rtb_Valid_o = false;

            /* Switch: '<S10>/Switch' */
            rtb_Switch_aq = 100.0F;
          } else if ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy <= 0.0F) &&
                     (fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy) <=
                      rtb_Switch3_e) && (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                      TA_ObsVy < 0.0F)) {
            rtb_Product_gz = fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsDy) - (real32_T)rtb_Switch3_e;
            if (rtb_Product_gz * AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy
                > 0.0F) {
              rtb_Product_gz = -rtb_Product_gz;
            }

            rtb_Product_gz = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy, rtb_Product_gz);
            rtb_Switch_aq = AEBS_TOS_solution(0.5F * Meas_ObjAx[ForEach_itr_i],
              Meas_ObjVx[ForEach_itr_i], AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsDx);
            if ((0.5F * Meas_ObjAx[ForEach_itr_i] * (rtb_Product_gz *
                  rtb_Product_gz) + fabsf(Meas_ObjVx[ForEach_itr_i]) *
                 rtb_Product_gz <= 0.0F) || ((rtb_Switch_aq > 10.0F) ||
                 (rtb_Product_gz > 10.0F))) {
              rtb_Valid_o = false;

              /* Switch: '<S10>/Switch' */
              rtb_Switch_aq = 100.0F;
            } else {
              rtb_Valid_o = true;
            }
          } else if ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy >= 0.0F) &&
                     (fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy) <=
                      rtb_Switch3_e) && (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                      TA_ObsVy < 0.0F)) {
            rtb_Product_gz = AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy -
              (real32_T)rtb_Switch3_e;
            if (rtb_Product_gz * AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy
                > 0.0F) {
              rtb_Product_gz = -rtb_Product_gz;
            }

            rtb_Product_gz = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy, rtb_Product_gz);
            rtb_Switch_aq = AEBS_TOS_solution(0.5F * Meas_ObjAx[ForEach_itr_i],
              Meas_ObjVx[ForEach_itr_i], AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsDx);
            if ((0.5F * Meas_ObjAx[ForEach_itr_i] * (rtb_Product_gz *
                  rtb_Product_gz) + fabsf(Meas_ObjVx[ForEach_itr_i]) *
                 rtb_Product_gz <= 0.0F) || ((rtb_Switch_aq > 10.0F) ||
                 (rtb_Product_gz > 10.0F))) {
              rtb_Valid_o = false;

              /* Switch: '<S10>/Switch' */
              rtb_Switch_aq = 100.0F;
            } else {
              rtb_Valid_o = true;
            }
          } else if ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy > 0.0F) &&
                     (fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy) >
                      rtb_Switch3_e) && (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                      TA_ObsVy < 0.0F)) {
            rtb_Product_gz = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy - (real32_T)
              rtb_Switch3_e);
            rtb_Quotient_f = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy + (real32_T)
              rtb_Switch3_e);
            rtb_Switch_aq = AEBS_TOS_solution(0.5F * Meas_ObjAx[ForEach_itr_i],
              Meas_ObjVx[ForEach_itr_i], AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsDx);
            if ((0.5F * Meas_ObjAx[ForEach_itr_i] * (rtb_Product_gz *
                  rtb_Product_gz) + fabsf(Meas_ObjVx[ForEach_itr_i]) *
                 rtb_Product_gz <= 0.0F) || (0.5F * Meas_ObjAx[ForEach_itr_i] *
                 (rtb_Quotient_f * rtb_Quotient_f) + fabsf
                 (Meas_ObjVx[ForEach_itr_i]) * rtb_Quotient_f <= 0.0F) ||
                ((rtb_Switch_aq > 10.0F) || (rtb_Product_gz > 10.0F) ||
                 (rtb_Quotient_f > 10.0F))) {
              rtb_Valid_o = false;

              /* Switch: '<S10>/Switch' */
              rtb_Switch_aq = 100.0F;
            } else {
              rtb_Valid_o = true;
            }
          } else {
            rtb_Valid_o = false;

            /* Switch: '<S10>/Switch' */
            rtb_Switch_aq = 100.0F;
          }

          /* End of MATLAB Function: '<S131>/L2R_Calculate' */
          /* End of Outputs for SubSystem: '<S130>/L2R' */
        } else if (rtb_R2L > 0.0) {
          /* Outputs for IfAction SubSystem: '<S130>/R2L' incorporates:
           *  ActionPort: '<S133>/Action Port'
           */
          /* MATLAB Function: '<S133>/R2L_Calculate' incorporates:
           *  MultiPortSwitch: '<S33>/Index Vector10'
           *  MultiPortSwitch: '<S33>/Index Vector25'
           *  SignalConversion: '<S31>/Signal Conversion10'
           *  SignalConversion: '<S31>/Signal Conversion19'
           */
          rtb_ARelStationaryObject = fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i]
            .TA_ObsDy);
          if ((rtb_ARelStationaryObject >= rtb_Switch3_e) &&
              ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy > 0.0F) &&
               (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy > 0.0F))) {
            rtb_Valid_o = false;

            /* Switch: '<S10>/Switch' */
            rtb_Switch_aq = 100.0F;
          } else if ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy >= 0.0F) &&
                     (fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy) <
                      rtb_Switch3_e) && (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                      TA_ObsVy > 0.0F)) {
            rtb_Product_gz = (real32_T)rtb_Switch3_e - rtb_ARelStationaryObject;
            if (rtb_Product_gz * AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy
                > 0.0F) {
              rtb_Product_gz = -rtb_Product_gz;
            }

            rtb_Product_gz = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy, rtb_Product_gz);
            rtb_Switch_aq = AEBS_TOS_solution(0.5F * Meas_ObjAx[ForEach_itr_i],
              Meas_ObjVx[ForEach_itr_i], AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsDx);
            if ((0.5F * Meas_ObjAx[ForEach_itr_i] * (rtb_Product_gz *
                  rtb_Product_gz) + fabsf(Meas_ObjVx[ForEach_itr_i]) *
                 rtb_Product_gz <= 0.0F) || ((rtb_Switch_aq > 10.0F) ||
                 (rtb_Product_gz > 10.0F))) {
              rtb_Valid_o = false;

              /* Switch: '<S10>/Switch' */
              rtb_Switch_aq = 100.0F;
            } else {
              rtb_Valid_o = true;
            }
          } else if ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy <= 0.0F) &&
                     (fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy) <
                      rtb_Switch3_e) && (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                      TA_ObsVy > 0.0F)) {
            rtb_Product_gz = (real32_T)rtb_Switch3_e +
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy;
            if (rtb_Product_gz * AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy
                > 0.0F) {
              rtb_Product_gz = -rtb_Product_gz;
            }

            rtb_Product_gz = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy, rtb_Product_gz);
            rtb_Switch_aq = AEBS_TOS_solution(0.5F * Meas_ObjAx[ForEach_itr_i],
              Meas_ObjVx[ForEach_itr_i], AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsDx);
            if ((0.5F * Meas_ObjAx[ForEach_itr_i] * (rtb_Product_gz *
                  rtb_Product_gz) + fabsf(Meas_ObjVx[ForEach_itr_i]) *
                 rtb_Product_gz <= 0.0F) || ((rtb_Switch_aq > 10.0F) ||
                 (rtb_Product_gz > 10.0F))) {
              rtb_Valid_o = false;

              /* Switch: '<S10>/Switch' */
              rtb_Switch_aq = 100.0F;
            } else {
              rtb_Valid_o = true;
            }
          } else if ((AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy < 0.0F) &&
                     (fabsf(AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy) >
                      rtb_Switch3_e) && (AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
                      TA_ObsVy > 0.0F)) {
            rtb_Product_gz = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy, (real32_T)
              rtb_Switch3_e + AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy);
            rtb_Quotient_f = AEBS_TOS_solution(0.5F *
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsAy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsVy,
              AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].TA_ObsDy - (real32_T)
              rtb_Switch3_e);
            rtb_Switch_aq = AEBS_TOS_solution(0.5F * Meas_ObjAx[ForEach_itr_i],
              Meas_ObjVx[ForEach_itr_i], AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].
              TA_ObsDx);
            if ((0.5F * Meas_ObjAx[ForEach_itr_i] * (rtb_Product_gz *
                  rtb_Product_gz) + fabsf(Meas_ObjVx[ForEach_itr_i]) *
                 rtb_Product_gz <= 0.0F) || (0.5F * Meas_ObjAx[ForEach_itr_i] *
                 (rtb_Quotient_f * rtb_Quotient_f) + fabsf
                 (Meas_ObjVx[ForEach_itr_i]) * rtb_Quotient_f <= 0.0F) ||
                ((rtb_Switch_aq > 10.0F) || (rtb_Product_gz > 10.0F) ||
                 (rtb_Quotient_f > 10.0F))) {
              rtb_Valid_o = false;

              /* Switch: '<S10>/Switch' */
              rtb_Switch_aq = 100.0F;
            } else {
              rtb_Valid_o = true;
            }
          } else {
            rtb_Valid_o = false;

            /* Switch: '<S10>/Switch' */
            rtb_Switch_aq = 100.0F;
          }

          /* End of MATLAB Function: '<S133>/R2L_Calculate' */
          /* End of Outputs for SubSystem: '<S130>/R2L' */
        } else {
          /* Outputs for IfAction SubSystem: '<S130>/others' incorporates:
           *  ActionPort: '<S135>/Action Port'
           */
          /* SignalConversion generated from: '<S135>/Valid_Flg' incorporates:
           *  Constant: '<S135>/Constant'
           */
          rtb_Valid_o = false;

          /* Switch: '<S10>/Switch' incorporates:
           *  Constant: '<S135>/Constant1'
           *  SignalConversion generated from: '<S135>/TTI'
           */
          rtb_Switch_aq = 100.0F;

          /* End of Outputs for SubSystem: '<S130>/others' */
        }

        /* End of If: '<S130>/If' */
      }

      /* ForEachSliceAssignment generated from: '<S30>/Utility' */
      Meas_Utility[ForEach_itr_i] = rtb_LogicalOperator5;

      /* ForEachSliceAssignment generated from: '<S30>/TTI' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion3'
       */
      Meas_LongTTI[ForEach_itr_i] = rtb_RadiusRear_j;

      /* ForEachSliceAssignment generated from: '<S30>/Overlap_Flg' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion'
       */
      rtb_ImpAsg_InsertedFor_Overlap_[ForEach_itr_i] = rtb_LogicalOperator7;

      /* ForEachSliceAssignment generated from: '<S30>/Obj_Coef' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion2'
       */
      Meas_ObjCoef[ForEach_itr_i] = rtb_DataTypeConversion_j;

      /* ForEachSliceAssignment generated from: '<S30>/Meas_WeightCoef_2' */
      Meas_WeightCoef_2[ForEach_itr_i] = temp_ID;

      /* ForEachSliceAssignment generated from: '<S30>/Meas_WeightCoef_1' */
      Meas_WeightCoef_1[ForEach_itr_i] = num;

      /* ForEachSliceAssignment generated from: '<S30>/Lat_TTR' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion6'
       */
      rtb_ImpAsg_InsertedFor_Lat_TTR_[ForEach_itr_i] = rtb_Switch_aq;

      /* ForEachSliceAssignment generated from: '<S30>/Lat_ObjIntersect' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion5'
       */
      rtb_ImpAsg_InsertedFor_Lat_ObjI[ForEach_itr_i] = rtb_Valid_o;

      /* ForEachSliceAssignment generated from: '<S30>/LatObj_Valid' incorporates:
       *  SignalConversion: '<S32>/Signal Conversion4'
       */
      rtb_ImpAsg_InsertedFor_LatObj_V[ForEach_itr_i] = rtb_Valid_g;
    }

    /* End of Outputs for SubSystem: '<S28>/Data_precess' */

    /* MATLAB Function: '<S435>/Obj_ConfirmFunc' incorporates:
     *  Constant: '<S435>/Constant'
     *  ForEachSliceAssignment generated from: '<S30>/Obj_Coef'
     *  ForEachSliceAssignment generated from: '<S30>/TTI'
     *  Inport: '<Root>/Extension_input_Bus'
     *  SignalConversion: '<S28>/Signal Conversion1'
     *  SignalConversion: '<S28>/Signal Conversion2'
     *  SignalConversion: '<S451>/Signal Conversion'
     *  SignalConversion: '<S451>/Signal Conversion6'
     *  SignalConversion: '<S451>/Signal Conversion7'
     */
    if (AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed <=
        P_TA_PrmForVehSpdStationary) {
      for (s647_iter = 0; s647_iter < 32; s647_iter++) {
        rtb_re_Valid[s647_iter] = 0U;
        rtb_re_ID[s647_iter] = 0U;
        rtb_re_dy[s647_iter] = 200.0F;
        rtb_re_dx[s647_iter] = 200.0F;
        rtb_re_TTC[s647_iter] = 100.0F;
      }
    } else {
      for (s647_iter = 0; s647_iter < 32; s647_iter++) {
        if ((Meas_ObjCoef[s647_iter] == 255) || (Meas_ObjCoef[s647_iter] == 0) ||
            (Meas_ObjState[s647_iter] == 0) || (((Meas_ObjOrientation[s647_iter]
               == 0) || (Meas_ObjVx[s647_iter] +
                         AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed <=
                         P_TA_PrmForObjSpdStationary) ||
              (Meas_ObjVxabs[s647_iter] < P_TA_PrmForObjSpdStationary)) &&
             (!rtb_ImpAsg_InsertedFor_Overlap_[s647_iter]))) {
          rtb_re_Valid[s647_iter] = 0U;
          rtb_re_ID[s647_iter] = 0U;
          rtb_re_dy[s647_iter] = 200.0F;
          rtb_re_dx[s647_iter] = 200.0F;
          rtb_re_TTC[s647_iter] = 100.0F;
        } else {
          rtb_re_Valid[s647_iter] = 1U;

          /* Outputs for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
          rtb_re_ID[s647_iter] = Meas_ObjID[s647_iter];
          rtb_re_dy[s647_iter] = Meas_ObjDy[s647_iter];
          rtb_re_dx[s647_iter] = Meas_ObjDx[s647_iter];

          /* End of Outputs for SubSystem: '<S445>/TAObjInfoCalc' */
          rtb_re_TTC[s647_iter] = Meas_LongTTI[s647_iter];
        }
      }
    }

    /* End of MATLAB Function: '<S435>/Obj_ConfirmFunc' */

    /* S-Function (sdspsrt2): '<S435>/Sort' */
    /* DSP System Toolbox Sort (sdspsrt2) - '<S435>/Sort' */
    {
      const real32_T *uQS = &rtb_re_dx[0];
      uint32_T *index = &rtb_Sort[0];
      uint32_T j_SORT;
      for (j_SORT=0; j_SORT<32; j_SORT++) {
        index[j_SORT] = j_SORT;
      }

      MWDSP_Sort_Qk_Idx_R(uQS, index, 0, 31);
      for (j_SORT=0; j_SORT<32; j_SORT++) {
        index[j_SORT] += 1;            /* Convert to MATLAB 1-based indexing */
      }
    }

    /* Switch: '<S448>/Switch' incorporates:
     *  Constant: '<S448>/Constant'
     *  Constant: '<S448>/Constant1'
     *  Inport: '<Root>/ACC_Info'
     *  RelationalOperator: '<S447>/Relational Operator'
     *  Sum: '<S448>/Add'
     *  UnitDelay: '<S447>/Unit Delay'
     *  UnitDelay: '<S448>/Unit Delay'
     */
    if (AEBS_TOS_U.ACC_Info.ACC_TargetID == AEBS_TOS_DW.UnitDelay_DSTATE_p) {
      rtb_C2_i = AEBS_TOS_DW.UnitDelay_DSTATE_b + 1.0F;
    } else {
      rtb_C2_i = 0.0F;
    }

    /* End of Switch: '<S448>/Switch' */

    /* Saturate: '<S448>/Saturation' */
    if (rtb_C2_i > 1000.0F) {
      AEBS_TOS_DW.UnitDelay_DSTATE_b = 1000.0F;
    } else if (rtb_C2_i < 0.0F) {
      AEBS_TOS_DW.UnitDelay_DSTATE_b = 0.0F;
    } else {
      AEBS_TOS_DW.UnitDelay_DSTATE_b = rtb_C2_i;
    }

    /* End of Saturate: '<S448>/Saturation' */

    /* RelationalOperator: '<S444>/Relational Operator1' incorporates:
     *  Constant: '<S444>/Constant2'
     *  Inport: '<Root>/ACC_Info'
     */
    rtb_Valid_o = (AEBS_TOS_U.ACC_Info.ACC_Mode == ((uint8_T)2U));

    /* RelationalOperator: '<S444>/Relational Operator2' incorporates:
     *  Constant: '<S444>/Constant3'
     *  Inport: '<Root>/ACC_Info'
     */
    rtb_Valid_g = (AEBS_TOS_U.ACC_Info.ACC_Mode == ((uint8_T)3U));

    /* Switch: '<S444>/Switch' incorporates:
     *  Constant: '<S444>/Constant'
     *  Constant: '<S444>/Constant1'
     *  Inport: '<Root>/ACC_Info'
     *  Logic: '<S444>/Logical Operator'
     *  RelationalOperator: '<S444>/Relational Operator'
     */
    if ((AEBS_TOS_U.ACC_Info.ACC_Mode == ((uint8_T)1U)) || rtb_Valid_o ||
        rtb_Valid_g) {
      /* Switch: '<S447>/Switch' incorporates:
       *  Constant: '<S447>/Constant'
       *  Constant: '<S447>/Constant1'
       *  Constant: '<S447>/Constant2'
       *  Constant: '<S447>/Constant4'
       *  Logic: '<S447>/Logical Operator'
       *  Product: '<S448>/Product'
       *  RelationalOperator: '<S448>/Relational Operator'
       *  UnitDelay: '<S448>/Unit Delay'
       */
      if ((AEBS_TOS_DW.UnitDelay_DSTATE_b >= P_TA_AccTarCfmDlyInTaSlection *
           P_TA_CallFrequencyInTaSlection) && P_TA_AccTarCfmDlyEnadInTaSlection)
      {
        rtb_AccTgtIdn = AEBS_TOS_U.ACC_Info.ACC_TargetID;
      } else {
        rtb_AccTgtIdn = ((uint8_T)0U);
      }

      /* End of Switch: '<S447>/Switch' */
    } else {
      rtb_AccTgtIdn = ((uint8_T)0U);
    }

    /* End of Switch: '<S444>/Switch' */

    /* MATLAB Function: '<S435>/Obj_select' */
    num = MAX_uint8_T;
    temp_ID = 0U;
    rtb_Switch_gr = rtb_re_Valid[0];
    for (s647_iter = 0; s647_iter < 31; s647_iter++) {
      rtb_Switch_gr += (real_T)rtb_re_Valid[s647_iter + 1];
    }

    if (rtb_Switch_gr == 0.0) {
      temp_ID = MAX_uint8_T;
      num = MAX_uint8_T;
    } else {
      s647_iter = 0;
      exitg3 = false;
      while ((!exitg3) && (s647_iter < 32)) {
        j = (int32_T)rtb_Sort[s647_iter] - 1;
        p = Meas_ObjCoef[j];
        if (((p == 3) || (p == 1)) && (fabsf(rtb_re_dy[j]) < 3.0F)) {
          qY = rtb_Sort[s647_iter];
          if (qY > 255U) {
            qY = 255U;
          }

          num = (uint8_T)qY;
          temp_ID = rtb_re_ID[j];
          exitg3 = true;
        } else {
          guard11 = false;
          guard21 = false;
          guard31 = false;
          if ((p == 255) || (p == 0)) {
            s647_iter++;
          } else {
            dxMin_Left = rtb_re_TTC[j];
            if (((dxMin_Left >= 90.0F) &&
                 (AEBS_TOS_U.Extension_input_Bus_j.AEB_Intervention_ESP == 0)) ||
                (dxMin_Left <= -6.0F)) {
              s647_iter++;
            } else if (!rtb_ImpAsg_InsertedFor_Overlap_[j]) {
              p = Meas_ObjState[j];
              if ((p != 2) && (p != 3)) {
                s647_iter++;
              } else {
                guard31 = true;
              }
            } else {
              guard31 = true;
            }
          }

          if (guard31) {
            if (Meas_ObjVx[j] +
                AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed >=
                P_TA_PrmForObjSpdStationary) {
              p = Meas_ObjState[j];
              if (p != 2) {
                q = Meas_ObjOrientation[j];
                if ((q != 2) && (q != 3) && (p != 0) && (rtb_re_ID[j] ==
                     rtb_AccTgtIdn)) {
                  qY = rtb_Sort[s647_iter];
                  if (qY > 255U) {
                    qY = 255U;
                  }

                  num = (uint8_T)qY;
                  temp_ID = rtb_re_ID[j];
                  exitg3 = true;
                } else {
                  guard21 = true;
                }
              } else {
                guard21 = true;
              }
            } else {
              guard21 = true;
            }
          }

          if (guard21) {
            if (Meas_Boudingbox_Calculate[j] &&
                (AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed <= 2.77F)) {
              temp_ID = rtb_re_ID[j];
              if ((temp_ID != 0) && (Meas_ObjState[j] != 0) && (dxMin_Left !=
                   100.0F)) {
                qY = rtb_Sort[s647_iter];
                if (qY > 255U) {
                  qY = 255U;
                }

                num = (uint8_T)qY;
                s647_iter++;
              } else {
                guard11 = true;
              }
            } else {
              guard11 = true;
            }
          }

          if (guard11) {
            if ((AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed > 2.77F) &&
                (rtb_re_ID[j] != 0) && (Meas_ObjState[j] != 0) && (dxMin_Left !=
                 100.0F)) {
              qY = rtb_Sort[s647_iter];
              if (qY > 255U) {
                qY = 255U;
              }

              num = (uint8_T)qY;
              temp_ID = rtb_re_ID[j];
              exitg3 = true;
            } else {
              num = MAX_uint8_T;
              temp_ID = 0U;
              s647_iter++;
            }
          }
        }
      }
    }

    /* Outputs for Iterator SubSystem: '<S420>/Lat_ValidNumber' incorporates:
     *  ForIterator: '<S423>/For Iterator'
     */
    for (s647_iter = 1; s647_iter <= 32; s647_iter++) {
      /* MultiPortSwitch: '<S423>/Index Vector' incorporates:
       *  ForEachSliceAssignment generated from: '<S30>/LatObj_Valid'
       */
      rtb_Valid_g = rtb_ImpAsg_InsertedFor_LatObj_V[s647_iter - 1];

      /* Switch: '<S423>/Switch' incorporates:
       *  Constant: '<S430>/Constant'
       *  Constant: '<S431>/Constant'
       *  Constant: '<S432>/Constant'
       *  Logic: '<S423>/Logical Operator'
       *  RelationalOperator: '<S430>/Compare'
       *  RelationalOperator: '<S431>/Compare'
       *  RelationalOperator: '<S432>/Compare'
       *  Switch: '<S423>/Switch2'
       */
      if (s647_iter > 1) {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Constant: '<S430>/Constant'
         *  RelationalOperator: '<S430>/Compare'
         */
        if (rtb_Valid_g == true) {
          /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
           *  Constant: '<S423>/Constant1'
           *  Sum: '<S423>/Add'
           *  UnitDelay: '<S423>/Unit Delay'
           */
          rtb_DataTypeConversion_j = (uint8_T)((uint32_T)
            AEBS_TOS_DW.UnitDelay_DSTATE_k0 + ((uint8_T)1U));
        } else {
          /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
           *  UnitDelay: '<S423>/Unit Delay'
           */
          rtb_DataTypeConversion_j = AEBS_TOS_DW.UnitDelay_DSTATE_k0;
        }

        /* End of Switch: '<S423>/Switch1' */
      } else if ((rtb_Valid_g == true) && (s647_iter == 1)) {
        /* Switch: '<S423>/Switch2' incorporates:
         *  Constant: '<S423>/Constant2'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        rtb_DataTypeConversion_j = ((uint8_T)1U);
      } else {
        /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
         *  Constant: '<S423>/Constant'
         *  Switch: '<S423>/Switch2'
         */
        rtb_DataTypeConversion_j = ((uint8_T)0U);
      }

      /* End of Switch: '<S423>/Switch' */

      /* Saturate: '<S423>/Saturation1' */
      if (rtb_DataTypeConversion_j < ((uint8_T)254U)) {
        AEBS_TOS_DW.UnitDelay_DSTATE_k0 = rtb_DataTypeConversion_j;
      } else {
        AEBS_TOS_DW.UnitDelay_DSTATE_k0 = ((uint8_T)254U);
      }

      /* End of Saturate: '<S423>/Saturation1' */
    }

    /* End of Outputs for SubSystem: '<S420>/Lat_ValidNumber' */

    /* RelationalOperator: '<S429>/Compare' incorporates:
     *  Constant: '<S429>/Constant'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_Valid_g = (AEBS_TOS_DW.UnitDelay_DSTATE_k0 <= ((uint8_T)10U));

    /* If: '<S422>/If' incorporates:
     *  DataTypeConversion: '<S426>/Data Type Conversion'
     */
    if (rtb_Valid_g) {
      /* Outputs for IfAction SubSystem: '<S422>/AEB_LatTAif' incorporates:
       *  ActionPort: '<S425>/Action Port'
       */
      for (s647_iter = 0; s647_iter < 10; s647_iter++) {
        /* Chart: '<S425>/Lat_TASelect' incorporates:
         *  Constant: '<S425>/Constant'
         */
        rtb_Merge_pv[s647_iter] = AEBS_TOS_ConstP.pooled72[s647_iter];

        /* SignalConversion generated from: '<S425>/ID' incorporates:
         *  Chart: '<S425>/Lat_TASelect'
         *  Constant: '<S425>/Constant1'
         */
        rtb_Merge1_d[s647_iter] = AEBS_TOS_ConstP.pooled72[s647_iter];
      }

      /* Chart: '<S425>/Lat_TASelect' incorporates:
       *  ForEachSliceAssignment generated from: '<S30>/LatObj_Valid'
       *  SignalConversion generated from: '<S425>/ID'
       *  SignalConversion: '<S451>/Signal Conversion'
       */
      rtb_AccTgtIdn = 0U;
      for (i = 0U; i < 32; i++) {
        /* Outputs for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
        if (rtb_ImpAsg_InsertedFor_LatObj_V[i] && (Meas_ObjID[i] != 0)) {
          rtb_Merge_pv[rtb_AccTgtIdn] = (uint8_T)(i + 1);
          rtb_Merge1_d[rtb_AccTgtIdn] = Meas_ObjID[i];
          j = rtb_AccTgtIdn + 1;
          if (rtb_AccTgtIdn + 1 > 255) {
            j = 255;
          }

          rtb_AccTgtIdn = (uint8_T)j;
        }

        /* End of Outputs for SubSystem: '<S445>/TAObjInfoCalc' */
      }

      /* Saturate: '<S425>/Saturation' incorporates:
       *  Chart: '<S425>/Lat_TASelect'
       */
      for (j = 0; j < 10; j++) {
        rtb_AccTgtIdn = rtb_Merge_pv[j];
        if (rtb_AccTgtIdn >= ((uint8_T)32U)) {
          rtb_AccTgtIdn = ((uint8_T)32U);
        }

        rtb_Merge_pv[j] = rtb_AccTgtIdn;
      }

      /* End of Saturate: '<S425>/Saturation' */
      /* End of Outputs for SubSystem: '<S422>/AEB_LatTAif' */
    } else {
      /* Outputs for IfAction SubSystem: '<S422>/AEB_LatTAelse' incorporates:
       *  ActionPort: '<S424>/Action Port'
       */
      /* S-Function (sdspsrt2): '<S424>/Sort' */
      /* DSP System Toolbox Sort (sdspsrt2) - '<S424>/Sort' */
      {
        const real32_T *uQS = &rtb_ImpAsg_InsertedFor_Lat_TTR_[0];
        uint32_T *index = &rtb_Sort_b[0];
        uint32_T j_SORT;
        for (j_SORT=0; j_SORT<32; j_SORT++) {
          index[j_SORT] = j_SORT;
        }

        MWDSP_Sort_Qk_Idx_R(uQS, index, 0, 31);
        for (j_SORT=0; j_SORT<32; j_SORT++) {
          index[j_SORT] += 1;          /* Convert to MATLAB 1-based indexing */
        }
      }

      /* Sum: '<S424>/Sum of Elements' */
      qY = 0U;
      for (j = 0; j < 32; j++) {
        qY += rtb_ImpAsg_InsertedFor_Lat_ObjI[j];
      }

      for (s647_iter = 0; s647_iter < 10; s647_iter++) {
        /* Chart: '<S424>/Lat_TASelect' incorporates:
         *  Constant: '<S424>/Constant1'
         */
        num_Vecter[s647_iter] = AEBS_TOS_ConstP.pooled72[s647_iter];

        /* SignalConversion generated from: '<S424>/ID' incorporates:
         *  Chart: '<S424>/Lat_TASelect'
         *  Constant: '<S424>/Constant'
         */
        rtb_Merge1_d[s647_iter] = AEBS_TOS_ConstP.pooled72[s647_iter];
      }

      /* Chart: '<S424>/Lat_TASelect' incorporates:
       *  ForEachSliceAssignment generated from: '<S30>/LatObj_Valid'
       *  SignalConversion generated from: '<S424>/ID'
       *  SignalConversion: '<S451>/Signal Conversion'
       *  Sum: '<S424>/Sum of Elements'
       */
      rtb_AccTgtIdn = 0U;
      i = 0U;
      if ((uint8_T)qY >= 10) {
        for (s647_iter = 0; s647_iter < 10; s647_iter++) {
          num_Vecter[rtb_AccTgtIdn] = (real32_T)rtb_Sort_b[i];

          /* Outputs for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
          rtb_Merge1_d[rtb_AccTgtIdn] = Meas_ObjID[rtb_Sort_b[i]];

          /* End of Outputs for SubSystem: '<S445>/TAObjInfoCalc' */
          j = rtb_AccTgtIdn + 1;
          if (rtb_AccTgtIdn + 1 > 255) {
            j = 255;
          }

          rtb_AccTgtIdn = (uint8_T)j;
          j = i + 1;
          if (i + 1 > 255) {
            j = 255;
          }

          i = (uint8_T)j;
        }
      } else {
        while (i < 32) {
          /* Outputs for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
          if (rtb_ImpAsg_InsertedFor_LatObj_V[i] &&
              rtb_ImpAsg_InsertedFor_Lat_ObjI[i] && (Meas_ObjID[i] != 0)) {
            num_Vecter[rtb_AccTgtIdn] = (real32_T)i + 1.0F;
            rtb_Merge1_d[rtb_AccTgtIdn] = Meas_ObjID[i];
            j = rtb_AccTgtIdn + 1;
            if (rtb_AccTgtIdn + 1 > 255) {
              j = 255;
            }

            rtb_AccTgtIdn = (uint8_T)j;
          }

          /* End of Outputs for SubSystem: '<S445>/TAObjInfoCalc' */
          i++;
        }

        for (j = 0; j < 10; j++) {
          /* Outputs for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
          if (rtb_ImpAsg_InsertedFor_LatObj_V[j] &&
              (!rtb_ImpAsg_InsertedFor_Lat_ObjI[j]) && (Meas_ObjID[j] != 0) &&
              (rtb_AccTgtIdn <= 9)) {
            num_Vecter[rtb_AccTgtIdn] = (real32_T)j + 1.0F;
            rtb_Merge1_d[rtb_AccTgtIdn] = Meas_ObjID[j];
            rtb_AccTgtIdn++;
          }

          /* End of Outputs for SubSystem: '<S445>/TAObjInfoCalc' */
        }
      }

      /* Saturate: '<S424>/Saturation' */
      for (s647_iter = 0; s647_iter < 10; s647_iter++) {
        /* Chart: '<S424>/Lat_TASelect' */
        dxMin_Left = num_Vecter[s647_iter];
        if (dxMin_Left < 256.0F) {
          rtb_AccTgtIdn = (uint8_T)dxMin_Left;
        } else {
          rtb_AccTgtIdn = MAX_uint8_T;
        }

        if (rtb_AccTgtIdn < ((uint8_T)32U)) {
          rtb_Merge_pv[s647_iter] = rtb_AccTgtIdn;
        } else {
          rtb_Merge_pv[s647_iter] = ((uint8_T)32U);
        }
      }

      /* End of Saturate: '<S424>/Saturation' */
      /* End of Outputs for SubSystem: '<S422>/AEB_LatTAelse' */
    }

    /* End of If: '<S422>/If' */

    /* Switch: '<S675>/Switch' incorporates:
     *  Constant: '<S675>/Constant4'
     *  Inport: '<Root>/Extension_input_Bus'
     *  RelationalOperator: '<S675>/Relational Operator'
     *  SignalConversion: '<S2>/Signal Conversion2'
     *  UnitDelay: '<S675>/Unit Delay'
     */
    if (!(AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed <= 0.01F)) {
      AEBS_TOS_DW.UnitDelay_DSTATE_c = AEBS_TOS_ConstB.SignalConversion4;
    }

    /* End of Switch: '<S675>/Switch' */

    /* MATLAB Function: '<S688>/Line_Info' incorporates:
     *  Inport: '<Root>/Road_Info'
     */
    AEBS_TOS_Line_Info_p(AEBS_TOS_U.Road_Info.lineData[0].lineSegNum,
                         AEBS_TOS_U.Road_Info.lineData[0].lineSegs[0].
                         lineSegValid, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[0].lineSegStart,
                         AEBS_TOS_U.Road_Info.lineData[0].lineSegs[1].
                         lineSegValid, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[1].lineSegStart,
                         AEBS_TOS_U.Road_Info.lineData[0].lineSegs[2].
                         lineSegValid, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[2].lineSegStart, &rtb_DataTypeConversion_j,
                         &rtb_Valid_l5);

    /* Selector: '<S677>/Selector18' incorporates:
     *  Inport: '<Root>/Road_Info'
     */
    expl_temp = &AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1];
    dxMin_Left = AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineSegWidth;
    rtb_Quotient_ed = AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineSegEnd;
    rtb_Product_gz = AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC0;
    rtb_Quotient_f = AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC1;
    rtb_Quotient_g = AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC2;
    rtb_Add_cl = AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC3;

    /* Sum: '<S674>/Add6' incorporates:
     *  Inport: '<Root>/Road_Info'
     *  Selector: '<S677>/Selector18'
     */
    rtb_Add6_o = AEBS_TOS_U.Road_Info.lineData[0]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC0 - AEBS_TOS_ConstB.Gain3_b;

    /* Sum: '<S674>/Add9' incorporates:
     *  UnitDelay: '<S674>/Unit Delay2'
     */
    rtb_C2_i = rtb_Add6_o - AEBS_TOS_DW.UnitDelay2_DSTATE;

    /* Sum: '<S683>/Sum1' incorporates:
     *  Constant: '<S2>/Constant1'
     *  Product: '<S674>/Divide'
     *  Product: '<S683>/Product2'
     *  Sum: '<S683>/Sum'
     *  UnitDelay: '<S683>/Unit Delay'
     *
     * Block description for '<S683>/Sum1':
     *  _GWMAB30P4.LKAFN.000_156_
     *
     * Block description for '<S683>/Product2':
     *  _GWMAB30P4.LKAFN.000_153_
     *
     * Block description for '<S683>/Sum':
     *  _GWMAB30P4.LKAFN.000_155_
     *
     * Block description for '<S683>/Unit Delay':
     *  _GWMAB30P4.LKAFN.000_157_
     */
    AEBS_TOS_DW.UnitDelay_DSTATE += (rtb_C2_i / 0.02 -
      AEBS_TOS_DW.UnitDelay_DSTATE) * AEBS_TOS_ConstB.Product_b;

    /* Saturate: '<S683>/Saturation'
     *
     * Block description for '<S683>/Saturation':
     *  _GWMAB30P4.LKAFN.000_154_
     */
    if (AEBS_TOS_DW.UnitDelay_DSTATE > 65535.0) {
      /* Sum: '<S683>/Sum1'
       *
       * Block description for '<S683>/Sum1':
       *  _GWMAB30P4.LKAFN.000_156_
       */
      AEBS_TOS_DW.UnitDelay_DSTATE = 65535.0;
    } else if (AEBS_TOS_DW.UnitDelay_DSTATE < (-65535.0)) {
      /* Sum: '<S683>/Sum1'
       *
       * Block description for '<S683>/Sum1':
       *  _GWMAB30P4.LKAFN.000_156_
       */
      AEBS_TOS_DW.UnitDelay_DSTATE = (-65535.0);
    }

    /* End of Saturate: '<S683>/Saturation' */

    /* MATLAB Function: '<S689>/Line_Info' incorporates:
     *  Inport: '<Root>/Road_Info'
     */
    AEBS_TOS_Line_Info_p(AEBS_TOS_U.Road_Info.lineData[1].lineSegNum,
                         AEBS_TOS_U.Road_Info.lineData[1].lineSegs[0].
                         lineSegValid, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[0].lineSegStart,
                         AEBS_TOS_U.Road_Info.lineData[1].lineSegs[1].
                         lineSegValid, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[1].lineSegStart,
                         AEBS_TOS_U.Road_Info.lineData[1].lineSegs[2].
                         lineSegValid, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[2].lineSegStart, &rtb_DataTypeConversion_j,
                         &rtb_Valid);

    /* Selector: '<S677>/Selector13' incorporates:
     *  Inport: '<Root>/Road_Info'
     */
    rtb_ARelStationaryObject = AEBS_TOS_U.Road_Info.lineData[1]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC0;
    rtb_Quotient_e4 = AEBS_TOS_U.Road_Info.lineData[1]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC1;
    rtb_Sum1_p = AEBS_TOS_U.Road_Info.lineData[1]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC2;
    rtb_Quotient_dg = AEBS_TOS_U.Road_Info.lineData[1]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC3;

    /* Sum: '<S674>/Add3' incorporates:
     *  Gain: '<S674>/Gain11'
     *  Inport: '<Root>/Road_Info'
     *  Selector: '<S677>/Selector13'
     */
    rtb_Add3_p = AEBS_TOS_U.Road_Info.lineData[1]
      .lineSegs[rtb_DataTypeConversion_j - 1].lineC0 * (-1.0F) -
      AEBS_TOS_ConstB.Gain4_j;

    /* Sum: '<S674>/Add5' incorporates:
     *  UnitDelay: '<S674>/Unit Delay3'
     */
    rtb_C2_i = rtb_Add3_p - AEBS_TOS_DW.UnitDelay3_DSTATE;

    /* Sum: '<S682>/Sum1' incorporates:
     *  Constant: '<S2>/Constant1'
     *  Product: '<S674>/Divide2'
     *  Product: '<S682>/Product2'
     *  Sum: '<S682>/Sum'
     *  UnitDelay: '<S682>/Unit Delay'
     *
     * Block description for '<S682>/Sum1':
     *  _GWMAB30P4.LKAFN.000_156_
     *
     * Block description for '<S682>/Product2':
     *  _GWMAB30P4.LKAFN.000_153_
     *
     * Block description for '<S682>/Sum':
     *  _GWMAB30P4.LKAFN.000_155_
     *
     * Block description for '<S682>/Unit Delay':
     *  _GWMAB30P4.LKAFN.000_157_
     */
    AEBS_TOS_DW.UnitDelay_DSTATE_g += (rtb_C2_i / 0.02 -
      AEBS_TOS_DW.UnitDelay_DSTATE_g) * AEBS_TOS_ConstB.Product;

    /* Saturate: '<S682>/Saturation'
     *
     * Block description for '<S682>/Saturation':
     *  _GWMAB30P4.LKAFN.000_154_
     */
    if (AEBS_TOS_DW.UnitDelay_DSTATE_g > 65535.0) {
      /* Sum: '<S682>/Sum1'
       *
       * Block description for '<S682>/Sum1':
       *  _GWMAB30P4.LKAFN.000_156_
       */
      AEBS_TOS_DW.UnitDelay_DSTATE_g = 65535.0;
    } else if (AEBS_TOS_DW.UnitDelay_DSTATE_g < (-65535.0)) {
      /* Sum: '<S682>/Sum1'
       *
       * Block description for '<S682>/Sum1':
       *  _GWMAB30P4.LKAFN.000_156_
       */
      AEBS_TOS_DW.UnitDelay_DSTATE_g = (-65535.0);
    }

    /* End of Saturate: '<S682>/Saturation' */

    /* Gain: '<S677>/Gain2' incorporates:
     *  Gain: '<S677>/Gain3'
     *  Selector: '<S677>/Selector18'
     */
    rtb_RadiusRear_j = (real32_T)64 * 0.015625F;
    rtb_C2_i = rtb_RadiusRear_j * (real32_T)expl_temp->lineSegValid;

    /* RelationalOperator: '<S674>/Relational Operator4' incorporates:
     *  Constant: '<S674>/Constant4'
     */
    rtb_Valid_g = (rtb_C2_i == 2.0);

    /* RelationalOperator: '<S674>/Relational Operator6' incorporates:
     *  Constant: '<S674>/Constant6'
     */
    rtb_Valid_o = (rtb_C2_i == 3.0);

    /* Logic: '<S674>/Logical Operator5' */
    rtb_LogicalOperator5 = (rtb_Valid_g || rtb_Valid_o);

    /* RelationalOperator: '<S674>/Relational Operator2' incorporates:
     *  Constant: '<S674>/Constant8'
     */
    rtb_Valid_g = (rtb_C2_i == 1.0);

    /* Logic: '<S674>/Logical Operator8' */
    rtb_LogicalOperator5 = (rtb_LogicalOperator5 || rtb_Valid_g);

    /* RelationalOperator: '<S674>/Relational Operator7' incorporates:
     *  Constant: '<S674>/Constant66'
     *  Selector: '<S677>/Selector18'
     */
    rtb_Valid_g = (expl_temp->lineSegWidth <= 0.5);

    /* RelationalOperator: '<S674>/Relational Operator8' incorporates:
     *  Constant: '<S674>/Constant68'
     *  Selector: '<S677>/Selector18'
     */
    rtb_Valid_o = (expl_temp->lineSegWidth >= 0.1);

    /* Logic: '<S674>/Logical Operator9' incorporates:
     *  Logic: '<S674>/Logical Operator10'
     */
    rtb_LogicalOperator5 = (rtb_LogicalOperator5 && (rtb_Valid_g && rtb_Valid_o));

    /* Gain: '<S677>/Gain3' incorporates:
     *  Inport: '<Root>/Road_Info'
     *  Selector: '<S677>/Selector13'
     */
    rtb_C2_i = rtb_RadiusRear_j * (real32_T)AEBS_TOS_U.Road_Info.lineData[1].
      lineSegs[rtb_DataTypeConversion_j - 1].lineSegValid;

    /* RelationalOperator: '<S674>/Relational Operator1' incorporates:
     *  Constant: '<S674>/Constant7'
     */
    rtb_Valid_g = (rtb_C2_i == 1.0);

    /* RelationalOperator: '<S674>/Relational Operator5' incorporates:
     *  Constant: '<S674>/Constant5'
     */
    rtb_Valid_o = (rtb_C2_i == 2.0);

    /* Logic: '<S674>/Logical Operator7' incorporates:
     *  Constant: '<S674>/Constant3'
     *  Logic: '<S674>/Logical Operator2'
     *  RelationalOperator: '<S674>/Relational Operator3'
     */
    rtb_LogicalOperator7 = (rtb_Valid_g || (rtb_Valid_o || (rtb_C2_i == 3.0)));

    /* RelationalOperator: '<S674>/Relational Operator9' incorporates:
     *  Constant: '<S674>/Constant69'
     *  Inport: '<Root>/Road_Info'
     *  Selector: '<S677>/Selector13'
     */
    rtb_Valid_g = (AEBS_TOS_U.Road_Info.lineData[1]
                   .lineSegs[rtb_DataTypeConversion_j - 1].lineSegWidth <= 0.5);

    /* RelationalOperator: '<S674>/Relational Operator10' incorporates:
     *  Constant: '<S674>/Constant70'
     *  Inport: '<Root>/Road_Info'
     *  Selector: '<S677>/Selector13'
     */
    rtb_Valid_o = (AEBS_TOS_U.Road_Info.lineData[1]
                   .lineSegs[rtb_DataTypeConversion_j - 1].lineSegWidth >= 0.1);

    /* Logic: '<S674>/Logical Operator4' incorporates:
     *  Logic: '<S674>/Logical Operator6'
     */
    rtb_LogicalOperator7 = (rtb_LogicalOperator7 && (rtb_Valid_g && rtb_Valid_o));

    /* Outputs for Iterator SubSystem: '<S2>/Target_Selection' incorporates:
     *  ForIterator: '<S681>/For Iterator'
     */
    /* Assignment: '<S681>/Assignment5' incorporates:
     *  Assignment: '<S681>/Assignment3'
     *  Assignment: '<S681>/Assignment4'
     *  Constant: '<S681>/Constant63'
     *  Constant: '<S681>/Constant64'
     *  Constant: '<S681>/Constant79'
     *  Selector: '<S681>/Selector8'
     */
    for (j = 0; j < 32; j++) {
      /* Outputs for IfAction SubSystem: '<S681>/If Action Subsystem' incorporates:
       *  ActionPort: '<S696>/Action Port'
       */
      /* If: '<S681>/If' incorporates:
       *  Abs: '<S681>/Abs2'
       *  Abs: '<S702>/Abs1'
       *  Inport: '<Root>/Objects_Info'
       *  Switch: '<S702>/Switch1'
       *
       * Block description for '<S702>/Switch1':
       *  _GWMH9P5.ELK.000_119_
       */
      rtb_C2_i = fabsf(AEBS_TOS_U.Objects_Info.objData[j].dxCenter);

      /* End of Outputs for SubSystem: '<S681>/If Action Subsystem' */
      if (j + 1 == 1) {
        memcpy(&rtb_Assignment3[0], AEBS_TOS_ConstP.pooled53, sizeof(real32_T) <<
               5U);
      }

      rtb_Assignment3[j] = rtb_C2_i;

      /* MATLAB Function: '<S743>/type_match' incorporates:
       *  Constant: '<S681>/Constant79'
       *  Inport: '<Root>/Objects_Info'
       */
      if ((AEBS_TOS_U.Objects_Info.objData[j].objType <= 3) ||
          ((AEBS_TOS_U.Objects_Info.objData[j].objType >= 16) &&
           (AEBS_TOS_U.Objects_Info.objData[j].objType <= 18))) {
        rtb_AccTgtIdn = 3U;
      } else {
        switch (AEBS_TOS_U.Objects_Info.objData[j].objType) {
         case 4:
          rtb_AccTgtIdn = 5U;
          break;

         case 5:
          rtb_AccTgtIdn = 5U;
          break;

         case 6:
          rtb_AccTgtIdn = 1U;
          break;

         case 7:
          rtb_AccTgtIdn = 6U;
          break;

         case 8:
          rtb_AccTgtIdn = 17U;
          break;

         case 9:
          rtb_AccTgtIdn = 2U;
          break;

         case 10:
          rtb_AccTgtIdn = 10U;
          break;

         default:
          if ((AEBS_TOS_U.Objects_Info.objData[j].objType == 11) ||
              (AEBS_TOS_U.Objects_Info.objData[j].objType == 14)) {
            rtb_AccTgtIdn = 23U;
          } else {
            switch (AEBS_TOS_U.Objects_Info.objData[j].objType) {
             case 12:
              rtb_AccTgtIdn = 13U;
              break;

             case 13:
              rtb_AccTgtIdn = 0U;
              break;

             case 15:
              rtb_AccTgtIdn = 17U;
              break;

             default:
              rtb_AccTgtIdn = 0U;
              break;
            }
          }
          break;
        }
      }

      /* End of MATLAB Function: '<S743>/type_match' */

      /* MATLAB Function: '<S742>/State_match' incorporates:
       *  Inport: '<Root>/Objects_Info'
       */
      if ((AEBS_TOS_U.Objects_Info.objData[j].movingStatus == 1) &&
          (AEBS_TOS_U.Objects_Info.objData[j].movingDirection == 0)) {
        i = 1U;
      } else if (AEBS_TOS_U.Objects_Info.objData[j].movingStatus == 2) {
        i = 3U;
      } else if ((AEBS_TOS_U.Objects_Info.objData[j].movingStatus == 3) &&
                 (AEBS_TOS_U.Objects_Info.objData[j].movingDirection != 0)) {
        i = 5U;
        switch (AEBS_TOS_U.Objects_Info.objData[j].movingDirection) {
         case 1:
          break;

         case 2:
          i = 8U;
          break;

         case 3:
          if (AEBS_TOS_U.Objects_Info.objData[j].vyRel > 0.0F) {
            i = 10U;
          } else if (AEBS_TOS_U.Objects_Info.objData[j].vyRel < 0.0F) {
            i = 11U;
          } else {
            i = 9U;
          }
          break;
        }
      } else {
        i = 0U;
      }

      /* End of MATLAB Function: '<S742>/State_match' */

      /* If: '<S681>/If' incorporates:
       *  Inport: '<Root>/Objects_Info'
       */
      if (AEBS_TOS_U.Objects_Info.objData[j].objID != 0) {
        rtAction = 0;

        /* Outputs for IfAction SubSystem: '<S681>/If Action Subsystem' incorporates:
         *  ActionPort: '<S696>/Action Port'
         */
        /* Merge: '<S699>/Merge2' incorporates:
         *  BusAssignment: '<S698>/Bus Assignment'
         *  Constant: '<S703>/Constant'
         *  RelationalOperator: '<S703>/Compare'
         */
        rtb_Merge2_n = (i != ((uint8_T)8U));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  BusAssignment: '<S698>/Bus Assignment'
         *  Constant: '<S699>/Constant76'
         *  RelationalOperator: '<S699>/Relational Operator12'
         */
        rtb_RelationalOperator8_gu = (rtb_AccTgtIdn == 4.0);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  BusAssignment: '<S698>/Bus Assignment'
         *  Constant: '<S699>/Constant77'
         *  RelationalOperator: '<S699>/Relational Operator13'
         */
        rtb_Compare_hg = (rtb_AccTgtIdn == 5.0);

        /* Logic: '<S699>/Logical Operator11' incorporates:
         *  BusAssignment: '<S698>/Bus Assignment'
         *  Constant: '<S699>/Constant72'
         *  Constant: '<S699>/Constant75'
         *  Logic: '<S699>/Logical Operator12'
         *  RelationalOperator: '<S699>/Relational Operator10'
         *  RelationalOperator: '<S699>/Relational Operator9'
         */
        rtb_LogicalOperator11 = ((AEBS_TOS_U.Objects_Info.objData[j].objID !=
          ((uint8_T)0U)) && ((rtb_AccTgtIdn == 3.0) ||
                             rtb_RelationalOperator8_gu || rtb_Compare_hg));

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator20'
         */
        rtb_Compare_hg = (AEBS_TOS_ConstB.Gain1 <=
                          AEBS_TOS_U.Objects_Info.objData[j].dyCenter);

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator17'
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].
          dyCenter <= AEBS_TOS_ConstB.Gain2);

        /* Logic: '<S699>/Logical Operator10' */
        rtb_LogicalOperator10_m = (rtb_Compare_hg && rtb_RelationalOperator8_gu);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  Constant: '<S699>/Constant82'
         *  RelationalOperator: '<S699>/Relational Operator19'
         */
        rtb_Compare_hg = ((-5.0) <= AEBS_TOS_U.Objects_Info.objData[j].dxCenter);

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S699>/Constant83'
         *  RelationalOperator: '<S699>/Relational Operator18'
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].
          dxCenter <= 0.0);

        /* Logic: '<S699>/Logical Operator5' incorporates:
         *  Logic: '<S699>/Logical Operator6'
         */
        rtb_LogicalOperator10_m = (rtb_LogicalOperator11 && (rtb_Compare_hg &&
          rtb_RelationalOperator8_gu) && rtb_LogicalOperator10_m && rtb_Merge2_n);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  BusAssignment: '<S698>/Bus Assignment'
         *  Constant: '<S705>/Constant'
         *  RelationalOperator: '<S705>/Compare'
         */
        rtb_Compare_hg = (i != ((uint8_T)8U));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S699>/Constant91'
         *  RelationalOperator: '<S699>/Relational Operator31'
         */
        rtb_RelationalOperator8_gu = ((-12.856) <=
          AEBS_TOS_U.Objects_Info.objData[j].dxCenter);

        /* Logic: '<S699>/Logical Operator19' incorporates:
         *  Constant: '<S699>/Constant92'
         *  RelationalOperator: '<S699>/Relational Operator27'
         */
        rtb_LogicalOperator19 = (rtb_RelationalOperator8_gu &&
          (AEBS_TOS_U.Objects_Info.objData[j].dxCenter <= (-5.0)));

        /* Sum: '<S699>/Add1' incorporates:
         *  Constant: '<S699>/Constant90'
         *  Selector: '<S677>/Selector13'
         *  SignalConversion: '<S677>/Signal Conversion10'
         *  Sum: '<S699>/Add2'
         */
        rtb_R2L = rtb_ARelStationaryObject - 3.0;

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator32'
         *  Sum: '<S699>/Add1'
         */
        rtb_RelationalOperator8_gu = (rtb_R2L <=
          AEBS_TOS_U.Objects_Info.objData[j].dyCenter);

        /* Logic: '<S699>/Logical Operator20' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator25'
         *  Selector: '<S677>/Selector13'
         *  SignalConversion: '<S677>/Signal Conversion10'
         */
        rtb_LogicalOperator20 = (rtb_RelationalOperator8_gu &&
          (AEBS_TOS_U.Objects_Info.objData[j].dyCenter <=
           rtb_ARelStationaryObject));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator26'
         *
         * Block description for '<S699>/Relational Operator26':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].vxRel <=
          AEBS_TOS_ConstB.Gain4);

        /* Logic: '<S699>/Logical Operator15' */
        rtb_LogicalOperator19 = (rtb_LogicalOperator11 && rtb_LogicalOperator19 &&
          rtb_LogicalOperator20 && rtb_RelationalOperator8_gu && rtb_Compare_hg);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  Constant: '<S702>/Constant102'
         *  RelationalOperator: '<S702>/Relational Operator41'
         *
         * Block description for '<S702>/Constant102':
         *  _GWMH9P5.ELK.000_37_
         *
         * Block description for '<S702>/Relational Operator41':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_Compare_hg = (AEBS_TOS_U.Objects_Info.objData[j].dxCenter > 0.0);

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S702>/Constant103'
         *  RelationalOperator: '<S702>/Relational Operator42'
         *
         * Block description for '<S702>/Constant103':
         *  _GWMH9P5.ELK.000_37_
         *
         * Block description for '<S702>/Relational Operator42':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].vxRel <
          0.0);

        /* Logic: '<S702>/Logical Operator' */
        rtb_LogicalOperator20 = (rtb_Compare_hg && rtb_RelationalOperator8_gu);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  Constant: '<S702>/Constant65'
         *  RelationalOperator: '<S702>/Relational Operator11'
         *
         * Block description for '<S702>/Constant65':
         *  _GWMH9P5.ELK.000_37_
         *
         * Block description for '<S702>/Relational Operator11':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_Compare_hg = (AEBS_TOS_U.Objects_Info.objData[j].dxCenter < 0.0);

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S702>/Constant104'
         *  RelationalOperator: '<S702>/Relational Operator43'
         *
         * Block description for '<S702>/Constant104':
         *  _GWMH9P5.ELK.000_37_
         *
         * Block description for '<S702>/Relational Operator43':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].vxRel >
          0.0);

        /* Switch: '<S702>/Switch1' incorporates:
         *  Constant: '<S702>/Constant67'
         *  Logic: '<S702>/Logical Operator25'
         *  Logic: '<S702>/Logical Operator26'
         *  Product: '<S741>/Divide5'
         *
         * Block description for '<S702>/Switch1':
         *  _GWMH9P5.ELK.000_119_
         *
         * Block description for '<S702>/Constant67':
         *  _GWMH9P5.ELK.000_38_
         *
         * Block description for '<S741>/Divide5':
         *  _GWMH9P3.LKAFN.000_32_
         */
        if (rtb_LogicalOperator20 || (rtb_Compare_hg &&
             rtb_RelationalOperator8_gu)) {
          /* Abs: '<S702>/Abs' */
          rtb_RadiusRear_j = fabsf(AEBS_TOS_U.Objects_Info.objData[j].vxRel);

          /* Switch: '<S741>/Switch4' incorporates:
           *  Constant: '<S741>/Constant66'
           *  Constant: '<S741>/Epsilon'
           *  RelationalOperator: '<S741>/Relational Operator5'
           *
           * Block description for '<S741>/Switch4':
           *  _GWMH9P3.LKAFN.000_35_
           *
           * Block description for '<S741>/Constant66':
           *  _GWMH9P3.LKAFN.000_31_
           *
           * Block description for '<S741>/Epsilon':
           *  _GWMH9P3.LKAFN.000_33_
           *
           * Block description for '<S741>/Relational Operator5':
           *  _GWMH9P3.LKAFN.000_34_
           */
          if (!(rtb_RadiusRear_j != 0.0)) {
            rtb_RadiusRear_j = (real32_T)0.001;
          }

          /* End of Switch: '<S741>/Switch4' */
          rtb_RadiusRear_j = rtb_C2_i / rtb_RadiusRear_j;
        } else {
          rtb_RadiusRear_j = 25.5F;
        }

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  Constant: '<S699>/Constant69'
         *  RelationalOperator: '<S699>/Relational Operator3'
         */
        rtb_Compare_hg = (0.0 <= AEBS_TOS_U.Objects_Info.objData[j].dxCenter);

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Inport: '<Root>/Road_Info'
         *  RelationalOperator: '<S699>/Relational Operator2'
         *  Selector: '<S677>/Selector13'
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].
          dxCenter <= AEBS_TOS_U.Road_Info.lineData[1]
          .lineSegs[rtb_DataTypeConversion_j - 1].lineSegEnd);

        /* Logic: '<S699>/Logical Operator8' */
        rtb_LogicalOperator20 = (rtb_Compare_hg && rtb_RelationalOperator8_gu);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  Constant: '<S699>/Constant68'
         *  RelationalOperator: '<S699>/Relational Operator5'
         *
         * Block description for '<S699>/Relational Operator5':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_Compare_hg = (AEBS_TOS_U.Objects_Info.objData[j].vxRel < 0.0);

        /* Math: '<S739>/Math Function' incorporates:
         *  Math: '<S737>/Math Function'
         *  Math: '<S738>/Math Function'
         *  Math: '<S740>/Math Function'
         */
        rtb_Product14_h = AEBS_TOS_U.Objects_Info.objData[j].dxCenter *
          AEBS_TOS_U.Objects_Info.objData[j].dxCenter;

        /* Sum: '<S740>/Add' incorporates:
         *  Gain: '<S740>/Gain'
         *  Gain: '<S740>/Gain1'
         *  Product: '<S740>/Product1'
         *  Product: '<S740>/Product2'
         *  Selector: '<S677>/Selector13'
         *  SignalConversion: '<S677>/Signal Conversion11'
         *  SignalConversion: '<S677>/Signal Conversion12'
         *  SignalConversion: '<S677>/Signal Conversion13'
         */
        rtb_Add_pz = (2.0F * rtb_Sum1_p * AEBS_TOS_U.Objects_Info.objData[j].
                      dxCenter + rtb_Quotient_e4) + 3.0F * rtb_Quotient_dg *
          rtb_Product14_h;

        /* Product: '<S716>/Divide' incorporates:
         *  Constant: '<S716>/Constant78'
         *  Constant: '<S716>/Constant81'
         *  Math: '<S716>/Math Function'
         *  Sum: '<S716>/Add1'
         */
        rtb_Divide6 = 1.0 / (rtb_Add_pz * rtb_Add_pz + 1.0);

        /* Switch: '<S716>/Switch' incorporates:
         *  Gain: '<S716>/Gain3'
         *  Sqrt: '<S716>/Sqrt'
         */
        if (rtb_Add_pz > 0.0F) {
          rtb_Switch_gr = sqrt(rtb_Divide6);
        } else {
          rtb_Switch_gr = (-1.0) * sqrt(rtb_Divide6);
        }

        /* End of Switch: '<S716>/Switch' */

        /* Product: '<S739>/Product3' incorporates:
         *  Math: '<S739>/Math Function'
         *  Product: '<S737>/Product3'
         */
        rtb_cosCoef_j = rtb_Product14_h * AEBS_TOS_U.Objects_Info.objData[j].
          dxCenter;

        /* Product: '<S716>/Divide7' incorporates:
         *  Abs: '<S716>/Abs1'
         *  Math: '<S739>/Math Function'
         *  Product: '<S739>/Product'
         *  Product: '<S739>/Product1'
         *  Product: '<S739>/Product2'
         *  Product: '<S739>/Product3'
         *  Selector: '<S677>/Selector13'
         *  SignalConversion: '<S677>/Signal Conversion10'
         *  SignalConversion: '<S677>/Signal Conversion11'
         *  SignalConversion: '<S677>/Signal Conversion12'
         *  SignalConversion: '<S677>/Signal Conversion13'
         *  Sum: '<S716>/Add9'
         *  Sum: '<S739>/Add'
         */
        rtb_Add_ed = ((((rtb_Quotient_e4 * AEBS_TOS_U.Objects_Info.objData[j].
                         dxCenter + rtb_ARelStationaryObject) + rtb_Sum1_p *
                        rtb_Product14_h) + rtb_cosCoef_j * rtb_Quotient_dg) -
                      AEBS_TOS_U.Objects_Info.objData[j].dyCenter) * fabs
          (rtb_Switch_gr);

        /* Outputs for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Left1' incorporates:
         *  ActionPort: '<S712>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Left' incorporates:
         *  ActionPort: '<S711>/Action Port'
         */
        /* If: '<S699>/If1' incorporates:
         *  Gain: '<S711>/Gain3'
         *  Gain: '<S712>/Gain17'
         *  Gain: '<S716>/Gain5'
         *  If: '<S699>/If5'
         *
         * Block description for '<S711>/Gain3':
         *  _GWMH9P4.ELK.000_64_
         *
         * Block description for '<S712>/Gain17':
         *  _GWMH9P5.ELK.000_80_
         */
        rtb_Product14_er = 0.5F * AEBS_TOS_U.Objects_Info.objData[j].objWidth;

        /* End of Outputs for SubSystem: '<S699>/If Action Threat_Assessment_Left' */
        /* End of Outputs for SubSystem: '<S699>/If Action Threat_Assessment_Left1' */

        /* Sum: '<S716>/Add10' incorporates:
         *  Gain: '<S716>/Gain5'
         */
        rtb_Add10 = rtb_Add_ed - rtb_Product14_er;

        /* Logic: '<S699>/Logical Operator1' incorporates:
         *  Constant: '<S699>/Constant73'
         *  Constant: '<S699>/Constant86'
         *  Logic: '<S699>/Logical Operator14'
         *  RelationalOperator: '<S699>/Relational Operator14'
         *  RelationalOperator: '<S699>/Relational Operator23'
         */
        rtb_LogicalOperator20 = (rtb_LogicalOperator11 && rtb_LogicalOperator7 &&
          rtb_LogicalOperator20 && rtb_Compare_hg && ((0.0 < rtb_Add10) &&
          (rtb_Add10 <= 2.0)));

        /* Sum: '<S701>/Add' incorporates:
         *  Constant: '<S2>/Constant2'
         */
        rtb_Add_a = AEBS_TOS_U.Objects_Info.objData[j].dxCenter + 3.9F;

        /* MATLAB Function: '<S696>/MATLAB Function' incorporates:
         *  Gain: '<S681>/Gain6'
         *  Inport: '<Root>/Extension_input_Bus'
         *  SignalConversion: '<S2>/Signal Conversion'
         *  SignalConversion: '<S2>/Signal Conversion2'
         */
        if (rtb_Add_a != 0.0F) {
          t_radObjAngleToRear_f = atanf(AEBS_TOS_U.Objects_Info.objData[j].
            dyCenter / rtb_Add_a);
        } else {
          t_radObjAngleToRear_f = 0.0F;
        }

        t_sinObjAngle_f = sinf(t_radObjAngleToRear_f);
        t_radObjAngleToRear_f = cosf(t_radObjAngleToRear_f);
        t_tempvx_f = AEBS_TOS_U.Objects_Info.objData[j].vxRel *
          t_radObjAngleToRear_f + AEBS_TOS_U.Objects_Info.objData[j].vyRel *
          t_sinObjAngle_f;
        t_tempvy_f = sqrtf(rtb_Add_a * rtb_Add_a +
                           AEBS_TOS_U.Objects_Info.objData[j].dyCenter *
                           AEBS_TOS_U.Objects_Info.objData[j].dyCenter) *
          (0.01744F * AEBS_TOS_U.Extension_input_Bus_j.YawRate) +
          (AEBS_TOS_U.Objects_Info.objData[j].vxRel * -t_sinObjAngle_f +
           AEBS_TOS_U.Objects_Info.objData[j].vyRel * t_radObjAngleToRear_f);
        if (rtb_Add_a < 0.0F) {
          rtb_Add_a = -(t_tempvx_f * t_radObjAngleToRear_f - t_tempvy_f *
                        t_sinObjAngle_f) +
            AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
        } else {
          rtb_Add_a = (t_tempvx_f * t_radObjAngleToRear_f - t_tempvy_f *
                       t_sinObjAngle_f) +
            AEBS_TOS_U.Extension_input_Bus_j.ABS_VehicleSpeed;
        }

        t_sinObjAngle_f = t_tempvx_f * t_sinObjAngle_f + t_tempvy_f *
          t_radObjAngleToRear_f;

        /* Switch: '<S716>/Switch3' incorporates:
         *  Constant: '<S716>/Constant74'
         *  Gain: '<S716>/Gain2'
         *  Sum: '<S716>/Add7'
         *  UnitDelay: '<S716>/Unit Delay1'
         */
        if (1.0 > 0.0) {
          /* Switch: '<S716>/Switch2' incorporates:
           *  Constant: '<S716>/Constant82'
           *  MATLAB Function: '<S696>/MATLAB Function'
           *  Product: '<S716>/Divide10'
           *  Product: '<S716>/Divide4'
           *  Product: '<S716>/Divide5'
           *  Product: '<S716>/Divide9'
           *  Sqrt: '<S716>/Sqrt1'
           *  Sum: '<S716>/Add11'
           *  Sum: '<S716>/Add2'
           *  Sum: '<S716>/Add6'
           */
          if (rtb_Add_pz > 0.0F) {
            rtb_Switch3_e = t_sinObjAngle_f * rtb_Switch_gr - sqrt(1.0 -
              rtb_Divide6) * rtb_Add_a;
          } else {
            rtb_Switch3_e = sqrt(1.0 - rtb_Divide6) * rtb_Add_a -
              t_sinObjAngle_f * rtb_Switch_gr;
          }

          /* End of Switch: '<S716>/Switch2' */
        } else {
          rtb_Switch3_e = (rtb_Add10 - AEBS_TOS_DW.UnitDelay1_DSTATE_d > 0.0 ?
                           (rtInf) : rtb_Add10 - AEBS_TOS_DW.UnitDelay1_DSTATE_d
                           < 0.0 ? (rtMinusInf) : (rtNaN)) * (-1.0);
        }

        /* End of Switch: '<S716>/Switch3' */

        /* Sum: '<S716>/Add4' incorporates:
         *  Abs: '<S716>/Abs3'
         *  Inport: '<Root>/Road_Info'
         *  Selector: '<S677>/Selector13'
         *  SignalConversion: '<S677>/Signal Conversion10'
         */
        rtb_Switch_gr = (AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[rtb_DataTypeConversion_j - 1].lineSegWidth +
                         rtb_Add_ed) + fabsf(rtb_ARelStationaryObject);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  Constant: '<S699>/Constant62'
         *  RelationalOperator: '<S699>/Relational Operator1'
         */
        rtb_Compare_hg = (0.0 <= AEBS_TOS_U.Objects_Info.objData[j].dxCenter);

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator'
         *  Selector: '<S677>/Selector18'
         *  SignalConversion: '<S677>/Signal Conversion7'
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].
          dxCenter <= rtb_Quotient_ed);

        /* Logic: '<S699>/Logical Operator7' */
        rtb_LogicalOperator7_e = (rtb_Compare_hg && rtb_RelationalOperator8_gu);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  Constant: '<S699>/Constant66'
         *  RelationalOperator: '<S699>/Relational Operator4'
         *
         * Block description for '<S699>/Relational Operator4':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_Compare_hg = (AEBS_TOS_U.Objects_Info.objData[j].vxRel < 0.0);

        /* Sum: '<S738>/Add' incorporates:
         *  Gain: '<S738>/Gain'
         *  Gain: '<S738>/Gain1'
         *  Product: '<S738>/Product1'
         *  Product: '<S738>/Product2'
         *  Selector: '<S677>/Selector18'
         *  SignalConversion: '<S677>/Signal Conversion3'
         *  SignalConversion: '<S677>/Signal Conversion4'
         *  SignalConversion: '<S677>/Signal Conversion5'
         */
        rtb_Add_pz = (2.0F * rtb_Quotient_g * AEBS_TOS_U.Objects_Info.objData[j]
                      .dxCenter + rtb_Quotient_f) + 3.0F * rtb_Add_cl *
          rtb_Product14_h;

        /* Product: '<S715>/Divide2' incorporates:
         *  Constant: '<S715>/Constant78'
         *  Constant: '<S715>/Constant81'
         *  Math: '<S715>/Math Function1'
         *  Sum: '<S715>/Add3'
         */
        rtb_Add_ed = 1.0 / (rtb_Add_pz * rtb_Add_pz + 1.0);

        /* Switch: '<S715>/Switch2' incorporates:
         *  Gain: '<S715>/Gain1'
         *  Sqrt: '<S715>/Sqrt2'
         */
        if (rtb_Add_pz > 0.0F) {
          rtb_Switch2_oz = sqrt(rtb_Add_ed);
        } else {
          rtb_Switch2_oz = (-1.0) * sqrt(rtb_Add_ed);
        }

        /* End of Switch: '<S715>/Switch2' */

        /* Product: '<S715>/Divide6' incorporates:
         *  Abs: '<S715>/Abs'
         *  Product: '<S737>/Product'
         *  Product: '<S737>/Product1'
         *  Product: '<S737>/Product2'
         *  Selector: '<S677>/Selector18'
         *  SignalConversion: '<S677>/Signal Conversion2'
         *  SignalConversion: '<S677>/Signal Conversion3'
         *  SignalConversion: '<S677>/Signal Conversion4'
         *  SignalConversion: '<S677>/Signal Conversion5'
         *  Sum: '<S715>/Add7'
         *  Sum: '<S737>/Add'
         */
        rtb_Divide6 = (AEBS_TOS_U.Objects_Info.objData[j].dyCenter -
                       (((rtb_Quotient_f * AEBS_TOS_U.Objects_Info.objData[j].
                          dxCenter + rtb_Product_gz) + rtb_Quotient_g *
                         rtb_Product14_h) + rtb_cosCoef_j * rtb_Add_cl)) * fabs
          (rtb_Switch2_oz);

        /* Sum: '<S715>/Add8' incorporates:
         *  Gain: '<S716>/Gain5'
         *  Sum: '<S716>/Add10'
         */
        rtb_Add8 = rtb_Divide6 - rtb_Product14_er;

        /* Switch: '<S715>/Switch4' incorporates:
         *  Constant: '<S715>/Constant74'
         *  Gain: '<S715>/Gain2'
         *  Sum: '<S715>/Add10'
         *  UnitDelay: '<S715>/Unit Delay1'
         */
        if (1.0 > 0.0) {
          /* Switch: '<S715>/Switch3' incorporates:
           *  Constant: '<S715>/Constant82'
           *  MATLAB Function: '<S696>/MATLAB Function'
           *  Product: '<S715>/Divide1'
           *  Product: '<S715>/Divide3'
           *  Product: '<S715>/Divide4'
           *  Product: '<S715>/Divide5'
           *  Sqrt: '<S715>/Sqrt3'
           *  Sum: '<S715>/Add2'
           *  Sum: '<S715>/Add4'
           *  Sum: '<S715>/Add5'
           */
          if (rtb_Add_pz > 0.0F) {
            rtb_Add_ed = sqrt(1.0 - rtb_Add_ed) * rtb_Add_a - t_sinObjAngle_f *
              rtb_Switch2_oz;
          } else {
            rtb_Add_ed = t_sinObjAngle_f * rtb_Switch2_oz - sqrt(1.0 -
              rtb_Add_ed) * rtb_Add_a;
          }

          /* End of Switch: '<S715>/Switch3' */
        } else {
          rtb_Add_ed = (rtb_Add8 - AEBS_TOS_DW.UnitDelay1_DSTATE_l > 0.0 ?
                        (rtInf) : rtb_Add8 - AEBS_TOS_DW.UnitDelay1_DSTATE_l <
                        0.0 ? (rtMinusInf) : (rtNaN)) * (-1.0);
        }

        /* End of Switch: '<S715>/Switch4' */

        /* Sum: '<S715>/Add1' incorporates:
         *  Abs: '<S715>/Abs1'
         *  Selector: '<S677>/Selector18'
         *  SignalConversion: '<S677>/Signal Conversion1'
         *  SignalConversion: '<S677>/Signal Conversion2'
         */
        rtb_Divide6 = (rtb_Divide6 + dxMin_Left) + fabsf(rtb_Product_gz);

        /* If: '<S699>/If5' incorporates:
         *  Constant: '<S699>/Constant81'
         *  Constant: '<S699>/Constant85'
         *  Logic: '<S699>/Logical Operator13'
         *  Logic: '<S699>/Logical Operator9'
         *  RelationalOperator: '<S699>/Relational Operator21'
         *  RelationalOperator: '<S699>/Relational Operator22'
         */
        if (rtb_LogicalOperator11 && rtb_LogicalOperator5 &&
            rtb_LogicalOperator7_e && rtb_Compare_hg && ((0.0 < rtb_Add8) &&
             (rtb_Add8 <= 2.0))) {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Left' incorporates:
           *  ActionPort: '<S711>/Action Port'
           */
          /* Abs: '<S711>/Abs'
           *
           * Block description for '<S711>/Abs':
           *  _GWMH9P4.ELK.000_40_
           */
          rtb_Switch2_oz = fabs(rtb_Add_ed);

          /* RelationalOperator: '<S711>/Relational Operator9' incorporates:
           *  Constant: '<S711>/Constant2'
           *
           * Block description for '<S711>/Relational Operator9':
           *  _GWMH9P5.ELK.000_114_
           *
           * Block description for '<S711>/Constant2':
           *  _GWMH9P5.ELK.000_52_
           */
          rtb_RelationalOperator9_f = (rtb_Switch2_oz > 0.85);

          /* Chart: '<S717>/Chart' incorporates:
           *  Constant: '<S711>/Constant47'
           *
           * Block description for '<S711>/Constant47':
           *  _GWMH9P5.ELK.000_48_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator9_f, 5.0, &rtb_Delay_Trig_k,
                         &AEBS_TOS_DW.sf_Chart_js);

          /* RelationalOperator: '<S711>/Relational Operator30'
           *
           * Block description for '<S711>/Relational Operator30':
           *  _GWMH9P5.ELK.000_112_
           */
          rtb_RelationalOperator30_k = (rtb_Switch2_oz <=
            AEBS_TOS_ConstB.Add12_a);

          /* Chart: '<S718>/Chart' incorporates:
           *  Constant: '<S711>/Constant49'
           *
           * Block description for '<S711>/Constant49':
           *  _GWMH9P5.ELK.000_50_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator30_k, 3.0, &rtb_Delay_Trig_e,
                         &AEBS_TOS_DW.sf_Chart_m);

          /* Chart: '<S711>/Hysteresis' */
          AEBS_TOS_Hysteresis(rtb_Delay_Trig_k, rtb_Delay_Trig_e, &rtb_Flag_j,
                              &AEBS_TOS_DW.sf_Hysteresis_g);

          /* Switch: '<S711>/Switch' incorporates:
           *  Constant: '<S711>/Constant'
           *  Constant: '<S711>/Constant14'
           *  Constant: '<S711>/Constant4'
           *  Constant: '<S711>/Constant42'
           *  Gain: '<S711>/Gain17'
           *  Gain: '<S716>/Gain5'
           *  Logic: '<S711>/Logical Operator1'
           *  Logic: '<S711>/Logical Operator5'
           *  Logic: '<S711>/Logical Operator6'
           *  Product: '<S711>/Product1'
           *  Product: '<S711>/Product3'
           *  Product: '<S711>/Product9'
           *  RelationalOperator: '<S711>/Relational Operator21'
           *  RelationalOperator: '<S711>/Relational Operator7'
           *  Sum: '<S711>/Add'
           *  Sum: '<S711>/Add1'
           *  Sum: '<S711>/Add6'
           *  Sum: '<S711>/Add7'
           *  Sum: '<S711>/Add8'
           *  Sum: '<S711>/Sum2'
           *  Sum: '<S716>/Add10'
           *
           * Block description for '<S711>/Constant14':
           *  _GWMH9P4.ELK.000_42_
           *
           * Block description for '<S711>/Constant4':
           *  _GWMH9P5.ELK.000_45_
           *
           * Block description for '<S711>/Constant42':
           *  _GWMH9P5.ELK.000_43_
           *
           * Block description for '<S711>/Gain17':
           *  _GWMH9P5.ELK.000_80_
           *
           * Block description for '<S711>/Logical Operator1':
           *  _GWMH9P5.ELK.000_86_
           *
           * Block description for '<S711>/Logical Operator5':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S711>/Logical Operator6':
           *  _GWMH9P5.ELK.000_88_
           *
           * Block description for '<S711>/Product1':
           *  _GWMH9P4.ELK.000_71_
           *
           * Block description for '<S711>/Product3':
           *  _GWMH9P4.ELK.000_73_
           *
           * Block description for '<S711>/Product9':
           *  _GWMH9P5.ELK.000_102_
           *
           * Block description for '<S711>/Relational Operator21':
           *  _GWMH9P5.ELK.000_108_
           *
           * Block description for '<S711>/Relational Operator7':
           *  _GWMH9P4.ELK.000_81_
           *
           * Block description for '<S711>/Add':
           *  _GWMH9P5.ELK.000_14_
           *
           * Block description for '<S711>/Add1':
           *  _GWMH9P5.ELK.000_15_
           *
           * Block description for '<S711>/Add6':
           *  _GWMH9P5.ELK.000_22_
           *
           * Block description for '<S711>/Add7':
           *  _GWMH9P5.ELK.000_23_
           *
           * Block description for '<S711>/Add8':
           *  _GWMH9P5.ELK.000_24_
           *
           * Block description for '<S711>/Sum2':
           *  _GWMH9P4.ELK.000_83_
           */
          if (0.0 > 0.5) {
            /* Product: '<S711>/Product3' incorporates:
             *  Product: '<S711>/Product14'
             *
             * Block description for '<S711>/Product3':
             *  _GWMH9P4.ELK.000_73_
             *
             * Block description for '<S711>/Product14':
             *  _GWMH9P5.ELK.000_94_
             */
            rtb_Add_ed *= rtb_RadiusRear_j;

            /* Product: '<S711>/Product1' incorporates:
             *  Gain: '<S711>/Gain1'
             *  Product: '<S711>/Product13'
             *  UnitDelay: '<S683>/Unit Delay'
             *
             * Block description for '<S711>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S711>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S711>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S683>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Switch2_oz = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE *
              rtb_RadiusRear_j;
            rtb_LogicalOperator7_e = ((!(rtb_Flag_j != 0.0)) && (((((rtb_Divide6
              - rtb_Product14_er) - rtb_Add_ed) - 0.2 *
              AEBS_TOS_U.Objects_Info.objData[j].objWidth) - ((rtb_Switch2_oz +
              AEBS_TOS_ConstB.Gain2_ne) + AEBS_TOS_ConstB.Product11_i) < 0.0) &&
              (((0.5F * AEBS_TOS_U.Objects_Info.objData[j].objWidth +
                 rtb_Divide6) - rtb_Add_ed) - (rtb_Switch2_oz -
              AEBS_TOS_ConstB.Gain4_jk) >= 0.0)));
          } else {
            /* Product: '<S711>/Product3' incorporates:
             *  Product: '<S711>/Product14'
             *
             * Block description for '<S711>/Product3':
             *  _GWMH9P4.ELK.000_73_
             *
             * Block description for '<S711>/Product14':
             *  _GWMH9P5.ELK.000_94_
             */
            rtb_Add_ed *= rtb_RadiusRear_j;

            /* Product: '<S711>/Product1' incorporates:
             *  Gain: '<S711>/Gain1'
             *  Product: '<S711>/Product13'
             *  UnitDelay: '<S683>/Unit Delay'
             *
             * Block description for '<S711>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S711>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S711>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S683>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Switch2_oz = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE *
              rtb_RadiusRear_j;
            rtb_LogicalOperator7_e = (((((rtb_Divide6 - rtb_Product14_er) -
              rtb_Add_ed) - 0.2 * AEBS_TOS_U.Objects_Info.objData[j].objWidth) -
              ((rtb_Switch2_oz + AEBS_TOS_ConstB.Gain2_ne) +
               AEBS_TOS_ConstB.Product11_i) < 0.0) && (((rtb_Product14_er +
              rtb_Divide6) - rtb_Add_ed) - (rtb_Switch2_oz -
              AEBS_TOS_ConstB.Gain4_jk) >= 0.0));
          }

          /* End of Switch: '<S711>/Switch' */

          /* Merge: '<S699>/Merge' incorporates:
           *  Constant: '<S711>/Constant3'
           *  Logic: '<S711>/Logical Operator4'
           *  RelationalOperator: '<S711>/Relational Operator5'
           *
           * Block description for '<S711>/Constant3':
           *  _GWMH9P5.ELK.000_38_
           *
           * Block description for '<S711>/Logical Operator4':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S711>/Relational Operator5':
           *  _GWMH9P3.ELK.000_91_
           */
          rtb_Merge_e = ((rtb_RadiusRear_j < 3.0) && rtb_LogicalOperator7_e);

          /* End of Outputs for SubSystem: '<S699>/If Action Threat_Assessment_Left' */
        } else {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Subsystem' incorporates:
           *  ActionPort: '<S707>/Action Port'
           */
          AEBS_TOS_IfActionSubsystem4(&rtb_Merge_e);

          /* End of Outputs for SubSystem: '<S699>/If Action Subsystem' */
        }

        /* If: '<S699>/If6' */
        if (rtb_LogicalOperator20) {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Right' incorporates:
           *  ActionPort: '<S713>/Action Port'
           */
          /* Abs: '<S713>/Abs'
           *
           * Block description for '<S713>/Abs':
           *  _GWMH9P4.ELK.000_40_
           */
          rtb_Divide6 = fabs(rtb_Switch3_e);

          /* RelationalOperator: '<S713>/Relational Operator9' incorporates:
           *  Constant: '<S713>/Constant2'
           *
           * Block description for '<S713>/Relational Operator9':
           *  _GWMH9P5.ELK.000_114_
           *
           * Block description for '<S713>/Constant2':
           *  _GWMH9P5.ELK.000_52_
           */
          rtb_RelationalOperator9 = (rtb_Divide6 > 0.85);

          /* Chart: '<S727>/Chart' incorporates:
           *  Constant: '<S713>/Constant47'
           *
           * Block description for '<S713>/Constant47':
           *  _GWMH9P5.ELK.000_48_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator9, 5.0, &rtb_Delay_Trig_fv,
                         &AEBS_TOS_DW.sf_Chart_n);

          /* RelationalOperator: '<S713>/Relational Operator30'
           *
           * Block description for '<S713>/Relational Operator30':
           *  _GWMH9P5.ELK.000_112_
           */
          rtb_RelationalOperator30 = (rtb_Divide6 <= AEBS_TOS_ConstB.Add12);

          /* Chart: '<S728>/Chart' incorporates:
           *  Constant: '<S713>/Constant49'
           *
           * Block description for '<S713>/Constant49':
           *  _GWMH9P5.ELK.000_50_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator30, 3.0, &rtb_Delay_Trig,
                         &AEBS_TOS_DW.sf_Chart_a);

          /* Chart: '<S713>/Hysteresis' */
          AEBS_TOS_Hysteresis(rtb_Delay_Trig_fv, rtb_Delay_Trig, &rtb_Flag,
                              &AEBS_TOS_DW.sf_Hysteresis_du);

          /* Switch: '<S713>/Switch' incorporates:
           *  Constant: '<S713>/Constant'
           *  Constant: '<S713>/Constant14'
           *  Constant: '<S713>/Constant42'
           *  Constant: '<S713>/Constant6'
           *  Gain: '<S716>/Gain5'
           *  Logic: '<S713>/Logical Operator1'
           *  Logic: '<S713>/Logical Operator5'
           *  Logic: '<S713>/Logical Operator6'
           *  Product: '<S713>/Product1'
           *  Product: '<S713>/Product3'
           *  Product: '<S713>/Product9'
           *  RelationalOperator: '<S713>/Relational Operator21'
           *  RelationalOperator: '<S713>/Relational Operator7'
           *  Sum: '<S713>/Add'
           *  Sum: '<S713>/Add1'
           *  Sum: '<S713>/Add6'
           *  Sum: '<S713>/Add7'
           *  Sum: '<S713>/Add8'
           *  Sum: '<S713>/Sum2'
           *  Sum: '<S716>/Add10'
           *
           * Block description for '<S713>/Constant14':
           *  _GWMH9P4.ELK.000_42_
           *
           * Block description for '<S713>/Constant42':
           *  _GWMH9P5.ELK.000_43_
           *
           * Block description for '<S713>/Constant6':
           *  _GWMH9P5.ELK.000_52_
           *
           * Block description for '<S713>/Logical Operator1':
           *  _GWMH9P5.ELK.000_86_
           *
           * Block description for '<S713>/Logical Operator5':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S713>/Logical Operator6':
           *  _GWMH9P5.ELK.000_88_
           *
           * Block description for '<S713>/Product1':
           *  _GWMH9P4.ELK.000_71_
           *
           * Block description for '<S713>/Product3':
           *  _GWMH9P4.ELK.000_73_
           *
           * Block description for '<S713>/Product9':
           *  _GWMH9P5.ELK.000_102_
           *
           * Block description for '<S713>/Relational Operator21':
           *  _GWMH9P5.ELK.000_108_
           *
           * Block description for '<S713>/Relational Operator7':
           *  _GWMH9P4.ELK.000_81_
           *
           * Block description for '<S713>/Add':
           *  _GWMH9P5.ELK.000_14_
           *
           * Block description for '<S713>/Add1':
           *  _GWMH9P5.ELK.000_15_
           *
           * Block description for '<S713>/Add6':
           *  _GWMH9P5.ELK.000_22_
           *
           * Block description for '<S713>/Add7':
           *  _GWMH9P5.ELK.000_23_
           *
           * Block description for '<S713>/Add8':
           *  _GWMH9P5.ELK.000_24_
           *
           * Block description for '<S713>/Sum2':
           *  _GWMH9P4.ELK.000_83_
           */
          if (0.0 > 0.5) {
            /* Sum: '<S713>/Sum2' incorporates:
             *  Gain: '<S713>/Gain3'
             *  Sum: '<S713>/Add6'
             *
             * Block description for '<S713>/Sum2':
             *  _GWMH9P4.ELK.000_83_
             *
             * Block description for '<S713>/Gain3':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S713>/Add6':
             *  _GWMH9P5.ELK.000_22_
             */
            rtb_Divide6 = 0.5F * AEBS_TOS_U.Objects_Info.objData[j].objWidth;

            /* Product: '<S713>/Product3' incorporates:
             *  Product: '<S713>/Product14'
             *
             * Block description for '<S713>/Product3':
             *  _GWMH9P4.ELK.000_73_
             *
             * Block description for '<S713>/Product14':
             *  _GWMH9P5.ELK.000_94_
             */
            rtb_Switch3_e *= rtb_RadiusRear_j;

            /* Product: '<S713>/Product1' incorporates:
             *  Gain: '<S713>/Gain1'
             *  Product: '<S713>/Product13'
             *  UnitDelay: '<S682>/Unit Delay'
             *
             * Block description for '<S713>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S713>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S713>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S682>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Add_ed = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE_g *
              rtb_RadiusRear_j;
            rtb_LogicalOperator20 = ((!(rtb_Flag != 0.0)) && (((((rtb_Switch_gr
              - rtb_Divide6) - rtb_Switch3_e) - 0.2 *
              AEBS_TOS_U.Objects_Info.objData[j].objWidth) - ((rtb_Add_ed +
              AEBS_TOS_ConstB.Gain2_n) + AEBS_TOS_ConstB.Product11) < 0.0) &&
              (((rtb_Divide6 + rtb_Switch_gr) - rtb_Switch3_e) - (rtb_Add_ed -
              AEBS_TOS_ConstB.Gain4_n) >= 0.0)));
          } else {
            /* Product: '<S713>/Product3' incorporates:
             *  Product: '<S713>/Product14'
             *
             * Block description for '<S713>/Product3':
             *  _GWMH9P4.ELK.000_73_
             *
             * Block description for '<S713>/Product14':
             *  _GWMH9P5.ELK.000_94_
             */
            rtb_Switch3_e *= rtb_RadiusRear_j;

            /* Product: '<S713>/Product1' incorporates:
             *  Gain: '<S713>/Gain1'
             *  Product: '<S713>/Product13'
             *  UnitDelay: '<S682>/Unit Delay'
             *
             * Block description for '<S713>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S713>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S713>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S682>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Divide6 = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE_g *
              rtb_RadiusRear_j;
            rtb_LogicalOperator20 = (((((rtb_Switch_gr - rtb_Product14_er) -
              rtb_Switch3_e) - 0.2 * AEBS_TOS_U.Objects_Info.objData[j].objWidth)
              - ((rtb_Divide6 + AEBS_TOS_ConstB.Gain2_n) +
                 AEBS_TOS_ConstB.Product11) < 0.0) && (((rtb_Product14_er +
              rtb_Switch_gr) - rtb_Switch3_e) - (rtb_Divide6 -
              AEBS_TOS_ConstB.Gain4_n) >= 0.0));
          }

          /* End of Switch: '<S713>/Switch' */

          /* RelationalOperator: '<S704>/Compare' incorporates:
           *  Constant: '<S713>/Constant3'
           *  Logic: '<S713>/Logical Operator4'
           *  RelationalOperator: '<S713>/Relational Operator5'
           *
           * Block description for '<S713>/Constant3':
           *  _GWMH9P5.ELK.000_38_
           *
           * Block description for '<S713>/Logical Operator4':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S713>/Relational Operator5':
           *  _GWMH9P3.ELK.000_91_
           */
          rtb_Compare_hg = ((rtb_RadiusRear_j < 3.0) && rtb_LogicalOperator20);

          /* End of Outputs for SubSystem: '<S699>/If Action Threat_Assessment_Right' */
        } else {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S708>/Action Port'
           */
          AEBS_TOS_IfActionSubsystem5(&rtb_Compare_hg);

          /* End of Outputs for SubSystem: '<S699>/If Action Subsystem1' */
        }

        /* End of If: '<S699>/If6' */

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S699>/Constant98'
         *  RelationalOperator: '<S699>/Relational Operator35'
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].
          dxCenter <= (-12.856));

        /* Merge: '<S699>/Merge2' incorporates:
         *  Constant: '<S699>/Constant99'
         *  RelationalOperator: '<S699>/Relational Operator33'
         */
        rtb_Merge2_n = (AEBS_TOS_U.Objects_Info.objData[j].dyCenter <= 0.0);

        /* Logic: '<S699>/Logical Operator21' incorporates:
         *  Logic: '<S699>/Logical Operator23'
         *  RelationalOperator: '<S699>/Relational Operator34'
         *  RelationalOperator: '<S699>/Relational Operator37'
         *
         * Block description for '<S699>/Relational Operator34':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_LogicalOperator20 = (rtb_LogicalOperator11 &&
          rtb_RelationalOperator8_gu && ((rtb_R2L <=
          AEBS_TOS_U.Objects_Info.objData[j].dyCenter) && rtb_Merge2_n) &&
          (AEBS_TOS_U.Objects_Info.objData[j].vxRel < AEBS_TOS_ConstB.Gain5));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S699>/Constant96'
         *  RelationalOperator: '<S699>/Relational Operator39'
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].
          dxCenter <= (-12.856));

        /* Sum: '<S699>/Add3' incorporates:
         *  Constant: '<S699>/Constant95'
         *  Selector: '<S677>/Selector18'
         *  SignalConversion: '<S677>/Signal Conversion2'
         *  Sum: '<S699>/Add'
         */
        rtb_R2L = 3.0 + rtb_Product_gz;

        /* Merge: '<S699>/Merge2' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator36'
         *  Sum: '<S699>/Add3'
         */
        rtb_Merge2_n = (AEBS_TOS_U.Objects_Info.objData[j].dyCenter <= rtb_R2L);

        /* If: '<S699>/If1' incorporates:
         *  Constant: '<S699>/Constant101'
         *  Logic: '<S699>/Logical Operator22'
         *  Logic: '<S699>/Logical Operator24'
         *  RelationalOperator: '<S699>/Relational Operator38'
         *  RelationalOperator: '<S699>/Relational Operator40'
         *
         * Block description for '<S699>/Relational Operator38':
         *  _GWMH9P5.ELK.000_104_
         */
        if (rtb_LogicalOperator11 && rtb_RelationalOperator8_gu && ((0.0 <=
              AEBS_TOS_U.Objects_Info.objData[j].dyCenter) && rtb_Merge2_n) &&
            (AEBS_TOS_U.Objects_Info.objData[j].vxRel < AEBS_TOS_ConstB.Gain7))
        {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Left1' incorporates:
           *  ActionPort: '<S712>/Action Port'
           */
          /* Abs: '<S712>/Abs'
           *
           * Block description for '<S712>/Abs':
           *  _GWMH9P4.ELK.000_40_
           */
          rtb_Product14_h = fabsf(AEBS_TOS_U.Objects_Info.objData[j].vyRel);

          /* RelationalOperator: '<S712>/Relational Operator9' incorporates:
           *  Constant: '<S712>/Constant2'
           *
           * Block description for '<S712>/Relational Operator9':
           *  _GWMH9P5.ELK.000_114_
           *
           * Block description for '<S712>/Constant2':
           *  _GWMH9P5.ELK.000_52_
           */
          rtb_RelationalOperator9_h = (rtb_Product14_h > 0.85);

          /* Chart: '<S722>/Chart' incorporates:
           *  Constant: '<S712>/Constant47'
           *
           * Block description for '<S712>/Constant47':
           *  _GWMH9P5.ELK.000_48_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator9_h, 5.0, &rtb_Delay_Trig_h,
                         &AEBS_TOS_DW.sf_Chart);

          /* RelationalOperator: '<S712>/Relational Operator30'
           *
           * Block description for '<S712>/Relational Operator30':
           *  _GWMH9P5.ELK.000_112_
           */
          rtb_RelationalOperator30_g = (rtb_Product14_h <=
            AEBS_TOS_ConstB.Add12_k);

          /* Chart: '<S723>/Chart' incorporates:
           *  Constant: '<S712>/Constant49'
           *
           * Block description for '<S712>/Constant49':
           *  _GWMH9P5.ELK.000_50_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator30_g, 3.0, &rtb_Delay_Trig_b,
                         &AEBS_TOS_DW.sf_Chart_l);

          /* Chart: '<S712>/Hysteresis' */
          AEBS_TOS_Hysteresis(rtb_Delay_Trig_h, rtb_Delay_Trig_b, &rtb_Flag_c,
                              &AEBS_TOS_DW.sf_Hysteresis);

          /* Switch: '<S712>/Switch' incorporates:
           *  Constant: '<S712>/Constant'
           *  Constant: '<S712>/Constant14'
           *  Constant: '<S712>/Constant4'
           *  Constant: '<S712>/Constant42'
           *  Gain: '<S712>/Gain3'
           *  Gain: '<S716>/Gain5'
           *  Logic: '<S712>/Logical Operator1'
           *  Logic: '<S712>/Logical Operator5'
           *  Logic: '<S712>/Logical Operator6'
           *  Product: '<S712>/Product1'
           *  Product: '<S712>/Product3'
           *  Product: '<S712>/Product9'
           *  RelationalOperator: '<S712>/Relational Operator21'
           *  RelationalOperator: '<S712>/Relational Operator7'
           *  Sum: '<S712>/Add'
           *  Sum: '<S712>/Add1'
           *  Sum: '<S712>/Add6'
           *  Sum: '<S712>/Add7'
           *  Sum: '<S712>/Add8'
           *  Sum: '<S712>/Sum2'
           *  Sum: '<S716>/Add10'
           *
           * Block description for '<S712>/Constant14':
           *  _GWMH9P4.ELK.000_42_
           *
           * Block description for '<S712>/Constant4':
           *  _GWMH9P5.ELK.000_45_
           *
           * Block description for '<S712>/Constant42':
           *  _GWMH9P5.ELK.000_43_
           *
           * Block description for '<S712>/Gain3':
           *  _GWMH9P4.ELK.000_64_
           *
           * Block description for '<S712>/Logical Operator1':
           *  _GWMH9P5.ELK.000_86_
           *
           * Block description for '<S712>/Logical Operator5':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S712>/Logical Operator6':
           *  _GWMH9P5.ELK.000_88_
           *
           * Block description for '<S712>/Product1':
           *  _GWMH9P4.ELK.000_71_
           *
           * Block description for '<S712>/Product3':
           *  _GWMH9P4.ELK.000_73_
           *
           * Block description for '<S712>/Product9':
           *  _GWMH9P5.ELK.000_102_
           *
           * Block description for '<S712>/Relational Operator21':
           *  _GWMH9P5.ELK.000_108_
           *
           * Block description for '<S712>/Relational Operator7':
           *  _GWMH9P4.ELK.000_81_
           *
           * Block description for '<S712>/Add':
           *  _GWMH9P5.ELK.000_14_
           *
           * Block description for '<S712>/Add1':
           *  _GWMH9P5.ELK.000_15_
           *
           * Block description for '<S712>/Add6':
           *  _GWMH9P5.ELK.000_22_
           *
           * Block description for '<S712>/Add7':
           *  _GWMH9P5.ELK.000_23_
           *
           * Block description for '<S712>/Add8':
           *  _GWMH9P5.ELK.000_24_
           *
           * Block description for '<S712>/Sum2':
           *  _GWMH9P4.ELK.000_83_
           */
          if (0.0 > 0.5) {
            /* Product: '<S712>/Product3' incorporates:
             *  Product: '<S712>/Product14'
             *
             * Block description for '<S712>/Product3':
             *  _GWMH9P4.ELK.000_73_
             *
             * Block description for '<S712>/Product14':
             *  _GWMH9P5.ELK.000_94_
             */
            rtb_Product14_h = rtb_RadiusRear_j *
              AEBS_TOS_U.Objects_Info.objData[j].vyRel;

            /* Product: '<S712>/Product1' incorporates:
             *  Gain: '<S712>/Gain1'
             *  Product: '<S712>/Product13'
             *  UnitDelay: '<S683>/Unit Delay'
             *
             * Block description for '<S712>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S712>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S712>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S683>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Add_ed = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE *
              rtb_RadiusRear_j;
            rtb_LogicalOperator7_e = ((!(rtb_Flag_c != 0.0)) && ((((((real_T)
              AEBS_TOS_U.Objects_Info.objData[j].dyCenter - 0.5F *
              AEBS_TOS_U.Objects_Info.objData[j].objWidth) - rtb_Product14_h) -
              0.2 * AEBS_TOS_U.Objects_Info.objData[j].objWidth) - ((rtb_Add_ed
              + AEBS_TOS_ConstB.Gain2_o) + AEBS_TOS_ConstB.Product11_g) < 0.0) &&
              (((rtb_Product14_er + AEBS_TOS_U.Objects_Info.objData[j].dyCenter)
                - rtb_Product14_h) - (rtb_Add_ed - AEBS_TOS_ConstB.Gain4_o) >=
               0.0)));
          } else {
            /* Product: '<S712>/Product3' incorporates:
             *  Product: '<S712>/Product14'
             *
             * Block description for '<S712>/Product3':
             *  _GWMH9P4.ELK.000_73_
             *
             * Block description for '<S712>/Product14':
             *  _GWMH9P5.ELK.000_94_
             */
            rtb_Product14_h = rtb_RadiusRear_j *
              AEBS_TOS_U.Objects_Info.objData[j].vyRel;

            /* Product: '<S712>/Product1' incorporates:
             *  Gain: '<S712>/Gain1'
             *  Product: '<S712>/Product13'
             *  UnitDelay: '<S683>/Unit Delay'
             *
             * Block description for '<S712>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S712>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S712>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S683>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Switch3_e = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE *
              rtb_RadiusRear_j;
            rtb_LogicalOperator7_e = ((((((real_T)
              AEBS_TOS_U.Objects_Info.objData[j].dyCenter - rtb_Product14_er) -
              rtb_Product14_h) - 0.2 * AEBS_TOS_U.Objects_Info.objData[j].
              objWidth) - ((rtb_Switch3_e + AEBS_TOS_ConstB.Gain2_o) +
                           AEBS_TOS_ConstB.Product11_g) < 0.0) &&
              (((rtb_Product14_er + AEBS_TOS_U.Objects_Info.objData[j].dyCenter)
                - rtb_Product14_h) - (rtb_Switch3_e - AEBS_TOS_ConstB.Gain4_o) >=
               0.0));
          }

          /* End of Switch: '<S712>/Switch' */

          /* Merge: '<S699>/Merge2' incorporates:
           *  Constant: '<S712>/Constant3'
           *  Logic: '<S712>/Logical Operator4'
           *  RelationalOperator: '<S712>/Relational Operator5'
           *
           * Block description for '<S712>/Constant3':
           *  _GWMH9P5.ELK.000_38_
           *
           * Block description for '<S712>/Logical Operator4':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S712>/Relational Operator5':
           *  _GWMH9P3.ELK.000_91_
           */
          rtb_Merge2_n = ((rtb_RadiusRear_j < 3.0) && rtb_LogicalOperator7_e);

          /* End of Outputs for SubSystem: '<S699>/If Action Threat_Assessment_Left1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Subsystem4' incorporates:
           *  ActionPort: '<S709>/Action Port'
           */
          AEBS_TOS_IfActionSubsystem4(&rtb_Merge2_n);

          /* End of Outputs for SubSystem: '<S699>/If Action Subsystem4' */
        }

        /* If: '<S699>/If4' */
        if (rtb_LogicalOperator20) {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Right1' incorporates:
           *  ActionPort: '<S714>/Action Port'
           */
          /* Abs: '<S714>/Abs'
           *
           * Block description for '<S714>/Abs':
           *  _GWMH9P4.ELK.000_40_
           */
          rtb_Product14_er = fabsf(AEBS_TOS_U.Objects_Info.objData[j].vyRel);

          /* RelationalOperator: '<S714>/Relational Operator9' incorporates:
           *  Constant: '<S714>/Constant2'
           *
           * Block description for '<S714>/Relational Operator9':
           *  _GWMH9P5.ELK.000_114_
           *
           * Block description for '<S714>/Constant2':
           *  _GWMH9P5.ELK.000_52_
           */
          rtb_RelationalOperator9_gp = (rtb_Product14_er > 0.85);

          /* Chart: '<S732>/Chart' incorporates:
           *  Constant: '<S714>/Constant47'
           *
           * Block description for '<S714>/Constant47':
           *  _GWMH9P5.ELK.000_48_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator9_gp, 5.0, &rtb_Delay_Trig_o,
                         &AEBS_TOS_DW.sf_Chart_j);

          /* RelationalOperator: '<S714>/Relational Operator30'
           *
           * Block description for '<S714>/Relational Operator30':
           *  _GWMH9P5.ELK.000_112_
           */
          rtb_RelationalOperator30_h = (rtb_Product14_er <=
            AEBS_TOS_ConstB.Add12_d);

          /* Chart: '<S733>/Chart' incorporates:
           *  Constant: '<S714>/Constant49'
           *
           * Block description for '<S714>/Constant49':
           *  _GWMH9P5.ELK.000_50_
           */
          AEBS_TOS_Chart(rtb_RelationalOperator30_h, 3.0, &rtb_Delay_Trig_mf,
                         &AEBS_TOS_DW.sf_Chart_c);

          /* Chart: '<S714>/Hysteresis' */
          AEBS_TOS_Hysteresis(rtb_Delay_Trig_o, rtb_Delay_Trig_mf, &rtb_Flag_pw,
                              &AEBS_TOS_DW.sf_Hysteresis_d);

          /* Switch: '<S714>/Switch' incorporates:
           *  Constant: '<S714>/Constant'
           *  Constant: '<S714>/Constant14'
           *  Constant: '<S714>/Constant42'
           *  Constant: '<S714>/Constant6'
           *  Gain: '<S714>/Gain17'
           *  Gain: '<S714>/Gain3'
           *  Logic: '<S714>/Logical Operator1'
           *  Logic: '<S714>/Logical Operator5'
           *  Logic: '<S714>/Logical Operator6'
           *  Product: '<S714>/Product1'
           *  Product: '<S714>/Product14'
           *  Product: '<S714>/Product3'
           *  Product: '<S714>/Product9'
           *  RelationalOperator: '<S714>/Relational Operator21'
           *  RelationalOperator: '<S714>/Relational Operator7'
           *  Sum: '<S714>/Add'
           *  Sum: '<S714>/Add1'
           *  Sum: '<S714>/Add6'
           *  Sum: '<S714>/Add7'
           *  Sum: '<S714>/Add8'
           *  Sum: '<S714>/Sum2'
           *
           * Block description for '<S714>/Constant14':
           *  _GWMH9P4.ELK.000_42_
           *
           * Block description for '<S714>/Constant42':
           *  _GWMH9P5.ELK.000_43_
           *
           * Block description for '<S714>/Constant6':
           *  _GWMH9P5.ELK.000_52_
           *
           * Block description for '<S714>/Gain17':
           *  _GWMH9P5.ELK.000_80_
           *
           * Block description for '<S714>/Gain3':
           *  _GWMH9P4.ELK.000_64_
           *
           * Block description for '<S714>/Logical Operator1':
           *  _GWMH9P5.ELK.000_86_
           *
           * Block description for '<S714>/Logical Operator5':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S714>/Logical Operator6':
           *  _GWMH9P5.ELK.000_88_
           *
           * Block description for '<S714>/Product1':
           *  _GWMH9P4.ELK.000_71_
           *
           * Block description for '<S714>/Product14':
           *  _GWMH9P5.ELK.000_94_
           *
           * Block description for '<S714>/Product3':
           *  _GWMH9P4.ELK.000_73_
           *
           * Block description for '<S714>/Product9':
           *  _GWMH9P5.ELK.000_102_
           *
           * Block description for '<S714>/Relational Operator21':
           *  _GWMH9P5.ELK.000_108_
           *
           * Block description for '<S714>/Relational Operator7':
           *  _GWMH9P4.ELK.000_81_
           *
           * Block description for '<S714>/Add':
           *  _GWMH9P5.ELK.000_14_
           *
           * Block description for '<S714>/Add1':
           *  _GWMH9P5.ELK.000_15_
           *
           * Block description for '<S714>/Add6':
           *  _GWMH9P5.ELK.000_22_
           *
           * Block description for '<S714>/Add7':
           *  _GWMH9P5.ELK.000_23_
           *
           * Block description for '<S714>/Add8':
           *  _GWMH9P5.ELK.000_24_
           *
           * Block description for '<S714>/Sum2':
           *  _GWMH9P4.ELK.000_83_
           */
          if (0.0 > 0.5) {
            /* Product: '<S714>/Product1' incorporates:
             *  Gain: '<S714>/Gain1'
             *  Product: '<S714>/Product13'
             *  UnitDelay: '<S682>/Unit Delay'
             *
             * Block description for '<S714>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S714>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S714>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S682>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Divide6 = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE_g *
              rtb_RadiusRear_j;
            rtb_LogicalOperator20 = ((!(rtb_Flag_pw != 0.0)) &&
              (((((rtb_Switch_gr - 0.5F * AEBS_TOS_U.Objects_Info.objData[j].
                   objWidth) - rtb_RadiusRear_j *
                  AEBS_TOS_U.Objects_Info.objData[j].vyRel) - 0.2 *
                 AEBS_TOS_U.Objects_Info.objData[j].objWidth) - ((rtb_Divide6 +
              AEBS_TOS_ConstB.Gain2_b) + AEBS_TOS_ConstB.Product11_j) < 0.0) &&
               (((0.5F * AEBS_TOS_U.Objects_Info.objData[j].objWidth +
                  rtb_Switch_gr) - rtb_RadiusRear_j *
                 AEBS_TOS_U.Objects_Info.objData[j].vyRel) - (rtb_Divide6 -
              AEBS_TOS_ConstB.Gain4_c) >= 0.0)));
          } else {
            /* Sum: '<S714>/Sum2' incorporates:
             *  Product: '<S714>/Product3'
             *  Sum: '<S714>/Add6'
             *
             * Block description for '<S714>/Sum2':
             *  _GWMH9P4.ELK.000_83_
             *
             * Block description for '<S714>/Product3':
             *  _GWMH9P4.ELK.000_73_
             *
             * Block description for '<S714>/Add6':
             *  _GWMH9P5.ELK.000_22_
             */
            rtb_Switch3_e = rtb_RadiusRear_j * AEBS_TOS_U.Objects_Info.objData[j]
              .vyRel;

            /* Product: '<S714>/Product1' incorporates:
             *  Gain: '<S714>/Gain1'
             *  Product: '<S714>/Product13'
             *  UnitDelay: '<S682>/Unit Delay'
             *
             * Block description for '<S714>/Product1':
             *  _GWMH9P4.ELK.000_71_
             *
             * Block description for '<S714>/Gain1':
             *  _GWMH9P4.ELK.000_64_
             *
             * Block description for '<S714>/Product13':
             *  _GWMH9P5.ELK.000_93_
             *
             * Block description for '<S682>/Unit Delay':
             *  _GWMAB30P4.LKAFN.000_157_
             */
            rtb_Divide6 = (-1.0) * AEBS_TOS_DW.UnitDelay_DSTATE_g *
              rtb_RadiusRear_j;
            rtb_LogicalOperator20 = (((((rtb_Switch_gr - 0.5F *
              AEBS_TOS_U.Objects_Info.objData[j].objWidth) - rtb_Switch3_e) -
              0.2 * AEBS_TOS_U.Objects_Info.objData[j].objWidth) - ((rtb_Divide6
              + AEBS_TOS_ConstB.Gain2_b) + AEBS_TOS_ConstB.Product11_j) < 0.0) &&
              (((0.5F * AEBS_TOS_U.Objects_Info.objData[j].objWidth +
                 rtb_Switch_gr) - rtb_Switch3_e) - (rtb_Divide6 -
              AEBS_TOS_ConstB.Gain4_c) >= 0.0));
          }

          /* End of Switch: '<S714>/Switch' */

          /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
           *  Constant: '<S714>/Constant3'
           *  Logic: '<S714>/Logical Operator4'
           *  RelationalOperator: '<S714>/Relational Operator5'
           *
           * Block description for '<S714>/Constant3':
           *  _GWMH9P5.ELK.000_38_
           *
           * Block description for '<S714>/Logical Operator4':
           *  _GWMH9P4.ELK.000_68_
           *
           * Block description for '<S714>/Relational Operator5':
           *  _GWMH9P3.ELK.000_91_
           */
          rtb_RelationalOperator8_gu = ((rtb_RadiusRear_j < 3.0) &&
            rtb_LogicalOperator20);

          /* End of Outputs for SubSystem: '<S699>/If Action Threat_Assessment_Right1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S699>/If Action Subsystem5' incorporates:
           *  ActionPort: '<S710>/Action Port'
           */
          AEBS_TOS_IfActionSubsystem5(&rtb_RelationalOperator8_gu);

          /* End of Outputs for SubSystem: '<S699>/If Action Subsystem5' */
        }

        /* End of If: '<S699>/If4' */

        /* Logic: '<S699>/Logical Operator28' */
        rtb_Valid_g = (rtb_Compare_hg || rtb_LogicalOperator10_m ||
                       rtb_LogicalOperator19 || rtb_RelationalOperator8_gu);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  BusAssignment: '<S698>/Bus Assignment'
         *  Constant: '<S706>/Constant'
         *  RelationalOperator: '<S706>/Compare'
         */
        rtb_Compare_hg = (i != ((uint8_T)8U));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S699>/Constant87'
         *  RelationalOperator: '<S699>/Relational Operator29'
         */
        rtb_RelationalOperator8_gu = ((-12.856) <=
          AEBS_TOS_U.Objects_Info.objData[j].dxCenter);

        /* Logic: '<S699>/Logical Operator17' incorporates:
         *  Constant: '<S699>/Constant88'
         *  RelationalOperator: '<S699>/Relational Operator28'
         */
        rtb_LogicalOperator10_m = (rtb_RelationalOperator8_gu &&
          (AEBS_TOS_U.Objects_Info.objData[j].dxCenter <= (-5.0)));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator30'
         *  Selector: '<S677>/Selector18'
         *  SignalConversion: '<S677>/Signal Conversion2'
         */
        rtb_RelationalOperator8_gu = (rtb_Product_gz <=
          AEBS_TOS_U.Objects_Info.objData[j].dyCenter);

        /* Logic: '<S699>/Logical Operator18' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator15'
         */
        rtb_LogicalOperator19 = (rtb_RelationalOperator8_gu &&
          (AEBS_TOS_U.Objects_Info.objData[j].dyCenter <= rtb_R2L));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  RelationalOperator: '<S699>/Relational Operator24'
         *
         * Block description for '<S699>/Relational Operator24':
         *  _GWMH9P5.ELK.000_104_
         */
        rtb_RelationalOperator8_gu = (AEBS_TOS_U.Objects_Info.objData[j].vxRel <
          AEBS_TOS_ConstB.Gain3);

        /* Logic: '<S699>/Logical Operator16' */
        rtb_LogicalOperator10_m = (rtb_LogicalOperator11 &&
          rtb_LogicalOperator10_m && rtb_LogicalOperator19 &&
          rtb_RelationalOperator8_gu && rtb_Compare_hg);

        /* RelationalOperator: '<S704>/Compare' incorporates:
         *  BusAssignment: '<S698>/Bus Assignment'
         *  Constant: '<S704>/Constant'
         */
        rtb_Compare_hg = (i != ((uint8_T)8U));

        /* RelationalOperator: '<S699>/Relational Operator8' incorporates:
         *  Constant: '<S699>/Constant71'
         *  RelationalOperator: '<S699>/Relational Operator7'
         */
        rtb_RelationalOperator8_gu = ((-5.0) <=
          AEBS_TOS_U.Objects_Info.objData[j].dxCenter);

        /* Logic: '<S699>/Logical Operator3' incorporates:
         *  Constant: '<S699>/Constant78'
         *  RelationalOperator: '<S699>/Relational Operator6'
         */
        rtb_LogicalOperator19 = (rtb_RelationalOperator8_gu &&
          (AEBS_TOS_U.Objects_Info.objData[j].dxCenter <= 0.0));

        /* RelationalOperator: '<S699>/Relational Operator8' */
        rtb_RelationalOperator8_gu = (AEBS_TOS_ConstB.Gain <=
          AEBS_TOS_U.Objects_Info.objData[j].dyCenter);

        /* Logic: '<S699>/Logical Operator27' incorporates:
         *  Constant: '<S699>/Constant70'
         *  Logic: '<S699>/Logical Operator2'
         *  Logic: '<S699>/Logical Operator4'
         *  RelationalOperator: '<S699>/Relational Operator16'
         */
        rtb_Valid_o = (rtb_Merge_e || (rtb_LogicalOperator11 &&
          rtb_LogicalOperator19 && (rtb_RelationalOperator8_gu &&
          (AEBS_TOS_U.Objects_Info.objData[j].dyCenter <= 4.0)) &&
          rtb_Compare_hg) || rtb_LogicalOperator10_m || rtb_Merge2_n);

        /* End of Outputs for SubSystem: '<S681>/If Action Subsystem' */
      } else {
        rtAction = 1;

        /* Outputs for IfAction SubSystem: '<S681>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S697>/Action Port'
         */
        /* SignalConversion generated from: '<S697>/Out7' incorporates:
         *  Constant: '<S697>/Constant7'
         */
        rtb_Valid_o = false;

        /* SignalConversion generated from: '<S697>/Out8' incorporates:
         *  Constant: '<S697>/Constant8'
         */
        rtb_Valid_g = false;

        /* End of Outputs for SubSystem: '<S681>/If Action Subsystem1' */
      }

      if (j + 1 == 1) {
        for (s647_iter = 0; s647_iter < 32; s647_iter++) {
          rtb_Assignment4[s647_iter] = AEBS_TOS_ConstP.pooled60[s647_iter];
          rtb_Assignment5[s647_iter] = AEBS_TOS_ConstP.pooled60[s647_iter];
        }
      }

      rtb_Assignment4[j] = rtb_Valid_g;
      rtb_Assignment5[j] = rtb_Valid_o;

      /* If: '<S681>/If' incorporates:
       *  Constant: '<S681>/Constant63'
       *  Constant: '<S681>/Constant64'
       */
      if (rtAction == 0) {
        /* Update for IfAction SubSystem: '<S681>/If Action Subsystem' incorporates:
         *  ActionPort: '<S696>/Action Port'
         */
        /* Update for UnitDelay: '<S716>/Unit Delay1' */
        AEBS_TOS_DW.UnitDelay1_DSTATE_d = rtb_Add10;

        /* Update for UnitDelay: '<S715>/Unit Delay1' */
        AEBS_TOS_DW.UnitDelay1_DSTATE_l = rtb_Add8;

        /* End of Update for SubSystem: '<S681>/If Action Subsystem' */
      }
    }

    /* End of Assignment: '<S681>/Assignment5' */
    /* End of Outputs for SubSystem: '<S2>/Target_Selection' */

    /* Outputs for Iterator SubSystem: '<S666>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S668>/For Iterator'
     */
    /* Assignment: '<S668>/Assignment' incorporates:
     *  Constant: '<S668>/Constant'
     *  Constant: '<S668>/Constant1'
     *  Constant: '<S670>/Constant'
     *  MultiPortSwitch: '<S668>/Index Vector'
     *  MultiPortSwitch: '<S668>/Index Vector1'
     *  RelationalOperator: '<S670>/Compare'
     *  Switch: '<S668>/Switch'
     */
    for (j = 0; j < 10; j++) {
      if (rtb_Merge_pv[j] == ((uint8_T)0U)) {
        rtb_C2_i = 100.0F;
      } else {
        rtb_C2_i = rtb_ImpAsg_InsertedFor_Lat_TTR_[rtb_Merge_pv[j] - 1];
      }

      if (j + 1 == 1) {
        for (s647_iter = 0; s647_iter < 10; s647_iter++) {
          rtb_Assignment[s647_iter] = AEBS_TOS_ConstP.Constant_Value_p[s647_iter];
        }
      }

      rtb_Assignment[j] = rtb_C2_i;
    }

    /* End of Assignment: '<S668>/Assignment' */
    /* End of Outputs for SubSystem: '<S666>/For Iterator Subsystem' */

    /* MATLAB Function: '<S666>/Lat_Check' */
    for (s647_iter = 0; s647_iter < 10; s647_iter++) {
      rtb_AccTgtIdn = rtb_Merge1_d[s647_iter];
      if (rtb_AccTgtIdn == 0) {
        AEBS_TOS_Y.ObjLat_Bus.ID_Lat[s647_iter] = 0U;
        AEBS_TOS_Y.ObjLat_Bus.ObjSortNum_Lat[s647_iter] = MAX_uint8_T;
        AEBS_TOS_Y.ObjLat_Bus.TTC_Lat[s647_iter] = 100.0F;
      } else {
        AEBS_TOS_Y.ObjLat_Bus.ID_Lat[s647_iter] = rtb_AccTgtIdn;
        AEBS_TOS_Y.ObjLat_Bus.ObjSortNum_Lat[s647_iter] = rtb_Merge_pv[s647_iter];
        AEBS_TOS_Y.ObjLat_Bus.TTC_Lat[s647_iter] = rtb_Assignment[s647_iter];
      }
    }

    /* End of MATLAB Function: '<S666>/Lat_Check' */

    /* MATLAB Function: '<S2>/MATLAB Function' */
    Meas_Index_Left_Obj = 255.0;
    Meas_Index_Right_Obj = 255.0;
    dxMin_Left = 1000.0F;
    rtb_Quotient_ed = 1000.0F;
    for (s647_iter = 0; s647_iter < 32; s647_iter++) {
      rtb_RadiusRear_j = rtb_Assignment3[s647_iter];
      if (rtb_Assignment5[s647_iter] && (rtb_RadiusRear_j < dxMin_Left)) {
        Meas_Index_Left_Obj = (real_T)s647_iter + 1.0;
        dxMin_Left = rtb_RadiusRear_j;
      }

      if (rtb_Assignment4[s647_iter] && (rtb_RadiusRear_j < rtb_Quotient_ed)) {
        Meas_Index_Right_Obj = (real_T)s647_iter + 1.0;
        rtb_Quotient_ed = rtb_RadiusRear_j;
      }
    }

    /* End of MATLAB Function: '<S2>/MATLAB Function' */

    /* If: '<S679>/If' incorporates:
     *  Inport: '<Root>/Objects_Info'
     */
    if (Meas_Index_Left_Obj == 255.0) {
      /* Outputs for IfAction SubSystem: '<S679>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S693>/Action Port'
       */
      AEBS_TOS_IfActionSubsystem2(&rtb_Merge);

      /* End of Outputs for SubSystem: '<S679>/If Action Subsystem2' */
    } else {
      /* Outputs for IfAction SubSystem: '<S679>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S692>/Action Port'
       */
      AEBS_TOS_IfActionSubsystem1(Meas_Index_Left_Obj,
        AEBS_TOS_U.Objects_Info.objData, &rtb_Merge);

      /* End of Outputs for SubSystem: '<S679>/If Action Subsystem1' */
    }

    /* End of If: '<S679>/If' */

    /* If: '<S680>/If' incorporates:
     *  Inport: '<Root>/Objects_Info'
     */
    if (Meas_Index_Right_Obj == 255.0) {
      /* Outputs for IfAction SubSystem: '<S680>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S695>/Action Port'
       */
      AEBS_TOS_IfActionSubsystem2(&rtb_Merge_o);

      /* End of Outputs for SubSystem: '<S680>/If Action Subsystem2' */
    } else {
      /* Outputs for IfAction SubSystem: '<S680>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S694>/Action Port'
       */
      AEBS_TOS_IfActionSubsystem1(Meas_Index_Right_Obj,
        AEBS_TOS_U.Objects_Info.objData, &rtb_Merge_o);

      /* End of Outputs for SubSystem: '<S680>/If Action Subsystem1' */
    }

    /* End of If: '<S680>/If' */

    /* Switch: '<S434>/Switch1' incorporates:
     *  Constant: '<S434>/Constant'
     *  Constant: '<S434>/Constant1'
     *  MATLAB Function: '<S435>/Obj_select'
     *  RelationalOperator: '<S434>/Relational Operator'
     *  Sum: '<S434>/Add'
     *  UnitDelay: '<S434>/Unit Delay'
     *  UnitDelay: '<S434>/Unit Delay1'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    if (temp_ID != AEBS_TOS_DW.UnitDelay_DSTATE_n) {
      AEBS_TOS_DW.UnitDelay_DSTATE_p = (uint8_T)((uint32_T)
        AEBS_TOS_DW.UnitDelay1_DSTATE_h + ((uint8_T)1U));
    } else {
      AEBS_TOS_DW.UnitDelay_DSTATE_p = ((uint8_T)0U);
    }

    /* End of Switch: '<S434>/Switch1' */

    /* Saturate: '<S434>/Saturation' incorporates:
     *  UnitDelay: '<S447>/Unit Delay'
     */
    if (AEBS_TOS_DW.UnitDelay_DSTATE_p < ((uint8_T)254U)) {
      AEBS_TOS_DW.UnitDelay1_DSTATE_h = AEBS_TOS_DW.UnitDelay_DSTATE_p;
    } else {
      AEBS_TOS_DW.UnitDelay1_DSTATE_h = ((uint8_T)254U);
    }

    /* End of Saturate: '<S434>/Saturation' */

    /* Switch: '<S434>/Switch' incorporates:
     *  Constant: '<S436>/Constant'
     *  MATLAB Function: '<S435>/Obj_select'
     *  RelationalOperator: '<S436>/Compare'
     *  UnitDelay: '<S434>/Unit Delay'
     *  UnitDelay: '<S434>/Unit Delay1'
     */
    if (AEBS_TOS_DW.UnitDelay1_DSTATE_h >= ((uint8_T)1U)) {
      AEBS_TOS_DW.UnitDelay_DSTATE_n = temp_ID;
    }

    /* End of Switch: '<S434>/Switch' */

    /* Saturate: '<S435>/Saturation' incorporates:
     *  MATLAB Function: '<S435>/Obj_select'
     */
    if (num > ((uint8_T)32U)) {
      num = ((uint8_T)32U);
    } else if (num < ((uint8_T)1U)) {
      num = ((uint8_T)1U);
    }

    /* End of Saturate: '<S435>/Saturation' */

    /* RelationalOperator: '<S440>/Compare' incorporates:
     *  Constant: '<S440>/Constant'
     */
    rtb_LogicalOperator5 = (num == ((uint8_T)32U));

    /* RelationalOperator: '<S434>/Relational Operator1' incorporates:
     *  UnitDelay: '<S434>/Unit Delay2'
     */
    rtb_LogicalOperator7 = (num != AEBS_TOS_DW.UnitDelay2_DSTATE_d);

    /* Switch: '<S434>/Switch3' incorporates:
     *  Constant: '<S434>/Constant2'
     *  Constant: '<S434>/Constant3'
     *  Constant: '<S441>/Constant'
     *  Logic: '<S434>/Logical Operator1'
     *  MATLAB Function: '<S435>/Obj_select'
     *  RelationalOperator: '<S441>/Compare'
     *  Sum: '<S434>/Add1'
     *  UnitDelay: '<S434>/Unit Delay3'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    if (rtb_LogicalOperator7 && rtb_LogicalOperator5 && (temp_ID == ((uint8_T)
          255U))) {
      AEBS_TOS_DW.UnitDelay_DSTATE_p = (uint8_T)((uint32_T)
        AEBS_TOS_DW.UnitDelay3_DSTATE_p + ((uint8_T)1U));
    } else {
      AEBS_TOS_DW.UnitDelay_DSTATE_p = ((uint8_T)0U);
    }

    /* End of Switch: '<S434>/Switch3' */

    /* Saturate: '<S434>/Saturation1' incorporates:
     *  UnitDelay: '<S447>/Unit Delay'
     */
    if (AEBS_TOS_DW.UnitDelay_DSTATE_p < ((uint8_T)254U)) {
      AEBS_TOS_DW.UnitDelay3_DSTATE_p = AEBS_TOS_DW.UnitDelay_DSTATE_p;
    } else {
      AEBS_TOS_DW.UnitDelay3_DSTATE_p = ((uint8_T)254U);
    }

    /* End of Saturate: '<S434>/Saturation1' */

    /* Switch: '<S434>/Switch4' incorporates:
     *  Constant: '<S437>/Constant'
     *  Constant: '<S438>/Constant'
     *  Constant: '<S439>/Constant'
     *  Logic: '<S434>/Logical Operator'
     *  Logic: '<S434>/Logical Operator2'
     *  Logic: '<S434>/Logical Operator3'
     *  RelationalOperator: '<S437>/Compare'
     *  RelationalOperator: '<S438>/Compare'
     *  RelationalOperator: '<S439>/Compare'
     *  Switch: '<S434>/Switch2'
     *  Switch: '<S434>/Switch5'
     *  UnitDelay: '<S434>/Unit Delay2'
     *  UnitDelay: '<S434>/Unit Delay3'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    if ((AEBS_TOS_DW.UnitDelay2_DSTATE_d == ((uint8_T)0U)) && (num == ((uint8_T)
          32U))) {
      AEBS_TOS_DW.UnitDelay_DSTATE_p = num;
    } else if ((!rtb_LogicalOperator5) && rtb_LogicalOperator7) {
      /* Switch: '<S434>/Switch5' incorporates:
       *  UnitDelay: '<S447>/Unit Delay'
       */
      AEBS_TOS_DW.UnitDelay_DSTATE_p = num;
    } else if (AEBS_TOS_DW.UnitDelay3_DSTATE_p >= ((uint8_T)5U)) {
      /* Switch: '<S434>/Switch2' incorporates:
       *  Switch: '<S434>/Switch5'
       *  UnitDelay: '<S447>/Unit Delay'
       */
      AEBS_TOS_DW.UnitDelay_DSTATE_p = num;
    } else {
      /* UnitDelay: '<S447>/Unit Delay' incorporates:
       *  Switch: '<S434>/Switch5'
       */
      AEBS_TOS_DW.UnitDelay_DSTATE_p = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
    }

    /* End of Switch: '<S434>/Switch4' */

    /* DataTypeConversion: '<S434>/Data Type Conversion' incorporates:
     *  UnitDelay: '<S434>/Unit Delay2'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    AEBS_TOS_DW.UnitDelay2_DSTATE_d = AEBS_TOS_DW.UnitDelay_DSTATE_p;

    /* MATLAB Function: '<S667>/ID_Confirm' incorporates:
     *  Constant: '<S667>/Constant'
     *  Constant: '<S667>/Constant1'
     *  Constant: '<S667>/Constant2'
     *  Constant: '<S667>/Constant3'
     *  Constant: '<S667>/Constant5'
     *  MATLAB Function: '<S435>/Obj_select'
     *  UnitDelay: '<S434>/Unit Delay'
     *  UnitDelay: '<S434>/Unit Delay2'
     */
    rtb_LogicalOperator5 = !false;
    guard1 = false;
    if ((((uint8_T)0U) == 0) && rtb_LogicalOperator5 && rtb_LogicalOperator5) {
      Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
      Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
      Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
    } else if ((((uint8_T)0U) != 0) && false && (((uint8_T)0U) == 0) &&
               rtb_LogicalOperator5) {
      if (((uint8_T)0U) == AEBS_TOS_DW.UnitDelay_DSTATE_n) {
        Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
        Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
        Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
      } else {
        /* MATLAB Function: '<S435>/Obj_select' incorporates:
         *  UnitDelay: '<S434>/Unit Delay2'
         */
        Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
        if (0.0F >= Meas_TTCLong) {
          Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
          Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
        } else {
          Meas_ID_Long = ((uint8_T)0U);
          Meas_TTCLong = 0.0F;
          guard1 = true;
        }
      }
    } else if ((((uint8_T)0U) == 0) && rtb_LogicalOperator5 && (((uint8_T)0U) !=
                0) && false) {
      if (((uint8_T)0U) == AEBS_TOS_DW.UnitDelay_DSTATE_n) {
        Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
        Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
        Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
      } else {
        /* MATLAB Function: '<S435>/Obj_select' incorporates:
         *  UnitDelay: '<S434>/Unit Delay2'
         */
        Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
        if (0.0F >= Meas_TTCLong) {
          Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
          Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
        } else {
          Meas_ID_Long = ((uint8_T)0U);
          Meas_TTCLong = 0.0F;
          guard1 = true;
        }
      }
    } else if ((((uint8_T)0U) != 0) && false && (((uint8_T)0U) != 0) && false) {
      if (0.0F <= 0.0F) {
        if (((uint8_T)0U) == AEBS_TOS_DW.UnitDelay_DSTATE_n) {
          Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
          Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
          Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
        } else {
          /* MATLAB Function: '<S435>/Obj_select' incorporates:
           *  UnitDelay: '<S434>/Unit Delay2'
           */
          Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
          if (0.0F >= Meas_TTCLong) {
            Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
            Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
          } else {
            Meas_ID_Long = ((uint8_T)0U);
            Meas_TTCLong = 0.0F;
            guard1 = true;
          }
        }
      } else if (((uint8_T)0U) == AEBS_TOS_DW.UnitDelay_DSTATE_n) {
        Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
        Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
        Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
      } else {
        /* MATLAB Function: '<S435>/Obj_select' incorporates:
         *  UnitDelay: '<S434>/Unit Delay2'
         */
        Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
        if (0.0F >= Meas_TTCLong) {
          Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
          Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
        } else {
          Meas_ID_Long = ((uint8_T)0U);
          Meas_TTCLong = 0.0F;
          guard1 = true;
        }
      }
    } else {
      Meas_ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_n;
      Meas_TTCLong = rtb_re_TTC[AEBS_TOS_DW.UnitDelay2_DSTATE_d - 1];
      Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
    }

    if (guard1) {
      rtb_LogicalOperator5 = true;
      s647_iter = 0;
      exitg3 = false;
      while ((!exitg3) && (s647_iter < 32)) {
        if (Meas_ObjID[s647_iter] != Meas_ID_Long) {
          rtb_LogicalOperator5 = false;
          exitg3 = true;
        } else {
          s647_iter++;
        }
      }

      if (rtb_LogicalOperator5) {
        Meas_ObjSortNum_Long = AEBS_TOS_DW.UnitDelay2_DSTATE_d;
      } else {
        Meas_ObjSortNum_Long = 0U;
      }
    }

    /* End of MATLAB Function: '<S667>/ID_Confirm' */

    /* SignalConversion: '<S667>/Signal Conversion' incorporates:
     *  UnitDelay: '<S447>/Unit Delay'
     */
    AEBS_TOS_DW.UnitDelay_DSTATE_p = Meas_ID_Long;

    /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
     *  SignalConversion: '<S667>/Signal Conversion1'
     */
    rtb_DataTypeConversion_j = Meas_ObjSortNum_Long;

    /* SignalConversion: '<S667>/Signal Conversion2' */
    rtb_C2_i = Meas_TTCLong;

    /* Outport: '<Root>/ObjLong_Bus' incorporates:
     *  BusCreator: '<S667>/Bus Creator'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    AEBS_TOS_Y.ObjLong_Bus_p.ID_Long = AEBS_TOS_DW.UnitDelay_DSTATE_p;
    AEBS_TOS_Y.ObjLong_Bus_p.ObjSortNum_Long = rtb_DataTypeConversion_j;
    AEBS_TOS_Y.ObjLong_Bus_p.TTCLong = rtb_C2_i;

    /* UnitDelay: '<S672>/Unit Delay' */
    rtb_UnitDelay_di = AEBS_TOS_DW.UnitDelay_DSTATE_d3;

    /* UnitDelay: '<S672>/Unit Delay1' */
    rtb_UnitDelay1 = AEBS_TOS_DW.UnitDelay1_DSTATE;

    /* UnitDelay: '<S672>/Unit Delay4' */
    rtb_UnitDelay4 = AEBS_TOS_DW.UnitDelay4_DSTATE;

    /* UnitDelay: '<S672>/Unit Delay6' */
    rtb_UnitDelay6 = AEBS_TOS_DW.UnitDelay6_DSTATE_o;

    /* Switch: '<S672>/Switch' incorporates:
     *  Constant: '<S672>/Constant10'
     *  Constant: '<S672>/Constant11'
     *  Constant: '<S672>/Constant9'
     *  RelationalOperator: '<S672>/Relational Operator10'
     *  RelationalOperator: '<S672>/Relational Operator8'
     *  RelationalOperator: '<S672>/Relational Operator9'
     *  Switch: '<S672>/Switch1'
     *  Switch: '<S672>/Switch2'
     *  Switch: '<S672>/Switch3'
     *  UnitDelay: '<S672>/Unit Delay7'
     */
    if (rtb_Merge.objID > ((uint16_T)0U)) {
      /* Outport: '<Root>/ELK_Obj' */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTimeStamp = rtb_Merge.objTimeStamp;
      rtb_Switch_objID = rtb_Merge.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objValid = rtb_Merge.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objExitProb = rtb_Merge.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIsobsProb = rtb_Merge.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLifeCycle = rtb_Merge.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.fusionType = rtb_Merge.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objType = rtb_Merge.objType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTypeProb = rtb_Merge.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenter = rtb_Merge.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenterStd = rtb_Merge.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenter = rtb_Merge.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenterStd = rtb_Merge.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRef = rtb_Merge.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRef = rtb_Merge.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.refPosition = rtb_Merge.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRefSurface = rtb_Merge.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRefSurface = rtb_Merge.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.surfacePos = rtb_Merge.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRel = rtb_Merge.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRel = rtb_Merge.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRel = rtb_Merge.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRel = rtb_Merge.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRelStd = rtb_Merge.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRelStd = rtb_Merge.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRelStd = rtb_Merge.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRelStd = rtb_Merge.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbs = rtb_Merge.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbs = rtb_Merge.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbs = rtb_Merge.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbs = rtb_Merge.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbsStd = rtb_Merge.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbsStd = rtb_Merge.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbsStd = rtb_Merge.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbsStd = rtb_Merge.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngle = rtb_Merge.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngleStd = rtb_Merge.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngle = rtb_Merge.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngleStd = rtb_Merge.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRate = rtb_Merge.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRateStd = rtb_Merge.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLength = rtb_Merge.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidth = rtb_Merge.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeight = rtb_Merge.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLengthStd = rtb_Merge.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidthStd = rtb_Merge.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeightStd = rtb_Merge.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingStatus = rtb_Merge.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingDirection = rtb_Merge.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.lightStatus = rtb_Merge.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.doorStatus = rtb_Merge.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.trailerStatus = rtb_Merge.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssign = rtb_Merge.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssociateConf =
        rtb_Merge.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftPortion = rtb_Merge.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightPortion =
        rtb_Merge.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftConf = rtb_Merge.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightConf = rtb_Merge.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntention = rtb_Merge.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntentionProb =
        rtb_Merge.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTTC = rtb_Merge.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2LaneCenter =
        rtb_Merge.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2EgoCenter =
        rtb_Merge.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objPosition = rtb_Merge.objPosition;
    } else if (rtb_UnitDelay_di > 0.0) {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTimeStamp = rtb_UnitDelay1.objTimeStamp;

      /* Switch: '<S672>/Switch' incorporates:
       *  Switch: '<S672>/Switch1'
       */
      rtb_Switch_objID = rtb_UnitDelay1.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objValid = rtb_UnitDelay1.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objExitProb = rtb_UnitDelay1.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIsobsProb = rtb_UnitDelay1.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLifeCycle = rtb_UnitDelay1.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.fusionType = rtb_UnitDelay1.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objType = rtb_UnitDelay1.objType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTypeProb = rtb_UnitDelay1.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenter = rtb_UnitDelay1.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenterStd = rtb_UnitDelay1.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenter = rtb_UnitDelay1.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenterStd = rtb_UnitDelay1.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRef = rtb_UnitDelay1.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRef = rtb_UnitDelay1.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.refPosition = rtb_UnitDelay1.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRefSurface = rtb_UnitDelay1.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRefSurface = rtb_UnitDelay1.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.surfacePos = rtb_UnitDelay1.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRel = rtb_UnitDelay1.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRel = rtb_UnitDelay1.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRel = rtb_UnitDelay1.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRel = rtb_UnitDelay1.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRelStd = rtb_UnitDelay1.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRelStd = rtb_UnitDelay1.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRelStd = rtb_UnitDelay1.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRelStd = rtb_UnitDelay1.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbs = rtb_UnitDelay1.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbs = rtb_UnitDelay1.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbs = rtb_UnitDelay1.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbs = rtb_UnitDelay1.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbsStd = rtb_UnitDelay1.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbsStd = rtb_UnitDelay1.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbsStd = rtb_UnitDelay1.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbsStd = rtb_UnitDelay1.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngle = rtb_UnitDelay1.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngleStd = rtb_UnitDelay1.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngle = rtb_UnitDelay1.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngleStd =
        rtb_UnitDelay1.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRate = rtb_UnitDelay1.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRateStd = rtb_UnitDelay1.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLength = rtb_UnitDelay1.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidth = rtb_UnitDelay1.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeight = rtb_UnitDelay1.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLengthStd = rtb_UnitDelay1.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidthStd = rtb_UnitDelay1.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeightStd = rtb_UnitDelay1.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingStatus = rtb_UnitDelay1.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingDirection =
        rtb_UnitDelay1.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.lightStatus = rtb_UnitDelay1.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.doorStatus = rtb_UnitDelay1.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.trailerStatus = rtb_UnitDelay1.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssign = rtb_UnitDelay1.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssociateConf =
        rtb_UnitDelay1.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftPortion =
        rtb_UnitDelay1.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightPortion =
        rtb_UnitDelay1.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftConf = rtb_UnitDelay1.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightConf = rtb_UnitDelay1.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntention = rtb_UnitDelay1.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntentionProb =
        rtb_UnitDelay1.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTTC = rtb_UnitDelay1.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2LaneCenter =
        rtb_UnitDelay1.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2EgoCenter =
        rtb_UnitDelay1.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objPosition = rtb_UnitDelay1.objPosition;
    } else if (rtb_UnitDelay6 > 0.0) {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTimeStamp = rtb_UnitDelay4.objTimeStamp;

      /* Switch: '<S672>/Switch' incorporates:
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       */
      rtb_Switch_objID = rtb_UnitDelay4.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objValid = rtb_UnitDelay4.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objExitProb = rtb_UnitDelay4.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIsobsProb = rtb_UnitDelay4.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLifeCycle = rtb_UnitDelay4.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.fusionType = rtb_UnitDelay4.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objType = rtb_UnitDelay4.objType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTypeProb = rtb_UnitDelay4.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenter = rtb_UnitDelay4.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenterStd = rtb_UnitDelay4.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenter = rtb_UnitDelay4.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenterStd = rtb_UnitDelay4.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRef = rtb_UnitDelay4.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRef = rtb_UnitDelay4.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.refPosition = rtb_UnitDelay4.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRefSurface = rtb_UnitDelay4.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRefSurface = rtb_UnitDelay4.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.surfacePos = rtb_UnitDelay4.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRel = rtb_UnitDelay4.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRel = rtb_UnitDelay4.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRel = rtb_UnitDelay4.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRel = rtb_UnitDelay4.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRelStd = rtb_UnitDelay4.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRelStd = rtb_UnitDelay4.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRelStd = rtb_UnitDelay4.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRelStd = rtb_UnitDelay4.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbs = rtb_UnitDelay4.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbs = rtb_UnitDelay4.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbs = rtb_UnitDelay4.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbs = rtb_UnitDelay4.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbsStd = rtb_UnitDelay4.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbsStd = rtb_UnitDelay4.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbsStd = rtb_UnitDelay4.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbsStd = rtb_UnitDelay4.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngle = rtb_UnitDelay4.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngleStd = rtb_UnitDelay4.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngle = rtb_UnitDelay4.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngleStd =
        rtb_UnitDelay4.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRate = rtb_UnitDelay4.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRateStd = rtb_UnitDelay4.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLength = rtb_UnitDelay4.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidth = rtb_UnitDelay4.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeight = rtb_UnitDelay4.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLengthStd = rtb_UnitDelay4.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidthStd = rtb_UnitDelay4.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeightStd = rtb_UnitDelay4.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingStatus = rtb_UnitDelay4.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingDirection =
        rtb_UnitDelay4.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.lightStatus = rtb_UnitDelay4.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.doorStatus = rtb_UnitDelay4.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.trailerStatus = rtb_UnitDelay4.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssign = rtb_UnitDelay4.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssociateConf =
        rtb_UnitDelay4.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftPortion =
        rtb_UnitDelay4.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightPortion =
        rtb_UnitDelay4.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftConf = rtb_UnitDelay4.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightConf = rtb_UnitDelay4.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntention = rtb_UnitDelay4.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntentionProb =
        rtb_UnitDelay4.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTTC = rtb_UnitDelay4.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2LaneCenter =
        rtb_UnitDelay4.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2EgoCenter =
        rtb_UnitDelay4.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objPosition = rtb_UnitDelay4.objPosition;
    } else if (AEBS_TOS_DW.UnitDelay7_DSTATE_d > 0.0) {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       *  Switch: '<S672>/Switch3'
       *  UnitDelay: '<S672>/Unit Delay5'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTimeStamp =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objTimeStamp;

      /* Switch: '<S672>/Switch' incorporates:
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       *  Switch: '<S672>/Switch3'
       *  UnitDelay: '<S672>/Unit Delay5'
       */
      rtb_Switch_objID = AEBS_TOS_DW.UnitDelay5_DSTATE.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       *  Switch: '<S672>/Switch3'
       *  UnitDelay: '<S672>/Unit Delay5'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objValid =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objExitProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIsobsProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLifeCycle =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.fusionType =
        AEBS_TOS_DW.UnitDelay5_DSTATE.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objType =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTypeProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenterStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenterStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRef = AEBS_TOS_DW.UnitDelay5_DSTATE.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRef = AEBS_TOS_DW.UnitDelay5_DSTATE.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.refPosition =
        AEBS_TOS_DW.UnitDelay5_DSTATE.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRefSurface =
        AEBS_TOS_DW.UnitDelay5_DSTATE.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRefSurface =
        AEBS_TOS_DW.UnitDelay5_DSTATE.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.surfacePos =
        AEBS_TOS_DW.UnitDelay5_DSTATE.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRel = AEBS_TOS_DW.UnitDelay5_DSTATE.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRel = AEBS_TOS_DW.UnitDelay5_DSTATE.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRel = AEBS_TOS_DW.UnitDelay5_DSTATE.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRel = AEBS_TOS_DW.UnitDelay5_DSTATE.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbs = AEBS_TOS_DW.UnitDelay5_DSTATE.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbs = AEBS_TOS_DW.UnitDelay5_DSTATE.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbs = AEBS_TOS_DW.UnitDelay5_DSTATE.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbs = AEBS_TOS_DW.UnitDelay5_DSTATE.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngle =
        AEBS_TOS_DW.UnitDelay5_DSTATE.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngleStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngle =
        AEBS_TOS_DW.UnitDelay5_DSTATE.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngleStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRate =
        AEBS_TOS_DW.UnitDelay5_DSTATE.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRateStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLength =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidth =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeight =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLengthStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidthStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeightStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingDirection =
        AEBS_TOS_DW.UnitDelay5_DSTATE.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.lightStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.doorStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.trailerStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssign =
        AEBS_TOS_DW.UnitDelay5_DSTATE.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssociateConf =
        AEBS_TOS_DW.UnitDelay5_DSTATE.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftPortion =
        AEBS_TOS_DW.UnitDelay5_DSTATE.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightPortion =
        AEBS_TOS_DW.UnitDelay5_DSTATE.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftConf =
        AEBS_TOS_DW.UnitDelay5_DSTATE.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightConf =
        AEBS_TOS_DW.UnitDelay5_DSTATE.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntention =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntentionProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTTC =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2LaneCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2EgoCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objPosition =
        AEBS_TOS_DW.UnitDelay5_DSTATE.objPosition;
    } else {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       *  Switch: '<S672>/Switch3'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTimeStamp = rtb_Merge.objTimeStamp;

      /* Switch: '<S672>/Switch' incorporates:
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       *  Switch: '<S672>/Switch3'
       */
      rtb_Switch_objID = rtb_Merge.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S672>/Switch'
       *  Switch: '<S672>/Switch1'
       *  Switch: '<S672>/Switch2'
       *  Switch: '<S672>/Switch3'
       */
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objValid = rtb_Merge.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objExitProb = rtb_Merge.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIsobsProb = rtb_Merge.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLifeCycle = rtb_Merge.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.fusionType = rtb_Merge.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objType = rtb_Merge.objType;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTypeProb = rtb_Merge.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenter = rtb_Merge.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxCenterStd = rtb_Merge.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenter = rtb_Merge.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyCenterStd = rtb_Merge.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRef = rtb_Merge.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRef = rtb_Merge.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.refPosition = rtb_Merge.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dxRefSurface = rtb_Merge.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.dyRefSurface = rtb_Merge.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.surfacePos = rtb_Merge.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRel = rtb_Merge.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRel = rtb_Merge.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRel = rtb_Merge.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRel = rtb_Merge.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxRelStd = rtb_Merge.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyRelStd = rtb_Merge.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axRelStd = rtb_Merge.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayRelStd = rtb_Merge.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbs = rtb_Merge.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbs = rtb_Merge.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbs = rtb_Merge.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbs = rtb_Merge.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vxAbsStd = rtb_Merge.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.vyAbsStd = rtb_Merge.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.axAbsStd = rtb_Merge.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.ayAbsStd = rtb_Merge.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngle = rtb_Merge.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawAngleStd = rtb_Merge.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngle = rtb_Merge.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.azimuthAngleStd = rtb_Merge.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRate = rtb_Merge.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.yawRateStd = rtb_Merge.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLength = rtb_Merge.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidth = rtb_Merge.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeight = rtb_Merge.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLengthStd = rtb_Merge.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objWidthStd = rtb_Merge.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objHeightStd = rtb_Merge.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingStatus = rtb_Merge.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.movingDirection = rtb_Merge.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.lightStatus = rtb_Merge.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.doorStatus = rtb_Merge.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.trailerStatus = rtb_Merge.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssign = rtb_Merge.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneAssociateConf =
        rtb_Merge.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftPortion = rtb_Merge.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightPortion =
        rtb_Merge.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneLeftConf = rtb_Merge.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.laneRightConf = rtb_Merge.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntention = rtb_Merge.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objIntentionProb =
        rtb_Merge.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objTTC = rtb_Merge.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2LaneCenter =
        rtb_Merge.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objLatDist2EgoCenter =
        rtb_Merge.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKLeft.objPosition = rtb_Merge.objPosition;
    }

    /* End of Switch: '<S672>/Switch' */

    /* RelationalOperator: '<S686>/Compare' incorporates:
     *  Constant: '<S686>/Constant'
     *  Switch: '<S672>/Switch'
     */
    rtb_Valid_g = (rtb_Switch_objID != ((uint16_T)0U));

    /* Switch: '<S676>/Switch' */
    if (rtb_Valid_g) {
      /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
       *  Constant: '<S676>/Constant5'
       */
      rtb_DataTypeConversion_j = ((uint8_T)1U);
    } else {
      /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
       *  Constant: '<S676>/Constant6'
       */
      rtb_DataTypeConversion_j = ((uint8_T)0U);
    }

    /* End of Switch: '<S676>/Switch' */

    /* UnitDelay: '<S673>/Unit Delay1' */
    rtb_UnitDelay1_j = AEBS_TOS_DW.UnitDelay1_DSTATE_g;

    /* UnitDelay: '<S673>/Unit Delay' */
    rtb_UnitDelay_jo = AEBS_TOS_DW.UnitDelay_DSTATE_k;

    /* UnitDelay: '<S673>/Unit Delay4' */
    rtb_UnitDelay4_o = AEBS_TOS_DW.UnitDelay4_DSTATE_l;

    /* UnitDelay: '<S673>/Unit Delay6' */
    rtb_UnitDelay6_k = AEBS_TOS_DW.UnitDelay6_DSTATE_b;

    /* Switch: '<S673>/Switch' incorporates:
     *  Constant: '<S673>/Constant10'
     *  Constant: '<S673>/Constant11'
     *  Constant: '<S673>/Constant9'
     *  RelationalOperator: '<S673>/Relational Operator10'
     *  RelationalOperator: '<S673>/Relational Operator8'
     *  RelationalOperator: '<S673>/Relational Operator9'
     *  Switch: '<S673>/Switch1'
     *  Switch: '<S673>/Switch2'
     *  Switch: '<S673>/Switch3'
     *  UnitDelay: '<S673>/Unit Delay7'
     */
    if (rtb_Merge_o.objID > ((uint16_T)0U)) {
      /* Outport: '<Root>/ELK_Obj' */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTimeStamp = rtb_Merge_o.objTimeStamp;
      rtb_Switch_j_objID = rtb_Merge_o.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objValid = rtb_Merge_o.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objExitProb = rtb_Merge_o.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIsobsProb = rtb_Merge_o.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLifeCycle = rtb_Merge_o.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.fusionType = rtb_Merge_o.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objType = rtb_Merge_o.objType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTypeProb = rtb_Merge_o.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenter = rtb_Merge_o.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenterStd = rtb_Merge_o.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenter = rtb_Merge_o.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenterStd = rtb_Merge_o.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRef = rtb_Merge_o.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRef = rtb_Merge_o.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.refPosition = rtb_Merge_o.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRefSurface = rtb_Merge_o.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRefSurface = rtb_Merge_o.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.surfacePos = rtb_Merge_o.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRel = rtb_Merge_o.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRel = rtb_Merge_o.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRel = rtb_Merge_o.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRel = rtb_Merge_o.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRelStd = rtb_Merge_o.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRelStd = rtb_Merge_o.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRelStd = rtb_Merge_o.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRelStd = rtb_Merge_o.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbs = rtb_Merge_o.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbs = rtb_Merge_o.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbs = rtb_Merge_o.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbs = rtb_Merge_o.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbsStd = rtb_Merge_o.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbsStd = rtb_Merge_o.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbsStd = rtb_Merge_o.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbsStd = rtb_Merge_o.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngle = rtb_Merge_o.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngleStd = rtb_Merge_o.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngle = rtb_Merge_o.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngleStd =
        rtb_Merge_o.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRate = rtb_Merge_o.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRateStd = rtb_Merge_o.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLength = rtb_Merge_o.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidth = rtb_Merge_o.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeight = rtb_Merge_o.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLengthStd = rtb_Merge_o.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidthStd = rtb_Merge_o.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeightStd = rtb_Merge_o.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingStatus = rtb_Merge_o.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingDirection =
        rtb_Merge_o.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKRight.lightStatus = rtb_Merge_o.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.doorStatus = rtb_Merge_o.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.trailerStatus = rtb_Merge_o.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssign = rtb_Merge_o.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssociateConf =
        rtb_Merge_o.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftPortion =
        rtb_Merge_o.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightPortion =
        rtb_Merge_o.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftConf = rtb_Merge_o.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightConf = rtb_Merge_o.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntention = rtb_Merge_o.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntentionProb =
        rtb_Merge_o.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTTC = rtb_Merge_o.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2LaneCenter =
        rtb_Merge_o.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2EgoCenter =
        rtb_Merge_o.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objPosition = rtb_Merge_o.objPosition;
    } else if (rtb_UnitDelay_jo > 0.0) {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTimeStamp =
        rtb_UnitDelay1_j.objTimeStamp;

      /* Switch: '<S673>/Switch' incorporates:
       *  Switch: '<S673>/Switch1'
       */
      rtb_Switch_j_objID = rtb_UnitDelay1_j.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objValid = rtb_UnitDelay1_j.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objExitProb = rtb_UnitDelay1_j.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIsobsProb =
        rtb_UnitDelay1_j.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLifeCycle =
        rtb_UnitDelay1_j.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.fusionType = rtb_UnitDelay1_j.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objType = rtb_UnitDelay1_j.objType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTypeProb = rtb_UnitDelay1_j.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenter = rtb_UnitDelay1_j.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenterStd = rtb_UnitDelay1_j.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenter = rtb_UnitDelay1_j.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenterStd = rtb_UnitDelay1_j.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRef = rtb_UnitDelay1_j.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRef = rtb_UnitDelay1_j.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.refPosition = rtb_UnitDelay1_j.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRefSurface =
        rtb_UnitDelay1_j.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRefSurface =
        rtb_UnitDelay1_j.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.surfacePos = rtb_UnitDelay1_j.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRel = rtb_UnitDelay1_j.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRel = rtb_UnitDelay1_j.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRel = rtb_UnitDelay1_j.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRel = rtb_UnitDelay1_j.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRelStd = rtb_UnitDelay1_j.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRelStd = rtb_UnitDelay1_j.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRelStd = rtb_UnitDelay1_j.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRelStd = rtb_UnitDelay1_j.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbs = rtb_UnitDelay1_j.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbs = rtb_UnitDelay1_j.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbs = rtb_UnitDelay1_j.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbs = rtb_UnitDelay1_j.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbsStd = rtb_UnitDelay1_j.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbsStd = rtb_UnitDelay1_j.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbsStd = rtb_UnitDelay1_j.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbsStd = rtb_UnitDelay1_j.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngle = rtb_UnitDelay1_j.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngleStd = rtb_UnitDelay1_j.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngle =
        rtb_UnitDelay1_j.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngleStd =
        rtb_UnitDelay1_j.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRate = rtb_UnitDelay1_j.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRateStd = rtb_UnitDelay1_j.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLength = rtb_UnitDelay1_j.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidth = rtb_UnitDelay1_j.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeight = rtb_UnitDelay1_j.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLengthStd =
        rtb_UnitDelay1_j.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidthStd = rtb_UnitDelay1_j.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeightStd =
        rtb_UnitDelay1_j.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingStatus =
        rtb_UnitDelay1_j.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingDirection =
        rtb_UnitDelay1_j.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKRight.lightStatus = rtb_UnitDelay1_j.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.doorStatus = rtb_UnitDelay1_j.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.trailerStatus =
        rtb_UnitDelay1_j.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssign = rtb_UnitDelay1_j.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssociateConf =
        rtb_UnitDelay1_j.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftPortion =
        rtb_UnitDelay1_j.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightPortion =
        rtb_UnitDelay1_j.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftConf =
        rtb_UnitDelay1_j.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightConf =
        rtb_UnitDelay1_j.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntention =
        rtb_UnitDelay1_j.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntentionProb =
        rtb_UnitDelay1_j.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTTC = rtb_UnitDelay1_j.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2LaneCenter =
        rtb_UnitDelay1_j.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2EgoCenter =
        rtb_UnitDelay1_j.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objPosition = rtb_UnitDelay1_j.objPosition;
    } else if (rtb_UnitDelay6_k > 0.0) {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTimeStamp =
        rtb_UnitDelay4_o.objTimeStamp;

      /* Switch: '<S673>/Switch' incorporates:
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       */
      rtb_Switch_j_objID = rtb_UnitDelay4_o.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objValid = rtb_UnitDelay4_o.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objExitProb = rtb_UnitDelay4_o.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIsobsProb =
        rtb_UnitDelay4_o.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLifeCycle =
        rtb_UnitDelay4_o.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.fusionType = rtb_UnitDelay4_o.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objType = rtb_UnitDelay4_o.objType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTypeProb = rtb_UnitDelay4_o.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenter = rtb_UnitDelay4_o.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenterStd = rtb_UnitDelay4_o.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenter = rtb_UnitDelay4_o.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenterStd = rtb_UnitDelay4_o.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRef = rtb_UnitDelay4_o.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRef = rtb_UnitDelay4_o.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.refPosition = rtb_UnitDelay4_o.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRefSurface =
        rtb_UnitDelay4_o.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRefSurface =
        rtb_UnitDelay4_o.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.surfacePos = rtb_UnitDelay4_o.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRel = rtb_UnitDelay4_o.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRel = rtb_UnitDelay4_o.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRel = rtb_UnitDelay4_o.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRel = rtb_UnitDelay4_o.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRelStd = rtb_UnitDelay4_o.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRelStd = rtb_UnitDelay4_o.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRelStd = rtb_UnitDelay4_o.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRelStd = rtb_UnitDelay4_o.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbs = rtb_UnitDelay4_o.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbs = rtb_UnitDelay4_o.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbs = rtb_UnitDelay4_o.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbs = rtb_UnitDelay4_o.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbsStd = rtb_UnitDelay4_o.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbsStd = rtb_UnitDelay4_o.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbsStd = rtb_UnitDelay4_o.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbsStd = rtb_UnitDelay4_o.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngle = rtb_UnitDelay4_o.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngleStd = rtb_UnitDelay4_o.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngle =
        rtb_UnitDelay4_o.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngleStd =
        rtb_UnitDelay4_o.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRate = rtb_UnitDelay4_o.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRateStd = rtb_UnitDelay4_o.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLength = rtb_UnitDelay4_o.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidth = rtb_UnitDelay4_o.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeight = rtb_UnitDelay4_o.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLengthStd =
        rtb_UnitDelay4_o.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidthStd = rtb_UnitDelay4_o.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeightStd =
        rtb_UnitDelay4_o.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingStatus =
        rtb_UnitDelay4_o.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingDirection =
        rtb_UnitDelay4_o.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKRight.lightStatus = rtb_UnitDelay4_o.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.doorStatus = rtb_UnitDelay4_o.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.trailerStatus =
        rtb_UnitDelay4_o.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssign = rtb_UnitDelay4_o.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssociateConf =
        rtb_UnitDelay4_o.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftPortion =
        rtb_UnitDelay4_o.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightPortion =
        rtb_UnitDelay4_o.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftConf =
        rtb_UnitDelay4_o.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightConf =
        rtb_UnitDelay4_o.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntention =
        rtb_UnitDelay4_o.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntentionProb =
        rtb_UnitDelay4_o.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTTC = rtb_UnitDelay4_o.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2LaneCenter =
        rtb_UnitDelay4_o.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2EgoCenter =
        rtb_UnitDelay4_o.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objPosition = rtb_UnitDelay4_o.objPosition;
    } else if (AEBS_TOS_DW.UnitDelay7_DSTATE_n > 0.0) {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       *  Switch: '<S673>/Switch3'
       *  UnitDelay: '<S673>/Unit Delay5'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTimeStamp =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objTimeStamp;

      /* Switch: '<S673>/Switch' incorporates:
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       *  Switch: '<S673>/Switch3'
       *  UnitDelay: '<S673>/Unit Delay5'
       */
      rtb_Switch_j_objID = AEBS_TOS_DW.UnitDelay5_DSTATE_m.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       *  Switch: '<S673>/Switch3'
       *  UnitDelay: '<S673>/Unit Delay5'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objValid =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objExitProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIsobsProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLifeCycle =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.fusionType =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objType =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTypeProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenterStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenterStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRef =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRef =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.refPosition =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRefSurface =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRefSurface =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.surfacePos =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRel =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRel =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRel =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRel =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRelStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbs =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbs =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbs =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbs =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbsStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngle =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngleStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngle =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngleStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRate =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRateStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLength =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidth =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeight =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLengthStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidthStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeightStd =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingDirection =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKRight.lightStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.doorStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.trailerStatus =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssign =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssociateConf =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftPortion =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightPortion =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftConf =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightConf =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntention =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntentionProb =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTTC =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2LaneCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2EgoCenter =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objPosition =
        AEBS_TOS_DW.UnitDelay5_DSTATE_m.objPosition;
    } else {
      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       *  Switch: '<S673>/Switch3'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTimeStamp = rtb_Merge_o.objTimeStamp;

      /* Switch: '<S673>/Switch' incorporates:
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       *  Switch: '<S673>/Switch3'
       */
      rtb_Switch_j_objID = rtb_Merge_o.objID;

      /* Outport: '<Root>/ELK_Obj' incorporates:
       *  Switch: '<S673>/Switch'
       *  Switch: '<S673>/Switch1'
       *  Switch: '<S673>/Switch2'
       *  Switch: '<S673>/Switch3'
       */
      AEBS_TOS_Y.ELK_Obj.objELKRight.objValid = rtb_Merge_o.objValid;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objExitProb = rtb_Merge_o.objExitProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIsobsProb = rtb_Merge_o.objIsobsProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLifeCycle = rtb_Merge_o.objLifeCycle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.fusionType = rtb_Merge_o.fusionType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objType = rtb_Merge_o.objType;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTypeProb = rtb_Merge_o.objTypeProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenter = rtb_Merge_o.dxCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxCenterStd = rtb_Merge_o.dxCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenter = rtb_Merge_o.dyCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyCenterStd = rtb_Merge_o.dyCenterStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRef = rtb_Merge_o.dxRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRef = rtb_Merge_o.dyRef;
      AEBS_TOS_Y.ELK_Obj.objELKRight.refPosition = rtb_Merge_o.refPosition;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dxRefSurface = rtb_Merge_o.dxRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.dyRefSurface = rtb_Merge_o.dyRefSurface;
      AEBS_TOS_Y.ELK_Obj.objELKRight.surfacePos = rtb_Merge_o.surfacePos;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRel = rtb_Merge_o.vxRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRel = rtb_Merge_o.vyRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRel = rtb_Merge_o.axRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRel = rtb_Merge_o.ayRel;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxRelStd = rtb_Merge_o.vxRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyRelStd = rtb_Merge_o.vyRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axRelStd = rtb_Merge_o.axRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayRelStd = rtb_Merge_o.ayRelStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbs = rtb_Merge_o.vxAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbs = rtb_Merge_o.vyAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbs = rtb_Merge_o.axAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbs = rtb_Merge_o.ayAbs;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vxAbsStd = rtb_Merge_o.vxAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.vyAbsStd = rtb_Merge_o.vyAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.axAbsStd = rtb_Merge_o.axAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.ayAbsStd = rtb_Merge_o.ayAbsStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngle = rtb_Merge_o.yawAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawAngleStd = rtb_Merge_o.yawAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngle = rtb_Merge_o.azimuthAngle;
      AEBS_TOS_Y.ELK_Obj.objELKRight.azimuthAngleStd =
        rtb_Merge_o.azimuthAngleStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRate = rtb_Merge_o.yawRate;
      AEBS_TOS_Y.ELK_Obj.objELKRight.yawRateStd = rtb_Merge_o.yawRateStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLength = rtb_Merge_o.objLength;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidth = rtb_Merge_o.objWidth;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeight = rtb_Merge_o.objHeight;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLengthStd = rtb_Merge_o.objLengthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objWidthStd = rtb_Merge_o.objWidthStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objHeightStd = rtb_Merge_o.objHeightStd;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingStatus = rtb_Merge_o.movingStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.movingDirection =
        rtb_Merge_o.movingDirection;
      AEBS_TOS_Y.ELK_Obj.objELKRight.lightStatus = rtb_Merge_o.lightStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.doorStatus = rtb_Merge_o.doorStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.trailerStatus = rtb_Merge_o.trailerStatus;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssign = rtb_Merge_o.laneAssign;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneAssociateConf =
        rtb_Merge_o.laneAssociateConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftPortion =
        rtb_Merge_o.laneLeftPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightPortion =
        rtb_Merge_o.laneRightPortion;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneLeftConf = rtb_Merge_o.laneLeftConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.laneRightConf = rtb_Merge_o.laneRightConf;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntention = rtb_Merge_o.objIntention;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objIntentionProb =
        rtb_Merge_o.objIntentionProb;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objTTC = rtb_Merge_o.objTTC;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2LaneCenter =
        rtb_Merge_o.objLatDist2LaneCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objLatDist2EgoCenter =
        rtb_Merge_o.objLatDist2EgoCenter;
      AEBS_TOS_Y.ELK_Obj.objELKRight.objPosition = rtb_Merge_o.objPosition;
    }

    /* End of Switch: '<S673>/Switch' */

    /* RelationalOperator: '<S687>/Compare' incorporates:
     *  Constant: '<S687>/Constant'
     *  Switch: '<S673>/Switch'
     */
    rtb_Valid_g = (rtb_Switch_j_objID != ((uint16_T)0U));

    /* Switch: '<S676>/Switch1' incorporates:
     *  Constant: '<S676>/Constant7'
     *  Constant: '<S676>/Constant8'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    if (rtb_Valid_g) {
      AEBS_TOS_DW.UnitDelay_DSTATE_p = ((uint8_T)1U);
    } else {
      AEBS_TOS_DW.UnitDelay_DSTATE_p = ((uint8_T)0U);
    }

    /* End of Switch: '<S676>/Switch1' */

    /* Outport: '<Root>/ELK_Obj' incorporates:
     *  BusCreator: '<S2>/Bus Creator'
     *  Inport: '<Root>/Objects_Info'
     *  Sum: '<S676>/Add'
     *  Switch: '<S672>/Switch'
     *  Switch: '<S673>/Switch'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    AEBS_TOS_Y.ELK_Obj.timeStamp = AEBS_TOS_U.Objects_Info.timeStamp;
    AEBS_TOS_Y.ELK_Obj.objNum = (uint8_t)((uint32_T)rtb_DataTypeConversion_j +
      AEBS_TOS_DW.UnitDelay_DSTATE_p);
    AEBS_TOS_Y.ELK_Obj.objELKLeft.objID = rtb_Switch_objID;
    AEBS_TOS_Y.ELK_Obj.objELKRight.objID = rtb_Switch_j_objID;

    /* Outputs for Atomic SubSystem: '<S3>/TAObjInfoCalc' */
    /* Outputs for Iterator SubSystem: '<S5>/For Each Subsystem' incorporates:
     *  ForEach: '<S6>/For Each'
     */
    for (ForEach_itr_d = 0; ForEach_itr_d < 32; ForEach_itr_d++) {
      /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector14'
       */
      rtb_DataTypeConversion_j =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsID_u8[ForEach_itr_d];

      /* RelationalOperator: '<S23>/Compare' incorporates:
       *  Constant: '<S23>/Constant'
       */
      rtb_LogicalOperator5 = (rtb_DataTypeConversion_j == ((uint8_T)0U));

      /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector15'
       */
      rtb_DataTypeConversion_j =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsValid_u8[ForEach_itr_d];

      /* Logic: '<S21>/Logical Operator' incorporates:
       *  Constant: '<S24>/Constant'
       *  RelationalOperator: '<S24>/Compare'
       */
      rtb_Valid_g = (rtb_LogicalOperator5 || (rtb_DataTypeConversion_j ==
        ((uint8_T)0U)));

      /* DataTypeConversion: '<S21>/Data Type Conversion' */
      rtb_DataTypeConversion_j = rtb_Valid_g;

      /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      rtb_DataTypeConversion_l = (AEBS_TOS_U.Road_Info.lineData[0].lineSegs[0].
        lineSegValid != 0);

      /* DataTypeConversion: '<S15>/Data Type Conversion1' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      rtb_DataTypeConversion1_c = (AEBS_TOS_U.Road_Info.lineData[0].lineSegs[1].
        lineSegValid != 0);

      /* DataTypeConversion: '<S15>/Data Type Conversion2' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      rtb_DataTypeConversion2_d = (AEBS_TOS_U.Road_Info.lineData[0].lineSegs[2].
        lineSegValid != 0);

      /* MATLAB Function: '<S15>/Line_Info' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      AEBS_TOS_Line_Info(AEBS_TOS_U.Road_Info.lineData[0].lineSegNum,
                         rtb_DataTypeConversion_l,
                         AEBS_TOS_U.Road_Info.lineData[0].lineSegs[0].
                         lineSegStart, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[0].lineSegEnd, AEBS_TOS_U.Road_Info.lineData
                         [0].lineSegs[0].lineC0, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[0].lineC1, AEBS_TOS_U.Road_Info.lineData[0].
                         lineSegs[0].lineC2, AEBS_TOS_U.Road_Info.lineData[0].
                         lineSegs[0].lineC3, rtb_DataTypeConversion1_c,
                         AEBS_TOS_U.Road_Info.lineData[0].lineSegs[1].
                         lineSegStart, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[1].lineSegEnd, AEBS_TOS_U.Road_Info.lineData
                         [0].lineSegs[1].lineC0, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[1].lineC1, AEBS_TOS_U.Road_Info.lineData[0].
                         lineSegs[1].lineC2, AEBS_TOS_U.Road_Info.lineData[0].
                         lineSegs[1].lineC3, rtb_DataTypeConversion2_d,
                         AEBS_TOS_U.Road_Info.lineData[0].lineSegs[2].
                         lineSegStart, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[2].lineSegEnd, AEBS_TOS_U.Road_Info.lineData
                         [0].lineSegs[2].lineC0, AEBS_TOS_U.Road_Info.lineData[0]
                         .lineSegs[2].lineC1, AEBS_TOS_U.Road_Info.lineData[0].
                         lineSegs[2].lineC2, AEBS_TOS_U.Road_Info.lineData[0].
                         lineSegs[2].lineC3, &rtb_Valid_g, &rtb_Line_start,
                         &rtb_Line_end, &rtb_Switch_aq, &rtb_C1_e, &rtb_C2_i,
                         &rtb_C3_b);

      /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      rtb_DataTypeConversion_c1 = (AEBS_TOS_U.Road_Info.lineData[1].lineSegs[0].
        lineSegValid != 0);

      /* DataTypeConversion: '<S16>/Data Type Conversion1' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      rtb_DataTypeConversion1_j = (AEBS_TOS_U.Road_Info.lineData[1].lineSegs[1].
        lineSegValid != 0);

      /* DataTypeConversion: '<S16>/Data Type Conversion2' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      rtb_DataTypeConversion2_j = (AEBS_TOS_U.Road_Info.lineData[1].lineSegs[2].
        lineSegValid != 0);

      /* MATLAB Function: '<S16>/Line_Info' incorporates:
       *  Inport: '<Root>/Road_Info'
       */
      AEBS_TOS_Line_Info(AEBS_TOS_U.Road_Info.lineData[1].lineSegNum,
                         rtb_DataTypeConversion_c1,
                         AEBS_TOS_U.Road_Info.lineData[1].lineSegs[0].
                         lineSegStart, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[0].lineSegEnd, AEBS_TOS_U.Road_Info.lineData
                         [1].lineSegs[0].lineC0, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[0].lineC1, AEBS_TOS_U.Road_Info.lineData[1].
                         lineSegs[0].lineC2, AEBS_TOS_U.Road_Info.lineData[1].
                         lineSegs[0].lineC3, rtb_DataTypeConversion1_j,
                         AEBS_TOS_U.Road_Info.lineData[1].lineSegs[1].
                         lineSegStart, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[1].lineSegEnd, AEBS_TOS_U.Road_Info.lineData
                         [1].lineSegs[1].lineC0, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[1].lineC1, AEBS_TOS_U.Road_Info.lineData[1].
                         lineSegs[1].lineC2, AEBS_TOS_U.Road_Info.lineData[1].
                         lineSegs[1].lineC3, rtb_DataTypeConversion2_j,
                         AEBS_TOS_U.Road_Info.lineData[1].lineSegs[2].
                         lineSegStart, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[2].lineSegEnd, AEBS_TOS_U.Road_Info.lineData
                         [1].lineSegs[2].lineC0, AEBS_TOS_U.Road_Info.lineData[1]
                         .lineSegs[2].lineC1, AEBS_TOS_U.Road_Info.lineData[1].
                         lineSegs[2].lineC2, AEBS_TOS_U.Road_Info.lineData[1].
                         lineSegs[2].lineC3, &rtb_Valid_o, &rtb_Line_start_g,
                         &rtb_Line_end_a, &rtb_C0, &rtb_C1, &rtb_C2, &rtb_C3);

      /* If: '<S14>/If' incorporates:
       *  MATLAB Function: '<S20>/MATLAB Function'
       */
      if (rtb_DataTypeConversion_j > 0) {
        /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        /* ForEachSliceAssignment generated from: '<S6>/objLatDist2LaneCenter' incorporates:
         *  Constant: '<S19>/Constant'
         *  SignalConversion generated from: '<S19>/objLatDist2LaneCenter'
         */
        rtb_ImpAsg_InsertedFor_objLatDi[ForEach_itr_d] = 0.0F;

        /* ForEachSliceAssignment generated from: '<S6>/objLatDist2EgoCenter' incorporates:
         *  Constant: '<S19>/Constant1'
         *  SignalConversion generated from: '<S19>/objLatDist2EgoCenter'
         */
        rtb_ImpAsg_InsertedFor_objLat_i[ForEach_itr_d] = 0.0F;

        /* ForEachSliceAssignment generated from: '<S6>/objPosition' incorporates:
         *  Constant: '<S19>/Constant2'
         *  SignalConversion generated from: '<S19>/objPosition'
         */
        rtb_ImpAsg_InsertedFor_objPosit[ForEach_itr_d] = ((uint8_T)0U);

        /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S20>/Action Port'
         */
        if (rtb_Valid_g && rtb_Valid_o) {
          /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S8>/Index Vector8'
           */
          dxMin_Left = AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d];
          dxMin_Left = (((rtb_C3_b + rtb_C3) * 0.5F * (dxMin_Left *
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d]) + (rtb_C2_i +
            rtb_C2) * 0.5F * dxMin_Left) + (rtb_C1_e + rtb_C1) * 0.5F *
                        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d]) +
            (rtb_Switch_aq + rtb_C0) * 0.5F;

          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2LaneCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2LaneCenter'
           */
          rtb_ImpAsg_InsertedFor_objLatDi[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d] - dxMin_Left;

          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2EgoCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2EgoCenter'
           */
          rtb_ImpAsg_InsertedFor_objLat_i[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d];

          /* ForEachSliceAssignment generated from: '<S6>/objPosition' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector8'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objPosition'
           */
          rtb_ImpAsg_InsertedFor_objPosit[ForEach_itr_d] =
            AEBS_TOS_func_Calculate
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d],
             AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d], dxMin_Left);
        } else if (rtb_Valid_g && (!rtb_Valid_o)) {
          /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S8>/Index Vector8'
           */
          dxMin_Left = AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d];
          dxMin_Left = (dxMin_Left *
                        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
                        rtb_C3_b + dxMin_Left * rtb_C2_i) + rtb_C1_e *
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d];

          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2LaneCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2LaneCenter'
           */
          rtb_ImpAsg_InsertedFor_objLatDi[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d] - dxMin_Left;

          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2EgoCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2EgoCenter'
           */
          rtb_ImpAsg_InsertedFor_objLat_i[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d];

          /* ForEachSliceAssignment generated from: '<S6>/objPosition' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector8'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objPosition'
           */
          rtb_ImpAsg_InsertedFor_objPosit[ForEach_itr_d] =
            AEBS_TOS_func_Calculate
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d],
             AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d], dxMin_Left);
        } else if ((!rtb_Valid_g) && rtb_Valid_o) {
          /* MATLAB Function: '<S20>/MATLAB Function' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MultiPortSwitch: '<S8>/Index Vector8'
           */
          dxMin_Left = (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
                        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
                        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
                        rtb_C3 +
                        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
                        AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d] *
                        rtb_C2) + rtb_C1 *
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d];

          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2LaneCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2LaneCenter'
           */
          rtb_ImpAsg_InsertedFor_objLatDi[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d] - dxMin_Left;

          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2EgoCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2EgoCenter'
           */
          rtb_ImpAsg_InsertedFor_objLat_i[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d];

          /* ForEachSliceAssignment generated from: '<S6>/objPosition' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector8'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objPosition'
           */
          rtb_ImpAsg_InsertedFor_objPosit[ForEach_itr_d] =
            AEBS_TOS_func_Calculate
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d],
             AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d], dxMin_Left);
        } else {
          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2LaneCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2LaneCenter'
           */
          rtb_ImpAsg_InsertedFor_objLatDi[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d];

          /* ForEachSliceAssignment generated from: '<S6>/objLatDist2EgoCenter' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objLatDist2EgoCenter'
           */
          rtb_ImpAsg_InsertedFor_objLat_i[ForEach_itr_d] =
            AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d];

          /* ForEachSliceAssignment generated from: '<S6>/objPosition' incorporates:
           *  Inport: '<Root>/Fus_TargetBus'
           *  MATLAB Function: '<S20>/MATLAB Function'
           *  MultiPortSwitch: '<S8>/Index Vector8'
           *  MultiPortSwitch: '<S8>/Index Vector9'
           *  SignalConversion generated from: '<S20>/objPosition'
           */
          rtb_ImpAsg_InsertedFor_objPosit[ForEach_itr_d] =
            AEBS_TOS_func_Calculate
            (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d],
             AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d], 0.0F);
        }

        /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */
      }

      /* End of If: '<S14>/If' */

      /* Switch: '<S10>/Switch' incorporates:
       *  Abs: '<S10>/Abs'
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector8'
       */
      rtb_Switch_aq = fabsf(AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d]);

      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S12>/Constant'
       *  RelationalOperator: '<S12>/Compare'
       */
      if (rtb_Switch_aq <= 0.001F) {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S10>/Constant4'
         */
        rtb_Switch_aq = 0.001F;
      } else {
        /* Switch: '<S10>/Switch' incorporates:
         *  Inport: '<Root>/Fus_TargetBus'
         *  MultiPortSwitch: '<S8>/Index Vector8'
         */
        rtb_Switch_aq = AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosX_s[ForEach_itr_d];
      }

      /* End of Switch: '<S10>/Switch' */

      /* ForEachSliceAssignment generated from: '<S6>/vyRelStd' incorporates:
       *  Constant: '<S10>/Constant1'
       */
      rtb_ImpAsg_InsertedFor_vyRelStd[ForEach_itr_d] = 0.0F;

      /* ForEachSliceAssignment generated from: '<S6>/vxRelStd' incorporates:
       *  Constant: '<S10>/Constant'
       */
      rtb_ImpAsg_InsertedFor_vxRelStd[ForEach_itr_d] = 0.0F;

      /* ForEachSliceAssignment generated from: '<S6>/azimuthAngleStd' incorporates:
       *  Constant: '<S10>/Constant5'
       */
      rtb_ImpAsg_InsertedFor_azimuthA[ForEach_itr_d] = 0.0F;

      /* ForEachSliceAssignment generated from: '<S6>/ayRelStd' incorporates:
       *  Constant: '<S10>/Constant3'
       */
      rtb_ImpAsg_InsertedFor_ayRelStd[ForEach_itr_d] = 0.0F;

      /* ForEachSliceAssignment generated from: '<S6>/azimuthAngle' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector9'
       *  Product: '<S10>/Divide'
       *  Trigonometry: '<S10>/Atan'
       */
      rtb_ImpAsg_InsertedFor_azimut_f[ForEach_itr_d] = atanf
        (AEBS_TOS_U.Fus_TargetBus.Cam_ObsPosY_s[ForEach_itr_d] / rtb_Switch_aq);

      /* ForEachSliceAssignment generated from: '<S6>/vyRel' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector12'
       */
      rtb_ImpAsg_InsertedFor_vyRel_at[ForEach_itr_d] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelY_s[ForEach_itr_d];

      /* ForEachSliceAssignment generated from: '<S6>/vxRel' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector13'
       */
      rtb_ImpAsg_InsertedFor_vxRel_at[ForEach_itr_d] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsVelX_s[ForEach_itr_d];

      /* ForEachSliceAssignment generated from: '<S6>/ayRel' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector10'
       */
      rtb_ImpAsg_InsertedFor_ayRel_at[ForEach_itr_d] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsAccY_s[ForEach_itr_d];

      /* ForEachSliceAssignment generated from: '<S6>/axRel' incorporates:
       *  Inport: '<Root>/Fus_TargetBus'
       *  MultiPortSwitch: '<S8>/Index Vector11'
       */
      rtb_ImpAsg_InsertedFor_axRel_at[ForEach_itr_d] =
        AEBS_TOS_U.Fus_TargetBus.Cam_ObsAccX_s[ForEach_itr_d];

      /* ForEachSliceAssignment generated from: '<S6>/axRelStd' incorporates:
       *  Constant: '<S10>/Constant2'
       */
      rtb_ImpAsg_InsertedFor_axRelStd[ForEach_itr_d] = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S5>/For Each Subsystem' */

    /* Outport: '<Root>/Objrebuild_Struct' incorporates:
     *  BusCreator: '<S7>/Bus Creator'
     */
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.vxRel[0],
           &rtb_ImpAsg_InsertedFor_vxRel_at[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.vyRel[0],
           &rtb_ImpAsg_InsertedFor_vyRel_at[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.vxRelStd[0],
           &rtb_ImpAsg_InsertedFor_vxRelStd[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.vyRelStd[0],
           &rtb_ImpAsg_InsertedFor_vyRelStd[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.axRel[0],
           &rtb_ImpAsg_InsertedFor_axRel_at[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.ayRel[0],
           &rtb_ImpAsg_InsertedFor_ayRel_at[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.axRelStd[0],
           &rtb_ImpAsg_InsertedFor_axRelStd[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.ayRelStd[0],
           &rtb_ImpAsg_InsertedFor_ayRelStd[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.azimuthAngle[0],
           &rtb_ImpAsg_InsertedFor_azimut_f[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.azimuthAngleStd[0],
           &rtb_ImpAsg_InsertedFor_azimuthA[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.objLatDist2LaneCenter[0],
           &rtb_ImpAsg_InsertedFor_objLatDi[0], sizeof(real32_T) << 5U);
    memcpy(&AEBS_TOS_Y.Objrebuild_Struct.objLatDist2EgoCenter[0],
           &rtb_ImpAsg_InsertedFor_objLat_i[0], sizeof(real32_T) << 5U);

    /* End of Outputs for SubSystem: '<S3>/TAObjInfoCalc' */
    for (s647_iter = 0; s647_iter < 32; s647_iter++) {
      /* Outputs for Atomic SubSystem: '<S3>/TAObjInfoCalc' */
      AEBS_TOS_Y.Objrebuild_Struct.objPosition[s647_iter] =
        rtb_ImpAsg_InsertedFor_objPosit[s647_iter];

      /* End of Outputs for SubSystem: '<S3>/TAObjInfoCalc' */
    }

    /* End of Outport: '<Root>/Objrebuild_Struct' */
  }

  {
    int_T idxDelay;

    /* Update for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
    /* Update for Iterator SubSystem: '<S449>/For Each Subsystem' */
    for (ForEach_itr = 0; ForEach_itr < 32; ForEach_itr++) {
      /* Update for UnitDelay: '<S454>/Unit Delay2' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].UnitDelay2_DSTATE =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsID_u8;

      /* Update for Delay: '<S462>/Delay' */
      for (idxDelay = 0; idxDelay < 49; idxDelay++) {
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE[idxDelay] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE[idxDelay + 1];
      }

      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE[49] =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

      /* End of Update for Delay: '<S462>/Delay' */

      /* Update for If: '<S468>/If' */
      if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem == 1) {
        /* Update for IfAction SubSystem: '<S468>/dx_charge' incorporates:
         *  ActionPort: '<S489>/Action Port'
         */
        /* Update for Delay: '<S496>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_a[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_a[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_a[1] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;

        /* Update for Delay: '<S496>/Delay1' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_e[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_e[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_e[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_e[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_e[2] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;

        /* Update for Delay: '<S496>/Delay2' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_a[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_a[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_a[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_a[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_a[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_a[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_a[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;

        /* Update for Delay: '<S496>/Delay3' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;

        /* Update for Delay: '<S500>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_o[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;

        /* Update for Delay: '<S501>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_j[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_j[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_j[1] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S501>/Delay1' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_n[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_n[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_n[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_n[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_n[2] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S501>/Delay2' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_o[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_o[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_o[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_o[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_o[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_o[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_o[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S501>/Delay3' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_b[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* End of Update for SubSystem: '<S468>/dx_charge' */
      }

      /* End of Update for If: '<S468>/If' */

      /* Update for If: '<S473>/If' */
      if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_b == 1) {
        /* Update for IfAction SubSystem: '<S473>/Subsystem3' incorporates:
         *  ActionPort: '<S547>/Action Port'
         */
        /* Update for S-Function (sfix_udelay): '<S559>/Tapped Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S558>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_b[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Add1;

        /* Update for UnitDelay: '<S556>/Unit Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].UnitDelay_DSTATE_jb =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S556>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_og[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_og[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_og[1] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S556>/Delay1' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_o[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_o[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_o[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_o[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_o[2] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S556>/Delay2' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_g[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* Update for Delay: '<S556>/Delay3' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_c[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelX_s;

        /* End of Update for SubSystem: '<S473>/Subsystem3' */
      }

      /* End of Update for If: '<S473>/If' */

      /* Update for If: '<S474>/If' */
      if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_c == 1) {
        /* Update for IfAction SubSystem: '<S474>/Subsystem3' incorporates:
         *  ActionPort: '<S563>/Action Port'
         */
        /* Update for S-Function (sfix_udelay): '<S576>/Tapped Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* Update for Delay: '<S575>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_jk[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

        /* Update for UnitDelay: '<S573>/Unit Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].UnitDelay_DSTATE_jn =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* Update for Delay: '<S573>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_h[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_h[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_h[1] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* Update for Delay: '<S573>/Delay1' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_nl[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_nl[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_nl[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_nl[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_nl[2] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* Update for Delay: '<S573>/Delay2' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_e[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_e[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_e[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_e[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_e[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_e[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_e[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* Update for Delay: '<S573>/Delay3' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_cw[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* End of Update for SubSystem: '<S474>/Subsystem3' */
      }

      /* End of Update for If: '<S474>/If' */

      /* Update for If: '<S469>/If' */
      if (AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_m == 1) {
        /* Update for IfAction SubSystem: '<S469>/dy_charge' incorporates:
         *  ActionPort: '<S505>/Action Port'
         */
        /* Update for S-Function (sfix_udelay): '<S517>/Tapped Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelY_s;

        /* Update for Delay: '<S516>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_g[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

        /* Update for Delay: '<S513>/Delay' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_e[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_e[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_e[1] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

        /* Update for Delay: '<S513>/Delay1' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_g[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_g[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_g[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_g[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_g[2] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

        /* Update for Delay: '<S513>/Delay2' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_l[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_l[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_l[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_l[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_l[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_l[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE_l[3] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

        /* Update for Delay: '<S513>/Delay3' */
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[0] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[1];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[1] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[2];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[2] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[3];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[3] =
          AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[4];
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay3_DSTATE_l[4] =
          AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsPosY_s;

        /* End of Update for SubSystem: '<S469>/dy_charge' */
      }

      /* End of Update for If: '<S469>/If' */

      /* Update for Delay: '<S483>/Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_m[0] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_m[1];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_m[1] =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge;

      /* Update for Delay: '<S482>/Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_c[0] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_c[1];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_c[1] =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].Merge_c;

      /* Update for UnitDelay: '<S590>/Unit Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].UnitDelay_DSTATE =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s;

      /* Update for Delay: '<S590>/Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_d[0] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_d[1];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_d[1] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_d[2];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay_DSTATE_d[2] =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s;

      /* Update for Delay: '<S590>/Delay1' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_k[0] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_k[1];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_k[1] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_k[2];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_k[2] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_k[3];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay1_DSTATE_k[3] =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s;

      /* Update for Delay: '<S590>/Delay2' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[0] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[1];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[1] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[2];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[2] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[3];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[3] =
        AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[4];
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].Delay2_DSTATE[4] =
        AEBS_TOS_B.CoreSubsys_pn[ForEach_itr].ObsVelYAbs_s;
    }

    /* End of Update for SubSystem: '<S449>/For Each Subsystem' */
    /* End of Update for SubSystem: '<S445>/TAObjInfoCalc' */

    /* Update for Iterator SubSystem: '<S28>/Data_precess' */
    for (ForEach_itr_i = 0; ForEach_itr_i < 32; ForEach_itr_i++) {
      /* Update for If: '<S145>/If' */
      if (AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_a == 1) {
        /* Update for IfAction SubSystem: '<S145>/CalculateTTRAndTTM_else' incorporates:
         *  ActionPort: '<S208>/Action Port'
         */
        /* Update for Atomic SubSystem: '<S211>/CalculateTTI' */
        /* Update for Atomic SubSystem: '<S216>/HostAndObjectMoving' */
        /* Update for Delay: '<S226>/Delay' */
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[0] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[1];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[1] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[2];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[2] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[3];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[3] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[4];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_f[4] =
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistance;

        /* End of Update for SubSystem: '<S216>/HostAndObjectMoving' */

        /* Update for Atomic SubSystem: '<S216>/StationaryHost' */
        /* Update for Delay: '<S258>/Delay' */
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[0] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[1];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[1] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[2];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[2] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[3];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[3] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[4];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_h[4] =
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistanceStationaryHost;

        /* End of Update for SubSystem: '<S216>/StationaryHost' */

        /* Update for Atomic SubSystem: '<S216>/StationaryObject' */
        /* Update for Delay: '<S290>/Delay' */
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[0] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[1];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[1] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[2];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[2] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[3];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[3] =
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[4];
        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_e[4] =
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].EdgeDistanceStationaryObject;

        /* End of Update for SubSystem: '<S216>/StationaryObject' */
        /* End of Update for SubSystem: '<S211>/CalculateTTI' */
        /* End of Update for SubSystem: '<S145>/CalculateTTRAndTTM_else' */
      }

      /* End of Update for If: '<S145>/If' */

      /* Update for If: '<S144>/If' */
      if (AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_g4 == 1) {
        /* Update for IfAction SubSystem: '<S144>/BoudingBoxCalculate_Else' incorporates:
         *  ActionPort: '<S159>/Action Port'
         */
        /* Update for Delay: '<S187>/Delay' */
        for (idxDelay = 0; idxDelay < 999; idxDelay++) {
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_p[idxDelay] =
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_p[idxDelay + 1];
        }

        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay_DSTATE_p[999] =
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].x;

        /* End of Update for Delay: '<S187>/Delay' */

        /* Update for Delay: '<S187>/Delay1' */
        for (idxDelay = 0; idxDelay < 999; idxDelay++) {
          AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay1_DSTATE_l[idxDelay] =
            AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay1_DSTATE_l[idxDelay + 1];
        }

        AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].Delay1_DSTATE_l[999] =
          AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].y;

        /* End of Update for Delay: '<S187>/Delay1' */
        /* End of Update for SubSystem: '<S144>/BoudingBoxCalculate_Else' */
      }

      /* End of Update for If: '<S144>/If' */
    }

    /* End of Update for SubSystem: '<S28>/Data_precess' */

    /* Update for UnitDelay: '<S447>/Unit Delay' incorporates:
     *  Inport: '<Root>/ACC_Info'
     */
    AEBS_TOS_DW.UnitDelay_DSTATE_p = AEBS_TOS_U.ACC_Info.ACC_TargetID;

    /* Update for UnitDelay: '<S674>/Unit Delay2' */
    AEBS_TOS_DW.UnitDelay2_DSTATE = rtb_Add6_o;

    /* Update for UnitDelay: '<S674>/Unit Delay3' */
    AEBS_TOS_DW.UnitDelay3_DSTATE = rtb_Add3_p;

    /* Update for UnitDelay: '<S672>/Unit Delay' */
    AEBS_TOS_DW.UnitDelay_DSTATE_d3 = rtb_Merge.objID;

    /* Update for UnitDelay: '<S672>/Unit Delay1' */
    AEBS_TOS_DW.UnitDelay1_DSTATE = rtb_Merge;

    /* Update for UnitDelay: '<S672>/Unit Delay4' */
    AEBS_TOS_DW.UnitDelay4_DSTATE = rtb_UnitDelay1;

    /* Update for UnitDelay: '<S672>/Unit Delay6' */
    AEBS_TOS_DW.UnitDelay6_DSTATE_o = rtb_UnitDelay_di;

    /* Update for UnitDelay: '<S672>/Unit Delay5' */
    AEBS_TOS_DW.UnitDelay5_DSTATE = rtb_UnitDelay4;

    /* Update for UnitDelay: '<S672>/Unit Delay7' */
    AEBS_TOS_DW.UnitDelay7_DSTATE_d = rtb_UnitDelay6;

    /* Update for UnitDelay: '<S673>/Unit Delay1' */
    AEBS_TOS_DW.UnitDelay1_DSTATE_g = rtb_Merge_o;

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    AEBS_TOS_DW.UnitDelay_DSTATE_k = rtb_Merge_o.objID;

    /* Update for UnitDelay: '<S673>/Unit Delay4' */
    AEBS_TOS_DW.UnitDelay4_DSTATE_l = rtb_UnitDelay1_j;

    /* Update for UnitDelay: '<S673>/Unit Delay6' */
    AEBS_TOS_DW.UnitDelay6_DSTATE_b = rtb_UnitDelay_jo;

    /* Update for UnitDelay: '<S673>/Unit Delay5' */
    AEBS_TOS_DW.UnitDelay5_DSTATE_m = rtb_UnitDelay4_o;

    /* Update for UnitDelay: '<S673>/Unit Delay7' */
    AEBS_TOS_DW.UnitDelay7_DSTATE_n = rtb_UnitDelay6_k;
  }
}

/* Model initialize function */
void AEBS_TOS_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;
    int32_T ForEach_itr_i;
    real_T rtb_Delay_Trig;
    real_T rtb_Delay_Trig_e;
    real_T rtb_Delay_Trig_gb;
    real_T rtb_Delay_Trig_hq;
    real_T rtb_Delay_Trig_j;
    real_T rtb_Delay_Trig_n;
    real_T rtb_Delay_Trig_n1;
    real_T rtb_Delay_Trig_p;
    real_T rtb_Flag;
    real_T rtb_Flag_f;
    real_T rtb_Flag_m;
    real_T rtb_Flag_p;

    /* SystemInitialize for Atomic SubSystem: '<S445>/TAObjInfoCalc' */
    /* SystemInitialize for Iterator SubSystem: '<S449>/For Each Subsystem' */
    for (ForEach_itr = 0; ForEach_itr < 32; ForEach_itr++) {
      /* Start for If: '<S468>/If' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem = -1;

      /* Start for If: '<S473>/If' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_b = -1;

      /* Start for If: '<S474>/If' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_c = -1;

      /* Start for If: '<S469>/If' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].If_ActiveSubsystem_m = -1;

      /* SystemInitialize for IfAction SubSystem: '<S473>/Subsystem3' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[0] = 0.0F;
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[1] = 0.0F;
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[2] = 0.0F;
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[3] = 0.0F;

      /* InitializeConditions for S-Function (sfix_udelay): '<S559>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[0] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S473>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S474>/Subsystem3' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[0] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S474>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S473>/Subsystem3' */
      /* InitializeConditions for S-Function (sfix_udelay): '<S559>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[1] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S473>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S474>/Subsystem3' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[1] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S474>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S473>/Subsystem3' */
      /* InitializeConditions for S-Function (sfix_udelay): '<S559>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[2] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S473>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S474>/Subsystem3' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[2] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S474>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S473>/Subsystem3' */
      /* InitializeConditions for S-Function (sfix_udelay): '<S559>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_m[3] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S473>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S474>/Subsystem3' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[3] = 0.0F;

      /* InitializeConditions for S-Function (sfix_udelay): '<S576>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[0] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S474>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S469>/dy_charge' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[0] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S469>/dy_charge' */

      /* SystemInitialize for IfAction SubSystem: '<S474>/Subsystem3' */
      /* InitializeConditions for S-Function (sfix_udelay): '<S576>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[1] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S474>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S469>/dy_charge' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[1] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S469>/dy_charge' */

      /* SystemInitialize for IfAction SubSystem: '<S474>/Subsystem3' */
      /* InitializeConditions for S-Function (sfix_udelay): '<S576>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[2] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S474>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S469>/dy_charge' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[2] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S469>/dy_charge' */

      /* SystemInitialize for IfAction SubSystem: '<S474>/Subsystem3' */
      /* InitializeConditions for S-Function (sfix_udelay): '<S576>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X_l[3] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S474>/Subsystem3' */

      /* SystemInitialize for IfAction SubSystem: '<S469>/dy_charge' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[3] = 0.0F;

      /* InitializeConditions for S-Function (sfix_udelay): '<S517>/Tapped Delay' */
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[0] = 0.0F;
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[1] = 0.0F;
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[2] = 0.0F;
      AEBS_TOS_DW.CoreSubsys_pn[ForEach_itr].TappedDelay_X[3] = 0.0F;

      /* End of SystemInitialize for SubSystem: '<S469>/dy_charge' */
    }

    /* End of SystemInitialize for SubSystem: '<S449>/For Each Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S445>/TAObjInfoCalc' */

    /* SystemInitialize for Iterator SubSystem: '<S28>/Data_precess' */
    for (ForEach_itr_i = 0; ForEach_itr_i < 32; ForEach_itr_i++) {
      /* Start for If: '<S145>/If' */
      AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_a = -1;

      /* Start for If: '<S144>/If' */
      AEBS_TOS_DW.CoreSubsys_p[ForEach_itr_i].If_ActiveSubsystem_g4 = -1;

      /* SystemInitialize for Chart: '<S37>/CollisionProbCalcFlow' incorporates:
       *  SubSystem: '<S37>/CollisionProbCalc'
       */
      /* SystemInitialize for Merge: '<S41>/Merge' */
      AEBS_TOS_B.CoreSubsys_p[ForEach_itr_i].Merge = false;
    }

    /* End of SystemInitialize for SubSystem: '<S28>/Data_precess' */

    /* SystemInitialize for Iterator SubSystem: '<S2>/Target_Selection' */
    /* SystemInitialize for IfAction SubSystem: '<S681>/If Action Subsystem' */
    /* SystemInitialize for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Left' */
    /* SystemInitialize for Chart: '<S717>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig);

    /* SystemInitialize for Chart: '<S718>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig_j);

    /* SystemInitialize for Chart: '<S711>/Hysteresis' */
    AEBS_TOS_Hysteresis_Init(&rtb_Flag);

    /* End of SystemInitialize for SubSystem: '<S699>/If Action Threat_Assessment_Left' */

    /* SystemInitialize for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Right' */
    /* SystemInitialize for Chart: '<S727>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig_n);

    /* SystemInitialize for Chart: '<S728>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig_e);

    /* SystemInitialize for Chart: '<S713>/Hysteresis' */
    AEBS_TOS_Hysteresis_Init(&rtb_Flag_f);

    /* End of SystemInitialize for SubSystem: '<S699>/If Action Threat_Assessment_Right' */

    /* SystemInitialize for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Left1' */
    /* SystemInitialize for Chart: '<S722>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig_p);

    /* SystemInitialize for Chart: '<S723>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig_n1);

    /* SystemInitialize for Chart: '<S712>/Hysteresis' */
    AEBS_TOS_Hysteresis_Init(&rtb_Flag_p);

    /* End of SystemInitialize for SubSystem: '<S699>/If Action Threat_Assessment_Left1' */

    /* SystemInitialize for IfAction SubSystem: '<S699>/If Action Threat_Assessment_Right1' */
    /* SystemInitialize for Chart: '<S732>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig_gb);

    /* SystemInitialize for Chart: '<S733>/Chart' */
    AEBS_TOS_Chart_Init(&rtb_Delay_Trig_hq);

    /* SystemInitialize for Chart: '<S714>/Hysteresis' */
    AEBS_TOS_Hysteresis_Init(&rtb_Flag_m);

    /* End of SystemInitialize for SubSystem: '<S699>/If Action Threat_Assessment_Right1' */
    /* End of SystemInitialize for SubSystem: '<S681>/If Action Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S2>/Target_Selection' */
  }
}

/* Model terminate function */
void AEBS_TOS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

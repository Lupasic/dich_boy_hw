/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: dichboy_full.h
 *
 * Code generated for Simulink model 'dichboy_full'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Oct 14 23:43:28 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_dichboy_full_h_
#define RTW_HEADER_dichboy_full_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef dichboy_full_COMMON_INCLUDES_
# define dichboy_full_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "driver_ev3.h"
#endif                                 /* dichboy_full_COMMON_INCLUDES_ */

#include "dichboy_full_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T dv0[7];
  real_T dv1[7];
  real_T dv2[7];
  real_T Gain_f[2];                    /* '<S9>/Gain' */
  real_T dv3[2];
} B_dichboy_full_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S4>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S4>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator2_DSTATE;/* '<S4>/Discrete-Time Integrator2' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S3>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTAT_e;/* '<S3>/Discrete-Time Integrator1' */
  real_T UD_DSTATE;                    /* '<S8>/UD' */
  real_T UD_DSTATE_n;                  /* '<S7>/UD' */
} DW_dichboy_full_T;

/* Parameters (auto storage) */
struct P_dichboy_full_T_ {
  real_T K[14];                        /* Variable: K
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T K_PWM;                        /* Variable: K_PWM
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T R;                            /* Variable: R
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T W;                            /* Variable: W
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S8>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S7>/UD'
                                          */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S4>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S4>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S4>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S4>/Discrete-Time Integrator1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T Speed_Value;                  /* Expression: 0
                                        * Referenced by: '<S1>/Speed'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real_T DiscreteTimeIntegrator2_gainval;/* Computed Parameter: DiscreteTimeIntegrator2_gainval
                                          * Referenced by: '<S4>/Discrete-Time Integrator2'
                                          */
  real_T DiscreteTimeIntegrator2_IC;   /* Expression: 0
                                        * Referenced by: '<S4>/Discrete-Time Integrator2'
                                        */
  real_T Turn_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Turn'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;/* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                                          * Referenced by: '<S3>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_g;  /* Expression: 0
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: pi/180
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/2
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T DiscreteTimeIntegrator1_gainv_k;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_k
                                          * Referenced by: '<S3>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC_g; /* Expression: 0
                                        * Referenced by: '<S3>/Discrete-Time Integrator1'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S8>/TSamp'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: pi/180
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T TSamp_WtEt_n;                 /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S7>/TSamp'
                                        */
  real_T Gain_Gain_e;                  /* Expression: -1
                                        * Referenced by: '<S9>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_dichboy_full_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_dichboy_full_T dichboy_full_P;

/* Block signals (auto storage) */
extern B_dichboy_full_T dichboy_full_B;

/* Block states (auto storage) */
extern DW_dichboy_full_T dichboy_full_DW;

/* Model entry point functions */
extern void dichboy_full_initialize(void);
extern void dichboy_full_step(void);
extern void dichboy_full_terminate(void);

/* Real-time Model object */
extern RT_MODEL_dichboy_full_T *const dichboy_full_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S7>/Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/Data Type Duplicate' : Unused code path elimination
 */

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
 * '<Root>' : 'dichboy_full'
 * '<S1>'   : 'dichboy_full/Controller'
 * '<S2>'   : 'dichboy_full/Plant'
 * '<S3>'   : 'dichboy_full/Controller/get_states'
 * '<S4>'   : 'dichboy_full/Controller/set_ref'
 * '<S5>'   : 'dichboy_full/Controller/get_states/Degrees to Radians'
 * '<S6>'   : 'dichboy_full/Controller/get_states/Degrees to Radians1'
 * '<S7>'   : 'dichboy_full/Controller/get_states/Discrete Derivative'
 * '<S8>'   : 'dichboy_full/Controller/get_states/Discrete Derivative1'
 * '<S9>'   : 'dichboy_full/Plant/EV3'
 * '<S10>'  : 'dichboy_full/Plant/State-space'
 * '<S11>'  : 'dichboy_full/Plant/EV3/Motor_left'
 * '<S12>'  : 'dichboy_full/Plant/EV3/Motor_right'
 * '<S13>'  : 'dichboy_full/Plant/State-space/Real_in'
 * '<S14>'  : 'dichboy_full/Plant/State-space/Real_out'
 * '<S15>'  : 'dichboy_full/Plant/State-space/get sensors'
 * '<S16>'  : 'dichboy_full/Plant/State-space/Real_in/Ideal_in'
 * '<S17>'  : 'dichboy_full/Plant/State-space/Real_in/Real_in'
 * '<S18>'  : 'dichboy_full/Plant/State-space/Real_out/Ideal_out'
 * '<S19>'  : 'dichboy_full/Plant/State-space/Real_out/Real_out'
 */
#endif                                 /* RTW_HEADER_dichboy_full_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

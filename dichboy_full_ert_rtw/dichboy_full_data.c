/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: dichboy_full_data.c
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

#include "dichboy_full.h"
#include "dichboy_full_private.h"

/* Block parameters (auto storage) */
P_dichboy_full_T dichboy_full_P = {
  /* Variable: K
   * Referenced by: '<S1>/Gain'
   */
  { -0.64644842480863951, -0.64644842480884357, -1.2264565981464004,
    -1.2264565981465378, -46.20197773438808, -46.201977734389125,
    -1.3546354326099348, -1.3546354326099648, -4.61741844655611,
    -4.6174184465562043, -0.68762295592911349, 0.68762295592927447,
    -0.13490207596442472, 0.1349020759644263 },

  /* Variable: K_PWM
   * Referenced by: '<S1>/Gain2'
   */
  8.087,

  /* Variable: R
   * Referenced by: '<S3>/Gain1'
   */
  0.027,

  /* Variable: W
   * Referenced by: '<S3>/Gain1'
   */
  0.143,

  /* Mask Parameter: DiscreteDerivative1_ICPrevScale
   * Referenced by: '<S8>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S7>/UD'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.003,

  /* Expression: 0
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S4>/Discrete-Time Integrator1'
   */
  0.003,

  /* Expression: 0
   * Referenced by: '<S4>/Discrete-Time Integrator1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Speed'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Constant3'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator2_gainval
   * Referenced by: '<S4>/Discrete-Time Integrator2'
   */
  0.003,

  /* Expression: 0
   * Referenced by: '<S4>/Discrete-Time Integrator2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Turn'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
   * Referenced by: '<S3>/Discrete-Time Integrator'
   */
  0.003,

  /* Expression: 0
   * Referenced by: '<S3>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S9>/Gain1'
   */
  -1.0,

  /* Expression: pi/180
   * Referenced by: '<S5>/Gain1'
   */
  0.017453292519943295,

  /* Expression: 1/2
   * Referenced by: '<S3>/Gain'
   */
  0.5,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainv_k
   * Referenced by: '<S3>/Discrete-Time Integrator1'
   */
  0.003,

  /* Expression: 0
   * Referenced by: '<S3>/Discrete-Time Integrator1'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S8>/TSamp'
   */
  333.33333333333331,

  /* Expression: pi/180
   * Referenced by: '<S6>/Gain1'
   */
  0.017453292519943295,

  /* Computed Parameter: TSamp_WtEt_n
   * Referenced by: '<S7>/TSamp'
   */
  333.33333333333331,

  /* Expression: -1
   * Referenced by: '<S9>/Gain'
   */
  -1.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

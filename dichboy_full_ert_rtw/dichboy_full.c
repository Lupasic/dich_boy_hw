/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: dichboy_full.c
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

/* Block signals (auto storage) */
B_dichboy_full_T dichboy_full_B;

/* Block states (auto storage) */
DW_dichboy_full_T dichboy_full_DW;

/* Real-time model */
RT_MODEL_dichboy_full_T dichboy_full_M_;
RT_MODEL_dichboy_full_T *const dichboy_full_M = &dichboy_full_M_;

/* Model step function */
void dichboy_full_step(void)
{
  int8_T tmp;
  int32_T i;
  int32_T i_0;
  real_T rtb_theta;
  real_T rtb_TSamp;
  real_T rtb_phi;
  real_T rtb_Gain1;
  real_T rtb_TSamp_n;

  /* S-Function (ev3_encoder): '<S9>/Encoder_left' */
  i = getEncoderValueNoReset(4U);

  /* S-Function (ev3_encoder): '<S9>/Encoder_right' */
  i_0 = getEncoderValueNoReset(1U);

  /* Gain: '<S5>/Gain1' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion'
   *  Gain: '<S9>/Gain1'
   *  S-Function (ev3_encoder): '<S9>/Encoder_left'
   *  S-Function (ev3_encoder): '<S9>/Encoder_right'
   */
  dichboy_full_B.Gain_f[0] = dichboy_full_P.Gain1_Gain * (real_T)i *
    dichboy_full_P.Gain1_Gain_k;
  dichboy_full_B.Gain_f[1] = dichboy_full_P.Gain1_Gain * (real_T)i_0 *
    dichboy_full_P.Gain1_Gain_k;

  /* Sum: '<S3>/Sum' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator1'
   *  Gain: '<S3>/Gain'
   *  Sum: '<S3>/Sum of Elements'
   */
  rtb_theta = (dichboy_full_B.Gain_f[0] + dichboy_full_B.Gain_f[1]) *
    dichboy_full_P.Gain_Gain + dichboy_full_DW.DiscreteTimeIntegrator1_DSTAT_e;

  /* SampleTimeMath: '<S8>/TSamp'
   *
   * About '<S8>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = rtb_theta * dichboy_full_P.TSamp_WtEt;

  /* S-Function (ev3_gyro_sensor): '<S9>/Gyro Sensor' */
  i_0 = getGyroSensorValue(2U);

  /* Gain: '<S6>/Gain1' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion1'
   *  S-Function (ev3_gyro_sensor): '<S9>/Gyro Sensor'
   */
  rtb_Gain1 = dichboy_full_P.Gain1_Gain_p * (real_T)i_0;

  /* Gain: '<S3>/Gain1' incorporates:
   *  Sum: '<S3>/Add'
   */
  rtb_phi = dichboy_full_P.R / dichboy_full_P.W * (dichboy_full_B.Gain_f[1] -
    dichboy_full_B.Gain_f[0]);

  /* SampleTimeMath: '<S7>/TSamp'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_n = rtb_phi * dichboy_full_P.TSamp_WtEt_n;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Speed'
   *  Constant: '<S1>/Turn'
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator1'
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator1'
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator2'
   *  Gain: '<S1>/Gain'
   *  Sum: '<S7>/Diff'
   *  Sum: '<S8>/Diff'
   *  UnitDelay: '<S7>/UD'
   *  UnitDelay: '<S8>/UD'
   *
   * Block description for '<S7>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S8>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   *
   * Block description for '<S8>/UD':
   *
   *  Store in Global RAM
   */
  dichboy_full_B.dv0[0] = dichboy_full_DW.DiscreteTimeIntegrator_DSTATE;
  dichboy_full_B.dv0[1] = dichboy_full_DW.DiscreteTimeIntegrator1_DSTATE;
  dichboy_full_B.dv0[2] = dichboy_full_P.Constant2_Value;
  dichboy_full_B.dv0[3] = dichboy_full_P.Speed_Value;
  dichboy_full_B.dv0[4] = dichboy_full_P.Constant3_Value;
  dichboy_full_B.dv0[5] = dichboy_full_DW.DiscreteTimeIntegrator2_DSTATE;
  dichboy_full_B.dv0[6] = dichboy_full_P.Turn_Value;
  dichboy_full_B.dv1[0] = dichboy_full_DW.DiscreteTimeIntegrator_DSTATE_c;
  dichboy_full_B.dv1[1] = rtb_theta;
  dichboy_full_B.dv1[2] = dichboy_full_DW.DiscreteTimeIntegrator1_DSTAT_e;
  dichboy_full_B.dv1[3] = rtb_TSamp - dichboy_full_DW.UD_DSTATE;
  dichboy_full_B.dv1[4] = rtb_Gain1;
  dichboy_full_B.dv1[5] = rtb_phi;
  dichboy_full_B.dv1[6] = rtb_TSamp_n - dichboy_full_DW.UD_DSTATE_n;
  for (i = 0; i < 7; i++) {
    dichboy_full_B.dv2[i] = dichboy_full_B.dv0[i] - dichboy_full_B.dv1[i];
  }

  /* End of Sum: '<S1>/Add' */
  for (i = 0; i < 2; i++) {
    /* Gain: '<S1>/Gain' incorporates:
     *  Gain: '<S1>/Gain2'
     */
    dichboy_full_B.dv3[i] = 0.0;
    for (i_0 = 0; i_0 < 7; i_0++) {
      dichboy_full_B.dv3[i] += dichboy_full_P.K[(i_0 << 1) + i] *
        dichboy_full_B.dv2[i_0];
    }

    /* Gain: '<S9>/Gain' incorporates:
     *  Gain: '<S1>/Gain2'
     */
    dichboy_full_B.Gain_f[i] = dichboy_full_P.K_PWM * dichboy_full_B.dv3[i] *
      dichboy_full_P.Gain_Gain_e;
  }

  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  rtb_phi = floor(dichboy_full_B.Gain_f[0]);
  if (rtb_phi < 128.0) {
    if (rtb_phi >= -128.0) {
      /* S-Function (ev3_motor): '<S11>/Motor' */
      tmp = (int8_T)rtb_phi;
    } else {
      /* S-Function (ev3_motor): '<S11>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S11>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S11>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S11>/Motor' */
  setMotor(&tmp, 4U, 2U);

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  rtb_phi = floor(dichboy_full_B.Gain_f[1]);
  if (rtb_phi < 128.0) {
    if (rtb_phi >= -128.0) {
      /* S-Function (ev3_motor): '<S12>/Motor' */
      tmp = (int8_T)rtb_phi;
    } else {
      /* S-Function (ev3_motor): '<S12>/Motor' */
      tmp = MIN_int8_T;
    }
  } else {
    /* S-Function (ev3_motor): '<S12>/Motor' */
    tmp = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S12>/Data Type Conversion' */

  /* S-Function (ev3_motor): '<S12>/Motor' */
  setMotor(&tmp, 1U, 2U);

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator1'
   */
  dichboy_full_DW.DiscreteTimeIntegrator_DSTATE +=
    dichboy_full_P.DiscreteTimeIntegrator_gainval *
    dichboy_full_DW.DiscreteTimeIntegrator1_DSTATE;

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S1>/Speed'
   */
  dichboy_full_DW.DiscreteTimeIntegrator1_DSTATE +=
    dichboy_full_P.DiscreteTimeIntegrator1_gainval * dichboy_full_P.Speed_Value;

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator2' incorporates:
   *  Constant: '<S1>/Turn'
   */
  dichboy_full_DW.DiscreteTimeIntegrator2_DSTATE +=
    dichboy_full_P.DiscreteTimeIntegrator2_gainval * dichboy_full_P.Turn_Value;

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  dichboy_full_DW.DiscreteTimeIntegrator_DSTATE_c +=
    dichboy_full_P.DiscreteTimeIntegrator_gainva_o * rtb_theta;

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator1' */
  dichboy_full_DW.DiscreteTimeIntegrator1_DSTAT_e +=
    dichboy_full_P.DiscreteTimeIntegrator1_gainv_k * rtb_Gain1;

  /* Update for UnitDelay: '<S8>/UD'
   *
   * Block description for '<S8>/UD':
   *
   *  Store in Global RAM
   */
  dichboy_full_DW.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S7>/UD'
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  dichboy_full_DW.UD_DSTATE_n = rtb_TSamp_n;
}

/* Model initialize function */
void dichboy_full_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(dichboy_full_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&dichboy_full_DW, 0,
                sizeof(DW_dichboy_full_T));

  /* Start for S-Function (ev3_encoder): '<S9>/Encoder_left' */
  initEncoder(4U);

  /* Start for S-Function (ev3_encoder): '<S9>/Encoder_right' */
  initEncoder(1U);

  /* Start for S-Function (ev3_gyro_sensor): '<S9>/Gyro Sensor' */
  initGyroSensor(2U);

  /* Start for S-Function (ev3_motor): '<S11>/Motor' */
  initMotor(4U);

  /* Start for S-Function (ev3_motor): '<S12>/Motor' */
  initMotor(1U);

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  dichboy_full_DW.DiscreteTimeIntegrator_DSTATE =
    dichboy_full_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator1' */
  dichboy_full_DW.DiscreteTimeIntegrator1_DSTATE =
    dichboy_full_P.DiscreteTimeIntegrator1_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator2' */
  dichboy_full_DW.DiscreteTimeIntegrator2_DSTATE =
    dichboy_full_P.DiscreteTimeIntegrator2_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  dichboy_full_DW.DiscreteTimeIntegrator_DSTATE_c =
    dichboy_full_P.DiscreteTimeIntegrator_IC_g;

  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator1' */
  dichboy_full_DW.DiscreteTimeIntegrator1_DSTAT_e =
    dichboy_full_P.DiscreteTimeIntegrator1_IC_g;

  /* InitializeConditions for UnitDelay: '<S8>/UD'
   *
   * Block description for '<S8>/UD':
   *
   *  Store in Global RAM
   */
  dichboy_full_DW.UD_DSTATE = dichboy_full_P.DiscreteDerivative1_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S7>/UD'
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  dichboy_full_DW.UD_DSTATE_n = dichboy_full_P.DiscreteDerivative_ICPrevScaled;
}

/* Model terminate function */
void dichboy_full_terminate(void)
{
  /* Terminate for S-Function (ev3_encoder): '<S9>/Encoder_left' */
  terminateEncoder(4U);

  /* Terminate for S-Function (ev3_encoder): '<S9>/Encoder_right' */
  terminateEncoder(1U);

  /* Terminate for S-Function (ev3_gyro_sensor): '<S9>/Gyro Sensor' */
  terminateGyroSensor(2U);

  /* Terminate for S-Function (ev3_motor): '<S11>/Motor' */
  terminateMotor(4U, 2U);

  /* Terminate for S-Function (ev3_motor): '<S12>/Motor' */
  terminateMotor(1U, 2U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

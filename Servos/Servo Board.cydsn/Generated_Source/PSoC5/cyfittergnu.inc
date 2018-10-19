/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* PWMA */
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB04_05_ACTL
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB04_05_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB04_05_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB04_05_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB04_05_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB04_05_MSK
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB04_05_MSK
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB04_05_MSK
.set PWMA_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB04_05_MSK
.set PWMA_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWMA_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWMA_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB04_ACTL
.set PWMA_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B0_UDB04_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB04_ST_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B0_UDB04_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB04_ST_CTL
.set PWMA_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWMA_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB04_MSK_ACTL
.set PWMA_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB04_MSK_ACTL
.set PWMA_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B0_UDB04_MSK
.set PWMA_PWMUDB_genblk7_dbctrlreg__0__MASK, 0x01
.set PWMA_PWMUDB_genblk7_dbctrlreg__0__POS, 0
.set PWMA_PWMUDB_genblk7_dbctrlreg__1__MASK, 0x02
.set PWMA_PWMUDB_genblk7_dbctrlreg__1__POS, 1
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB01_02_ACTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB01_02_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB01_02_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB01_02_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB01_02_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB01_02_MSK
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB01_02_MSK
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB01_02_MSK
.set PWMA_PWMUDB_genblk7_dbctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB01_02_MSK
.set PWMA_PWMUDB_genblk7_dbctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB01_ACTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__CONTROL_REG, CYREG_B0_UDB01_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__CONTROL_ST_REG, CYREG_B0_UDB01_ST_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__COUNT_REG, CYREG_B0_UDB01_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__COUNT_ST_REG, CYREG_B0_UDB01_ST_CTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__MASK, 0x03
.set PWMA_PWMUDB_genblk7_dbctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB01_MSK_ACTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB01_MSK_ACTL
.set PWMA_PWMUDB_genblk7_dbctrlreg__PERIOD_REG, CYREG_B0_UDB01_MSK
.set PWMA_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set PWMA_PWMUDB_genblk8_stsreg__0__POS, 0
.set PWMA_PWMUDB_genblk8_stsreg__1__MASK, 0x02
.set PWMA_PWMUDB_genblk8_stsreg__1__POS, 1
.set PWMA_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB05_06_ACTL
.set PWMA_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB05_06_ST
.set PWMA_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set PWMA_PWMUDB_genblk8_stsreg__2__POS, 2
.set PWMA_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set PWMA_PWMUDB_genblk8_stsreg__3__POS, 3
.set PWMA_PWMUDB_genblk8_stsreg__MASK, 0x0F
.set PWMA_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_B0_UDB05_MSK
.set PWMA_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB05_ACTL
.set PWMA_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_B0_UDB05_ST
.set PWMA_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_B0_UDB04_05_A0
.set PWMA_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_B0_UDB04_05_A1
.set PWMA_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_B0_UDB04_05_D0
.set PWMA_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_B0_UDB04_05_D1
.set PWMA_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB04_05_ACTL
.set PWMA_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_B0_UDB04_05_F0
.set PWMA_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_B0_UDB04_05_F1
.set PWMA_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_B0_UDB04_A0_A1
.set PWMA_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_B0_UDB04_A0
.set PWMA_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_B0_UDB04_A1
.set PWMA_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_B0_UDB04_D0_D1
.set PWMA_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_B0_UDB04_D0
.set PWMA_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_B0_UDB04_D1
.set PWMA_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB04_ACTL
.set PWMA_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_B0_UDB04_F0_F1
.set PWMA_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_B0_UDB04_F0
.set PWMA_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_B0_UDB04_F1
.set PWMA_PWMUDB_sP16_pwmdp_u0__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB04_MSK_ACTL
.set PWMA_PWMUDB_sP16_pwmdp_u0__PER_DP_AUX_CTL_REG, CYREG_B0_UDB04_MSK_ACTL
.set PWMA_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG, CYREG_B0_UDB05_06_A0
.set PWMA_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG, CYREG_B0_UDB05_06_A1
.set PWMA_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG, CYREG_B0_UDB05_06_D0
.set PWMA_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG, CYREG_B0_UDB05_06_D1
.set PWMA_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB05_06_ACTL
.set PWMA_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG, CYREG_B0_UDB05_06_F0
.set PWMA_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG, CYREG_B0_UDB05_06_F1
.set PWMA_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_B0_UDB05_A0_A1
.set PWMA_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_B0_UDB05_A0
.set PWMA_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_B0_UDB05_A1
.set PWMA_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_B0_UDB05_D0_D1
.set PWMA_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_B0_UDB05_D0
.set PWMA_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_B0_UDB05_D1
.set PWMA_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_B0_UDB05_ACTL
.set PWMA_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_B0_UDB05_F0_F1
.set PWMA_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_B0_UDB05_F0
.set PWMA_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_B0_UDB05_F1

/* PWMB */
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB03_04_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB03_04_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB03_04_MSK
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB03_04_MSK
.set PWMB_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB03_04_MSK
.set PWMB_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWMB_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWMB_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set PWMB_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B0_UDB03_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB03_ST_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B0_UDB03_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB03_ST_CTL
.set PWMB_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWMB_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set PWMB_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set PWMB_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B0_UDB03_MSK
.set PWMB_PWMUDB_genblk7_dbctrlreg__0__MASK, 0x01
.set PWMB_PWMUDB_genblk7_dbctrlreg__0__POS, 0
.set PWMB_PWMUDB_genblk7_dbctrlreg__1__MASK, 0x02
.set PWMB_PWMUDB_genblk7_dbctrlreg__1__POS, 1
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB00_01_ACTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB00_01_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB00_01_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB00_01_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB00_01_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB00_01_MSK
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB00_01_MSK
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB00_01_MSK
.set PWMB_PWMUDB_genblk7_dbctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB00_01_MSK
.set PWMB_PWMUDB_genblk7_dbctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB00_ACTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__CONTROL_REG, CYREG_B0_UDB00_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__CONTROL_ST_REG, CYREG_B0_UDB00_ST_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__COUNT_REG, CYREG_B0_UDB00_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__COUNT_ST_REG, CYREG_B0_UDB00_ST_CTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__MASK, 0x03
.set PWMB_PWMUDB_genblk7_dbctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB00_MSK_ACTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB00_MSK_ACTL
.set PWMB_PWMUDB_genblk7_dbctrlreg__PERIOD_REG, CYREG_B0_UDB00_MSK
.set PWMB_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set PWMB_PWMUDB_genblk8_stsreg__0__POS, 0
.set PWMB_PWMUDB_genblk8_stsreg__1__MASK, 0x02
.set PWMB_PWMUDB_genblk8_stsreg__1__POS, 1
.set PWMB_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set PWMB_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB03_04_ST
.set PWMB_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set PWMB_PWMUDB_genblk8_stsreg__2__POS, 2
.set PWMB_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set PWMB_PWMUDB_genblk8_stsreg__3__POS, 3
.set PWMB_PWMUDB_genblk8_stsreg__MASK, 0x0F
.set PWMB_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_B0_UDB03_MSK
.set PWMB_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set PWMB_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set PWMB_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set PWMB_PWMUDB_genblk8_stsreg__STATUS_CNT_REG, CYREG_B0_UDB03_ST_CTL
.set PWMB_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG, CYREG_B0_UDB03_ST_CTL
.set PWMB_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_B0_UDB03_ST
.set PWMB_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_B0_UDB02_03_A0
.set PWMB_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_B0_UDB02_03_A1
.set PWMB_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_B0_UDB02_03_D0
.set PWMB_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_B0_UDB02_03_D1
.set PWMB_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB02_03_ACTL
.set PWMB_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_B0_UDB02_03_F0
.set PWMB_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_B0_UDB02_03_F1
.set PWMB_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_B0_UDB02_A0_A1
.set PWMB_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_B0_UDB02_A0
.set PWMB_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_B0_UDB02_A1
.set PWMB_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_B0_UDB02_D0_D1
.set PWMB_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_B0_UDB02_D0
.set PWMB_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_B0_UDB02_D1
.set PWMB_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB02_ACTL
.set PWMB_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_B0_UDB02_F0_F1
.set PWMB_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_B0_UDB02_F0
.set PWMB_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_B0_UDB02_F1
.set PWMB_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG, CYREG_B0_UDB03_04_A0
.set PWMB_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG, CYREG_B0_UDB03_04_A1
.set PWMB_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG, CYREG_B0_UDB03_04_D0
.set PWMB_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG, CYREG_B0_UDB03_04_D1
.set PWMB_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set PWMB_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG, CYREG_B0_UDB03_04_F0
.set PWMB_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG, CYREG_B0_UDB03_04_F1
.set PWMB_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_B0_UDB03_A0_A1
.set PWMB_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_B0_UDB03_A0
.set PWMB_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_B0_UDB03_A1
.set PWMB_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_B0_UDB03_D0_D1
.set PWMB_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_B0_UDB03_D0
.set PWMB_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_B0_UDB03_D1
.set PWMB_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set PWMB_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_B0_UDB03_F0_F1
.set PWMB_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_B0_UDB03_F0
.set PWMB_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_B0_UDB03_F1
.set PWMB_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL
.set PWMB_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG, CYREG_B0_UDB03_MSK_ACTL

/* Servo1 */
.set Servo1__0__INTTYPE, CYREG_PICU0_INTTYPE1
.set Servo1__0__MASK, 0x02
.set Servo1__0__PC, CYREG_PRT0_PC1
.set Servo1__0__PORT, 0
.set Servo1__0__SHIFT, 1
.set Servo1__AG, CYREG_PRT0_AG
.set Servo1__AMUX, CYREG_PRT0_AMUX
.set Servo1__BIE, CYREG_PRT0_BIE
.set Servo1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Servo1__BYP, CYREG_PRT0_BYP
.set Servo1__CTL, CYREG_PRT0_CTL
.set Servo1__DM0, CYREG_PRT0_DM0
.set Servo1__DM1, CYREG_PRT0_DM1
.set Servo1__DM2, CYREG_PRT0_DM2
.set Servo1__DR, CYREG_PRT0_DR
.set Servo1__INP_DIS, CYREG_PRT0_INP_DIS
.set Servo1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Servo1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Servo1__LCD_EN, CYREG_PRT0_LCD_EN
.set Servo1__MASK, 0x02
.set Servo1__PORT, 0
.set Servo1__PRT, CYREG_PRT0_PRT
.set Servo1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Servo1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Servo1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Servo1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Servo1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Servo1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Servo1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Servo1__PS, CYREG_PRT0_PS
.set Servo1__SHIFT, 1
.set Servo1__SLW, CYREG_PRT0_SLW

/* Servo2 */
.set Servo2__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set Servo2__0__MASK, 0x01
.set Servo2__0__PC, CYREG_PRT0_PC0
.set Servo2__0__PORT, 0
.set Servo2__0__SHIFT, 0
.set Servo2__AG, CYREG_PRT0_AG
.set Servo2__AMUX, CYREG_PRT0_AMUX
.set Servo2__BIE, CYREG_PRT0_BIE
.set Servo2__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Servo2__BYP, CYREG_PRT0_BYP
.set Servo2__CTL, CYREG_PRT0_CTL
.set Servo2__DM0, CYREG_PRT0_DM0
.set Servo2__DM1, CYREG_PRT0_DM1
.set Servo2__DM2, CYREG_PRT0_DM2
.set Servo2__DR, CYREG_PRT0_DR
.set Servo2__INP_DIS, CYREG_PRT0_INP_DIS
.set Servo2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Servo2__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Servo2__LCD_EN, CYREG_PRT0_LCD_EN
.set Servo2__MASK, 0x01
.set Servo2__PORT, 0
.set Servo2__PRT, CYREG_PRT0_PRT
.set Servo2__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Servo2__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Servo2__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Servo2__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Servo2__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Servo2__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Servo2__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Servo2__PS, CYREG_PRT0_PS
.set Servo2__SHIFT, 0
.set Servo2__SLW, CYREG_PRT0_SLW

/* Servo3 */
.set Servo3__0__INTTYPE, CYREG_PICU0_INTTYPE2
.set Servo3__0__MASK, 0x04
.set Servo3__0__PC, CYREG_PRT0_PC2
.set Servo3__0__PORT, 0
.set Servo3__0__SHIFT, 2
.set Servo3__AG, CYREG_PRT0_AG
.set Servo3__AMUX, CYREG_PRT0_AMUX
.set Servo3__BIE, CYREG_PRT0_BIE
.set Servo3__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Servo3__BYP, CYREG_PRT0_BYP
.set Servo3__CTL, CYREG_PRT0_CTL
.set Servo3__DM0, CYREG_PRT0_DM0
.set Servo3__DM1, CYREG_PRT0_DM1
.set Servo3__DM2, CYREG_PRT0_DM2
.set Servo3__DR, CYREG_PRT0_DR
.set Servo3__INP_DIS, CYREG_PRT0_INP_DIS
.set Servo3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Servo3__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Servo3__LCD_EN, CYREG_PRT0_LCD_EN
.set Servo3__MASK, 0x04
.set Servo3__PORT, 0
.set Servo3__PRT, CYREG_PRT0_PRT
.set Servo3__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Servo3__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Servo3__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Servo3__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Servo3__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Servo3__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Servo3__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Servo3__PS, CYREG_PRT0_PS
.set Servo3__SHIFT, 2
.set Servo3__SLW, CYREG_PRT0_SLW

/* Servo4 */
.set Servo4__0__INTTYPE, CYREG_PICU0_INTTYPE3
.set Servo4__0__MASK, 0x08
.set Servo4__0__PC, CYREG_PRT0_PC3
.set Servo4__0__PORT, 0
.set Servo4__0__SHIFT, 3
.set Servo4__AG, CYREG_PRT0_AG
.set Servo4__AMUX, CYREG_PRT0_AMUX
.set Servo4__BIE, CYREG_PRT0_BIE
.set Servo4__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Servo4__BYP, CYREG_PRT0_BYP
.set Servo4__CTL, CYREG_PRT0_CTL
.set Servo4__DM0, CYREG_PRT0_DM0
.set Servo4__DM1, CYREG_PRT0_DM1
.set Servo4__DM2, CYREG_PRT0_DM2
.set Servo4__DR, CYREG_PRT0_DR
.set Servo4__INP_DIS, CYREG_PRT0_INP_DIS
.set Servo4__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Servo4__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Servo4__LCD_EN, CYREG_PRT0_LCD_EN
.set Servo4__MASK, 0x08
.set Servo4__PORT, 0
.set Servo4__PRT, CYREG_PRT0_PRT
.set Servo4__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Servo4__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Servo4__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Servo4__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Servo4__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Servo4__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Servo4__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Servo4__PS, CYREG_PRT0_PS
.set Servo4__SHIFT, 3
.set Servo4__SLW, CYREG_PRT0_SLW

/* ClkDrvr */
.set ClkDrvr__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set ClkDrvr__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set ClkDrvr__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set ClkDrvr__CFG2_SRC_SEL_MASK, 0x07
.set ClkDrvr__INDEX, 0x01
.set ClkDrvr__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ClkDrvr__PM_ACT_MSK, 0x02
.set ClkDrvr__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ClkDrvr__PM_STBY_MSK, 0x02
.set ClkDrvr_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ClkDrvr_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ClkDrvr_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ClkDrvr_1__CFG2_SRC_SEL_MASK, 0x07
.set ClkDrvr_1__INDEX, 0x00
.set ClkDrvr_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ClkDrvr_1__PM_ACT_MSK, 0x01
.set ClkDrvr_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ClkDrvr_1__PM_STBY_MSK, 0x01

/* USBUART */
.set USBUART_arb_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_arb_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_arb_int__INTC_MASK, 0x400000
.set USBUART_arb_int__INTC_NUMBER, 22
.set USBUART_arb_int__INTC_PRIOR_NUM, 7
.set USBUART_arb_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_22
.set USBUART_arb_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_arb_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_bus_reset__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_bus_reset__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_bus_reset__INTC_MASK, 0x800000
.set USBUART_bus_reset__INTC_NUMBER, 23
.set USBUART_bus_reset__INTC_PRIOR_NUM, 7
.set USBUART_bus_reset__INTC_PRIOR_REG, CYREG_NVIC_PRI_23
.set USBUART_bus_reset__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_bus_reset__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_Dm__0__INTTYPE, CYREG_PICU15_INTTYPE7
.set USBUART_Dm__0__MASK, 0x80
.set USBUART_Dm__0__PC, CYREG_IO_PC_PRT15_7_6_PC1
.set USBUART_Dm__0__PORT, 15
.set USBUART_Dm__0__SHIFT, 7
.set USBUART_Dm__AG, CYREG_PRT15_AG
.set USBUART_Dm__AMUX, CYREG_PRT15_AMUX
.set USBUART_Dm__BIE, CYREG_PRT15_BIE
.set USBUART_Dm__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBUART_Dm__BYP, CYREG_PRT15_BYP
.set USBUART_Dm__CTL, CYREG_PRT15_CTL
.set USBUART_Dm__DM0, CYREG_PRT15_DM0
.set USBUART_Dm__DM1, CYREG_PRT15_DM1
.set USBUART_Dm__DM2, CYREG_PRT15_DM2
.set USBUART_Dm__DR, CYREG_PRT15_DR
.set USBUART_Dm__INP_DIS, CYREG_PRT15_INP_DIS
.set USBUART_Dm__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set USBUART_Dm__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBUART_Dm__LCD_EN, CYREG_PRT15_LCD_EN
.set USBUART_Dm__MASK, 0x80
.set USBUART_Dm__PORT, 15
.set USBUART_Dm__PRT, CYREG_PRT15_PRT
.set USBUART_Dm__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBUART_Dm__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBUART_Dm__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBUART_Dm__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBUART_Dm__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBUART_Dm__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBUART_Dm__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBUART_Dm__PS, CYREG_PRT15_PS
.set USBUART_Dm__SHIFT, 7
.set USBUART_Dm__SLW, CYREG_PRT15_SLW
.set USBUART_Dp__0__INTTYPE, CYREG_PICU15_INTTYPE6
.set USBUART_Dp__0__MASK, 0x40
.set USBUART_Dp__0__PC, CYREG_IO_PC_PRT15_7_6_PC0
.set USBUART_Dp__0__PORT, 15
.set USBUART_Dp__0__SHIFT, 6
.set USBUART_Dp__AG, CYREG_PRT15_AG
.set USBUART_Dp__AMUX, CYREG_PRT15_AMUX
.set USBUART_Dp__BIE, CYREG_PRT15_BIE
.set USBUART_Dp__BIT_MASK, CYREG_PRT15_BIT_MASK
.set USBUART_Dp__BYP, CYREG_PRT15_BYP
.set USBUART_Dp__CTL, CYREG_PRT15_CTL
.set USBUART_Dp__DM0, CYREG_PRT15_DM0
.set USBUART_Dp__DM1, CYREG_PRT15_DM1
.set USBUART_Dp__DM2, CYREG_PRT15_DM2
.set USBUART_Dp__DR, CYREG_PRT15_DR
.set USBUART_Dp__INP_DIS, CYREG_PRT15_INP_DIS
.set USBUART_Dp__INTSTAT, CYREG_PICU15_INTSTAT
.set USBUART_Dp__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set USBUART_Dp__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set USBUART_Dp__LCD_EN, CYREG_PRT15_LCD_EN
.set USBUART_Dp__MASK, 0x40
.set USBUART_Dp__PORT, 15
.set USBUART_Dp__PRT, CYREG_PRT15_PRT
.set USBUART_Dp__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set USBUART_Dp__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set USBUART_Dp__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set USBUART_Dp__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set USBUART_Dp__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set USBUART_Dp__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set USBUART_Dp__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set USBUART_Dp__PS, CYREG_PRT15_PS
.set USBUART_Dp__SHIFT, 6
.set USBUART_Dp__SLW, CYREG_PRT15_SLW
.set USBUART_Dp__SNAP, CYREG_PICU_15_SNAP_15
.set USBUART_dp_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_dp_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_dp_int__INTC_MASK, 0x1000
.set USBUART_dp_int__INTC_NUMBER, 12
.set USBUART_dp_int__INTC_PRIOR_NUM, 7
.set USBUART_dp_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_12
.set USBUART_dp_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_dp_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_ep_0__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_ep_0__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_ep_0__INTC_MASK, 0x1000000
.set USBUART_ep_0__INTC_NUMBER, 24
.set USBUART_ep_0__INTC_PRIOR_NUM, 7
.set USBUART_ep_0__INTC_PRIOR_REG, CYREG_NVIC_PRI_24
.set USBUART_ep_0__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_ep_0__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_ep_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_ep_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_ep_1__INTC_MASK, 0x01
.set USBUART_ep_1__INTC_NUMBER, 0
.set USBUART_ep_1__INTC_PRIOR_NUM, 7
.set USBUART_ep_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set USBUART_ep_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_ep_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_ep_2__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_ep_2__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_ep_2__INTC_MASK, 0x02
.set USBUART_ep_2__INTC_NUMBER, 1
.set USBUART_ep_2__INTC_PRIOR_NUM, 7
.set USBUART_ep_2__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set USBUART_ep_2__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_ep_2__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_ep_3__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_ep_3__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_ep_3__INTC_MASK, 0x04
.set USBUART_ep_3__INTC_NUMBER, 2
.set USBUART_ep_3__INTC_PRIOR_NUM, 7
.set USBUART_ep_3__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set USBUART_ep_3__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_ep_3__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_ord_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_ord_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_ord_int__INTC_MASK, 0x2000000
.set USBUART_ord_int__INTC_NUMBER, 25
.set USBUART_ord_int__INTC_PRIOR_NUM, 7
.set USBUART_ord_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_25
.set USBUART_ord_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_ord_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_sof_int__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set USBUART_sof_int__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set USBUART_sof_int__INTC_MASK, 0x200000
.set USBUART_sof_int__INTC_NUMBER, 21
.set USBUART_sof_int__INTC_PRIOR_NUM, 7
.set USBUART_sof_int__INTC_PRIOR_REG, CYREG_NVIC_PRI_21
.set USBUART_sof_int__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set USBUART_sof_int__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set USBUART_USB__ARB_CFG, CYREG_USB_ARB_CFG
.set USBUART_USB__ARB_EP1_CFG, CYREG_USB_ARB_EP1_CFG
.set USBUART_USB__ARB_EP1_INT_EN, CYREG_USB_ARB_EP1_INT_EN
.set USBUART_USB__ARB_EP1_SR, CYREG_USB_ARB_EP1_SR
.set USBUART_USB__ARB_EP2_CFG, CYREG_USB_ARB_EP2_CFG
.set USBUART_USB__ARB_EP2_INT_EN, CYREG_USB_ARB_EP2_INT_EN
.set USBUART_USB__ARB_EP2_SR, CYREG_USB_ARB_EP2_SR
.set USBUART_USB__ARB_EP3_CFG, CYREG_USB_ARB_EP3_CFG
.set USBUART_USB__ARB_EP3_INT_EN, CYREG_USB_ARB_EP3_INT_EN
.set USBUART_USB__ARB_EP3_SR, CYREG_USB_ARB_EP3_SR
.set USBUART_USB__ARB_EP4_CFG, CYREG_USB_ARB_EP4_CFG
.set USBUART_USB__ARB_EP4_INT_EN, CYREG_USB_ARB_EP4_INT_EN
.set USBUART_USB__ARB_EP4_SR, CYREG_USB_ARB_EP4_SR
.set USBUART_USB__ARB_EP5_CFG, CYREG_USB_ARB_EP5_CFG
.set USBUART_USB__ARB_EP5_INT_EN, CYREG_USB_ARB_EP5_INT_EN
.set USBUART_USB__ARB_EP5_SR, CYREG_USB_ARB_EP5_SR
.set USBUART_USB__ARB_EP6_CFG, CYREG_USB_ARB_EP6_CFG
.set USBUART_USB__ARB_EP6_INT_EN, CYREG_USB_ARB_EP6_INT_EN
.set USBUART_USB__ARB_EP6_SR, CYREG_USB_ARB_EP6_SR
.set USBUART_USB__ARB_EP7_CFG, CYREG_USB_ARB_EP7_CFG
.set USBUART_USB__ARB_EP7_INT_EN, CYREG_USB_ARB_EP7_INT_EN
.set USBUART_USB__ARB_EP7_SR, CYREG_USB_ARB_EP7_SR
.set USBUART_USB__ARB_EP8_CFG, CYREG_USB_ARB_EP8_CFG
.set USBUART_USB__ARB_EP8_INT_EN, CYREG_USB_ARB_EP8_INT_EN
.set USBUART_USB__ARB_EP8_SR, CYREG_USB_ARB_EP8_SR
.set USBUART_USB__ARB_INT_EN, CYREG_USB_ARB_INT_EN
.set USBUART_USB__ARB_INT_SR, CYREG_USB_ARB_INT_SR
.set USBUART_USB__ARB_RW1_DR, CYREG_USB_ARB_RW1_DR
.set USBUART_USB__ARB_RW1_RA, CYREG_USB_ARB_RW1_RA
.set USBUART_USB__ARB_RW1_RA_MSB, CYREG_USB_ARB_RW1_RA_MSB
.set USBUART_USB__ARB_RW1_WA, CYREG_USB_ARB_RW1_WA
.set USBUART_USB__ARB_RW1_WA_MSB, CYREG_USB_ARB_RW1_WA_MSB
.set USBUART_USB__ARB_RW2_DR, CYREG_USB_ARB_RW2_DR
.set USBUART_USB__ARB_RW2_RA, CYREG_USB_ARB_RW2_RA
.set USBUART_USB__ARB_RW2_RA_MSB, CYREG_USB_ARB_RW2_RA_MSB
.set USBUART_USB__ARB_RW2_WA, CYREG_USB_ARB_RW2_WA
.set USBUART_USB__ARB_RW2_WA_MSB, CYREG_USB_ARB_RW2_WA_MSB
.set USBUART_USB__ARB_RW3_DR, CYREG_USB_ARB_RW3_DR
.set USBUART_USB__ARB_RW3_RA, CYREG_USB_ARB_RW3_RA
.set USBUART_USB__ARB_RW3_RA_MSB, CYREG_USB_ARB_RW3_RA_MSB
.set USBUART_USB__ARB_RW3_WA, CYREG_USB_ARB_RW3_WA
.set USBUART_USB__ARB_RW3_WA_MSB, CYREG_USB_ARB_RW3_WA_MSB
.set USBUART_USB__ARB_RW4_DR, CYREG_USB_ARB_RW4_DR
.set USBUART_USB__ARB_RW4_RA, CYREG_USB_ARB_RW4_RA
.set USBUART_USB__ARB_RW4_RA_MSB, CYREG_USB_ARB_RW4_RA_MSB
.set USBUART_USB__ARB_RW4_WA, CYREG_USB_ARB_RW4_WA
.set USBUART_USB__ARB_RW4_WA_MSB, CYREG_USB_ARB_RW4_WA_MSB
.set USBUART_USB__ARB_RW5_DR, CYREG_USB_ARB_RW5_DR
.set USBUART_USB__ARB_RW5_RA, CYREG_USB_ARB_RW5_RA
.set USBUART_USB__ARB_RW5_RA_MSB, CYREG_USB_ARB_RW5_RA_MSB
.set USBUART_USB__ARB_RW5_WA, CYREG_USB_ARB_RW5_WA
.set USBUART_USB__ARB_RW5_WA_MSB, CYREG_USB_ARB_RW5_WA_MSB
.set USBUART_USB__ARB_RW6_DR, CYREG_USB_ARB_RW6_DR
.set USBUART_USB__ARB_RW6_RA, CYREG_USB_ARB_RW6_RA
.set USBUART_USB__ARB_RW6_RA_MSB, CYREG_USB_ARB_RW6_RA_MSB
.set USBUART_USB__ARB_RW6_WA, CYREG_USB_ARB_RW6_WA
.set USBUART_USB__ARB_RW6_WA_MSB, CYREG_USB_ARB_RW6_WA_MSB
.set USBUART_USB__ARB_RW7_DR, CYREG_USB_ARB_RW7_DR
.set USBUART_USB__ARB_RW7_RA, CYREG_USB_ARB_RW7_RA
.set USBUART_USB__ARB_RW7_RA_MSB, CYREG_USB_ARB_RW7_RA_MSB
.set USBUART_USB__ARB_RW7_WA, CYREG_USB_ARB_RW7_WA
.set USBUART_USB__ARB_RW7_WA_MSB, CYREG_USB_ARB_RW7_WA_MSB
.set USBUART_USB__ARB_RW8_DR, CYREG_USB_ARB_RW8_DR
.set USBUART_USB__ARB_RW8_RA, CYREG_USB_ARB_RW8_RA
.set USBUART_USB__ARB_RW8_RA_MSB, CYREG_USB_ARB_RW8_RA_MSB
.set USBUART_USB__ARB_RW8_WA, CYREG_USB_ARB_RW8_WA
.set USBUART_USB__ARB_RW8_WA_MSB, CYREG_USB_ARB_RW8_WA_MSB
.set USBUART_USB__BUF_SIZE, CYREG_USB_BUF_SIZE
.set USBUART_USB__BUS_RST_CNT, CYREG_USB_BUS_RST_CNT
.set USBUART_USB__CR0, CYREG_USB_CR0
.set USBUART_USB__CR1, CYREG_USB_CR1
.set USBUART_USB__CWA, CYREG_USB_CWA
.set USBUART_USB__CWA_MSB, CYREG_USB_CWA_MSB
.set USBUART_USB__DMA_THRES, CYREG_USB_DMA_THRES
.set USBUART_USB__DMA_THRES_MSB, CYREG_USB_DMA_THRES_MSB
.set USBUART_USB__DYN_RECONFIG, CYREG_USB_DYN_RECONFIG
.set USBUART_USB__EP_ACTIVE, CYREG_USB_EP_ACTIVE
.set USBUART_USB__EP_TYPE, CYREG_USB_EP_TYPE
.set USBUART_USB__EP0_CNT, CYREG_USB_EP0_CNT
.set USBUART_USB__EP0_CR, CYREG_USB_EP0_CR
.set USBUART_USB__EP0_DR0, CYREG_USB_EP0_DR0
.set USBUART_USB__EP0_DR1, CYREG_USB_EP0_DR1
.set USBUART_USB__EP0_DR2, CYREG_USB_EP0_DR2
.set USBUART_USB__EP0_DR3, CYREG_USB_EP0_DR3
.set USBUART_USB__EP0_DR4, CYREG_USB_EP0_DR4
.set USBUART_USB__EP0_DR5, CYREG_USB_EP0_DR5
.set USBUART_USB__EP0_DR6, CYREG_USB_EP0_DR6
.set USBUART_USB__EP0_DR7, CYREG_USB_EP0_DR7
.set USBUART_USB__MEM_DATA, CYREG_USB_MEM_DATA_MBASE
.set USBUART_USB__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set USBUART_USB__PM_ACT_MSK, 0x01
.set USBUART_USB__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set USBUART_USB__PM_STBY_MSK, 0x01
.set USBUART_USB__SIE_EP_INT_EN, CYREG_USB_SIE_EP_INT_EN
.set USBUART_USB__SIE_EP_INT_SR, CYREG_USB_SIE_EP_INT_SR
.set USBUART_USB__SIE_EP1_CNT0, CYREG_USB_SIE_EP1_CNT0
.set USBUART_USB__SIE_EP1_CNT1, CYREG_USB_SIE_EP1_CNT1
.set USBUART_USB__SIE_EP1_CR0, CYREG_USB_SIE_EP1_CR0
.set USBUART_USB__SIE_EP2_CNT0, CYREG_USB_SIE_EP2_CNT0
.set USBUART_USB__SIE_EP2_CNT1, CYREG_USB_SIE_EP2_CNT1
.set USBUART_USB__SIE_EP2_CR0, CYREG_USB_SIE_EP2_CR0
.set USBUART_USB__SIE_EP3_CNT0, CYREG_USB_SIE_EP3_CNT0
.set USBUART_USB__SIE_EP3_CNT1, CYREG_USB_SIE_EP3_CNT1
.set USBUART_USB__SIE_EP3_CR0, CYREG_USB_SIE_EP3_CR0
.set USBUART_USB__SIE_EP4_CNT0, CYREG_USB_SIE_EP4_CNT0
.set USBUART_USB__SIE_EP4_CNT1, CYREG_USB_SIE_EP4_CNT1
.set USBUART_USB__SIE_EP4_CR0, CYREG_USB_SIE_EP4_CR0
.set USBUART_USB__SIE_EP5_CNT0, CYREG_USB_SIE_EP5_CNT0
.set USBUART_USB__SIE_EP5_CNT1, CYREG_USB_SIE_EP5_CNT1
.set USBUART_USB__SIE_EP5_CR0, CYREG_USB_SIE_EP5_CR0
.set USBUART_USB__SIE_EP6_CNT0, CYREG_USB_SIE_EP6_CNT0
.set USBUART_USB__SIE_EP6_CNT1, CYREG_USB_SIE_EP6_CNT1
.set USBUART_USB__SIE_EP6_CR0, CYREG_USB_SIE_EP6_CR0
.set USBUART_USB__SIE_EP7_CNT0, CYREG_USB_SIE_EP7_CNT0
.set USBUART_USB__SIE_EP7_CNT1, CYREG_USB_SIE_EP7_CNT1
.set USBUART_USB__SIE_EP7_CR0, CYREG_USB_SIE_EP7_CR0
.set USBUART_USB__SIE_EP8_CNT0, CYREG_USB_SIE_EP8_CNT0
.set USBUART_USB__SIE_EP8_CNT1, CYREG_USB_SIE_EP8_CNT1
.set USBUART_USB__SIE_EP8_CR0, CYREG_USB_SIE_EP8_CR0
.set USBUART_USB__SOF0, CYREG_USB_SOF0
.set USBUART_USB__SOF1, CYREG_USB_SOF1
.set USBUART_USB__USB_CLK_EN, CYREG_USB_USB_CLK_EN
.set USBUART_USB__USBIO_CR0, CYREG_USB_USBIO_CR0
.set USBUART_USB__USBIO_CR1, CYREG_USB_USBIO_CR1

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 48000000
.set BCLK__BUS_CLK__KHZ, 48000
.set BCLK__BUS_CLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x100
.set CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP, 1
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDIO0_MV, 3300
.set CYDEV_VDDIO1_MV, 3300
.set CYDEV_VDDIO2_MV, 3300
.set CYDEV_VDDIO3_MV, 3300
.set CYDEV_VIO0_MV, 3300
.set CYDEV_VIO1_MV, 3300
.set CYDEV_VIO2_MV, 3300
.set CYDEV_VIO3_MV, 3300
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set CyScBoostClk__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set CyScBoostClk__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set CyScBoostClk__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set CyScBoostClk__CFG2_SRC_SEL_MASK, 0x07
.set CyScBoostClk__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set CyScBoostClk__CFG3_PHASE_DLY_MASK, 0x0F
.set CyScBoostClk__INDEX, 0x00
.set CyScBoostClk__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set CyScBoostClk__PM_ACT_MSK, 0x01
.set CyScBoostClk__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set CyScBoostClk__PM_STBY_MSK, 0x01
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
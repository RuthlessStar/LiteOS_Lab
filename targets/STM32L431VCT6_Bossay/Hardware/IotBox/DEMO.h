/********************************************************************************
* 文件名称 ：IotBox.h
* 作 者：Bossay IoT 开发组
* 版 本：V1.0
* 编写日期 ：2019-11-01
* 功 能：IA_Demo驱动
*********************************************************************************
* 说 明 ：本案例配套Bossay IoT Box开发板使用
* 网 站 ：edu.ibossay.com
* 电 话 ：4006916913 
*********************************************************************************/
#ifndef __DEMO_H__
#define __DEMO_H__
/* 包含头文件 ----------------------------------------------------------------*/
#include "stm32l4xx_hal.h"


/* 公用函数定义----------------------------------------------------------------------*/
void Init_BS_IA_DEMO(void);
void Init_BS_SC_DEMO(void);
void Init_BS_SF_DEMO(void);
void Init_BS_ST_DEMO(void);
void Test_Board_DEMO(void);

#endif



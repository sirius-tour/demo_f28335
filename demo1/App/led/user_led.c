/*
 * user_led.c
 *
 *	������ͨIO���
 *
 *  Created on: 2022-6-12
 *      Author: tly
 */

#include "user_led.h"


/*****************************************************************************
Function Name        :: void LED_Init(void)
Function Description :: �˿ڳ�ʼ��
Bank Ports           :: GPIOC.68
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 ::
Function called	-

Last Chang Date      : 2022/06/15
*****************************************************************************/
void LED_Init(void)
{
	EALLOW;
	SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1;// ����GPIOʱ��

	//LED1�˿�����, GPIOC.68
	GpioCtrlRegs.GPCMUX1.bit.GPIO68=0;//����Ϊͨ��GPIO����
	GpioCtrlRegs.GPCDIR.bit.GPIO68=1;//����GPIO����Ϊ���
	GpioCtrlRegs.GPCPUD.bit.GPIO68=0;//ʹ��GPIO��������

	//�˿ڸ���ʼֵ�����Ĵ�����ֵ
	GpioDataRegs.GPCSET.bit.GPIO68=1;//��1	//	GpioDataRegs.GPCCLEAR.bit.GPIO68=1;//��0

	EDIS;
}


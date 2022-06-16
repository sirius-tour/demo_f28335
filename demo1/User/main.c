/*
 * main.c
 *
 *  Created on: 2022-6-12
 *      Author: tly
 */
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"


#include "user_led.h"


/*****************************************************************************
Function Name        :: void delay(void)
Function Description :: ��ʱ������ͨ��ѭ��ռ��CPU���ﵽ��ʱ����
Bank Ports           :: No
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 ::
Function called	-

Last Chang Date      : 2022/06/15
*****************************************************************************/
void delay(void)
{
    Uint16 		i;
	Uint32      j;
	for(i=0;i<32;i++)
		for (j = 0; j < 100000; j++);
}


/*****************************************************************************
Function Name        :: void main(void)
Function Description :: ������
Bank Ports           :: default
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 :: �����������
Function called	-

Last Chang Date      : 2022/06/15
*****************************************************************************/
void main()
{

	InitSysCtrl();	//���ϵͳʱ�������Լ�ʹ�ܸ�����ʱ�ӣ���GPIOʱ�ӣ�

	LED_Init();	//��ʼ��

	while(1)
	{//˳��ִ�����²���

	#if 0	//���÷�ת
		LED1_TOGGLE;
	#else	//��������
		LED1_ON;
		//delay(1000);
		DELAY_US(100);
		LED1_OFF;
	#endif
		//delay(1000);	//��׼ȷ��ʱ
		DELAY_US(100);	//ʹ�ø���ʱ�������ڴ˴�CPU-150M

	}
}


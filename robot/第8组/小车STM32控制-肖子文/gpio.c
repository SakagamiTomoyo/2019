#include "gpio.h"
#include "stm32f10x.h"
void GPI_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;
	
  //RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//��PA,PD��ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE); 
	/*
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13| GPIO_Pin_14;//��������
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//�˿��ٶ�
	GPIO_Init(GPIOA, &GPIO_InitStructure);//��ʼ����Ӧ�Ķ˿�*/
	
//xt
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4;
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
 GPIO_Init(GPIOE, &GPIO_InitStructure);
//
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_2|GPIO_Pin_3;//��������
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//�˿��ٶ�
	GPIO_Init(GPIOD, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13| GPIO_Pin_14|GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_InitStructure);	
}


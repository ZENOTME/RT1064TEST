#ifndef _wavev4_h
#define _wavev4_h

#include "common.h"
#include "headfile.h"


#define WAVE_UART    USART_4  //����������Ҫ����



unsigned char Uart1_Put_Char(unsigned char DataToSend);
void Uart1_Send_AF(signed int aa,signed int bb,signed int cc,signed int dd,signed int ee,signed int ff,signed int gg,signed int hh);

#endif
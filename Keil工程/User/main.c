#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Serial.h"
#include "OLED.h"

int main(void)
{
	/*OLED初始化*/
	OLED_Init();
	
	/*串口初始化*/
	Serial_Init();
	
	/*显示初始字符串*/
	OLED_Clear();
	OLED_ShowString(40, 24, "START", OLED_8X16);
	OLED_Update();
	
	while (1)
	{
		OLED_Update();	//不断将OLED显存数组的内容刷新到OLED屏幕
	}
}


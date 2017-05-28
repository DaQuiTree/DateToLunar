#include "config.h"
#include "lcd12864.h"
#include "lunar.h"	

void main()
{
	uint16 lunar[8];
	uint8 len;

	InitLCD12864();
	len = GetLunarDate(33,3,12,lunar);
	LCDShowCN(0,0,lunar,len); 

	while(1);
}


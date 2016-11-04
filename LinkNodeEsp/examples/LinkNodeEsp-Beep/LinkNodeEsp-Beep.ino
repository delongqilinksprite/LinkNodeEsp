/*******************************************************************
*author:Derron from LinkSprite
*date:2016.11.03
*attation:Start(int hz,int time)  time is micro second;
********************************************************************/

#include <LinkNodeEsp.h>

const int beep_pin = 6;

BEEP Beep(beep_pin);

void setup()
{
	Beep.begin();
}

void loop()
{
	int hz = 100;
	int time_ms = 1000;
	Beep.Start(hz,time_ms);
	delay(5000);
}
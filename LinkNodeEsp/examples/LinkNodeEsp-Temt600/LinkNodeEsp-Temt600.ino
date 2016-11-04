/*******************************************************************
*author:Derron from LinkSprite
*date:2016.11.03
*attation:
********************************************************************/

#include <LinkNodeEsp.h>

const int temt_pin = 0;

TEMT6000 Temt(temt_pin);

void setup()
{
	Temt.begin();
	Serial.begin(9600);
} 

void loop()
{
	static int data;
	data = Temt.get_data();
	Serial.println("Light:");
	Serial.println(data);
	delay(1000);
}
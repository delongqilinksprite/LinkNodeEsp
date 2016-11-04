/*******************************************************************
*author:Derron from LinkSprite
*date:2016.11.03
*attation:
* LinkNodeEsp only has one analog pin!
********************************************************************/

#include <LinkNodeEsp.h>

static int thumb_pin = 0;

THUMB Thumb(thumb_pin);

void setup()
{
	Thumb.begin();
	Serial.begin(9600);
} 

void loop()
{
	static int data;
	data = Thumb.get_data();
	Serial.println("Data:");
	Serial.println(data);
	delay(1000);
}
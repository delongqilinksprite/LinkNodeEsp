/*******************************************************************
*author:Derron from LinkSprite
*date:2016.11.03
*attation:
********************************************************************/

#include <LinkNodeEsp.h>

const int relay_pin = 5;

RELAY Relay(relay_pin);

void setup()
{
	Relay.begin();
}

void loop()
{
	Relay.On();
	delay(3000);
	Relay.Off();
	delay(3000);
}
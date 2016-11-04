/*******************************************************************
*author:Derron from LinkSprite
*date:2016.11.03
*attation: 
*PINMAP：
*  D0  ---- GPIO10
*  D1  ---- GPIO15
*  D2  ---- GPIO2
*  D3  ---- GPIO0
*  D4  ---- GPIO13
*  D5  ---- GPIO12
*  D6  ---- GPIO14
*  D7  ---- GPIO16
********************************************************************/

#include <LinkNodeEsp.h>

#define DEBUG 1

int pinmap(int pin)
{
	if(pin == 0)
		return 10;
	else if(pin == 1)
		return 15;
	else if(pin == 2)
		return 2;
	else if(pin == 3)
		return 0;
	else if(pin == 4)
		return 13;
	else if(pin == 5)
		return 12;
	else if(pin == 6)
		return 14;
	else if(pin == 7)
		return 16;
	else return -1;
}

/***************Beep*******************/

BEEP::BEEP(int beep_pin)
{
	this->beep_pin = pinmap(beep_pin);
}

void BEEP::begin()
{
	pinMode(beep_pin,OUTPUT);	
}

int BEEP::Start(int hz,int time)
{
	if(hz <= 500)
	{
		for(int i = 0; i < time/(1000/hz); i ++)
		{
			digitalWrite(beep_pin,HIGH);
			delay(1000/hz/2);
			digitalWrite(beep_pin,LOW);
			delay(1000/hz/2);
		}
		return 0;
	}
	if(hz > 500)
	{
		for(int i = 0; i < time/(1000/hz); i ++)
		{
			digitalWrite(beep_pin,HIGH);
			delayMicroseconds(1000000/hz/2);
			digitalWrite(beep_pin,LOW);
			delayMicroseconds(1000000/hz/2);
		}
		return 0;
	}
	return 0;
}

/***************Relay*******************/

RELAY::RELAY(int relay_pin)
{
	this->relay_pin = pinmap(relay_pin);
}

void RELAY::begin()
{
	pinMode(relay_pin,OUTPUT);
}

int RELAY::On()
{
	digitalWrite(relay_pin,HIGH);
	return 0;
}

int RELAY::Off()
{
	digitalWrite(relay_pin,LOW);
	return 0;
}

/***************Temt6000*******************/

TEMT6000::TEMT6000(int temt_pin)
{
	this->temt_pin = temt_pin;
}

void TEMT6000::begin()
{
	
}

int TEMT6000::get_data()
{
	long val;
	for(int i = 0 ; i < 10 ; i ++)
	{
		val += analogRead(temt_pin);
		delay(2);
	}
	return (val/10);
}

/***************Thumb*******************/

THUMB::THUMB(int thumb_pin)
{
	this->thumb_pin = thumb_pin;
}

void THUMB::begin()
{
	
}

int THUMB::get_data()
{
	long val;
	for(int i = 0 ; i < 10 ; i ++)
	{
		val += analogRead(thumb_pin);
		delay(2);
	}
	return (val/10);
}
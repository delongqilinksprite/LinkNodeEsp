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

#ifndef LINKNODEESP_H
#define LINKNODEESP_H

#include <ESP8266WiFi.h>
#include <WiFiManager.h>
#include <stdlib.h>
#include <string>

int pinmap(int pin);

class BEEP
{
public:
	BEEP(int beep_pin);
	void begin();
	int Start(int hz,int time);
private:
	int beep_pin;
};

class RELAY
{
public:
	RELAY(int relay_pin);
	void begin();
	int On();
	int Off();
private:
	int relay_pin;
};

class TEMT6000
{
public:
	TEMT6000(int temt_pin);
	void begin();
	int get_data();
private:	
	int temt_pin;
};

class THUMB
{
public:
	THUMB(int thumb_pin);
	void begin();
	int get_data();
private:	
	int thumb_pin;
};


#endif  


#include <Arduino.h>
#include <BMSLED.h>

BMSLED::BMSLED(int ledPin)
{
	//this->numLEDs = numLEDs;
	this->ledPin = ledPin;
	
	delay(3000);		//FastLED recommended setup delay.
	//FastLED.addLeds<WS2812b, ledPin, GRB>(leds, numLEDs);
}
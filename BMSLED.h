#ifndef BMSLED_h
#define BMSLED_h

#include <Arduino.h>
#include <FastLED.h>

/*template<int numLEDs>*/ class BMSLED
{
	public:
		BMSLED(int ledPin);
		void DisplayPattern();
	private:
		int ledPin;
		//CRGB leds[numLEDs];
};

#endif
#include "WProgram.h"

#define PIN 3
#define TIME 1000

void setup() {
	Serial.begin(19200);
	pinMode(PIN, OUTPUT);
	pinMode(8, OUTPUT);
	digitalWrite(8, LOW);
	digitalWrite(PIN, HIGH);
}

void loop() {
	int strobe_delay = analogRead(5) / 10;
	int sec_strobe_delay = analogRead(3) / 10;
	delay(strobe_delay);
	digitalWrite(PIN, LOW);
	digitalWrite(8, HIGH);
	delay(sec_strobe_delay);
	digitalWrite(PIN, HIGH);
	digitalWrite(8, LOW);
}

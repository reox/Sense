#include "WProgram.h"

#define PIN 3
#define TIME 1000

void setup() {
	Serial.begin(19200);
	pinMode(PIN, OUTPUT);
	digitalWrite(PIN, HIGH);
}

void loop() {
	delay(TIME);
	digitalWrite(PIN, LOW);
	delay(TIME);
	digitalWrite(PIN, HIGH);

	int x = Serial.available() ? Serial.read() : 0;
	Serial.write("Hi");
	Serial.write(x);
	Serial.write("!\n");
}

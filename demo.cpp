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
	delay(strobe_delay);
	digitalWrite(PIN, LOW);
	delay(strobe_delay);
	digitalWrite(PIN, HIGH);

	int x = Serial.available() ? Serial.read() : 0;
	if(x == 0)
		digitalWrite(8, HIGH);
	Serial.write("Hi");
	Serial.write(x);
	Serial.write("!\n");
}

#include "WProgram.h"

#define A 5
#define B 8
#define C 2
#define D 3
#define E 4
#define F 6
#define G 7

#define TIME 2000

void setup() {
	Serial.begin(19200);
	pinMode(A, OUTPUT);
	pinMode(B, OUTPUT);
	pinMode(C, OUTPUT);
	pinMode(D, OUTPUT);
	pinMode(E, OUTPUT);
	pinMode(F, OUTPUT);
	pinMode(G, OUTPUT);
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
}

void loop() {

	digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);

	// reset
	delay(TIME);
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);

}

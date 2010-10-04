#include "WProgram.h"


void setup()
{
    Serial.begin(9600);  // ...set up the serial ouput on 0004 style
	pinMode(9, OUTPUT);
	digitalWrite(9, HIGH);
}
void loop()
{
if(Serial.available() > 0){
	digitalWrite(9, HIGH);
	  Serial.print(1);
	digitalWrite(9,LOW);
	}
}

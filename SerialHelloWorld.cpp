#include <Arduino.h>

void setup() {
	Serial.begin(115200);
}

void loop() {
	if (Serial) {
		Serial.println("Hello world");
	}
	delay(1000);
}

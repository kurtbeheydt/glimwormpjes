#include <Arduino.h>

const int pinLed = 0;

const int baseDelay = 200;
const int stepCount = 9;

//const int steps[stepCount] = {1, 1, 1, 2, 2, 2, 1, 1, 1};
//const int steps[stepCount] = {1, 2, 1, 2, 1, 2, 1, 2, 1};
//const int steps[stepCount] = {2, 2, 1, 1, 2, 2, 1, 1, 1};
//const int steps[stepCount] = {1, 1, 1, 1, 2, 2, 2, 2, 1};
const int steps[stepCount] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

void setup() {
    pinMode(pinLed, OUTPUT);
}

void loop() {
    for (int i = 0; i < stepCount; i++) {
        digitalWrite(pinLed, HIGH);
        delay(steps[i] * baseDelay);
        digitalWrite(pinLed, LOW);
        delay(baseDelay);
    }
    delay(baseDelay * 6);
}

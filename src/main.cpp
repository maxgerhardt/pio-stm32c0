#include <Arduino.h>

#define LED PB6 // example pin

void setup() {
    Serial.begin(115200); // USART1, TX = PA0, RX = PA1
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
    Serial.println("Hello, world!");
}

/*
    Project name : ESP32 Hit sensor module Tap Sensor Module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-hit-sensor-module-tap-sensor-module
*/

// Pin connected to the digital output of the hit/tap sensor
const int digitalInPin = 34; // GPIO pin 34 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(digitalInPin, INPUT); // Set the digital pin as input
}

void loop() {
  int hitDetected = digitalRead(digitalInPin); // Read the digital sensor value
  
  if (hitDetected == HIGH) {
    Serial.println("Hit detected!");
  } else {
    Serial.println("No hit detected.");
  }

  delay(1000); // Delay before next reading
}

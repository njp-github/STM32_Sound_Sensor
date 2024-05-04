#include "HardwareSerial.h"

#define RX3 PB11
#define TX3 PB10

HardwareSerial Serial3(RX3, TX3); // Set up Serial communication on USART3

void setup() {

  // put your setup code here, to run once:
  
  Serial3.begin(9600); // Initialize Serial3 (Serial Monitor)

}

void loop() {

  // put your main code here, to run repeatedly:
  
  int sensorValue = analogRead(PA7); // Read data from KY-038 microphone sound sensor module
  Serial3.println(sensorValue); // Print sensor value in the Serial Monitor
  
  delay(500); // Wait for 0.5 seconds

}

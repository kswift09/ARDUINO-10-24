/*
  Analog input, analog output, serial output

 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.

 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground

 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe

 This example code is in the public domain.

 */

// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0; // Analog output pin that the LED is attached to


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  

  // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);

 if (sensorValue >=851){
  Serial.print("         STATE 1");
 }

  else if (sensorValue >=681 && sensorValue <851){
  Serial.print("         STATE 2");
 }

  else if (sensorValue >=511 && sensorValue <681){
  Serial.print("         STATE 3");
 }

 else if (sensorValue >=341 && sensorValue <511){
  Serial.print("         STATE 4");
 }

else if (sensorValue >=171 && sensorValue <341){
  Serial.print("         STATE 5");
 }


 
 else {
  Serial.print("            STATE 6");

  
 }
  delay(2);
}

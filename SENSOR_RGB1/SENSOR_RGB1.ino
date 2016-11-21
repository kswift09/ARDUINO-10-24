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

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 0;    // variable to store the servo position


const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0; // Analog output pin that the LED is attached to


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
   pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
 myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:


  // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);
 
 
if (sensorValue>=250){
 //state 0

  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
   myservo.write(180);
}
 else if (sensorValue>=240){
 //state 1

  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  myservo.write(160);
 }
 else if (sensorValue>=180){
  //state 2

  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  myservo.write(145);
 }
 else if(sensorValue>=164){
  //state 3
  

  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
   myservo.write(125);
 }
 else if (sensorValue<=149){
  //state 4

  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
   myservo.write(110);
 }
 else if (sensorValue>=150){


//state 5--

  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
   myservo.write(90);
 }
 else if (sensorValue>=115){

  //state 6

  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
   myservo.write(60);
 }
 else if (sensorValue>=100){

  //state 7
 
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
   myservo.write(30);
 }
 else{
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
   myservo.write(0);
 }



 
}



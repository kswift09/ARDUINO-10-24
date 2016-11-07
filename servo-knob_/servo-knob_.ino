/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 0;    // variable to store the servo position


const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0; // Analog output pin that the LED is attached to


void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
   // read the analog in value:
  sensorValue = analogRead(analogInPin);
   // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);




  if (sensorValue >=1023){
    myservo.write(180);
  }

  else if (sensorValue >= 1023 && sensorValue <1000){
    myservo.write(170);
}
   else if (sensorValue >= 990 && sensorValue <1023){
    myservo.write(160);
}
   else if (sensorValue >= 966 && sensorValue <990){
    myservo.write(150);
}

 
else if (sensorValue >= 901 && sensorValue <966){
    myservo.write(140);

 }

else if (sensorValue >= 844 && sensorValue <901){
    myservo.write(130);

 }

else if (sensorValue >= 787 && sensorValue <844){
    myservo.write(120);

 }
 else if (sensorValue >= 730 && sensorValue <787){
    myservo.write(110);

 }
 else if (sensorValue >= 673 && sensorValue <730){
    myservo.write(100);

 }
 
 else if (sensorValue >= 616 && sensorValue <673){
    myservo.write(90);

 }

  else if (sensorValue >= 560 && sensorValue <616){
    myservo.write(80);

 }
  else if (sensorValue >= 503 && sensorValue <560){
    myservo.write(70);

 }
  else if (sensorValue >= 446 && sensorValue <503){
    myservo.write(60);

 }
  else if (sensorValue >= 389 && sensorValue <446){
    myservo.write(50);

 }
  else if (sensorValue >= 332 && sensorValue <389){
    myservo.write(40);

 }
  else if (sensorValue >= 295 && sensorValue <332){
    myservo.write(30);

 }
  else if (sensorValue >= 238 && sensorValue <295){
    myservo.write(20);

 }
  else if (sensorValue >= 181 && sensorValue <238){
    myservo.write(10);

 }
  else if (sensorValue >= 113 && sensorValue <181){
    myservo.write(5);

 }
else {
  myservo.write(0);
}
 


}

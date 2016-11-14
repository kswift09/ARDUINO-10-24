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
   
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
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

  else if (sensorValue >= 1023 && sensorValue <970){
    myservo.write(170);
}
   else if (sensorValue >= 966 && sensorValue <1023){
    myservo.write(160);
}
   else if (sensorValue >= 909 && sensorValue <966){
    myservo.write(150);
}

 
else if (sensorValue >= 852 && sensorValue <909){
    myservo.write(140);

 }

else if (sensorValue >= 795 && sensorValue <852){
    myservo.write(130);

 }

else if (sensorValue >= 738 && sensorValue <795){
    myservo.write(120);

 }
 else if (sensorValue >= 681 && sensorValue <738){
    myservo.write(110);

 }
 else if (sensorValue >= 624 && sensorValue <681){
    myservo.write(100);

 }
 
 else if (sensorValue >= 567 && sensorValue <624){
    myservo.write(90);

 }

  else if (sensorValue >= 510 && sensorValue <567){
    myservo.write(80);

 }
  else if (sensorValue >= 453 && sensorValue <510){
    myservo.write(70);

 }
  else if (sensorValue >= 396 && sensorValue <453){
    myservo.write(60);

 }
  else if (sensorValue >= 339 && sensorValue <396){
    myservo.write(50);

 }
  else if (sensorValue >= 282 && sensorValue <339){
    myservo.write(40);

 }
  else if (sensorValue >= 225 && sensorValue <282){
    myservo.write(30);

 }
  else if (sensorValue >= 168 && sensorValue <225){
    myservo.write(20);

 }
  else if (sensorValue >= 111 && sensorValue <168){
    myservo.write(10);

 }
  else if (sensorValue >= 50 && sensorValue <111){
    myservo.write(5);

 }
else {
  myservo.write(0);
}
 
 if (sensorValue >=851){
  Serial.print("         STATE 1");

  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
 }
  else if (sensorValue >=681 && sensorValue <851){
  Serial.print("         STATE 2");

  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
 }
  else if (sensorValue >=511 && sensorValue <681){
  Serial.print("         STATE 3");
  
   digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
 }
 else if (sensorValue >=341 && sensorValue <511){
  Serial.print("         STATE 4");
   digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
 }

else if (sensorValue >=171 && sensorValue <341){
  Serial.print("         STATE 5");

  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);

 }
 else if (sensorValue >=20 && sensorValue <171){
  Serial.print("         STATE 6");
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);

 }
 else {
  Serial.print("            STATE 7");

   digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
 }
  delay(2);
}





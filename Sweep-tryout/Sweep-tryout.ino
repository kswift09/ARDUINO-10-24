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

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(0);
  delay(100);
   myservo.write(30);
  delay(100);
   myservo.write(55);
  delay(50);
   myservo.write(95);
  delay(1000);
   myservo.write(115);
  delay(1000);

   myservo.write(30);
  delay(100);
   myservo.write(40);
  delay(100);
 myservo.write(50);
  delay(100);
   myservo.write(60);
  delay(100);
   myservo.write(70);
  delay(100);



  
}


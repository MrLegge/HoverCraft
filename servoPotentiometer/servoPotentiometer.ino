// servo moves with the movement of the potentiometer

#include <Servo.h>


Servo myServo;

int potentPin = A0;
int voltageFromA0;

void setup(){
  myservo.attach(9);  // attaches the servo on pin 9
  }
void loop(){
  val = analogRead(potpin);            // reads the voltage returned from the potentiometer (between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale the value so it relates to a position(value between 0 and 180)
  myservo.write(val);                  // set the servo position
  delay(15);
  }

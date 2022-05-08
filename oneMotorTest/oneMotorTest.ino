
#include <L298N.h>


int ENA = 3, motorIn1 = 4, motorIn2 = 5, counter = 0;
L298N motor(ENA,motorIn1,motorIn2);




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(counter%50 == 0){
    motor.setSpeed(255);
    motor.forward();   
  }else{
    motor.backward();    
    delay(1000);
    counter = 0;
  }
  counter++;

 printSomeInfo();
}
}
void printSomeInfo()
{
  Serial.print("Motor is moving = ");
  Serial.print(motor.isMoving());
  Serial.print(" at speed = ");
  Serial.println(motor.getSpeed()); // println is lowercase L not capital i or 1
}

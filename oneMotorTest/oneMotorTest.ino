
#include <L298N.h>


int ENA = 3, motorIn1 = 4, motorIn2 = 5, counter = 0;
L298N motor(ENA,motorIn1,motorIn2);




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // starts the serial monitor
 
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(counter%50 == 0){  // modulus opperator to wait for 50 cycles of the loop (rough timing method)  
    motor.setSpeed(255); // full speed on the motor
    motor.forward();   
  }else{
    motor.backward();    
    delay(1000);
    counter = 0;
  }
  counter++;

 printSomeInfo();  // function to print the info
}
}
void printSomeInfo()
{
  Serial.print("Motor is moving = ");
  Serial.print(motor.isMoving());
  Serial.print(" at speed = ");
  Serial.println(motor.getSpeed()); // println (is lowercase L not capital i or 1) prints with line break
}

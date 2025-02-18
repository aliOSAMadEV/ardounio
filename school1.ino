#include <AFMotor.h>




AF_DCMotor motor(1);

AF_DCMotor motor2(2);

AF_DCMotor motor3(3);

AF_DCMotor motor4(4);
  

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:



   motor.run(FORWARD); 
      motor2.run(FORWARD); 
        motor3.run(BACKWARD); 
          motor4.run(BACKWARD); 
            // put your setup code here, to run once:
motor.setSpeed(255);
motor2.setSpeed(200);
motor3.setSpeed(255);
motor4.setSpeed(200);
}

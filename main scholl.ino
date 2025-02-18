#include <Servo.h>
Servo km;
#include <AFMotor.h>

AF_DCMotor motor4(4);
AF_DCMotor motor3(3);
AF_DCMotor motor2(2);
AF_DCMotor motor(1);


const int irPin = A0;
float v, d, inch;
void setup() {
  Serial.begin(9600);
  // Initialize Serial Monitor
}

void loop() {
      // Convert cm to inches
v = analogRead(irPin) * (5.0 / 1023.0);
d = 27.86 * pow(v, -1.15);
inch = d * 0.393701;
motor.setSpeed(255);
motor2.setSpeed(200);
motor3.setSpeed(255);
motor4.setSpeed(200);


Serial.print("v:");
Serial.print(v);
Serial.print(" V, d: ");
Serial.print(d);
Serial.print(" cm, ");
Serial.print(inch);
Serial.println(" inch");























motor4.run(FORWARD);
motor3.run(FORWARD);
motor2.run(BACKWARD);
motor.run(BACKWARD);
km.write(90);
km.write(0);

delay(9000);




motor4.run(FORWARD);
motor3.run(FORWARD);
motor2.run(BACKWARD);
motor.run(BACKWARD);
delay(1500);

motor4.run(FORWARD);
motor3.run(FORWARD);
motor2.run(FORWARD);
motor.run(FORWARD);
delay(1000);

motor4.run(BACKWARD);
motor3.run(BACKWARD);
motor2.run(FORWARD);
motor.run(FORWARD);
delay(9000);
}

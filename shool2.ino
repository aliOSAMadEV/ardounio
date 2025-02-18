int o;
int tq = A4;
int eh = A5;
int tim;
int dis;
int blz = 13
;

#include <Servo.h>

Servo km;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(tq, OUTPUT);
pinMode(eh, INPUT);
pinMode(blz, OUTPUT);
  km.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(tq, LOW);
delayMicroseconds(2);
digitalWrite(tq, HIGH);
delayMicroseconds(10);
digitalWrite(tq, LOW);
tim = pulseIn(eh, HIGH);
dis = 0.034 * tim/2;

Serial.print(dis);
Serial.println();


if (dis<11 && dis!=0) {
  delay(9);
  digitalWrite(blz, HIGH);
  km.write(90);
km.write(0);
  delay(1500);
} else{
   digitalWrite(blz, LOW);
}







}

#include <Servo.h>

int angle;
Servo bottomServo;
Servo topServo;
const int joyY = 10;
const int joyX = 11;
int joyValY;
int joyValX;
int bottomMoveVal;
int topMoveVal;

void setup() {
  bottomServo.attach(13);
  topServo.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  joyValY = analogRead(joyY);
  joyValX = analogRead(joyX);
  bottomMoveVal = map(joyValX, 0, 1023, 0, 180);
  topMoveVal = map(0, joyValY, 1023, 0, 180);
  bottomServo.write(bottomMoveVal);
  topServo.write(topMoveVal);
}

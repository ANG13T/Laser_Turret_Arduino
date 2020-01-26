

#include <Servo.h>

int angle;
Servo bottomServo;
Servo topServo;
int bottomMoveVal;
int topMoveVal;

const int joyY = 0;
const int joyX = 1;


void setup() {
  bottomServo.attach(13);
  topServo.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  int joyValY = analogRead(joyY);
  int joyValX = analogRead(joyX);
  bottomMoveVal = map(joyValX, 0, 1023, 0, 170);
  topMoveVal = map(joyValY,0, 1023, 0, 170);
  bottomServo.write(bottomMoveVal);
  topServo.write(topMoveVal);
  delay(50);
}

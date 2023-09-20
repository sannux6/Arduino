#include <Servo.h>
Servo S1;  
void setup() {
  S1.attach(6);
  // put your setup code here, to run once:

}

void loop() {
  S1.write(0);
  delay(150);
  S1.write(90);
  delay(200);
  // put your main code here, to run repeatedly:

}

#include <Servo.h>

Servo1;
Servo2;

int posf1 = 90;
int posf2 = 90;

void setup(){
  servo1.attach(9);
  servo2.attach(6);
}

void loop(){
  for(posf1 = 90; posf1 < 130; posf1 += 1){
    servo1.write(posf1);
    delay(250);
  }

  for(posl1 = 90; posl1 < 130; posl1 += 1){
    servo2.write(posl1);
    delay(250);
  }

  for(posf1 = 130; posf1>=90; posf1 -=1){
    servo1.write(posf1);
    delay(250);
  }
  for(posf2 = 90; posf2 < 50; posf2 += 1){
    servo2.write(posf2);
    delay(250);
  }

  for(posl2 = 90; posl2 < 50; posl2 += 1){
    servo2.write(posl2);
    delay(250);
  }
  for(posf1 = 50; posf1>=90; posf1 -=1){
    servo1.write(posf2);
    delay(250);
  }
}
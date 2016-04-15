#include "28BYJ.h"

Motor28BYJ::Motor28BYJ(int motorPin1=8, int motorPin2=9, int motorPin3=10, int motorPin4=11):
motorPin1(motorPin1), motorPin2(motorPin2), motorPin3(motorPin3), motorPin4(motorPin4),
motorSpeed(1) {
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
}

void Motor28BYJ::Step(unsigned steps){
    for(unsigned i(0);i< steps; i++)
        Step();
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
}

void Motor28BYJ::ReverseStep(unsigned steps){
    for(unsigned i(0);i< steps; i++)
        ReverseStep();
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
}


void Motor28BYJ::Step(){
 // 1
 digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin4, LOW);
 delay(motorSpeed);
 // 2
 digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin4, LOW);
 delay (motorSpeed);
 // 3
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin4, LOW);
 delay(motorSpeed);
 // 4
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(motorPin3, HIGH);
 digitalWrite(motorPin4, LOW);
 delay(motorSpeed);
 // 5
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin3, HIGH);
 digitalWrite(motorPin4, LOW);
 delay(motorSpeed);
 // 6
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin3, HIGH);
 digitalWrite(motorPin4, HIGH);
 delay (motorSpeed);
 // 7
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin4, HIGH);
 delay(motorSpeed);
 // 8
 digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin4, HIGH);
 delay(motorSpeed);
}

//////////////////////////////////////////////////////////////////////////////
//set pins to ULN2003 high in sequence from 4 to 1
//delay "motorSpeed" between each pin setting (to determine speed)

void Motor28BYJ::ReverseStep(){
 // 1
 digitalWrite(motorPin4, HIGH);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin1, LOW);
 delay(motorSpeed);
 // 2
 digitalWrite(motorPin4, HIGH);
 digitalWrite(motorPin3, HIGH);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin1, LOW);
 delay (motorSpeed);
 // 3
 digitalWrite(motorPin4, LOW);
 digitalWrite(motorPin3, HIGH);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin1, LOW);
 delay(motorSpeed);
 // 4
 digitalWrite(motorPin4, LOW);
 digitalWrite(motorPin3, HIGH);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(motorPin1, LOW);
 delay(motorSpeed);
 // 5
 digitalWrite(motorPin4, LOW);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(motorPin1, LOW);
 delay(motorSpeed);
 // 6
 digitalWrite(motorPin4, LOW);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin2, HIGH);
 digitalWrite(motorPin1, HIGH);
 delay (motorSpeed);
 // 7
 digitalWrite(motorPin4, LOW);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin1, HIGH);
 delay(motorSpeed);
 // 8
 digitalWrite(motorPin4, HIGH);
 digitalWrite(motorPin3, LOW);
 digitalWrite(motorPin2, LOW);
 digitalWrite(motorPin1, HIGH);
 delay(motorSpeed);
}

#include "28BYJ.h"

Motor28BYJ motor(8,9,10,11);

#define endstop1 3
#define endstop2 4

//////////////////////////////////////////////////////////////////////////////
void setup() {
  //declare the motor pins as outputs
  Serial.begin(9600);
  pinMode(endstop1, INPUT);
  pinMode(endstop2, INPUT);
}

void loop() {
  String command = Serial.readString();
  if(Serial.available()){
    char command = char(Serial.read());
    if(command == 'r'){  
      motor.Step(100);
      Serial.print("r");
    }else if( command == 'l') {
      motor.ReverseStep(100);
      Serial.print("l");
    }
  }
  if(command == "open"){
    motor.Step(100);
    Serial.print("open");
    while(!digitalRead(endstop1)){
      motor.Step(100);
    }
  }else if(command == "close"){
    Serial.print("close");
    while(!digitalRead(endstop2)){
      motor.ReverseStep(100);
    }
  }
  command = "";
}


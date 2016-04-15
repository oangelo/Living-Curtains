#include "28BYJ.h"


Motor28BYJ motor(1,2,3,4);

//////////////////////////////////////////////////////////////////////////////
void setup() {
 //declare the motor pins as outputs
 Serial.begin(9600);
}



void loop() {
    if(Serial.available()){
        char command = char(Serial.read());
        if(command == 'r'){  
            motor.Step(100);
        }else if( command == 'l') {
            motor.ReverseStep(100);
        }
    }
}









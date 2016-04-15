#ifndef M28BYJ_H
#define M28BYJ_H 
#include <Arduino.h>

//Arduino lib for step motors does not work properly with this motor.

class Motor28BYJ{
    public:
        Motor28BYJ(int motorPin1, int motorPin2, int motorPin3, int motorPin4);
        void Step(unsigned steps);
        void ReverseStep(unsigned steps);
    private:
        void Step();
        void ReverseStep();
        int motorPin1;  // Blue   - 28BYJ48 pin 1
        int motorPin2;  // Pink   - 28BYJ48 pin 2
        int motorPin3; // Yellow - 28BYJ48 pin 3
        int motorPin4; // Orange - 28BYJ48 pin 4
        int motorSpeed;     //variable to set stepper speed

};

#endif /* 28BYJ_H */

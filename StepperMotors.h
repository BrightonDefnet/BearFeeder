/*
    library for setting up and driving stepper motors
*/
#ifndef StepperMotors_h
#define StepperMotors_h

#include "Arduino.h"

class StepperMotors
{
    public:
        StepperMotors(int in1, int in2, int in3, int in4, int step);
        struct stepper
        {
            int in1;
            int in2;
            int in3;
            int in4;
            int step;
            bool direction;
        };
        void driveMotor(int step);
        void stepMotor(int moveSteps, bool direction, int step);
        stepper motor;
};
#endif
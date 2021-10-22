/*
    library for controlling feed tubes
*/
#ifndef FeedTube_h
#define FeedTube_h

#include "Arduino.h"
#include "StepperMotors.h"

class FeedTube
{
    public:
        FeedTube(int in1, int in2, int in3, int in4, int _step);
        void testMotor();
        void dispense();

    private:
        int _in1;
        int _in2;
        int _in3;
        int _in4;
        int _step;
        int _dispenseSteps;
        bool _running;
        bool _direction;
        StepperMotors motor;
};
#endif
#ifndef MOVEMOTOR_h
#define MOVEMOTOR_h
#include "StepperMotors.h"

class MoveMotor
{
    public:
        MoveMotor(int, int, int, int, int, int, int, int);
        void wait(int, int);

    private:
        int _in1;
        int _in2;
        int _in3;
        int _in4;
        int _step;
        int _minSteps;
        int _maxSteps;
        int _minTime;
        int _maxTime;
        bool _running;
        bool _direction;
        StepperMotors motor;
};
#endif
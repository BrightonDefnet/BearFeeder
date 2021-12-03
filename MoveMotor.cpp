#include "Arduino.h"
#include "MoveMotor.h"
#include "StepperMotors.h"

//initialize a feed tube
MoveMotor::MoveMotor(int in1, int in2, int in3, int in4, int minSteps, int maxSteps, int minTime, int maxTime)
    : motor(in1, in2, in3, in4, 0)
{
    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;
    _minSteps = minSteps;
    _maxSteps = maxSteps;
    _minTime = minTime;
    _maxTime = maxTime;
    _step = 0;
    _direction = true;
}

//delay the feeder
void MoveMotor::wait(int timeMin, int timeMax)
{
    int time = random(timeMin, timeMax);
    delay(time);
}
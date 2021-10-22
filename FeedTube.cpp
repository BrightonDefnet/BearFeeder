#include "Arduino.h"
#include "FeedTube.h"
#include "StepperMotors.h"

//initialize a feed tube
FeedTube::FeedTube(int in1, int in2, int in3, int in4, int dispenseSteps)
    : motor(in1, in2, in3, in4, 0)
{
    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;
    _dispenseSteps = dispenseSteps;
    _step = 0;
    _direction = true;
}

//dispense food
void FeedTube::dispense()
{
    motor.stepMotor(_dispenseSteps, _direction, _step);
}

//test if a motor is properly connected
void FeedTube::testMotor()
{
    for(int i = 0; i < 2; i++)
    {
        motor.stepMotor(_dispenseSteps, _direction, _step);
        if(_direction)
        {
            _direction = false;
        }
        else
        {
            _direction = true;
        }
    }
}
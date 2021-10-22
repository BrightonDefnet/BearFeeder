#include "Arduino.h"
#include "StepperMotors.h"

//initialize motor parameters and pins
StepperMotors::StepperMotors(int in1, int in2, int in3, int in4, int step)
{
    motor.in1 = in1;
    motor.in2 = in2;
    motor.in3 = in3;
    motor.in4 = in4;
    pinMode(motor.in1, OUTPUT);
    pinMode(motor.in2, OUTPUT);
    pinMode(motor.in3, OUTPUT);
    pinMode(motor.in4, OUTPUT);
}

//drive the motor
void StepperMotors::driveMotor(int step)
{
    switch(motor.step)
    {
        case 0:
            digitalWrite(motor.in1, LOW);
            digitalWrite(motor.in2, LOW);
            digitalWrite(motor.in3, LOW);
            digitalWrite(motor.in4, HIGH);
        break;
        case 1:
            digitalWrite(motor.in1, LOW);
            digitalWrite(motor.in2, LOW);
            digitalWrite(motor.in3, HIGH);
            digitalWrite(motor.in4, HIGH);
        break;
        case 2:
            digitalWrite(motor.in1, LOW);
            digitalWrite(motor.in2, LOW);
            digitalWrite(motor.in3, HIGH);
            digitalWrite(motor.in4, LOW);
        break;
        case 3:
            digitalWrite(motor.in1, LOW);
            digitalWrite(motor.in2, HIGH);
            digitalWrite(motor.in3, HIGH);
            digitalWrite(motor.in4, LOW);
        break;
        case 4:
            digitalWrite(motor.in1, LOW);
            digitalWrite(motor.in2, HIGH);
            digitalWrite(motor.in3, LOW);
            digitalWrite(motor.in4, LOW);
        break;
        case 5:
            digitalWrite(motor.in1, HIGH);
            digitalWrite(motor.in2, HIGH);
            digitalWrite(motor.in3, LOW);
            digitalWrite(motor.in4, LOW);
        break;
        case 6:
            digitalWrite(motor.in1, HIGH);
            digitalWrite(motor.in2, LOW);
            digitalWrite(motor.in3, LOW);
            digitalWrite(motor.in4, LOW);
        break;
        case 7:
            digitalWrite(motor.in1, HIGH);
            digitalWrite(motor.in2, LOW);
            digitalWrite(motor.in3, LOW);
            digitalWrite(motor.in4, HIGH);
        break;
        default:
            digitalWrite(motor.in1, LOW);
            digitalWrite(motor.in2, LOW);
            digitalWrite(motor.in3, LOW);
            digitalWrite(motor.in4, LOW);
        break;
    }
}

//step the motor a specified number of steps in a specified direction 
void StepperMotors::stepMotor(int moveSteps, bool direction, int step)
{
    motor.direction = direction;
    step = motor.step;

    for(int i = 0; i < moveSteps; i++)
    {
        driveMotor(step);
        if(motor.direction == true){
        motor.step++;
        } else {
            motor.step--;
        }
        if(motor.step > 7){
            motor.step = 0;
        }
        if(motor.step < 0){
            motor.step = 7;
        }
        delay(1);
    }
}
#include "Wildthing.h"
#include <WiredController.h>
#include <SparkMotor.h>
#include <SingleJoystickDrivePlan.h>
const int JOYSTICK_Y_PIN = A12;
const int JOYSTICK_X_PIN = A11; 

const int LEFT_MOTOR_PIN = 5;
const int RIGHT_MOTOR_PIN = 6;
Wildthing::Wildthing()
{
    pController         = new WiredController(JOYSTICK_X_PIN,JOYSTICK_X_PIN);
    pLeftMotor          = new SparkMotor(LEFT_MOTOR_PIN, true);
    pRightMotor         = new SparkMotor(RIGHT_MOTOR_PIN,false);
    pDifferentialDrive  = new DifferentialDrive(*pLeftMotor,*pRightMotor);
    pControlPlan        = new SingleJoystickDrivePlan(*pDifferentialDrive,*pController);
    
}

void Wildthing::setup()
{
    Charibot::setup();
}

void Wildthing::loop()
{
    Charibot::loop();
}
#include "Wildthing.h"
#include <WiredController.h>
#include <SparkMotor.h>
#include <SingleJoystickDrivePlan.h>
const int JOYSTICK_Y_PIN = 12;
const int JOYSTICK_X_PIN = 11; 

const int LEFT_MOTOR_PIN = 6;
const int RIGHT_MOTOR_PIN = 7;

const int NOISE_WEIGHT = 80;
Wildthing::Wildthing()
{
    
}

void Wildthing::setup()
{
    Charibot::setup();
    pController         = new WiredController(JOYSTICK_X_PIN,JOYSTICK_Y_PIN);
    pLeftMotor          = new SparkMotor(LEFT_MOTOR_PIN, true);
    pRightMotor         = new SparkMotor(RIGHT_MOTOR_PIN,false);
    pDifferentialDrive  = new DifferentialDrive(*pLeftMotor,*pRightMotor);
    pControlPlan        = new SingleJoystickDrivePlan(*pDifferentialDrive,*pController);
}

void Wildthing::loop()
{
    Charibot::loop();
}
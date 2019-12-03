#include "Wildthing.h"
#include <WiredController.h>
#include <SparkMotor.h>
#include <SingleJoystickDrivePlan.h>
const int JOYSTICK_Y_PIN = 12;
const int JOYSTICK_X_PIN = 11; 

const int LEFT_MOTOR_PIN = 5;
const int RIGHT_MOTOR_PIN = 6;

const int NOISE_WEIGHT = 80;
Wildthing::Wildthing()
{
    
}

void Wildthing::setup()
{
    xbeeSerial.begin(9600);
    while(!xbeeSerial){}
    Charibot::setup();
    pController         = new WirelessController(xbeeSerial);
    pLeftMotor          = new SparkMotor(LEFT_MOTOR_PIN, true);
    pRightMotor         = new SparkMotor(RIGHT_MOTOR_PIN,false);
    pDifferentialDrive  = new DifferentialDrive(*pLeftMotor,*pRightMotor);
    pControlPlan        = new SingleJoystickDrivePlan(*pDifferentialDrive,*pController); 
}

void Wildthing::loop()
{
    
    Charibot::loop();
}
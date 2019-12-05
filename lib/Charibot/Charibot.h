#ifndef CHARIBOT_H
#define CHARIBOT_H
#include <Controller.h>
#include <ControlPlan.h>
#include <DifferentialDrive.h>
#include <Motor.h>
#include <Arduino.h>
#include <HardwareSerial.h>
#include <JoystickHandler.h>
class Charibot
{
    public:
        Charibot();
        virtual void setup();
        virtual void loop();
    protected:
        //computer stuff
        HardwareSerial     &consoleSerial = Serial;
        HardwareSerial     &xbeeSerial = Serial1;
        const int   serialBaudRate = 9600;
        //chair stuff
        Controller         *pControllerOne;
        Controller         *pControllerTwo;
        JoystickHandler    *pJoystickHandler;
        ControlPlan        *pControlPlan;
        DifferentialDrive  *pDifferentialDrive;
        Motor              *pLeftMotor;
        Motor              *pRightMotor;
        
};
#endif
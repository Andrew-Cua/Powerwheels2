#ifndef CHARIBOT_H
#define CHARIBOT_H
#include <Controller.h>
#include <ControlPlan.h>
#include <DifferentialDrive.h>
#include <Motor.h>
#include <Arduino.h>
#include <HardwareSerial.h>
#include <Filter.h>
class Charibot
{
    public:
        Charibot();
        virtual void setup();
        virtual void loop();
    protected:
        //computer stuff
        HardwareSerial     &consoleSerial = Serial;
        const int   serialBaudRate = 9600;
        //chair stuff
        Controller         *pController;
        ControlPlan        *pControlPlan;
        DifferentialDrive  *pDifferentialDrive;
        Motor              *pLeftMotor;
        Motor              *pRightMotor;
        Filter<int>        *pXNoiseFilter;
        Filter<int>        *pYNoiseFilter;
        
};
#endif
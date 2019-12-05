#include "Charibot.h"

Charibot::Charibot()
{

}


void Charibot::setup()
{
    consoleSerial.begin(serialBaudRate);
    xbeeSerial.begin(serialBaudRate);
    while(!consoleSerial && !xbeeSerial){}
}

void Charibot::loop()
{
    pJoystickHandler ->update();
    pControlPlan->refresh(true);
}
#include "Charibot.h"

Charibot::Charibot()
{

}


void Charibot::setup()
{
    consoleSerial.begin(serialBaudRate);
    while(!consoleSerial){}
}

void Charibot::loop()
{
    bool connected = pController->poll();
    pControlPlan->refresh(connected);
}
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
    String msgFront = "x: " + pController->getX();
    String msgBack  = " y: " + pController->getY();
    consoleSerial.println(msgFront + msgBack);
    pControlPlan->refresh(connected);
}
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
    bool oneConnected = pControllerOne->poll();
    bool twoConnected = pControllerTwo->poll();
    pControlPlan->refresh(oneConnected || twoConnected);
}
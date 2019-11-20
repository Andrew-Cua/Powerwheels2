#include "wiredController.h"


WiredController::WiredController(int xPin, int yPin)
{
    mXPin = xPin;
    mYPin = yPin;
}

bool WiredController::poll()
{
    mXVal = analogRead(mXPin);
    mYVal = analogRead(mYPin);

    return true;
}
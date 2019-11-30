#include "WiredController.h"
#include <Util.h>

WiredController::WiredController(int xPin, int yPin)
{
    mXPin = xPin;
    mYPin = yPin;
}

bool WiredController::poll()
{
    mXVal = Util::clamp(analogRead(mXPin) - scale,20,0);
    mYVal = Util::clamp(analogRead(mYPin) - scale,20,0);

    return true;
}
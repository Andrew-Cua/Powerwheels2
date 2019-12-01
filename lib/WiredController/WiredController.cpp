#include "WiredController.h"


bool WiredController::poll()
{


    mXVal = Util::clamp(analogRead(mXPin) - NOMINAL_VAL,30,0);
    mYVal = Util::clamp(analogRead(mYPin) - NOMINAL_VAL,30,0);

    Serial.println(mXVal);

    return true;
}
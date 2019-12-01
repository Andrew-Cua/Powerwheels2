#include "WiredController.h"


bool WiredController::poll()
{


    mXVal = Util::deadBand(analogRead(mXPin) - NOMINAL_VAL,30,0);
    mYVal = Util::deadBand(analogRead(mYPin) - NOMINAL_VAL,30,0);
    return true;
}
#include "SingleJoystickDrivePlan.h"

void SingleJoystickDrivePlan::refresh(bool controllerUpdated)
{
    float fwd = Util::mapToFloat(pController.getY(), -512, 512, -1, 1);
    float rot = Util::mapToFloat(pController.getX(), -512, 512, -1, 1);
    float speedLimiter = Util::mapToFloat(analogRead(0),-0,1024,0,1);
    float angularPower;
    bool isQuickTurn = (Util::fDeadBand(fwd, 0.1, 0) == 0);
    float left;
    float right;
    bool overPower = false;
    if (isQuickTurn)
    {
        if (abs(fwd) < 0.2)
        {
            quickStopAccumulator = (1 - quickStopAlpha) * quickStopAccumulator + quickStopAlpha * rot;
        }
        overPower = true;
        angularPower = rot;
    }
    else
    {
        overPower = false;
        angularPower = abs(fwd) * rot - quickStopAccumulator;

        if (quickStopAccumulator > 1)
        {
            quickStopAccumulator -= 1;
        }
        else if (quickStopAccumulator < -1)
        {
            quickStopAccumulator += 1;
        }
        else
        {
            quickStopAccumulator = 0.0;
        }
    }

    left = -fwd - angularPower;
    right = -fwd + angularPower;

    if (overPower)
    {
        if (left > 1.0)
        {
            right -= left - 1;
            left = 1.0;
        }
        else if (right > 1.0)
        {
            left -= right - 1;
            right = 1.0;
        }
        else if (left < -1.0)
        {
            right -= left + 1;
            left = -1;
        }
        else if (right < -1.0)
        {
            right = -1;
            left -= right + 1;
        }
    }
    //Serial.println(left);
    pDrive.set(left, right);
}
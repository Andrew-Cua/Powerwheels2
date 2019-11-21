#include "SingleJoystickDrivePlan.h"

void SingleJoystickDrivePlan::refresh(bool controllerUpdated)
{
    if(controllerUpdated)
    {
        float fwd = pController.getY();
        float rot = pController.getX();

        float left  = fwd + rot;
        float right = fwd - rot;

        pDrive.set(left,right);
    }
}
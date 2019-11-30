#include "SingleJoystickDrivePlan.h"

void SingleJoystickDrivePlan::refresh(bool controllerUpdated)
{
    if(controllerUpdated)
    {
        float fwd = Util::mapToFloat(pController.getY(),-512,512,-1,1);
        float rot = Util::mapToFloat(pController.getX(),-512,512,-1,1);

        float left  = fwd + rot;
        float right = fwd - rot;

        pDrive.set(left,right);
    }
}
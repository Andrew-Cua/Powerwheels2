#include "JoystickHandler.h"

void JoystickHandler::update()
{
    for(int i = 0; i < MAX_JOYSTICKS; i++)
    {
        mJoysticksConnected[i] = mJoysticks[i].poll();
        if(abs(mJoysticks[REMOTE_JOYSTICK_INDEX].getY()) > 10 && abs(mJoysticks[REMOTE_JOYSTICK_INDEX].getX()) > 10)
        {
            //give remote control
            pActiveController = mJoysticks[REMOTE_JOYSTICK_INDEX];
        }else
        {
            //default to onboard controller
            pActiveController = mJoysticks[WIRED_JOYSTICK_INDEX];
        }
        
    }
}

void JoystickHandler::addController(Controller &joystick, int index)
{
    if(index > MAX_JOYSTICKS - 1)
    {
        return;
    }

    mJoysticks[index] = joystick;
}
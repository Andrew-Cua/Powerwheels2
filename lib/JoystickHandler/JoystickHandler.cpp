#include "JoystickHandler.h"


JoystickHandler::JoystickHandler()
{

}
void JoystickHandler::update()
{
    for(int i = 0; i < MAX_JOYSTICKS; i++)
    {
        mJoysticksConnected[i] = mJoysticks[i]->poll();
        if(abs(mJoysticks[REMOTE_JOYSTICK_INDEX]->getY()) > 10 || abs(mJoysticks[REMOTE_JOYSTICK_INDEX]->getX()) > 10)
        {
            //give remote control
            setActive(REMOTE_JOYSTICK_INDEX);
            //Serial.println("using remote");
        }else
        {
            //default to onboard controller
            //Serial.println("wired remote");
           setActive(WIRED_JOYSTICK_INDEX);
        }
        //Serial.println(activeIndex());
        
    }
}

void JoystickHandler::addController(Controller *pJoystick)
{
    if(nJoysticks < MAX_JOYSTICKS)
        mJoysticks[nJoysticks++] = pJoystick;
}
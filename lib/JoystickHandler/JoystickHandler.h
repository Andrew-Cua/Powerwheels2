#ifndef JOYSTICK_HANDLER_H
#define JOYSTICK_HANDLER_H
#include <Controller.h>
#include <Arduino.h>
const int MAX_JOYSTICKS = 2;
const int REMOTE_JOYSTICK_INDEX = 0;
const int WIRED_JOYSTICK_INDEX = 1;
class JoystickHandler
{
    public:
        JoystickHandler();
        void update();
        int activeIndex(){return activeJoystickIndex;}
        void addController(Controller* joystick);
        Controller* getActiveController(){return mJoysticks[activeJoystickIndex];}
    private:
        Controller* mJoysticks[MAX_JOYSTICKS];
        bool       mJoysticksConnected[MAX_JOYSTICKS];
        void setActive(int active){activeJoystickIndex=active;};
        int nJoysticks =0;
        int activeJoystickIndex = 1;
        
};
#endif
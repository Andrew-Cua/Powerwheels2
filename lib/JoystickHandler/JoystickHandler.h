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
        void addController(Controller* joystick);
        Controller* getActiveController(){return activeController;}
    private:
        Controller* mJoysticks[MAX_JOYSTICKS];
        bool       mJoysticksConnected[MAX_JOYSTICKS];
        Controller* activeController;
        int nJoysticks =0;
        
};
#endif
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
        void update();
        void addController(Controller& joystick, int index);
        Controller& getActiveController(){return pActiveController;}
    private:
        Controller mJoysticks[MAX_JOYSTICKS];
        bool       mJoysticksConnected[MAX_JOYSTICKS];
        Controller &pActiveController;
        
};
#endif;
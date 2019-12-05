#ifndef CONTROLPLAN_H
#define CONTROLPLAN_H
#include<DifferentialDrive.h>
#include<Controller.h>
#include <JoystickHandler.h>
class ControlPlan
{
    public:
        virtual void refresh(bool controllerUpdated);
        ControlPlan(JoystickHandler& handler) :
            pHandler(handler){};
    protected:
        JoystickHandler &pHandler;
};
#endif
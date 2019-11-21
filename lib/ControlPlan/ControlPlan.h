#ifndef CONTROLPLAN_H
#define CONTROLPLAN_H
#include<differentialDrive.h>
#include<controller.h>
class ControlPlan
{
    public:
        virtual void refresh(bool controllerUpdated);
        ControlPlan(Controller &controller, bool masterOnly=true) :
            controller(controller), masterOnly(masterOnly) {};
    protected:
        Controller &controller;
        bool masterOnly;

};
#endif
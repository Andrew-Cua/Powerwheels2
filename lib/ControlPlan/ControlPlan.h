#ifndef CONTROLPLAN_H
#define CONTROLPLAN_H
#include<DifferentialDrive.h>
#include<Controller.h>
class ControlPlan
{
    public:
        virtual void refresh(bool controllerUpdated);
        ControlPlan(Controller &controller) :
            pController(controller) {};
    protected:
        Controller &pController;
};
#endif
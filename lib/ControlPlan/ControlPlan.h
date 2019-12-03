#ifndef CONTROLPLAN_H
#define CONTROLPLAN_H
#include<DifferentialDrive.h>
#include<Controller.h>
class ControlPlan
{
    public:
        virtual void refresh(bool controllerUpdated);
        ControlPlan(Controller &controllerOne, Controller &controllerTwo) :
            pControllerOne(controllerOne), pControllerTwo(controllerTwo), pActiveController(controllerTwo) {};
    protected:
        Controller &pControllerOne;
        Controller &pControllerTwo;
        Controller &pActiveController;
};
#endif
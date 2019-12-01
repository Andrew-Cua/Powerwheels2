#ifndef SINGLEJOYSTICKDRIVEPLAN_H
#define SINGLEJOYSTICKDRIVEPLAN_H
#include <DifferentialDrive.h>
#include <ControlPlan.h>
#include <Controller.h>
#include <Util.h>
class SingleJoystickDrivePlan : public ControlPlan
{
    public: 
        SingleJoystickDrivePlan(DifferentialDrive &diffdrive, Controller &controller)
        : ControlPlan(controller), pDrive(diffdrive)
        {
        };
        void refresh(bool controllerUpdated);

    private:
        DifferentialDrive &pDrive;
        

};
#endif
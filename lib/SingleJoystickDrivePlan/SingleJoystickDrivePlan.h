#ifndef SINGLEJOYSTICKDRIVEPLAN_H
#define SINGLEJOYSTICKDRIVEPLAN_H
#include <DifferentialDrive.h>
#include <ControlPlan.h>
#include <Controller.h>
#include <Util.h>
class SingleJoystickDrivePlan : public ControlPlan
{
    public: 
        SingleJoystickDrivePlan(DifferentialDrive &diffdrive, JoystickHandler handler)
        : ControlPlan(handler), pDrive(diffdrive)
        {
        };
        void refresh(bool controllerUpdated);

    private:
        DifferentialDrive &pDrive;
        double quickStopAccumulator = 0;
        const double quickStopAlpha = 0.1;
        

};
#endif
#ifndef CURVATUREDRIVE_H
#define CURVATUREDRIVE_H
#include <Motor.h>
class DifferentialDrive
{
    public:
        void set(float x, float y);
        void stop();
        DifferentialDrive(Motor* left, Motor* right);
    private:
        Motor* leftMotor;
        Motor* rightMotor;
};
#endif
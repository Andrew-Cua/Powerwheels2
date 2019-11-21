#include "DifferentialDrive.h"

DifferentialDrive::DifferentialDrive(Motor* left, Motor* right) : leftMotor(left), rightMotor(right)
{}

void DifferentialDrive::set(float left, float right)
{
    leftMotor  -> set(left);
    rightMotor -> set(right);
}

void DifferentialDrive::stop()
{
    leftMotor  ->stop();
    rightMotor ->stop();
}
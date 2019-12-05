#include "DifferentialDrive.h"
 //Serial.println(left);

void DifferentialDrive::stop()
{
    leftMotor.stop();
    rightMotor.stop();
}
#include "motor.h"


float Motor::getSpeed()
{
  return mSpeed;
}

void Motor::stop()
{
  set(0.0);
}
void Motor::setInverted(bool inverted)
{
  mInverted = inverted;
}
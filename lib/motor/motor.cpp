#include "motor.h"


Motor::Motor(bool inverted)
{
  mInverted = inverted;
}

float Motor::getSpeed()
{
  return mSpeed;
}

void Motor::stop()
{
  set(0.0);
}

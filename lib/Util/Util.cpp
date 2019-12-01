#include "Util.h"

int Util::mapFromFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
float Util::mapToFloat(int x, int in_min, int in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
float Util::fDeadBand(float x, float deadband, int nominalValue)
{
    if(fabs(x) <= nominalValue+deadband && fabs(x) >= nominalValue- deadband)
    {
        return nominalValue;
    }else
    {
        return x;
    }
}

int Util::deadBand(int x, int deadband, int nominalValue)
{
  if(abs(x) < deadband + nominalValue)
  {
    return nominalValue;
  }
  return x;
}

float Util::fClamp(float x, float upperbound, float lowerbound)
{
    if(x > upperbound)
    {
        return upperbound;
    }

    if(x < lowerbound)
    {
        return lowerbound;
    }

    return x;
}
#include "Util.h"

int Util::mapFromFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
float Util::mapToFloat(int x, int in_min, int in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
float Util::fClamp(float x, float deadband, int nominalValue)
{
    if(fabs(x) <= nominalValue+deadband && fabs(x) >= nominalValue- deadband)
    {
        return nominalValue;
    }else
    {
        return x;
    }
}

int Util::clamp(int x, int deadband, int nominalValue)
{
  if(abs(x) < deadband + nominalValue)
  {
    return nominalValue;
  }
  return x;
}
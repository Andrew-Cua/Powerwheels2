#include "Util.h"

float Util::mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float Util::clamp(float x, float deadband, int nominalValue)
{
    if(fabs(x) <= fabs(x)+deadband && fabs(x) >= fabs(x)- deadband)
    {
        return nominalValue;
    }else
    {
        return x;
    }
}
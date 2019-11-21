#ifndef UTIL_H
#define UTIL_H
#include <math.h>
class Util
{
    public:
        static float mapfloat(float x, float in_min, float in_max, float out_min, float out_max);
        static float clamp(float x, float deadband, int nominalValue);
};
#endif
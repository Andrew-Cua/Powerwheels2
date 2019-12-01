#ifndef UTIL_H
#define UTIL_H
#include <math.h>
#include <Arduino.h>
class Util
{
    public:
        static int    mapFromFloat(float x, float in_min, float in_max, float out_min, float out_max);
        static float  mapToFloat(int x, int in_min, int in_max, float out_min, float out_max);
        static float  fDeadBand(float x, float deadband, int nominalValue);
        static int    deadBand(int x, int deadband, int nominalValue);
        static float    fClamp(float x, float upperbound, float lowerbound);
};
#endif
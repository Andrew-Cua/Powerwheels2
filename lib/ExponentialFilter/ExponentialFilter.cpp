#include "ExponentialFilter.h"

template<typename t>
t ExponentialFilter<t>::computeNextValue()
{
    lastOutput = output;
    output = (mWeight * currentVal) + (1 - mWeight) * lastVal; 
    return output;
}
template<typename t>
void ExponentialFilter<t>::setInitalValues(t strtVal, t strtOutput)
{
    lastVal    = strtVal;
    lastOutput = strtOutput;
}
#include "Filter.h"
template<typename t>
void Filter<t>::setCurrentVal(t val)
{
    lastVal = currentVal;
    currentVal = val;
}
#ifndef EXPONENTIALFILTER_H
#define EXPONENTIALFILTER_H
#include <Filter.h>
template<typename t>
class ExponentialFilter : public Filter<t>
{
    private:
        t mWeight;
    public:
        ExponentialFilter(t weight) : mWeight(weight)
        {}
        virtual t computeNextValue() override;
        void setInitalValues(t strtVal, t strtOutput);
};
#endif
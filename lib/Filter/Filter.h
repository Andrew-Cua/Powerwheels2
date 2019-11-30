#ifndef FILTER_H
#define FILTER_H
template<typename t>
class Filter
{
    protected:
        t currentVal = 0;
        t lastVal = 0;
        t output = 0;
        t lastOutput = 0;
    public:
        void setCurrentVal(t val);
        virtual t computeNextValue();
};
#endif FILTER_H
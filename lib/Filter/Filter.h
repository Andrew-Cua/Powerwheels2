#ifndef FILTER_H
#define FILTER_H
template<typename t>
class Filter
{
    protected:
        t currentVal;
        t lastVal;
    public:
        void setCurrentVal(t val);
        virtual t computeNextValue();
};
#endif FILTER_H
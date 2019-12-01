#ifndef WIREDCONTROLLER_H
#define WIREDCONTROLLER_H
#include <Controller.h>
#include <Arduino.h>
#include <Util.h>
class WiredController : public Controller
{
    public:
        virtual bool poll() override;
        WiredController(int xPin, int yPin)
        :mXPin(xPin), mYPin(yPin)
        {
        };
    private:
        const int NOMINAL_VAL = 512;
        int mXPin;
        int mYPin;
        int mXValue;
        int mYValue;
};
#endif
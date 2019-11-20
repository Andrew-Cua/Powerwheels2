#ifndef WIREDCONTROLLER_H
#define WIREDCONTROLLER_H
#include <controller.h>
#include <Arduino.h>
class WiredController : public Controller
{
    public:
        virtual bool poll() override;
        WiredController(int xPin, int yPin);
    private:
        const int scale = 512;
        int mXPin;
        int mYPin;
        int mXValue;
        int mYValue;
};
#endif
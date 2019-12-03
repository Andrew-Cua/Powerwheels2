#ifndef WILDTHING_H
#define WILDTHING_H
#include <Charibot.h>
#include <WirelessController.h>
class Wildthing : public Charibot
{
    public:
        Wildthing();
        virtual void setup() override;
        virtual void loop() override;
    private:
        HardwareSerial &xbeeSerial = Serial1;
        Controller* pWirelessController;
    
};
#endif
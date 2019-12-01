#ifndef WIRELESS_CONTROLLER_H
#define WIRELESS_CONTROLLER_H
#include <Controller.h>
class WirelessController : public Controller
{
    public:
        WirelessController(){}
        virtual bool poll() override;
};
#endif
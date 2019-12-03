#ifndef WIRELESS_CONTROLLER_H
#define WIRELESS_CONTROLLER_H
#include <Controller.h>
#include <HardwareSerial.h>
#include <Arduino.h>
class WirelessController : public Controller
{
    public:
        WirelessController(HardwareSerial &serial) : xbeeSerial(serial)
        {
        }
        virtual bool poll() override;

    protected:
        static const int MAX_MESSAGE_SIZE = 256; ///< maximum size of inbound message from wireless controller
        char msgbuf[MAX_MESSAGE_SIZE];           ///< buffer for inbound message
        int msg_chars_in = 0;

    private:
        static const int DISCONNECT_TIME = 500;
        HardwareSerial &xbeeSerial;
        unsigned long lastMessageTime;
        void parseMsg(char *buf);
        char *gatherMsg();
};
#endif  
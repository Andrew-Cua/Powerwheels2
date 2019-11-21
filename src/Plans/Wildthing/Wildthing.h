#ifndef WILDTHING_H
#define WILDTHING_H
#include <Charibot.h>
class Wildthing : public Charibot
{
    public:
        Wildthing();
        virtual void setup() override;
        virtual void loop() override;
    
};
#endif
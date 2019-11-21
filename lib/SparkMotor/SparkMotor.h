
#ifndef SPARKMOTOR_H
#define SPARKMOTOR_H
#include <Motor.h>
#include <Servo.h>
#include <Util.h>
class SparkMotor : public Motor
{
    public:
        SparkMotor(int pin, bool inverted = false);
        virtual void set(float speed) override;
    private:
        Servo* servo;
        int servoPin;
};

#endif
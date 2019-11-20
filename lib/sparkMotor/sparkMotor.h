
#ifndef SPARKMOTOR_H
#define SPARKMOTOR_H
#include <motor.h>
#include <Servo.h>
class SparkMotor : public Motor
{
    public:
        SparkMotor(int pin, bool inverted);
        virtual void set(float speed) override;
    private:
        int servoPin;

};

#endif
#include <SparkMotor.h>
SparkMotor::SparkMotor(int pin, bool inverted) : servoPin(pin)
{
    setInverted(inverted);
    servo ->attach(servoPin);
}

void SparkMotor::set(float speed)
{
    int servoSpeed = Util::mapFromFloat((mInverted ?  -1*speed : speed ),-1,1,1000,2000);
    mSpeed = speed;
    servo -> writeMicroseconds(servoSpeed);
}
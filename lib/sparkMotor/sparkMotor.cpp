#include <sparkMotor.h>
SparkMotor::SparkMotor(int pin, bool inverted) : servoPin(pin)
{
    setInverted(inverted);
    servo ->attach(servoPin);
}

void SparkMotor::set(float speed)
{
    int servoSpeed = mapfloat((mInverted ?  -1*speed : speed ),-1,1,1000,2000);
    servo -> writeMicroseconds(servoSpeed);
}
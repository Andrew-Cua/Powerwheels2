#ifndef MOTOR_H
#define MOTOR_H
class Motor
{

  protected:
   float mSpeed;
   bool mInverted;
  public:
   static constexpr double maxSpeed = 1.0;
   static constexpr double minSpeed = -1.0;
   Motor(bool inverted);
   virtual void set(double speed);
   float getSpeed();
   void stop();
   void setInverted(bool invert);
   bool getInverted();
};

#ifndef MOTOR_H
#define MOTOR_H
class Motor
{

  protected:
   float mSpeed;
   bool mInverted;
  public:
   static constexpr float maxSpeed = 1.0;
   static constexpr float minSpeed = -1.0;
   virtual ~Motor() {};
   virtual void set(float speed);
   float getSpeed();
   void stop();
   void setInverted(bool invert);
   bool getInverted();
};
#endif
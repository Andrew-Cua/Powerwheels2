#ifndef CONTROLLER_H
#define CONTROLLER_H
class Controller
{
    public:
        virtual bool poll();
        int  getX();
        int  getY();
    protected:
        int mXVal;
        int mYVal;


};
#endif
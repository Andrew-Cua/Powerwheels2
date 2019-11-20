#ifndef CONTROLLER_H
#define CONTROLLER_H
class Controller
{
    public:
        virtual bool poll();
        int  getX();
        int  getY();
    private:
        int mXVal;
        int mYVal;


};
#endif
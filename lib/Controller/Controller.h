#ifndef CONTROLLER_H
#define CONTROLLER_H
class Controller
{
    public:
        static const int MAX_BUTTONS = 16;
        virtual bool poll();
        int  getX();
        int  getY();
    protected:
        int mXVal;
        int mYVal;
        bool mConnected = false;
        bool currentButtons[MAX_BUTTONS];
        bool isConnected() const;
        bool getButton(int button) const;


};
#endif
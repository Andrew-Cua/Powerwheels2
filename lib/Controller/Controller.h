#ifndef CONTROLLER_H
#define CONTROLLER_H
class Controller
{
    public:
        static const int MAX_BUTTONS = 16;
        virtual bool poll();
        int  getX();
        int  getY(); 
        bool isConnected() const;
        bool getButton(int button) const;
    protected:
        int mXVal = 0;
        int mYVal = 0;
        bool mConnected = false;
        bool currentButtons[MAX_BUTTONS];



};
#endif
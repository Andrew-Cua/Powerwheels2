#include "Controller.h"


int Controller::getX()
{
    return mXVal;
}

int Controller::getY()
{
    return mYVal;
}


/**
 * @brief Return state of a specified button (index 0-n)
 *
 * @return true if button is down, false if up
 */
bool Controller::getButton(int button) const {
  return (button < MAX_BUTTONS ? currentButtons[button] : false);
}

/**
 * @brief Return whether controller is connected
 *
 * @return true if connected, false if not
 */
bool Controller::isConnected() const {
  return mConnected;
}
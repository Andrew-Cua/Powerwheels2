#include "WirelessController.h"

bool WirelessController::poll()
{
    char *msg = gatherMsg();
    unsigned long now = millis();

    if (!msg)
    {
        mConnected = (now - lastMessageTime >= DISCONNECT_TIME);
        return false;
    }
    parseMsg(msg);
    lastMessageTime = now;
    mConnected = true;

    return true;
}

static const char CONTROLLER_HEADER = 'C';
static const char *SPACES = " ";

/**
 * @brief Update state based on the content of a message from 
 * the wireless controller.
 *
 * @todo document message format here
 *
 * @param msg controller message to parse
 */
void WirelessController::parseMsg(char *msg)
{

    // First part of the message is a single-character header. The only
    // one we recognize is 'C' for a controller message.
    char *header = strtok(msg, SPACES);
    if (*header != CONTROLLER_HEADER)
    {
        return;
    }

    // Next is the array of button states, represented as ASCII '0' and '1'.
    char *buttons = strtok(nullptr, SPACES);
    int i = 0;
    char ch;
    while ((ch = *buttons++) && (i < MAX_BUTTONS))
    {
        currentButtons[i++] = (ch == '1');
    }

    // Then joystick values, passed as -512 to 511.
    mXVal = -atoi(strtok(nullptr, SPACES));
    mYVal = atoi(strtok(nullptr, SPACES));
    Serial.println(mYVal);
}

// Gather characters from the serial port and return
// a char* to the null-terminated string we got if
// we saw a delimiter... otherwise return nullptr.
// FOR NOW hardcoded to use Serial1 for inbound data

// Messages are delimited with a CR/LF; we ignore the CR.
static const char LF = 0x0a;
static const char CR = 0x0d;
static const char NUL = 0x00;

char *WirelessController::gatherMsg()
{
    char ch;
    char *result = nullptr;

    while (result == nullptr && xbeeSerial.available())
    {
        ch = xbeeSerial.read();
        switch (ch)
        {

        case CR:
            // CRs we skip.
            break;

        case LF:
            // Got our delimiter. Null-terminate the string, reset
            // the string pointer, and return the buffer.
            msgbuf[msg_chars_in] = NUL;
            msg_chars_in = 0;
            result = msgbuf;
            break;

        default:
            // Don't add more than we can hold. TODO: warning on
            // message too long?
            if (msg_chars_in < MAX_MESSAGE_SIZE)
            {
                msgbuf[msg_chars_in++] = ch;
            }
            break;
        }
    }
    return result;
}
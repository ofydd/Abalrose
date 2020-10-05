#ifndef KEYEVENTS_H
#define KEYEVENTS_H
#include "../../PrecompiledHeaders/includeHeader.h"

class KeyEvents
{
public:
    KeyEvents();
    ~KeyEvents();
    void keyPressed(sf::Keyboard::Key Key);
    void updatePlayerMovement(sf::Keyboard::Key key);
    //void setkeys(); TODO: Load default keys from config file;
private:
 
};

#endif
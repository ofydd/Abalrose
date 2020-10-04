#ifndef MOUSEEVENTS_H
#define MOUSEEVENTS_H
#include "../../PrecompiledHeaders/includeHeader.h"

class MouseEvents
{
public:
    MouseEvents();
    ~MouseEvents();

    void mousePressed(sf::Mouse::Button button);
    void mouseMoved();
    void mouseScrolled();
    void setMouseCentered();
public:
    sf::Vector2i mousePosition;
    sf::Vector2i prevMousePosition;
    sf::Vector2i getMousePosition();
    
private:
    //std::ifstream windowBounds; will load the window.size() from Config/windowConfig.ini
    //float mPosX, mPosY;
};

#endif
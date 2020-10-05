#ifndef MOUSEEVENTS_H
#define MOUSEEVENTS_H
#include "../../PrecompiledHeaders/includeHeader.h"

class MouseEvents
{
public:
    MouseEvents();
    ~MouseEvents();

    void mousePressed(sf::Mouse::Button button);
    void mouseMoved(sf::RenderWindow &window);
    void mouseScrolled();
    void setMouseCentered(sf::RenderWindow &window);
public:
    sf::Vector2i mousePosition;
    sf::Vector2i prevMousePosition;
    sf::Vector2i getMousePosition();
    
private:
    //width and height of the render window, used to set mouse centered;
    int width, height; 
                                
};

#endif
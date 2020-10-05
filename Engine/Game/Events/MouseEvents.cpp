#include "MouseEvents.h"

MouseEvents::MouseEvents()
{}

MouseEvents::~MouseEvents()
{}

void MouseEvents::mousePressed(sf::Mouse::Button button)
{
    std::cout << "Mouse button pressed!" << std::endl;
}

void MouseEvents::mouseMoved(sf::RenderWindow &window)
{
    //std::cout << sf::Mouse::getPosition(window).x << " " << sf::Mouse::getPosition(window).y << std::endl;
}

void MouseEvents::mouseScrolled()
{
    std::cout << "Mouse wheel scrolled!" << std::endl;
}

void MouseEvents::setMouseCentered(sf::RenderWindow &window)
{
    
    // TODO: fix this:
    // std::ifstream fin("../../../Engine/Config/windowConfig.txt");
    // fin >> windowBounds.x >> windowBounds.y;
    // std::cout << windowBounds.x << windowBounds.y;
    // idk, seems like it does not open the file or there 
    // is something wrong with the file itself,
    // only loads 0000 instead of 600 400
}

sf::Vector2i MouseEvents::getMousePosition()
{
    return sf::Mouse::getPosition();
}
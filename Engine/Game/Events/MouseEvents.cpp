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
    std::cout << sf::Mouse::getPosition(window).x << " " << sf::Mouse::getPosition(window).y << std::endl;
}

void MouseEvents::mouseScrolled()
{
    std::cout << "Mouse wheel scrolled!" << std::endl;
}

void MouseEvents::setMouseCentered(sf::RenderWindow &window)
{
    std::ifstream windowBoundsIn("../Config/windowConfig.txt");
    windowBoundsIn >> width;
    windowBoundsIn >> height;
    
    sf::Vector2i mousePositionCentered;
    mousePositionCentered.x = width/2;
    mousePositionCentered.y = height/2;
    
    sf::Mouse::setPosition(mousePositionCentered, window);
}

sf::Vector2i MouseEvents::getMousePosition()
{
    return sf::Mouse::getPosition();
}
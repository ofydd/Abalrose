#include "MouseEvents.h"

MouseEvents::MouseEvents()
{}

MouseEvents::~MouseEvents()
{}

void MouseEvents::mousePressed(sf::Mouse::Button button)
{
    std::cout << "Mouse button pressed!" << std::endl;
}

void MouseEvents::mouseMoved()
{
    std::cout << sf::Mouse::getPosition().x << " " << sf::Mouse::getPosition().y << std::endl;
}

void MouseEvents::mouseScrolled()
{
    std::cout << "Mouse wheel scrolled!" << std::endl;
}

void MouseEvents::setMouseCentered()
{
    //TODO: Get window bounds and set mousePosition.x = wBounds.x, mousePosition.y = wBounds.y;
}

sf::Vector2i MouseEvents::getMousePosition()
{
    return sf::Mouse::getPosition();
}
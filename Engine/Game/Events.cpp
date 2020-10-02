#include "Events.h"

Events::Events()
{}
Events::~Events()
{}

void Events::handleEvent(sf::Event event)
{
    setEvent(event);

    switch(event.type)
    {
      case sf::Event::KeyPressed:
        processEvents(KeyPressed, true);
        break;
      case sf::Event::KeyReleased:
        processEvents(KeyPressed, false);
        break;
      case sf::Event::MouseMoved:
        processEvents(MouseMoved, true);
        break;
      case sf::Event::MouseWheelScrolled:
        processEvents(MouseScrolled, true);
        break;
      case sf::Event::MouseButtonPressed:
        processEvents(MouseButtonPressed, true);
        break;
      case sf::Event::MouseButtonReleased:
        processEvents(MouseButtonPressed, false);
        break;
      case sf::Event::Closed:
        processEvents(WindowClosed, true);
        break;
    }
}

void Events::setEvent(sf::Event event)
{
    this->event = event;
}

void Events::processEvents(eventType type, bool eventState)
{
    if(type == KeyPressed && eventState)
      std::cout << "Key was pressed!" << std::endl;
    if(type == KeyPressed && !eventState)
      std::cout << "Key was released!" << std::endl;
    if(type == MouseMoved && eventState)
      std::cout << "Mouse moved!" << std::endl;
    if(type == MouseScrolled && eventState)
      std::cout << "Mouse wheel scrolled!" << std::endl;
    if(type == MouseButtonPressed && eventState)
      std::cout << "Mouse button pressed!" << std::endl;
    if(type == MouseButtonPressed && !eventState)
      std::cout << "Mouse button released!" << std::endl;
    if(type == WindowClosed && eventState)
      std::cout << "Window was closed!" << std::endl;
}

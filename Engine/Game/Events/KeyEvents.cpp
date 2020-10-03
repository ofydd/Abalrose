#include "KeyEvents.h"

KeyEvents::KeyEvents()
{
}

KeyEvents::~KeyEvents()
{
}

void KeyEvents::keyPressed(sf::Keyboard::Key key)
{
    switch(key)
    {
        case sf::Keyboard::A:
            std::cout << "A" << std::endl;
            break;
        case sf::Keyboard::B:
            std::cout << "B" << std::endl;
            break;
        case sf::Keyboard::W:
            std::cout << "W" << std::endl;
            break;
        case sf::Keyboard::S:
            std::cout << "S" << std::endl;
            break;
        case sf::Keyboard::D:
            std::cout << "D" << std::endl;
            break;

        
    }
}
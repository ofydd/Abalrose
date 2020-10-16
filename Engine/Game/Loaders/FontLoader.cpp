#include "FontLoader.h"

FontLoader::FontLoader()
{}

FontLoader::~FontLoader()
{}

void FontLoader::loadFont(sf::Font font, std::string location)
{
    if(!font.loadFromFile(location))
        std::cout << "Cannot load font! You fucked something up!" << std::endl;
}
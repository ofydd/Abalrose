#ifndef FONTLOADER_H
#define FONTLOADER_H
#include "../../PrecompiledHeaders/includeHeader.h"

class FontLoader
{
public:
    FontLoader();
    ~FontLoader();
    void loadFont(sf::Font font, std::string location);    
};


#endif
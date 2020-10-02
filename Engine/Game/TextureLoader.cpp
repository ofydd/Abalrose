#include "TextureLoader.h"

TextureLoader::TextureLoader()
{}

TextureLoader::~TextureLoader()
{}

void TextureLoader::loadTexture(sf::Texture *texture, std::string location)
{
    this->texture = texture;
    this->location = location;
    if(!texture->loadFromFile(location))
      std::cout << "Could not load texture" << std::endl;
}

#ifndef TEXTURELOADER_H
#define TEXTURELOADER_H

#include "../../PrecompiledHeaders/includeHeader.h"

class TextureLoader
{
public:
    TextureLoader();
    ~TextureLoader();
  public:
    void loadTexture(sf::Texture *texture, std::string location);
  private:
    //sf::Texture *texture;
    //std::string location;
};

#endif

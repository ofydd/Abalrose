#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>
#include <iostream>

class textureLoader
{
public:
    textureLoader();
    ~textureLoader();
  public:
    void loadTexture(sf::Texture *texture, std::string location);
  private:
    sf::Texture *texture;
    std::string location;
};

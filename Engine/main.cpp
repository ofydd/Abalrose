#include <iostream>
#include "Game/textureLoader.h"

int main()
{
    sf::Texture bgTexture;
    textureLoader TextureLoader;
    TextureLoader.loadTexture(&bgTexture, "../../../Abalrose/Engine/background.png");
    sf::Sprite bgSprite;
    bgSprite.setTexture(bgTexture);
    sf::RenderWindow mWindow(sf::VideoMode(600, 400), "Abalrose");
    while(mWindow.isOpen())
    {
      sf::Event event;
      while(mWindow.pollEvent(event))
      {
        switch(event.type)
        {
          case sf::Event::Closed:
            mWindow.close();
            break;
        }
      }
      mWindow.clear(sf::Color(150, 150, 150, 255));
      mWindow.draw(bgSprite);
      mWindow.display();
    }
    return 0;
}

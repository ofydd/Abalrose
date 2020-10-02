#include <iostream>
#include "Game/Game.h"

int main()
{
    Game game;
    game.run();
    return 0;
}


/*
sf::Texture bgTexture;
TextureLoader textureLoader;
textureLoader.loadTexture(&bgTexture, "../../../Abalrose/Engine/background.png");
sf::Sprite bgSprite;
bgSprite.setTexture(bgTexture);
sf::RenderWindow mWindow(sf::VideoMode(600, 400), "Abalrose");
while(mWindow.isOpen())
{
  Events event;
  //sf::Event sfEvent;
  eventType type;
  event.processEvents(type);
  mWindow.clear(sf::Color(150, 150, 150, 255));
  mWindow.draw(bgSprite);
  mWindow.display();
}
*/

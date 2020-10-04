#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(600, 400), "Abalrose")
{
}

Game::~Game()
{
}

void Game::manageEvents()
{
  sf::Event event;
  while(mWindow.pollEvent(event))
    {
      switch(event.type)
      {
          case sf::Event::Closed:
            mWindow.close();
            break;
          case sf::Event::KeyPressed:
            keyEvent.keyPressed(event.key.code);
            break;
          case sf::Event::MouseMoved:
            mouseEvent.mouseMoved();
            break;
          case sf::Event::MouseButtonPressed:
            mouseEvent.mousePressed(event.mouseButton.button);
      }
    }
}

void Game::run()
{

    textureLoader.loadTexture(&bgTexture, "../background.png");
    background.setTexture(bgTexture);
    textureLoader.loadTexture(&pTexture, "../player.png");
    pSprite.setTexture(pTexture);
    sf::Clock clock;
    sf::Time sinceLastUpdate = sf::Time::Zero;
    while(mWindow.isOpen())
    {
      manageEvents();
      while(sinceLastUpdate > timePerFrame)
      {
        sinceLastUpdate -= timePerFrame;
        manageEvents();
        update(timePerFrame);
      }
      render();
    }
}

void Game::update(sf::Time deltaTime)
{
    
}

void Game::render()
{
  mWindow.clear(sf::Color(150, 150, 150, 255));
  mWindow.draw(background);
  mWindow.draw(pSprite);
  mWindow.display();
}

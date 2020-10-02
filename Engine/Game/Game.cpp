#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(600, 400), "Abalrose")
{
    //textureLoader.loadTexture(mTexture, "../background.png");
}

Game::~Game()
{
}

void Game::run()
{
    while(mWindow.isOpen())
    {
      sf::Event event;
      while(mWindow.pollEvent(event))
      {
          events.handleEvent(event);
      }
      render();
    }
}

void Game::update(float deltaTime)
{
  deltaTime = 0.f;
}

void Game::render()
{
  mWindow.clear(sf::Color(150, 150, 150, 255));
  mWindow.display();

}

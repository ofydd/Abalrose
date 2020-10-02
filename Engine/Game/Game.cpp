#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(600, 400), "Abalrose")
{
}

Game::~Game()
{
}

void Game::manageEvents() // this is a function for the main event loop;
{
  sf::Event event;
  while(mWindow.pollEvent(event))
    events.handleEvent(event);
}

void Game::run()
{

    textureLoader.loadTexture(&bgTexture, "../background.png");
    background.setTexture(bgTexture);
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
    sf::Vector2f movement(0.f, 0.f);
}

void Game::render()
{
  mWindow.clear(sf::Color(150, 150, 150, 255));
  mWindow.draw(background);
  mWindow.display();
}

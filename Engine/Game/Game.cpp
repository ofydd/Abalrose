#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(600, 400), "Abalrose")
{
}

Game::~Game()
{
}

void Game::init()
{
    std::ifstream windowIn("../Config/windowConfig.txt");
    if(!windowIn)
      std::cout << "I did not manage to open the file!" << std::endl;
    windowIn >> width; 
    windowIn >> height;
    std::cout << width << " " << height << std::endl;

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
            if(event.key.code == sf::Keyboard::J)
              mouseEvent.setMouseCentered(mWindow);
            break;
          case sf::Event::MouseMoved:
            mouseEvent.mouseMoved(mWindow);
            break;
          case sf::Event::MouseButtonPressed:
            mouseEvent.mousePressed(event.mouseButton.button);
            break;
      }    
    }
}

void Game::run()
{
    init();
    textureLoader.loadTexture(&bgTexture, "../background.png");
    background.setTexture(bgTexture);
    textureLoader.loadTexture(&pTexture, "../player.png");
    pSprite.setTexture(pTexture);
    sf::Clock clock; //this will be moved to the entity system. will call entity.update();
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

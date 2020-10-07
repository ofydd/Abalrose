#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(600, 400), "Abalrose")
{
}

Game::~Game()
{
}

void Game::loadWindowBounds()
{
    std::ifstream windowIn("../Config/windowConfig.txt");
    if(!windowIn)
        std::cout << "I did not manage to open the file!" << std::endl;
    windowIn >> windowSize.x; 
    windowIn >> windowSize.y;
    windowIn >> title; //TODO: fix std::getline, as it does not read text from file
    windowIn >> fullscreen;
    windowIn >> refreshRate;
}

void Game::init()
{
  loadWindowBounds();
  mWindow.setSize(windowSize);
  mWindow.setTitle(title);
  mWindow.setFramerateLimit(uint(refreshRate)); 
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
          //for now, change later:
            soundEffect.loadSound(mSound, "hello!");
            break;
          case sf::Event::MouseWheelScrolled:
            mouseEvent.mouseScrolled();
            break;
      }    
    }
}

void Game::run()
{
    textureLoader.loadTexture(&bgTexture, "../background.png");
    background.setTexture(bgTexture);
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
  mWindow.display();
}

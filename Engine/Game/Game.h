#ifndef GAME_H
#define GAME_H
#include "../PrecompiledHeaders/includeHeader.h"
#include "../PrecompiledHeaders/eventTypes.h"
#include "Events.h"
#include "TextureLoader.h"

class Game
{
public:
    Game();
    ~Game();
public:
    void update(sf::Time deltaTime);
    void run();
    void render();
private:
    TextureLoader textureLoader;
    sf::RenderWindow mWindow;
    sf::Texture bgTexture;
    sf::Sprite background;
    sf::Time timePerFrame = sf::seconds(1.0f/144.f);
    //TODO: timePerFrame depends on refresh rate. Load from config file.
private:
    Events events;
    void manageEvents();
};

#endif

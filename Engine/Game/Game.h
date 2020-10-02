#ifndef GAME_H
#define GAME_H
#include "../Config/includeHeader.h"
#include "../Config/eventTypes.h"
#include "Events.h"
#include "TextureLoader.h"

class Game
{
public:
    Game();
    ~Game();
public:
    void update(float deltaTime);
    void run();
    void render();
private:
    Events events;
    TextureLoader textureLoader;
    sf::RenderWindow mWindow;
    sf::Texture mTexture;

};

#endif

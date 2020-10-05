#ifndef GAME_H
#define GAME_H
#include "../PrecompiledHeaders/includeHeader.h"
#include "../PrecompiledHeaders/eventTypes.h"
#include "TextureLoader.h"
#include "Events/KeyEvents.h"
#include "Events/MouseEvents.h"

class Game
{
public:
    Game();
    ~Game();
public:
    
    void run();
    
private:
    sf::RenderWindow mWindow;
    sf::Texture bgTexture;
    sf::Sprite background;
    sf::Texture pTexture;
    sf::Sprite pSprite;
    
    TextureLoader textureLoader;
    KeyEvents keyEvent;
    MouseEvents mouseEvent;

    sf::Time timePerFrame = sf::seconds(1.0f/144.f);
    //TODO: timePerFrame depends on refresh rate. Load from config file.
private:
    void manageEvents();
    void loadWindowBounds();
    void render();
    void update(sf::Time deltaTime);
};

#endif

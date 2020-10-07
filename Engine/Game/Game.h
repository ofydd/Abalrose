#ifndef GAME_H
#define GAME_H
#include "../PrecompiledHeaders/includeHeader.h"
#include "../PrecompiledHeaders/eventTypes.h"
#include "Loaders/TextureLoader.h"
#include "Loaders/SoundLoader.h"
#include "Events/KeyEvents.h"
#include "Events/MouseEvents.h"

class Game
{
public:
    Game();
    ~Game();
public:
    
    void run();
    void init();

private:
    sf::RenderWindow mWindow;
    sf::Texture bgTexture;
    sf::Sprite background;
    sf::Sound mSound;
    
    TextureLoader textureLoader;
    SoundLoader soundEffect;
    KeyEvents keyEvent;
    MouseEvents mouseEvent;

    sf::Time timePerFrame = sf::seconds(1.0f/144.f);
    //TODO: timePerFrame depends on refresh rate. Load from config file.
private:
    void manageEvents();
    void loadWindowBounds();
    void render();
    void update(sf::Time deltaTime);
    

private: //window-related:
    std::string title;
    sf::Vector2u windowSize;
    bool fullscreen = false;
    float refreshRate; 

};

#endif

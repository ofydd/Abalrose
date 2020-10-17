#ifndef ENTITY_H
#define ENTITY_H
#include "../PrecompiledHeaders/includeHeader.h"

class Entity
{
public:
    Entity();
    ~Entity();
    void update(sf::Time dt);
    void initEntity();
private:
    int id; 
    std::string name;

    sf::Vector2i entityPosition;
    sf::Vector2i entitySize; 
    float velocity;

    bool isControlable;
    bool hasPhysics;
    
    sf::Texture entityTexture;
    sf::Sprite entitySprite;
    //sf::IntRect entityRect(entityPosition, entitySize);
};

#endif
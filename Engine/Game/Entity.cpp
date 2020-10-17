#include "Entity.h"

Entity::Entity() : entityPosition(), entitySize() {}
Entity::~Entity() {}

void Entity::initEntity()
{
    this->name = "";
    this->id = 0;
    this->entitySize.x = entityTexture.getSize().x;
    this->entitySize.y = entityTexture.getSize().y;
}

void Entity::update(sf::Time dt)
{
    sf::Vector2f movement;
    this->entitySprite.move(movement);
}
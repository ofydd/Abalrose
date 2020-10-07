#include "SoundLoader.h"

SoundLoader::SoundLoader()
{}

SoundLoader::~SoundLoader()
{}

void SoundLoader::loadSound(sf::Sound sound, std::string location)
{
     sf::SoundBuffer buffer;
    if(!buffer.loadFromFile(location))
        std::cout << "Could not load buffer from location: " << location;
    sound.setBuffer(buffer);
}
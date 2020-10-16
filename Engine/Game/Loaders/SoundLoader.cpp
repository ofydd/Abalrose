#include "SoundLoader.h"

SoundLoader::SoundLoader()
{}

SoundLoader::~SoundLoader()
{}

void SoundLoader::loadSound(sf::SoundBuffer &soundBuffer, sf::Sound &sound, std::string location)
{
    if(!soundBuffer.loadFromFile(location))
        std::cout << "Could not load buffer from location: " << location << std::endl;
    sound.setBuffer(soundBuffer);
}
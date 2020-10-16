#ifndef SOUNDLOADER_H
#define SOUNDLOADER_H

#include "../../PrecompiledHeaders/includeHeader.h"

class SoundLoader
{
public:
    SoundLoader();
    ~SoundLoader();
public:
    void loadSound(sf::SoundBuffer &soundBuffer, sf::Sound &sound, std::string location);

private:
    sf::Sound sound;
    sf::SoundBuffer buffer;
};

#endif
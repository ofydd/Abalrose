#ifndef SOUNDLOADER_H
#define SOUNDLOADER_H

#include "../../PrecompiledHeaders/includeHeader.h"

class SoundLoader
{
public:
    SoundLoader();
    ~SoundLoader();
public:
    void loadSound(sf::Sound sound, std::string location);
};

#endif
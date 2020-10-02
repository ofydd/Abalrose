#ifndef EVENT_H
#define EVENT_H
#include "../PrecompiledHeaders/includeHeader.h"
#include "../PrecompiledHeaders/eventTypes.h"

class Events
{
public:
    Events();
    ~Events();
    void setEvent(sf::Event event);
    void handleEvent(sf::Event event);
    void processEvents(eventType type, bool eventState);
private:
    sf::Event event;
    bool eventState;

};

#endif

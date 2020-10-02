#ifndef EVENT_H
#define EVENT_H
#include "../Config/includeHeader.h"
#include "../Config/eventTypes.h"

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

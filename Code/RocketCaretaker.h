#ifndef ROCKETCARETAKER_H
#define ROCKETCARETAKER_H

#include <string>
#include "RocketMemento.h"

using namespace std;

class RocketCaretaker
{
private:
    RocketMemento *memento;

public:
    RocketCaretaker();
    RocketMemento* getMemento();
    void setMemento(RocketMemento* rm);
};

#endif
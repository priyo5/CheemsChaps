#include "RocketCaretaker.h"
#include <iostream>

RocketCaretaker::RocketCaretaker():
    memento(0)
{}

RocketMemento* RocketCaretaker::getMemento()
{
    return this -> memento;
}

void RocketCaretaker::setMemento(RocketMemento* rm)
{
    this -> memento = rm;
}
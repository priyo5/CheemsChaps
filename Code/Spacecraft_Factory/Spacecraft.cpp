#include "Spacecraft.h"

Spacecraft::Spacecraft(int numPeople, int cap, ContainerItems* cont, ArrivalObserver* arr)
{
    this->numPeople = numPeople;
    this->cargo = cont;
    this->capacity = cap;
    this->cargo_monitor = arr;
}

ContainerItems *Spacecraft::getNumPeople()
{
    return this->numPeople;
}

ContainerItems *Spacecraft::getCargo()
{
    return this->cargo;
}

ArrivalObserver *Spacecraft::getObserver()
{
    return this->cargo_monitor;
}
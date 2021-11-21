#include "Spacecraft.h"

Spacecraft::Spacecraft(int numPeople, int cap, ContainerItems* cont, ArrivalObserver* arr)
{
    this->numPeople = numPeople;
    this->cargo = cont;
    this->Capacity = cap;
    this->cargo_monitor = arr;
}

int Spacecraft::getNumPeople()
{
    return this->numPeople;
}

int Spacecraft::getNumSats()
{
    return this->numSatellites;
}

ContainerItems *Spacecraft::getCargo()
{
    return this->cargo;
}

ArrivalObserver *Spacecraft::getObserver()
{
    return this->cargo_monitor;
}

void Spacecraft::setCargo(ContainerItems *c)
{
    this->cargo = c;
}

void Spacecraft::setObserver(ArrivalObserver *AO)
{
    this->cargo_monitor = AO;
}

void Spacecraft::setNumSats(int num)
{
    this->numSatellites = num;
}

#include "CrewDragon.h"

CrewDragon::CrewDragon(int weight, int numpeople) : Spacecraft(weight)
{
    this->numpeople = numpeople;
}

void CrewDragon::setNumpeople(int numPeople) {
    this->numPeople = numPeople;
}

void CrewDragon::setCapacity(int capacity) {
    this->capacity = capacity;
}

int CrewDragon::getNumpeople() {
    return this->numPeople;
}

int CrewDragon::getCapacity() {
    return this->capacity;
}
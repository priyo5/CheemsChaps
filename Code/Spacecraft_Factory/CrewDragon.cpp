#include "CrewDragon.h"

using namespace  std;

#include <iostream>

CrewDragon::CrewDragon(int numpeople) : Spacecraft()
{
    this->setCapacity(20);
    this->numPeople = numpeople;
    if  (numpeople > 20)
    {
        cout << "Twenty is the maximum number of people of allowed.\n";
        int num = numpeople - capacity;
        cout << "We got rid of " << num << " people :)\n";
        setNumpeople(20);
    }
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
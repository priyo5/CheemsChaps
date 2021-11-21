#include "CrewDragonFactory.h"

Spacecraft* CrewDragonFactory::createSpacecraft(int numPeople)
{
    Spacecraft* crew = new CrewDragon(numPeople);
    return crew;
}

Spacecraft* CrewDragonFactory::createSpacecraft(string sat_type)
{
    return nullptr; //wil not be used
}
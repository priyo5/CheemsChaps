#include "CrewDragonFactory.h"

Spacecraft* CrewDragonFactory::createSpacecraft(int weight, int numPeople)
{
    Spacecraft* crew = new CrewDragon(weight, numPeople);
    return crew;
}
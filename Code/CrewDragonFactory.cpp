#include "CrewDragonFactory.h"

Spacecraft* CrewDragonFactory::createSpacecraft(int weight, int numPeople)
{
    return new CrewDragon(int weight, int numPeople);
}
#ifndef CREWDRAGONFACTORY_H
#define CREWDRAGONFACTORY_H

#include "SpacecraftFactory.h"
#include "CrewDragon.h"

class CrewDragonFactory : public SpacecraftFactory {
protected:
	Spacecraft* createSpacecraft(int weight, int numPeople);
};

#endif

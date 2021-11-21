#ifndef CREWDRAGONFACTORY_H
#define CREWDRAGONFACTORY_H

#include "SpacecraftFactory.h"
#include "CrewDragon.h"

#include <string>

class CrewDragonFactory : public SpacecraftFactory {
protected:
	Spacecraft* createSpacecraft(int numPeople);
    Spacecraft* createSpacecraft(string sat_type);
};

#endif

#include "SpacecraftFactory.h"

#include <string>

Spacecraft* SpacecraftFactory::startSpacecraftFactory(int numPeople)
{
	return createSpacecraft(numPeople);
}

Spacecraft* SpacecraftFactory::startSpacecraftFactory(string sat_type)
{
    return createSpacecraft(sat_type);
}

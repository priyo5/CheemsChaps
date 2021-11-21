#include "SpacecraftFactory.h"

Spacecraft* SpacecraftFactory::startSpacecraftFactory(int weight, int numPeople)
{
	return createSpacecraft();
}


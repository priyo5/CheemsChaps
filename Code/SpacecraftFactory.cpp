#include "SpacecraftFactory.h"

Spacecraft* SpacecraftFactory::startSpacecraftFactory() {
	return createSpacecraft();
}
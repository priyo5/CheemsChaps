#include "DragonSpacecraftFactory.h"

Spacecraft* DragonSpacecraftFactory::createSpacecraft() {
    return new DragonSpacecraft();
}
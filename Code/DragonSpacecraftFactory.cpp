#include "DragonSpacecraftFactory.h"

Spacecraft* DragonSpacecraftFactory::createSpacecraft()
{
    DragonSpacecraft* drag = new DragonSpacecraft();

    return new DragonSpacecraft();
}
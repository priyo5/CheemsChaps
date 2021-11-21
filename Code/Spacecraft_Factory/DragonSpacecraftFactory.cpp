#include "DragonSpacecraftFactory.h"

Spacecraft* DragonSpacecraftFactory::createSpacecraft(int weight)
{
    return new DragonSpacecraft(weight);
}
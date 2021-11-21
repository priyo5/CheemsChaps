#include "DragonSpacecraftFactory.h"

Spacecraft* DragonSpacecraftFactory::createSpacecraft(string sat_type)
{
    Spacecraft* drag = new DragonSpacecraft(sat_type);
    return drag;
}

Spacecraft* DragonSpacecraftFactory::createSpacecraft(int numPeople)
{
    return nullptr; //will not be used
}
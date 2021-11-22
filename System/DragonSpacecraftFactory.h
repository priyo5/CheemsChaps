#ifndef DRAGONSPACECRAFTFACTORY_H
#define DRAGONSPACECRAFTFACTORY_H

#include "SpacecraftFactory.h"
#include "DragonSpacecraft.h"

class DragonSpacecraftFactory : public SpacecraftFactory {
protected:
	Spacecraft* createSpacecraft(string);
    Spacecraft * createSpacecraft(int);
};

#endif

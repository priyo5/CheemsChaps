#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H

#include "RocketBuilder.h"
#include "Spacecraft.h"

class SpacecraftFactory : public RocketBuilder {
public:
	Spacecraft* startSpacecraftFactory();
protected:
	virtual Spacecraft* createSpacecraft()=0;
};

#endif

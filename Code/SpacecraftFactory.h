#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H

#include "RocketBuilder.h"
#include "Spacecraft.h"

class SpacecraftFactory : public RocketBuilder {
public:
	Spacecraft* startSpacecraftFactory(int weight, int numPeople); //Crew
	Spacecraft* startSpacecraftFactory(int weight, string sat_type); //Dragon
protected:
	virtual Spacecraft* createSpacecraft()=0;
};

#endif

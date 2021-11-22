#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H

#include "Spacecraft.h"
#include <string>

using namespace std;


class SpacecraftFactory
{
public:
	Spacecraft* startSpacecraftFactory(int numPeople); //Crew
	Spacecraft* startSpacecraftFactory(string sat_type); //Dragon
protected:
	virtual Spacecraft* createSpacecraft(int )=0;
	virtual Spacecraft* createSpacecraft(string)=0;
};

#endif

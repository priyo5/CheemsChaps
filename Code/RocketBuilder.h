#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "State.h"
#include "Spacecraft.h"
#include "RocketTypes.h"
#include "Engine.h"
#include "MerlinEngineFactory.h"
#include "VacuumMerlinEngineFactory.h"
#include "SpacecraftFactory.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"
#include "CrewDragonFactory.h"
#include "DragonSpacecraftFactory.h"

#include <string>
using namespace std;

class RocketBuilder
{
public:
    RocketBuilder();
	virtual void BuildRocketType() = 0;
	virtual void BuildSpacecraftType(int numPeople,string sat_type)= 0; //crew for num people

    //Getters for the rocket parts
    virtual RocketTypes* getRocketTypes() = 0;
    virtual Spacecraft* getSpacecraft() = 0;


protected:
    EngineFactory* merFact;
    EngineFactory* vacmurFact;
    RocketTypeFactory* f9Fact;
    RocketTypeFactory* fhFact;
    SpacecraftFactory* crewFact;
    SpacecraftFactory* dragonFact;
};

#endif

#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "Rocket.h"
#include "../Memento/State.h"
#include "../Spacecraft_Factory/Spacecraft.h"
#include "../Rocket_Type_Factory/RocketTypes.h"
#include "../Engine_Factory/Engine.h"
#include "../Engine_Factory/MerlinEngineFactory.h"
#include "../Engine_Factory/VacuumMerlinEngineFactory.h"
#include "../Spacecraft_Factory/SpacecraftFactory.h"
#include "../Rocket_Type_Factory/Falcon9Factory.h"
#include "../Rocket_Type_Factory/FalconHeavyFactory.h"
#include "../Spacecraft_Factory/CrewDragonFactory.h"
#include "../Spacecraft_Factory/DragonSpacecraftFactory.h"

#include <string>
using namespace std;

class RocketBuilder
{
public:
    RocketBuilder();
	virtual RocketTypes* BuildRocketType() = 0;
	virtual Spacecraft* BuildSpacecraftType(int numPeople,string sat_type)= 0; //crew for num people

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

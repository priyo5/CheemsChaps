#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "State.h"
#include "Rocket.h"
#include "Spacecraft.h"
#include "RocketTypes.h"
#include "Engine.h"
#include <string>

using namespace std;

class RocketBuilder
{
public:
    RocketBuilder(){};

	virtual RocketTypes* BuildRocketType(string) = 0;

	virtual Spacecraft* BuildSpacecraftType(string, int, int numPeople) = 0; //crew for num people

	virtual Spacecraft* BuildSpacecraftType(string, int, string sat_type) = 0; //sat for starlink or single satellite

	virtual Engine* BuildEngineType(string) = 0;
};

#endif

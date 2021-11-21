#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "Rocket.h"
#include "../Memento/State.h"
#include "../Spacecraft_Factory/Spacecraft.h"
#include "../Rocket_Type_Factory/RocketTypes.h"
#include "../Engine_Factory/Engine.h"
#include <string>

using namespace std;

class RocketBuilder
{
public:
	virtual RocketTypes* BuildRocketType(string) = 0;

	virtual Spacecraft* BuildSpacecraftType(string, int, int numPeople) = 0; //crew for num people

	virtual Spacecraft* BuildSpacecraftType(string, int, string sat_type) = 0; //sat for starlink or single satellite

	virtual Engine* BuildEngineType(string) = 0;
};

#endif

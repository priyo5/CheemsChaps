#ifndef ROCKET_H
#define ROCKET_H

#include "RocketBuilder.h"
#include "SpacecraftTypeBuilder.h"
#include "EngineTypeBuilder.h"
#include "RocketTypeBuilder.h"
#include "../Memento/LaunchReady.h"
#include "../Memento/State.h"
#include "../Spacecraft_Factory/Spacecraft.h"
#include <string>

class Rocket
{
public:
    Rocket();
	void Launch();
	void StaticFire();
    void BuildSpaceCraft(string, int, int numPeople); //Crew
    void BuildSpaceCraft(string, int, string sat_type); //Dragon

private:
    State* state;

    //Variables (parts) that the Rocket contains
    Spacecraft* spacecraft;


    //Builders
    SpacecraftTypeBuilder* spacecraftTypeBuilder;
    EngineTypeBuilder* engineTypeBuilder;
    RocketTypeBuilder* rocketTypeBuilder;
};

#endif

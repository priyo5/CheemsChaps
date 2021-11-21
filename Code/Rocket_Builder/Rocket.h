#ifndef ROCKET_H
#define ROCKET_H

#include "RocketBuilder.h"
#include "PeopleRocketBuilder.h"
#include "SateliteRocketBuilder.h"
#include "StarlinkRocketBuilder.h"
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

    //Getters
    RocketTypes* getRocketTypes();
    Spacecraft* getSpacecraft();

    //Build the rocket
    void BuildRocket(int type);

private:
    State* state;

    //Variables (parts) that the Rocket contains
    int DestinationDistance;
    int RemainingFuel;

    //Builders
    RocketBuilder* RocketBuild;
};

#endif

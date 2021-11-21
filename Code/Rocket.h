#ifndef ROCKET_H
#define ROCKET_H

#include "RocketBuilder.h"
#include "PeopleRocketBuilder.h"
#include "SateliteRocketBuilder.h"
#include "StarlinkRocketBuilder.h"
#include "LaunchReady.h"
#include "State.h"
#include "Spacecraft.h"

using namespace std;

class Rocket
{
public:
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

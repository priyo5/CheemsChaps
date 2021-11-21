#ifndef ROCKET_H
#define ROCKET_H

#include "RocketBuilder.h"
#include "PeopleRocketBuilder.h"
#include "SateliteRocketBuilder.h"
#include "StarlinkRocketBuilder.h"
#include "LaunchReady.h"
#include "State.h"
#include "Spacecraft.h"
#include "RocketMemento.h"

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

    //Memento
    RocketState* getState();
    RocketMemento* makeMemento();
    void restore(RocketMemento* rm);

    //Fuel Function
    void calculateDistancexFuel();

private:
    State* state;

    //Variables (parts) that the Rocket contains
    int DestinationDistance;
    int RemainingFuel;

    //Builders
    RocketBuilder* RocketBuild;

    //Memento Pattern
    RocketState* rstate;
};
#endif

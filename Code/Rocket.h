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
    Rocket();
	void Launch();
	void StaticFire();

    //Getters
    RocketTypes* getRocketTypes();
    Spacecraft* getSpacecraft();

    //Setters
    void setDestination(int dest);

    //Build the rocket
    void BuildRocket(int type);

    //Memento
    RocketState* getState();
    RocketMemento* makeMemento();
    void restore(RocketMemento* rm);

    //Fuel Function
    void calculateDistancexFuel();

    //Print method to give a detailed breakdown of the rocket you have created
    void printRocket();

    //Checking if the cargo has arrived
    void hasArrive();

    //Making the cargo arrive
    void arrive();

private:
    State* state;

    //Variables (parts) that the Rocket contains
    int type; //The type of rocket the user wanted to build.
    long DestinationDistance;
    string destinationName;
    int RemainingFuel;

    //Builders
    RocketBuilder* RocketBuild;

    //Memento Pattern
    RocketState* rstate;
};
#endif

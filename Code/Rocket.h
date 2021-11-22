#ifndef ROCKET_H
#define ROCKET_H

#include "RocketBuilder.h"
#include "PeopleRocketBuilder.h"
#include "SateliteRocketBuilder.h"
#include "StarlinkRocketBuilder.h"
#include "Spacecraft.h"
#include "RocketMemento.h"


using namespace std;
class State;
class Rocket
{
public:
    Rocket();
	void Launch();
	void StaticFire();

    //Getters
    RocketTypes* getRocketTypes();
    Spacecraft* getSpacecraft();
    State* getReadyOrNot();

    //Setters
    void setDestination(int dest);

    //Build the rocket
    void BuildRocket(int type);

    //Memento
    RocketState* getState();
    RocketMemento* makeMemento();
    void restore(RocketMemento* rm);

    //Fuel Function
    bool calculateDistancexFuel();

    //Print method to give a detailed breakdown of the rocket you have created
    void printRocket();

    //Checking if the cargo has arrived
    void hasArrive();

    //Making the cargo arrive
    void arrive();

    //Modify menu
    void modify();

    //State
    void change();
    string getRocketStatus();
    void setState(State* state);

protected:
    Rocket(State* state_);
    State* getRocketState();

private:
    State* state;

    //Variables (parts) that the Rocket contains
    int type;                           //The type of rocket the user wanted to build.
    long DestinationDistance;           //This distance according to the selected planets
    string destinationName;             //Name of selected planets
    int RemainingFuel;                  //Fuel remaining according to the number of times thrusters are used
    bool peopleArrive;

    //Builders
    RocketBuilder* RocketBuild;

    //Memento Pattern
    RocketState* rstate;
};
#endif

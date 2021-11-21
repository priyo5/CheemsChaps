#include "Rocket.h"
#include <iostream>

void Rocket::Launch()
{
    // state->handleLaunch();

    this -> getRocketTypes() -> getStage1() -> FireEngine();
}   

void Rocket::StaticFire()
{
    // state->handleStaticFireTest();

    this -> getRocketTypes() -> getStage1() -> StaticFire();
}

//Getters
RocketTypes *Rocket::getRocketTypes()
{
    return this->RocketBuild->getRocketTypes();
}

Spacecraft *Rocket::getSpacecraft()
{
    return this->RocketBuild->getSpacecraft();
}

//Actually building the rocket
void Rocket::BuildRocket(int type)
{
    if (type == 0)
    {
        int numPeople = 0;
        cout << "How many people do you want to board the Rocket?" << endl;
        cin >> numPeople;

        RocketBuild = new PeopleRocketBuilder();
        RocketBuild->BuildRocketType();
        RocketBuild->BuildSpacecraftType(numPeople, "");
    }
    else if (type == 1)
    {
        RocketBuild = new SateliteRocketBuilder();
        RocketBuild->BuildRocketType();
        RocketBuild->BuildSpacecraftType(0, "satellite");
    }
    else //Starlink
    {
        RocketBuild = new StarlinkRocketBuilder();
        RocketBuild->BuildRocketType();
        RocketBuild->BuildSpacecraftType(0, "starlink");
    }
}


RocketMemento* Rocket::makeMemento()
{
    RocketState* rstate = new RocketState(DestinationDistance, RemainingFuel);

    return new RocketMemento(DestinationDistance, RemainingFuel, rstate);
}

RocketState* Rocket::getState()
{
    return rstate;
}

void Rocket::restore(RocketMemento* rm)
{
    rstate = rm -> getState();
    DestinationDistance = rm -> getState() -> getDestinationDistance();
    RemainingFuel = rm -> getState() -> getRemainingFuel();
}

void Rocket::calculateDistancexFuel()
{
    int func = (this -> DestinationDistance / 10);

    if(this -> RemainingFuel < func)
    {
        cout << "The Rocket does not have enough fuel to get to it's destination." << endl;
    }
    else
    {
        cout << "The rocket has sufficient fuel in order to get to it's destination." << endl;
    }
}
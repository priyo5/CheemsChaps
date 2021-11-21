#include "Rocket.h"
#include <iostream>

void Rocket::Launch()
{
    state->handleLaunch();
}   

void Rocket::StaticFire()
{
    state->handleStaticFireTest();
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

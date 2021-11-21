#include "Rocket.h"
#include <iostream>

Rocket::Rocket()
{
    type = 0;
    DestinationDistance = 0;
    destinationName = "";
}

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
    //Setting the rocket type variable for the printRocket() function
    this->type = type;

    if (type == 0)
    {
        int numPeople = 0;
        cout << "How many people do you want to board the Rocket?" << endl;
        cin >> numPeople;

        RocketBuild = new PeopleRocketBuilder();
        RocketBuild->BuildRocketType();
        RocketBuild->BuildSpacecraftType(numPeople, "");
    }
    else if (type == 1) //Single Satellite
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

//Printing the rockets build details as specified by the user
void Rocket::printRocket()
{
    cout << "---------------FLIGHT DETAILS---------------\n" << endl;
    cout << "Destination:           " <<destinationName << " (" << DestinationDistance << "Km)." << endl;
    if(type == 0) //People
    {
        cout << "Rocket Type:           Falcon 9." << endl;
        cout << "Space Craft:           Crew-Dragon." << endl;
        cout << "To be transported:     People." << endl;
        cout << "Number of people:      " << this->getSpacecraft()->getNumPeople() << "."<< endl;
    }
    if(type == 1) //Satellite
    {
        cout << "Rocket Type:           Falcon Heavy." << endl;
        cout << "Space Craft:           Dragon-Space-Craft." << endl;
        cout << "To be transported:     A single Satellite." << endl;
        cout << "Number of Satellites:  " << this->getSpacecraft()->getNumSats() << "."<< endl;
    }
    if(type == 2) //Starlink
    {
        cout << "Rocket Type:           Falcon Heavy." << endl;
        cout << "Space Craft:           Dragon-Space-Craft." << endl;
        cout << "To be transported:     Starlink fleet of Satellites." << endl;
        cout << "Number of Satellites:  " << this->getSpacecraft()->getNumSats() << "."<< endl;
    }
    cout << "-------------------------------------------\n" << endl;
}

//Setters
void Rocket::setDestination(int dest)
{
    if(dest == 0)
    {
        this->DestinationDistance = 37856000000;
        this->destinationName = "Mars";
    }
    if(dest == 1)
    {
        this->DestinationDistance = 74817000000;
        this->destinationName = "Jupiter";
    }
    if(dest == 2)
    {
        this->DestinationDistance = 384400;
        this->destinationName = "The Moon";
    }
}

//Cargo arriving details
void Rocket::arrive()
{
    if(type > 0) //People cargo dont have observers
    {
        this->getSpacecraft()->getCargo()->setArrived(true);
        this->getSpacecraft()->getCargo()->notify();
    }
    else
    {
        cout << "People don't have observers.  You will never know what happened to those idiots." << endl;
    }

}

void Rocket::hasArrive()
{
    if(type>0)
    {
        this->getSpacecraft()->getObserver()->print();
    }
    else
    {
        cout << "People don't have observers.  You will never know what happened to those idiots." << endl;
    }
}
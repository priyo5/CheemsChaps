#include "Rocket.h"
#include <iostream>

Rocket::Rocket()
{
    type = 0;
    DestinationDistance = 0;
    destinationName = "";
    state = new StaticFireReady();
    RemainingFuel = this->getRocketTypes()->getStage1()->getFuel() + this->getRocketTypes()->getStage2()->getFuel();
}

void Rocket::Launch()
{
    if(state->getPassedTest())
        state->handleLaunch(); //Just couts
    else
        cout << "Rocket has not passed the static fire test yet." << endl;

    //Ruben needs to do variable checks and set the state appropriately
    //this -> getRocketTypes() -> getStage1() -> FireEngine();
}   

void Rocket::StaticFire()
{
    //Checking if all rocket parts have been initialised
    int correct_vitals = 0;
    if(this->getRocketTypes() != nullptr)               //Rocket Body
            correct_vitals++;
    if(this->getSpacecraft() != nullptr)                //Spacecraft aboard the rocket
        correct_vitals++;
    if(this->getRocketTypes()->getStage1() != nullptr)  //Stage1 engine
        correct_vitals++;
    if(this->getRocketTypes()->getStage2() != nullptr)  //Stage2 engine
        correct_vitals++;
    if(this->calculateDistancexFuel())                  //Rocket has enough feul to reach destination planet
        correct_vitals++;

    if(correct_vitals == 5)
    {
        state->handleStaticFireTest(); //Just couts and changes state to Launch
        state = new LaunchReady();
    }
    else
    {
        cout << "Rocket is incomplete." << endl;
    }
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

State *Rocket::getReadyOrNot()
{
    return this->state;
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

bool Rocket::calculateDistancexFuel()
{
    int func = (this -> DestinationDistance / 100000);

    if(this -> RemainingFuel < func)
    {
        cout << "The Rocket does not have enough fuel to get to it's destination." << endl;
        return false;
    }
    else
    {
        cout << "The rocket has sufficient fuel in order to get to it's destination." << endl;
        return true;
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
        cout << "Fix something with humans arriving" << endl;
    }
}

void Rocket::useThrusters()
{
    num_times_used_thrusters++;

    //Deplete the fuel using deplete()
}

void Rocket::deplete()
{
   // int rate = this->getRocketTypes()->getStage1()
}

void Rocket::hasArrive()
{
    if(type>0) //Starlink or Satellite
    {
        this->getSpacecraft()->getObserver()->print();
    }
    else //People
    {
        cout << "People don't have observers.  You will never know what happened to those idiots." << endl;
    }
}

//Modify menu
void Rocket::modify()
{
    int num = 0;
    if(type == 0) //People rocket
    {
        cout << "What would you like to change about your rocket?\n0-Destination\n1-Number of people" << endl;
        cin >> num;

        if(num == 0) //Destination
        {
            cout << "Which planet is your destination?\n\n0-Mars (37856000000Km) \n1-Jupiter (74817000000Km)\n2-The Moon (384400Km)" << endl;
            cin >> num;
            setDestination(num);
        }
        else if(num == 1)
        {
            int numPeople = 0;
            cout << "How many people do you want to board the Rocket?" << endl;
            cin >> numPeople;
            RocketBuild->BuildSpacecraftType(numPeople, ""); //Rebuilding the rocket with a new number of people
        }

        cout << "\nCurrent Rocket Details: \n";
        printRocket();
    }
    else // Starlink or Satellite
    {
        cout << "What would you like to change about your rocket?\n0-Destination\n" << endl;
        cin >> num;

        if(num == 0) //Destination
        {
            cout << "Which planet is your destination?\n\n0-Mars (37856000000Km) \n1-Jupiter (74817000000Km)\n2-The Moon (384400Km)" << endl;
            cin >> num;
            setDestination(num);
        }
        cout << "\nCurrent Rocket Details: \n" ;
        printRocket();
    }
}
#include "Rocket.h"
#include <iostream>
#include "StaticFireReady.h"

Rocket::Rocket()
{
    type = 0;
    DestinationDistance = 0;
    destinationName = "";
    peopleArrive = false;
    setState(new StaticFireReady());
}

Rocket::Rocket(State *state_) {
    this->state = state_;
}

State* Rocket::getRocketState() {
    return state;
}

void Rocket::setState(State *state) {
    this->state = state;
}

void Rocket::change() {
    this->state->handleChange(this);
}

string Rocket::getRocketStatus() {
    return state->getRocketStatus();
}

void Rocket::Launch()
{
    if(state->getRocketStatus() == "Launch")
    {
        state->handleChange(this); //Just couts
        //Ruben needs to do variable checks and set the state appropriately
        int travelled = this->getRocketTypes()->getStage1()->fireEngine(this->DestinationDistance); // Rocket handler handles the first stage
        if(travelled > 0)
            travelled = this->getRocketTypes()->getStage1()->getSuccessor()->fireEngine(travelled); // Rocket handler handles the second stage
        
        this->arrive();
        this->RemainingFuel = this->getRocketTypes()->getStage1()->getFuel() + this->getRocketTypes()->getStage2()->getFuel();
    }
    else
        cout << "Rocket has not passed the static fire test yet." << endl;
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
    if(this->calculateDistancexFuel())                  //Rocket has enough fuel to reach destination planet
        correct_vitals++;

    if(correct_vitals == 5)
    {
        state->handleChange(this); //Just couts and changes state to Launch
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

    RemainingFuel = this->getRocketTypes()->getStage1()->getFuel() + this->getRocketTypes()->getStage2()->getFuel();
}


RocketMemento* Rocket::makeMemento()
{
    cout << "Creating a save of the Rocket before takeoff." << endl;

    RocketState* rstate = new RocketState(this -> getSpacecraft() -> getNumPeople(), this -> getSpacecraft() -> getNumSats(), RemainingFuel);

    return new RocketMemento(this -> getSpacecraft() -> getNumPeople(), this -> getSpacecraft() -> getNumSats(), RemainingFuel, rstate);
}

RocketState* Rocket::getState()
{
    return rstate;
}

void Rocket::restore(RocketMemento* rm)
{
    rstate = rm -> getState();
    this -> getSpacecraft() -> setNumPeople(rm -> getState() -> getNumPeople());
    this -> getSpacecraft() -> setNumSats(rm -> getState() -> getNumSats());
    RemainingFuel = rm -> getState() -> getRemainingFuel();
    this->getRocketTypes()->getStage1()->refuel();
    this->getRocketTypes()->getStage2()->refuel();
}

bool Rocket::calculateDistancexFuel()
{
    // int func = (this->DestinationDistance / (100000));

    int func = this->getRocketTypes()->getStage1()->getPossibleDistance() + this->getRocketTypes()->getStage2()->getPossibleDistance();
    
    if(this->DestinationDistance > func)
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
    cout << "\033[1;33m---------------FLIGHT DETAILS---------------\n" << endl;
    cout << "Destination:           " <<destinationName << " (" << DestinationDistance << "Km)." << endl;
    if(type == 0) //People
    {
        cout << "Rocket Type:           Falcon 9." << endl;
        cout << "Rocket Fuel:           " << this -> RemainingFuel << endl;
        cout << "Space Craft:           Crew-Dragon." << endl;
        cout << "To be transported:     People." << endl;
        cout << "Number of people:      " << this->getSpacecraft()->getNumPeople() << "."<< endl;
    }
    if(type == 1) //Satellite
    {
        cout << "Rocket Type:           Falcon Heavy." << endl;
        cout << "Rocket Fuel:           " << this -> RemainingFuel << endl;
        cout << "Space Craft:           Dragon-Space-Craft." << endl;
        cout << "To be transported:     A single Satellite." << endl;
        cout << "Number of Satellites:  " << this->getSpacecraft()->getNumSats() << "."<< endl;
    }
    if(type == 2) //Starlink
    {
        cout << "Rocket Type:           Falcon Heavy." << endl;
        cout << "Rocket Fuel:           " << this -> RemainingFuel << endl;
        cout << "Space Craft:           Dragon-Space-Craft." << endl;
        cout << "To be transported:     Starlink fleet of Satellites." << endl;
        cout << "Number of Satellites:  " << this->getSpacecraft()->getNumSats() << "."<< endl;
    }
    cout << "-------------------------------------------\033[0m\n" << endl;
}

//Setters
void Rocket::setDestination(int dest)
{
    if(dest == 0)
    {
        // 37856000000
        this->DestinationDistance = 350000;
        this->destinationName = "Mars";
    }
    if(dest == 1)
    {
        // 74817000000
        this->DestinationDistance = 750000;
        this->destinationName = "Jupiter";
    }
    if(dest == 2)
    {
        this->DestinationDistance = 35000;
        this->destinationName = "The Moon";
    }
}
//Cargo arriving details
void Rocket::arrive()
{
    if(type > 0) //People cargo dont have observers and 0 is people
    {
        this->getSpacecraft()->getCargo()->setArrived(true);
        this->getSpacecraft()->getCargo()->notify();
        this -> getSpacecraft() -> setNumSats(0);
    }
    else
    {
        peopleArrive = true;
        this -> getSpacecraft() -> setNumPeople(0);
        state->handleChange(this);
    }
}

void Rocket::hasArrive()
{
    if(type>0) //Starlink or Satellite
    {
        this->getSpacecraft()->getObserver()->print();
    }
    else //People
    {
        if(!peopleArrive)
            cout << "The people are still aboard the ship." << endl;
        else
            cout << "The people have arrived on " << destinationName << "." << endl;
    }
}


//Modify menu
void Rocket::modify()
{
    int num = 0;
    if(type == 0) //People rocket
    {
        cout << "\033[1;34mWhat would you like to change about your rocket?\033[0m\n\n0-Destination\n1-Number of people\n2-Fuel depletion rate\n" << endl;
        cin >> num;

        if(num == 0) //Destination
        {
            cout << "\033[1;34mWhich planet is your destination?\033[0m\n\n0-Mars (350000Km) \n1-Jupiter (750000Km)\n2-The Moon (35000Km)\n" << endl;
            cin >> num;
            setDestination(num);
        }
        else if(num == 1)
        {
            int numPeople = 0;
            cout << "\033[1;34mHow many people do you want to board the Rocket?\033[0m" << endl;

            cin >> numPeople;
            RocketBuild->BuildSpacecraftType(numPeople, ""); //Rebuilding the rocket with a new number of people
        } else if (num == 2)
        {
            int depRate = 0;
            cout << "\033[1;34mWhat should the new depletion rate be?\033[0m" << endl;

            cin >> depRate;
            RocketBuild->getRocketTypes()->getStage1()->setDepletionRate(depRate);
            RocketBuild->getRocketTypes()->getStage2()->setDepletionRate(depRate);
        }

        cout << "\nCurrent Rocket Details: \n";
        printRocket();
    }
    else // Starlink or Satellite
    {
        cout << "\033[1;34mWhat would you like to change about your rocket?\033[0m\n\n0-Destination\n1-Fuel depletion rate\n" << endl;
        cin >> num;

        if(num == 0) //Destination
        {
            cout << "\033[1;34mWhich planet is your destination?\033[0m\n\n0-Mars (37856000000Km) \n1-Jupiter (74817000000Km)\n2-The Moon (384400Km)\n" << endl;
            cin >> num;
            setDestination(num);
        }
        else if (num == 1)
        {
                int depRate = 0;
                cout << "\033[1;34mWhat should the new depletion rate be?\033[0m" << endl;

                cin >> depRate;
                RocketBuild->getRocketTypes()->getStage1()->setDepletionRate(depRate);
                RocketBuild->getRocketTypes()->getStage2()->setDepletionRate(depRate);
        }
        cout << "\nCurrent Rocket Details: \n" ;
        printRocket();
    }
}
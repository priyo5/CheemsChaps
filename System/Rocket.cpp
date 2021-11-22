#include "Rocket.h"
#include <iostream>
#include "StaticFireReady.h"

/// Constructor for Rocket for a new state
///
/// initialises the private variables of Rocket and sets the state of the Rocket.
/// @see setState() 
Rocket::Rocket()
{
    type = 0;
    DestinationDistance = 0;
    destinationName = "";
    peopleArrive = false;
    setState(new StaticFireReady());
}

/// Constructor for Rocket with state
///
/// initialises the private variables of Rocket and sets the state of the Rocket.
/// @param state_ The state to set the Rocket to
Rocket::Rocket(State *state_) {
    this->state = state_;
}

/// Gets the state of Rocket
///
/// uses the state variable to give the state that the Rocket is currently in.
/// @return The state of the Rocket
State* Rocket::getRocketState() {
    return state;
}

/// Sets the state of Rocket
///
/// sets the state of the Rocket.
/// @param state The state to set the Rocket to
void Rocket::setState(State *state) {
    this->state = state;
}

/// Will set a new state according to current state
///
/// if the current state is StaticFireReady() then state will be set to LaunchReady(), if the current state is LaunchReady() it will be set to DockedReady(), if current state is DockedReady() it will be set back to StaticFireReady().
/// @see handleChange() StaticFireReady() LaunchReady() DockedReady()
void Rocket::change() {
    this->state->handleChange(this);
}

/// Give a string of the state of the Rocket
///
/// allows for the outputting of the state by converting the state to string.
/// @return String form of the current State
string Rocket::getRocketStatus() {
    return state->getRocketStatus();
}

/// Launch the Rocket
///
/// check that the Rocket is able to Launch, if it is then change the state, fire both Rocket stages and set the arrived state to true.
/// @see getRocketStatus() handleChange() getRocketTypes() fireEngine()
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

/// Static fire the Rocket
///
/// used to make sure the Rocket is ready for launch and can make it to its destination
/// @see getRocketStatus() handleChange() getRocketTypes()
void Rocket::StaticFire()
{
    if  (this->state->getRocketStatus() == "StaticFire")
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
    else
    {
        cout << "Rocket has already passed the static fire test!\n";
    }

}

/// RocketTypes getter
///
/// used to get the RocketTypes variable.
/// @return The type of Rocket 
/// @see RocketTypes
RocketTypes *Rocket::getRocketTypes()
{
    return this->RocketBuild->getRocketTypes();
}

/// Spacecraft getter
///
/// used to get the Spacecraft variable.
/// @return The Spacecraft used for the Rocket
/// @see Spacecraft
Spacecraft *Rocket::getSpacecraft()
{
    return this->RocketBuild->getSpacecraft();
}

/// Builder to build the Rocket
///
/// actually building the rocket and putting all the Rocket objects together.
/// @param type The type of Rocket that is to be created
/// @see BuildRocketType BuildSpacecraftType
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

/// Creation of RocketMemento
///
/// allows the creation of a RocketMemento to save the complete current state of the Rocket before takeoff, also stores this in rstate.
/// @return A RocketMemento of the saved state
/// @see RocketMemento
RocketMemento* Rocket::makeMemento()
{
    cout << "Creating a save of the Rocket before takeoff." << endl;

    RocketState* rstate = new RocketState(this -> getSpacecraft() -> getNumPeople(), this -> getSpacecraft() -> getNumSats(), RemainingFuel);

    return new RocketMemento(this -> getSpacecraft() -> getNumPeople(), this -> getSpacecraft() -> getNumSats(), RemainingFuel, rstate);
}

/// Getter for the saved state
///
/// allows the client to get the state that was saved in rstate.
/// @return A RocketState of the saved state
/// @see makeMemento()
RocketState* Rocket::getState()
{
    return rstate;
}

/// Restores state of Rocket
///
/// allows for the restoration of a Rocket state by passing in the state to be restored.
/// @param rm The state to restore the Rocket to
/// @see RocketMemento getState()
void Rocket::restore(RocketMemento* rm)
{
    rstate = rm -> getState();
    this -> getSpacecraft() -> setNumPeople(rm -> getState() -> getNumPeople());
    this -> getSpacecraft() -> setNumSats(rm -> getState() -> getNumSats());
    RemainingFuel = rm -> getState() -> getRemainingFuel();
    this->getRocketTypes()->getStage1()->refuel();
    this->getRocketTypes()->getStage2()->refuel();
}


/// Calculate if the Rocket can reach the destination
///
/// tells the user if the Rocket can make it to the destination by calculating how far the Rocket will be able to go given the depletion rate and fuel amount.
/// @return Whether the Rocket can make it to the destination or not
/// @see getPossibleDistance()
bool Rocket::calculateDistancexFuel()
{
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

/// Print Rocket details
///
/// printing the rockets build details as specified by the user with a simple output.
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

/// Destination setter
///
/// setter function for the DestinationDistance and destinationName with different selections based on the destination.
/// @param dest The planet/place destination in integer form
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

/// Arrive state change
///
/// to set the arrive state for the Observer pattern to observe when the Rocket has arrived at its destination.
/// @see hasArrive()
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


/// Check if the Rocket has arrived
///
/// to check the arrive state for the Observer pattern to observe when the Rocket has arrived at its destination.
/// @see arrive()
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


/// Change the choices in the menu
///
/// allow the user to change what choices they have made in the past and allow the re-use of Rocket objects.
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
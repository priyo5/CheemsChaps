#include "Cargo.h"
#include "Observer.h"
#include <iostream>

using namespace std;

//Constructor
Cargo::Cargo()
{
	this->numSatellites = 0;
}

//Default destructor
Cargo::~Cargo(){}

//Setter for the number of satellites
void Cargo::setNumSat(int numSat)
{
	this->numSatellites = numSat;
}

//Getter for the number of satellites
int Cargo::getNumSat()
{
	return this->numSatellites;
}


//Virtual functions
void Cargo::add(Cargo *cargo)
{}

void Cargo::print(){}

/**OBSERVER DESIGN PATTERN FUNCTIONS**/

void Cargo::attach(Observer* o)
{
    //Add Observer object to the back of the vector
    this->observerList.push_back(o);
}

void Cargo::detach(Observer* o)
{
    //Remove the object in the parameters from the vector
    vector<Observer*>::iterator it = this->observerList.begin();
    bool flag = false;
    while(it != this->observerList.end() && flag == false)
    {
        if(*it == o)
        {
            flag = true;
            this->observerList.erase(it);
        }
        it++;
    }
}

void Cargo::notify()
{
    for (int i = 0; i < observerList.size(); ++i)
    {
        this->observerList[i]->update();
    }
}

#include "ContainerItems.h"

using namespace std;
ContainerItems::ContainerItems()
{
    this->container = nullptr;
}

ContainerItems::~ContainerItems() {}

//Getters
Cargo* ContainerItems::getCargo()
{
    return this->container;
}

/**
 * DECORATOR DESIGN PATTERN FUNCTIONS
 * @param items
 */

void ContainerItems::add(Cargo *items)
{
    if(this->container == nullptr)
    {
        //Set the cargo to point to the new item
        //Then set the new number of satellites
        this->container = items;
        this->container->setNumSat(items->getNumSat()); //Setting the number of the containers satellites
    }
    else
    {
        //Basically do nothing since the items have already been added.
        this->container->add(items);
    }
}

void ContainerItems::print()
{
    cout << "There are " << this->container->getNumSat() << " Satellites in this container." << endl;
}

/**OBSERVER DESIGN PATTERN FUNCTIONS**/

//Getting the state of the subject
bool ContainerItems::hasArrived()
{
    return this->arrived;
}

//Setting the state of the subject
void ContainerItems::setArrived(bool arr)
{
    this->arrived = arr;
}

int ContainerItems::getNumSat()
{
    return this->numSatellites;
}

void ContainerItems::setNumSat(int num)
{
    this->numSatellites = num;
}

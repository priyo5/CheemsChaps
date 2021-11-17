#include "ContainerItems.h"

using namespace std;
ContainerItems::ContainerItems()
{
    this->container = nullptr;
}

ContainerItems::~ContainerItems()
{
    delete this->container;
}

//Getters
Cargo* ContainerItems::getCargo()
{
    return this->container;
}

void ContainerItems::add(Cargo *items)
{
    if(this->container == nullptr)
    {
        //Set the cargo to point to the new item
        //Then set the new number of satellites
        this->container = items;
        //setNumSat(items->getNumSat());
    }
    else
    {
        //Basically do nothing since the items have already been added.
        this->container->add(items);
    }
}

void ContainerItems::print()
{

}


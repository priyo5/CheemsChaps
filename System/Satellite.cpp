/**Concrete Decorator A**/

#include "Satellite.h"
#include <iostream>

using namespace std;

Satellite::Satellite() : ContainerItems()
{
    cout << "Creating a single Satellite." << endl;
    this->setNumSat(1);
}

//Destructor
Satellite::~Satellite(){};

void Satellite::print()
{
    cout << "There is " << this->getNumSat() << " Satellite in this container." << endl;
}
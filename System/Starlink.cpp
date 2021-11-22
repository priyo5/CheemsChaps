/**Concrete Decorator A**/

#include "Starlink.h"
#include <iostream>

using namespace std;

//Constructor
Starlink::Starlink() : ContainerItems()
{
    cout << "Creating a Starlink fleet of 60 satellites." << endl;
    this->setNumSat(60); //Starlinks always have 60 satellites
}

//Default Destructor
Starlink::~Starlink(){};

void Starlink::print()
{
    cout << "There are " << this->getNumSat() << " Satellites in your starlink fleet." << endl;
}
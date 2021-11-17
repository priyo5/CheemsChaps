#include "Cargo.h"
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

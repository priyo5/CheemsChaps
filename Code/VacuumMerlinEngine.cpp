<<<<<<< HEAD
#include "VacuumMerlinEngine.h"

#include <iostream>

using namespace std;

VacuumMerlinEngine::VacuumMerlinEngine() : Engine(10,150)
{};

void VacuumMerlinEngine::setDepletionRate(int d) 
{
	setDepletionRate(d);
}

void VacuumMerlinEngine::fuelDepletion() 
{
	deplete();
	cout<<getD()<<" Litres of Fuel was depleted there is "<<getFuel()<<" litres left"<<endl;
}
=======
#include "VacuumMerlinEngine.h"

void VacuumMerlinEngine::setDepletionRate() {
	// TODO - implement VacuumMerlinEngine::setDepletionRate
	throw "Not yet implemented";
}

void VacuumMerlinEngine::fuelDepletion() {
	// TODO - implement VacuumMerlinEngine::fuelDepletion
	throw "Not yet implemented";
}
>>>>>>> main

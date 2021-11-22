#include "VacuumMerlinEngine.h"

#include <iostream>

using namespace std;

VacuumMerlinEngine::VacuumMerlinEngine() : Engine(5,50000)
{};

void VacuumMerlinEngine::setDepletionRate(int d) 
{
	setDepletion(d);
}

int VacuumMerlinEngine::fuelDepletion(int dist) 
{
	int kilom = getD()*1000;
	while (this->getFuel() > 0 && dist > 0)
	{
		deplete();
		cout<<kilom<<" Kilometers have been travelled, "<<getFuel()<<" liters of fuel left."<<endl;
		kilom += getD()*1000;
		dist-= getD()*1000;
	}
	return dist;
}

int VacuumMerlinEngine::fireEngine(int dist)
{
	cout << "Now firing stage 2!" << endl;
	this->setUsed();
	return this->fuelDepletion(dist);
}

void VacuumMerlinEngine::refuel() {
    setFuel(50000);
}
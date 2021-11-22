#include "MerlinEngine.h"

#include <iostream>

using namespace std;

MerlinEngine::MerlinEngine() : Engine(5,20000)
{};

void MerlinEngine::setDepletionRate(int d) 
{
	setDepletion(d);
}

int MerlinEngine::fuelDepletion(int dist) 
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

int MerlinEngine::fireEngine(int dist)
{
	cout << "Now firing stage 1!" << endl;
  	this->setUsed();
	return this->fuelDepletion(dist);
}

void MerlinEngine::refuel() {
    setFuel(20000);
}
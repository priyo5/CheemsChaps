<<<<<<< HEAD
#include "MerlinEngine.h"

#include <iostream>

using namespace std;

MerlinEngine::MerlinEngine() : Engine(5,100)
{};

void MerlinEngine::setDepletionRate(int d) 
{
	setDepletionRate(d);
}

void MerlinEngine::fuelDepletion() 
{
	deplete();
	cout<<getD()<<" Litres of Fuel was depleted there is "<<getFuel()<<" litres left"<<endl;
}
=======
#include "MerlinEngine.h"

void MerlinEngine::setDepletionRate() {
	// TODO - implement MerlinEngine::setDepletionRate
	throw "Not yet implemented";
}

double MerlinEngine::fuelDepletion() {
	// TODO - implement MerlinEngine::fuelDepletion
	throw "Not yet implemented";
}
>>>>>>> main

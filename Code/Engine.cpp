<<<<<<< HEAD
#include "Engine.h"

#include <iostream>

using namespace std;

Engine::Engine(int d,int f)
{
	this->Fuel = f;
	this->used = 0;
	this->depletion = d;
}

void Engine::FireEngine() 
{
	cout<<"Engines have ignited"<<endl;
}

int Engine::getFuel() 
{
	return Fuel;
}

void Engine::setDepletion(double d) 
{
	this->depletion = d;
}

void Engine::deplete() 
{
	this->Fuel -= this->depletion;
}

int Engine::getD() 
{
	return depletion;
}
=======
#include "Engine.h"

void Engine::FireEngine() {
	// TODO - implement Engine::FireEngine
	throw "Not yet implemented";
}

void Engine::setDepletionRate() {
	// TODO - implement Engine::setDepletionRate
	throw "Not yet implemented";
}

double Engine::fuelDepletion() {
	// TODO - implement Engine::fuelDepletion
	throw "Not yet implemented";
}
>>>>>>> main

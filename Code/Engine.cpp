#include "Engine.h"

#include <iostream>

using namespace std;

Engine::Engine(int d,int f)
{
	this->Fuel = f;
	this->used = 0;
	this->depletion = d;

	this->succ = nullptr;
}

void Engine::setUsed()
{
	this->used++;
}

void Engine::setFuel(int newAmount) {
    cout << "Refueled with " << newAmount << " litres of fuel\n";
    this->Fuel = newAmount;
}

int Engine::getUsed()
{
	return this->used;
}

int Engine::getFuel() 
{
	return Fuel;
}

void Engine::setDepletion(int d)
{
	this->depletion = d;
}

void Engine::deplete() 
{
	this->Fuel -= 1000;
}

int Engine::getD() 
{
	return depletion;
}

int Engine::getPossibleDistance()
{
	return Fuel*depletion;
}

void Engine::setSuccessor(Engine* eng)
{
	this->succ = eng; // only 2 stages so no checks have to be done to add successor
}

Engine* Engine::getSuccessor()
{
	return this->succ;
}
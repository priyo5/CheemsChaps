#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "Spacecraft.h"
#include "../Cargo/Cargo.h"

class CrewDragon : public Spacecraft
{
public:
	CrewDragon(int weight, int numPeople);
	void setNumpeople(int);
	void setCapacity(int);
	int getNumpeople();
	int getCapacity();
private:
	int numPeople;
	int capacity;
};

#endif

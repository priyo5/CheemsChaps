#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "Spacecraft.h"
#include "Cargo.h"

class CrewDragon : public Spacecraft {
public:
	CrewDragon();
	void setNumpeople(int);
	void setCapacity(int);
	int getNumpeople();
	int getCapacity();
private:
	int numPeople;
	int capacity;
};

#endif

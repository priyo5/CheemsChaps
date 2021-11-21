#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "Spacecraft.h"
#include "../Cargo/Cargo.h"

class CrewDragon : public Spacecraft
{
public:
	CrewDragon(int numPeople);
};

#endif

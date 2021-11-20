#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H

#include "Spacecraft.h"
#include "Cargo.h"

class DragonSpacecraft : public Spacecraft
{
public:
	DragonSpacecraft(int weight, string sat_type);
	void setCargo(Cargo* cargo);
	Cargo* getCargo();
private:
	Cargo* cargo;
};

#endif
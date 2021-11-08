#ifndef CARGO_H
#define CARGO_H
#include "DragonSpacecraft.h"
#include <iostream>

using namespace std;

/**
 * Note:  A Dragon Spacecraft can only take cargo.  No hoomans allowed.
 */

class Cargo : RocketBuilder
{
private:
    int numSatellites;

public:
	Cargo();
	void add(Cargo* cargo);
	void setNumSat();
	int getNumSat();
};

#endif

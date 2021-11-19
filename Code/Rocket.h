#ifndef ROCKET_H
#define ROCKET_H

#include "RocketBuilder.h"
#include "State.h"

class Rocket {

private:
	RocketBuilder* Rocket;
	State* state;

public:
	void Launch();

	void StaticFire();
};

#endif

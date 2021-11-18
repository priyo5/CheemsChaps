#ifndef ROCKET_H
#define ROCKET_H

#include "RocketBuilder.h"

class Rocket {

private:
	RocketBuilder* Rocket;

public:
	void Launch();

	void StaticFire();
};

#endif

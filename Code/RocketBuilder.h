#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "State.h"

class RocketBuilder {

private:
	State* state;

public:
	void Launch();

	void StaticFire();

	void BuildRocket();

	void BuildRocketType();

	void BuildStage();

	void BuildSpacecraft();

	void BuildCargo();
};

#endif

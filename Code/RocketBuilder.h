#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "State.h"
#include <string>

using namespace std;

class RocketBuilder {
public:
	virtual void BuildRocketType(string) = 0;

	virtual void BuildSpacecraftType(int) = 0;

	virtual void BuildEngineType(string) = 0;
};

#endif

#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "State.h"
#include "String"

class RocketBuilder {
public:
	virtual void BuildRocketType(string) = 0;

	virtual void BuildSpacecraftType(string,int) = 0;

	virtual void BuildEngineType(string) = 0;
};

#endif

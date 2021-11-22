#ifndef ROCKETTYPEFACTORY_H
#define ROCKETTYPEFACTORY_H

#include "RocketTypes.h"
#include "Engine.h"

class RocketTypeFactory
{
	public:
		RocketTypes* createRocketType(Engine*,Engine*);
		virtual RocketTypes* makeRocketType(Engine*,Engine*) = 0;
};
#endif

#ifndef ROCKETTYPEFACTORY_H
#define ROCKETTYPEFACTORY_H

#include "RocketTypes.h"
#include "Engine.h"

/// RocketTypeFactory is the Creator for the RocketTypesFactory Hierarchy
///
///  Defines the factory method to return Rockettypes objects

class RocketTypeFactory
{
	public:
		RocketTypes* createRocketType(Engine*,Engine*);
		virtual RocketTypes* makeRocketType(Engine*,Engine*) = 0;
};
#endif

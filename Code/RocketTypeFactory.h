#ifndef ROCKETTYPEFACTORY_H
#define ROCKETTYPEFACTORY_H

#include "RocketTypes.h"

class RocketTypeFactory
{
	public:
		RocketTypes* createRocketType();
		virtual RocketTypes* makeRocketType() = 0;
};
#endif

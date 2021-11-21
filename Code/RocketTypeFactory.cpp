#include "RocketTypeFactory.h"

RocketTypes* RocketTypeFactory::createRocketType(Engine* s1,Engine* s2)
{
	return makeRocketType(s1,s2);
}
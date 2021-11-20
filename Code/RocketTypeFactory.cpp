#include "RocketTypeFactory.h"

using namespace std;

RocketTypes* RocketTypeFactory::createRocketType()
{
	return makeRocketType();
}
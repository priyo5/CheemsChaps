#include "FalconHeavyFactory.h"

RocketTypes* FalconHeavyFactory::makeRocketType(Engine* s1,Engine* s2)
{
    return new FalconHeavy(s1,s2);
}
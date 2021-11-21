#include "Falcon9Factory.h"

RocketTypes* Falcon9Factory::makeRocketType(Engine* s1,Engine* s2)
{
    return new Falcon9(s1,s2);
}
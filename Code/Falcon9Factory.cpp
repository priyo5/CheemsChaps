#include "Falcon9Factory.h"

using namespace std;

RocketTypes* Falcon9Factory::makeRocketType(MerlinEngine *s1,VacuumMerlinEngine *s2)
{
    return new Falcon9(s1,s2);
}
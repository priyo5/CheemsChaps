#include "FalconHeavyFactory.h"

using namespace std;

RocketTypes* FalconHeavyFactory::makeRocketType(MerlinEngine *s1,VacuumMerlinEngine *s2)
{
    return new FalconHeavy(s1,s2);
}
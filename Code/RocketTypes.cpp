#include "RocketTypes.h"

using namespace std;

RocketTypes::RocketTypes(MerlinEngine *s1,VacuumMerlinEngine *s2)
{
    this->Stage1 = s1;
    this->Stage2 =  s2;
}
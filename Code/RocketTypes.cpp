#include "RocketTypes.h"

RocketTypes::RocketTypes(Engine* s1,Engine* s2)
{
    this->Stage1 = s1;
    this->Stage2 =  s2;
}

Engine *RocketTypes::getStage1()
{
    return this->Stage1;
}

Engine *RocketTypes::getStage2()
{
    return this->Stage2;
}
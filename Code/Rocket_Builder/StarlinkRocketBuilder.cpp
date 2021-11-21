#include "StarlinkRocketBuilder.h"

#include <string>
#include <iostream>

RocketTypes* StarlinkRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmerFact->makeEngine();

    this->rockettype = fhFact->createRocketType(s1,s2);
}

Spacecraft* StarlinkRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    this->spacecraft = dragonFact->startSpacecraftFactory(sat_type);
}

RocketTypes *StarlinkRocketBuilder::getRocketType()
{
    return this->rockettype;
}

Spacecraft *StarlinkRocketBuilder::getSpacecraft()
{
    return this->spacecraft;
}
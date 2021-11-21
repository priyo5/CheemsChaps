#include "StarlinkRocketBuilder.h"

#include <string>
#include <iostream>

void StarlinkRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->createEngine();
    Engine* s2 = vacmurFact->createEngine();

    this->rockettype = fhFact->createRocketType(s1,s2);
}

void StarlinkRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    this->spacecraft = dragonFact->startSpacecraftFactory(sat_type);
}

RocketTypes *StarlinkRocketBuilder::getRocketTypes()
{
    return this->rockettype;
}

Spacecraft *StarlinkRocketBuilder::getSpacecraft()
{
    return this->spacecraft;
}
#include "SateliteRocketBuilder.h"

#include <string>
#include <iostream>

void SateliteRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->createEngine();
    Engine* s2 = vacmurFact->createEngine();

    this->rockettype = fhFact->createRocketType(s1,s2);
}

void SateliteRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    this->spacecraft = dragonFact->startSpacecraftFactory(sat_type);
}

RocketTypes *SateliteRocketBuilder::getRocketTypes()
{
    return this->rockettype;
}

Spacecraft *SateliteRocketBuilder::getSpacecraft()
{
    return this->spacecraft;
}
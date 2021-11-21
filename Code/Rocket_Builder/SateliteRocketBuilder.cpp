#include "SateliteRocketBuilder.h"

#include <string>
#include <iostream>

RocketTypes* SateliteRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmerFact->makeEngine();

    this->rockettype = fhFact->createRocketType(s1,s2);
}

Spacecraft* SateliteRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    this->spacecraft = dragonFact->startSpacecraftFactory(sat_type);
}

RocketTypes *SatelliteRocketBuilder::getRocketType()
{
    return this->rockettype;
}

Spacecraft *SatelliteRocketBuilder::getSpacecraft()
{
    return this->spacecraft;
}
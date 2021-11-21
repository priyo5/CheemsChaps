#include "PeopleRocketBuilder.h"

#include <string>
#include <iostream>

using namespace  std;

void PeopleRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->createEngine();
    Engine* s2 = vacmurFact->createEngine();

    this->rockettype = f9Fact->createRocketType(s1,s2);
}

void PeopleRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    this->spacecraft = crewFact->startSpacecraftFactory(numPeople);
}

RocketTypes *PeopleRocketBuilder::getRocketTypes()
{
    return this->rockettype;
}

Spacecraft *PeopleRocketBuilder::getSpacecraft()
{
    return this->spacecraft;
}
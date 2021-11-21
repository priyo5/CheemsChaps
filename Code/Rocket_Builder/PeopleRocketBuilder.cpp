#include "PeopleRocketBuilder.h"

#include <string>
#include <iostream>

using namespace  std;

RocketTypes* PeopleRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmurFact->makeEngine();

    this->rockettype = f9Fact->createRocketType(s1,s2);
}

Spacecraft* PeopleRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    this->spacecraft = crewfact->startSpacecraftFactory(numPeople);
}

RocketTypes *PeopleRocketBuilder::getRocketType()
{
    return this->rockettype;
}

Spacecraft *PeopleRocketBuilder::getSpacecraft()
{
    return this->spacecraft;
}
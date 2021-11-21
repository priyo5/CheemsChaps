#include "PeopleRocketBuilder.h"

#include <string>
#include <iostream>

using namespace  std;

RocketTypes* PeopleRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmurFact->makeEngine();

    return  f9Fact->createRocketType(s1,s2);;
}

Spacecraft* PeopleRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    return crewfact->startSpacecraftFactory(numPeople);
}
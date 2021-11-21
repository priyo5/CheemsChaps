#include "StarlinkRocketBuilder.h"

#include <string>
#include <iostream>

RocketTypes* StarlinkRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmerFact->makeEngine();

    return  fhFact->createRocketType(s1,s2);;
}

Spacecraft* StarlinkRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    return dragonFact->startSpacecraftFactory(sat_type);
}
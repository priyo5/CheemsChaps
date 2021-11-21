#include "SateliteRocketBuilder.h"

#include <string>
#include <iostream>

RocketTypes* SateliteRocketBuilder::BuildRocketType() {
    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmerFact->makeEngine();

    return  fhFact->createRocketType(s1,s2);;
}

Spacecraft* SateliteRocketBuilder::BuildSpacecraftType(int numPeople,string sat_type) {
    return dragonFact->startSpacecraftFactory(sat_type);
}
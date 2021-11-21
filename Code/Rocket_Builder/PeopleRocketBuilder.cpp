#include "PeopleRocketBuilder.h"
#include "../Engine_Factory/MerlinEngineFactory.h"
#include "../Engine_Factory/VacuumMerlinEngineFactory.h"
#include "../Rocket_Type_Factory/Falcon9Factory.h"
#include "../Engine_Factory/Engine.h"

#include <string>
#include <iostream>

using namespace  std;

RocketTypes* PeopleRocketBuilder::BuildRocketType() {
    MerlinEngineFactory* merFact = new MerlinEngineFactory();
    VacuumMerlinEngine* vacmerFact = new VacuumMerlinEngine();

    RocketTypeFactory* f9Fact = new Falcon9Factory();

    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmerFact->makeEngine();

    return  f9Fact->createRocketType(s1,s2);;
}

Spacecraft* PeopleRocketBuilder::BuildSpacecraftType(string type, int capacity, int numPeople,string sat_type) {

}
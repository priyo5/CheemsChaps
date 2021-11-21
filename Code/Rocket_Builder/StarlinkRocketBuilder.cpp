#include "StarlinkRocketBuilder.h"
#include "../Engine_Factory/MerlinEngineFactory.h"
#include "../Engine_Factory/VacuumMerlinEngineFactory.h"
#include "../Rocket_Type_Factory/FalconHeavyFactory.h"
#include "../Engine_Factory/Engine.h"

#include <string>
#include <iostream>

using namespace  std;

RocketTypes* StarlinkRocketBuilder::BuildRocketType() {
    MerlinEngineFactory* merFact = new MerlinEngineFactory();
    VacuumMerlinEngine* vacmerFact = new VacuumMerlinEngine();

    RocketTypeFactory* fhFact = new FalconHeavyFactory();

    Engine* s1 = merFact->makeEngine();
    Engine* s2 = vacmerFact->makeEngine();

    return  fhFact->createRocketType(s1,s2);;
}
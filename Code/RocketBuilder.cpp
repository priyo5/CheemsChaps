#include "RocketBuilder.h"

RocketBuilder::RocketBuilder() {
    merFact = new MerlinEngineFactory();
    vacmurFact = new VacuumMerlinEngineFactory();
    f9Fact = new Falcon9Factory();
    fhFact = new FalconHeavyFactory();
    crewFact = new CrewDragonFactory();
    dragonFact = new DragonSpacecraftFactory();
}
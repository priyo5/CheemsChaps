#include "VacuumMerlinEngineFactory.h"

Engine* VacuumMerlinEngineFactory::makeEngine()
{
    return new VacuumMerlinEngine();
}
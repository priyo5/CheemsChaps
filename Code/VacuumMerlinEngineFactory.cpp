#include "VacuumMerlinEngine.h"

Engine* VacuumMerlinEngine::makeEngine()
{
    return new VacuumMerlinEngine();
}
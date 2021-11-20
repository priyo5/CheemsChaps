#include "VacuumMerlinEngine.h"

using namespace std;

Engine* VacuumMerlinEngine::makeEngine()
{
    return new VacuumMerlinEngine();
}
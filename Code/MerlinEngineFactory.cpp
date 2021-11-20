#include "MerlinEngineFactory.h"

using namespace std;

Engine* MerlinEngineFactory::makeEngine()
{
    return new MerlinEngine();
}

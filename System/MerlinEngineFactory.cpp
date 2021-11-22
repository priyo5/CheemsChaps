#include "MerlinEngineFactory.h"

Engine* MerlinEngineFactory::makeEngine()
{
    return new MerlinEngine();
}

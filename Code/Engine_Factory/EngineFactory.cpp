#include "EngineFactory.h"

Engine* EngineFactory::createEngine()
{
	return makeEngine();
}
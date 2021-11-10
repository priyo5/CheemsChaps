#include "EngineFactory.h"

using namespace std;

Engine* EngineFactory::createEngine()
{
	return makeEngine();
}

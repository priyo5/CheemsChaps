#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Engine.h"

class EngineFactory
{
	public:
		Engine* createEngine();
	protected:
		virtual Engine* makeEngine() = 0;
};
#endif

#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Engine.h"

/// EngineFactory is the Creator for the EngineFactory Hierarchy
///
///  Defines the factory method to return Engine objects

class EngineFactory
{
	public:
		Engine* createEngine();
	protected:
		virtual Engine* makeEngine() = 0;
};
#endif

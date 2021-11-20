<<<<<<< HEAD
#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Engine.h"

class EngineFactory
{
	public:
		Engine* createEngine();
		virtual Engine* makeEngine() = 0;
};
#endif
=======
#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

class EngineFactory : RocketBuilder {


public:
	void CreateMerlinEngine();

	void CreateVacuumMerlinEngine();
};

#endif
>>>>>>> main

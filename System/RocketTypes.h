#ifndef ROCKETTYPES_H
#define ROCKETTYPES_H

#include "Engine.h"

/// RocketTypes is the Abstract Producr for the RocketTypes Hierarchy
///
///  Defines the Generalisation for the different Rockettypes created by the factorys

class RocketTypes 
{
	private:
		Engine* Stage1;
		Engine* Stage2;
	
	public:
		RocketTypes(Engine*,Engine*);
        Engine* getStage1();
        Engine* getStage2();
};
#endif

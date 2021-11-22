#ifndef ROCKETTYPES_H
#define ROCKETTYPES_H

#include "Engine.h"

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

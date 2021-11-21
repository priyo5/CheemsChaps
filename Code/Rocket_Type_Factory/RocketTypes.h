#ifndef ROCKETTYPES_H
#define ROCKETTYPES_H

#include "../Engine_Factory/Engine.h"

class RocketTypes 
{
	private:
		Engine* Stage1;
		Engine* Stage2;
	
	public:
		RocketTypes(Engine*,Engine*);
};
#endif

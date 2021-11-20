<<<<<<< HEAD
#ifndef ROCKETTYPES_H
#define ROCKETTYPES_H

#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

class RocketTypes 
{
	private:
		MerlinEngine* Stage1;
		VacuumMerlinEngine* Stage2;
	
	public:
		RocketTypes(MerlinEngine *,VacuumMerlinEngine *);
};
#endif
=======
#ifndef ROCKETTYPES_H
#define ROCKETTYPES_H

class RocketTypes {

private:
	MerlinEngine* Stage1;
	MerlinVacuumEngine* Stage2;
};

#endif
>>>>>>> main

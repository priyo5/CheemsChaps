#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H

#include "Engine.h"

class VacuumMerlinEngine : public Engine {
	public:
		VacuumMerlinEngine();
		virtual void setDepletionRate(int d);

		virtual int fuelDepletion(int);
		virtual int fireEngine(int);
};

#endif
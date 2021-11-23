#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H

#include "Engine.h"

/// VacuumMerlinEngine is a Concrete Proudct for the Engine Hierarchy
///
///  Implements the interface for the Engine product

class VacuumMerlinEngine : public Engine {
	public:
		VacuumMerlinEngine();
		virtual void setDepletionRate(int d);

		virtual int fuelDepletion(int);
		virtual int fireEngine(int);
        virtual void refuel();
};

#endif
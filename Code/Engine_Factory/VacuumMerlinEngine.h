#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H

#include "Engine.h"

class VacuumMerlinEngine : public Engine {
	public:
		VacuumMerlinEngine();
		virtual void setDepletionRate(int d);

	protected:
		virtual void fuelDepletion();
};

#endif
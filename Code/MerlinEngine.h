#ifndef MERLINENGINE_H
#define MERLINENGINE_H

#include "Engine.h"

class MerlinEngine : public Engine 
{
	public:
		MerlinEngine();
		virtual void setDepletionRate(int d);

		virtual int fuelDepletion(int);
		virtual int fireEngine(int);
        virtual void refuel();
};
#endif

<<<<<<< HEAD
#ifndef MERLINENGINE_H
#define MERLINENGINE_H

#include "Engine.h"

class MerlinEngine : public Engine 
{
	public:
		MerlinEngine();
		virtual void setDepletionRate(int d);

	protected:
		virtual void fuelDepletion();
};
#endif
=======
#ifndef MERLINENGINE_H
#define MERLINENGINE_H

class MerlinEngine : Engine {


protected:
	void setDepletionRate();

	double fuelDepletion();
};

#endif
>>>>>>> main

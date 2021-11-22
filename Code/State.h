#ifndef STATE_H
#define STATE_H

#include <string>
#include "Rocket.h"

using namespace std;

class State
        {
	public:
		void virtual handleChange(Rocket* rocket) = 0;
		virtual string getRocketStatus() = 0;
};

#endif

#ifndef STATE_H
#define STATE_H

#include "Rocket.h"
#include <string>

using namespace std;

class State
        {
	public:
		void virtual handleChange(Rocket* rocket) = 0;
		virtual string getRocketStatus() = 0;
        virtual  ~State();
};

#endif

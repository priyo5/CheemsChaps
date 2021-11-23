#ifndef STATE_H
#define STATE_H

#include <string>
#include "Rocket.h"

using namespace std;
/// State is the state participant for the state design pattern
///
/// State gets used to change and get the current state via its concrete State children
class State
        {
	public:
		void virtual handleChange(Rocket* rocket) = 0;
		virtual string getRocketStatus() = 0;
};

#endif

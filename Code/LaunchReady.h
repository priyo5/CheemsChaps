#ifndef LAUNCHREADY_H
#define LAUNCHREADY_H

#include "State.h"

class LaunchReady : public State {
	public:
    virtual void handleChange(Rocket* rocket);
    virtual string getRocketStatus();
};

#endif

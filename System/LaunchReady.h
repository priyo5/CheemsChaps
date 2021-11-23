#ifndef LAUNCHREADY_H
#define LAUNCHREADY_H

#include "State.h"
/// LaunchReady is a concreteState participant for the state design pattern
///
/// LaunchReady is the state where the rocket has passed the static fire test and is ready for launch
class LaunchReady : public State {
	public:
    virtual void handleChange(Rocket* rocket);
    virtual string getRocketStatus();
};

#endif

#ifndef LAUNCHREADY_H
#define LAUNCHREADY_H

#include "State.h"

class LaunchReady : public State {
	public:
    LaunchReady();
	void handleLaunch();
	void handleStaticFireTest();
    bool getPassedTest();
};

#endif

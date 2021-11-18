#ifndef STATE_H
#define STATE_H

class State {
	public:
	virtual void handleLaunch() = 0;
	virtual void handleStaticFireTest() = 0;
};

#endif

#ifndef STATE_H
#define STATE_H

class State {
	public:
		void virtual handleLaunch() = 0;
		void virtual handleStaticFireTest() = 0;
		bool passedTest = false;
		bool Launched = false;
};

#endif

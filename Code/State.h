#ifndef STATE_H
#define STATE_H

class State
        {
	public:
		void virtual handleLaunch() = 0;
		void virtual handleStaticFireTest() = 0;
        virtual bool getPassedTest() = 0;
		bool passedTest;
		bool Launched;
};

#endif

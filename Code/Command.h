#ifndef COMMAND_H
#define COMMAND_H
#include "Rocket.h"
class Command {

private:
	Rocket receiver;

public:
	void execute();

	void getReciver();
};

#endif

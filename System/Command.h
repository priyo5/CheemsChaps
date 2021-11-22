//This represents the Command participant
#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <iostream>
#include "Rocket.h"

using namespace std;

class Command
{
private:
  //Pointer to a Rocket Object in order to perform the operations
	Rocket *receiver;

public:
  //Constructor which initialises the Command with the passed in Rocket as the receiver
  Command(Rocket *receiver);

  //Pure virtual function which will be implemented by the Concrete Commands
	virtual void excecute() = 0;

  //Getter so that the Concrete Commands may access the Receiver Object
	Rocket *getReceiver();
};

#endif
//This represents the First Concrete Command which will cause a Rocket to launch
#ifndef LAUNCH_H
#define LAUNCH_H

#include <string>
#include <iostream>

#include "Command.h"

using namespace std;

class Launch : Command
{
private:
    //A pointer to a rocket in order to perform operations on it
	Rocket *receiver;

public:
    //A Constructor for the Concrete Command Launch which calls the Commands Constructor
    Launch(Rocket *receiver) : Command(receiver){};

    //An excecute method to call the Launch
    void excecute(){this -> getReceiver() -> Launch();};
};

#endif
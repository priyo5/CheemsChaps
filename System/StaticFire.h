//This represents the Second Concrete Command which will cause a Rocket to Static Fire
#ifndef STATICFIRE_H
#define STATICFIRE_H

#include <string>
#include <iostream>

#include "Command.h"

using namespace std;
/// StaticFire is a concreteState participant for the state design pattern
///
/// StaticFire is the state where have not yet done a static fire test before being able to run an actual launch
class StaticFire : Command
{
private:
    //A pointer to a rocket in order to perform operations on it
	Rocket *receiver;

public:
    //A Constructor for the Concrete Command StaticFire which calls the Commands Constructor
    StaticFire(Rocket *receiver) : Command(receiver){};

    //An excecute method to call the StaticFire
    void excecute(){this -> getReceiver() -> StaticFire();};
};

#endif
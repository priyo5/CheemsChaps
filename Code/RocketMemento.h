#ifndef ROCKETMEMENTO_H
#define ROCKETMEMENTO_H

// Rocket.h to be included?????

// #include "./Rocket_Builder/Rocket.h"
#include <string>
#include <iostream>

#include "RocketState.h"

using namespace std;

class RocketMemento
{
private:
    friend class Rocket;

    //All of these are subject to change depending on Ruben's implementation
    int DestinationDistance;
    int RemainingFuel;

    RocketState* rstate;

    //Once again, these are subject to change
    int getRemainingFuel(){return this -> RemainingFuel;};
    int getDestinationDistance(){return this -> DestinationDistance;};

    RocketState* getState(){return this -> rstate;};

public:
    //This is subject to change too
    RocketMemento(int rf, int dd, RocketState* rs);
};

#endif
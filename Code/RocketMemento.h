#ifndef ROCKETMEMENTO_H
#define ROCKETMEMENTO_H

#include <string>
#include <iostream>

#include "RocketState.h"

using namespace std;

class RocketMemento
{
private:
    friend class Rocket;

    //All of these are subject to change depending on Ruben's implementation
    string name;
    int fuel;
    int numEngines;

    RocketState* rstate;

    //Once again, these are subject to change
    string getName(){return this -> name;};
    int getFuel(){return this -> fuel;};
    int getEngines(){return this -> numEngines;};

    RocketState* getState(){return this -> rstate;};

public:
    //This is subject to change too
    RocketMemento(string n, int f, int ne, RocketState* rs);
};

#endif
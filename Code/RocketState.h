#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <string>
#include <iostream>

using namespace std;

class RocketState
{
private:
    
    //These will change depending on what Ruben implements
    string Rname;
    int Rfuel;
    int RnumEngines;

public:

    RocketState(string Rname, int Rfuel, int RnumEngines);

    string getName(){return this -> Rname;};
    int getFuel(){return this -> Rfuel;};
    int getEngines(){return this -> RnumEngines;};
};

#endif
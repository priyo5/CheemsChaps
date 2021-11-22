#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <string>
#include <iostream>

using namespace std;

class RocketState
{
private:
    int numPeople;
    int numSats;
    int RemainingFuel;

public:

    RocketState(int numPeople, int numSats, int RemainingFuel);

    int getRemainingFuel(){return this -> RemainingFuel;};
    int getNumPeople(){return this -> numPeople;};
    int getNumSats(){return this -> numSats;};
};

#endif
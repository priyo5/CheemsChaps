#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <string>
#include <iostream>

using namespace std;

class RocketState
{
private:
    int DestinationDistance;
    int RemainingFuel;

public:

    RocketState(int DestinationDistance, int RemainingFuel);

    int getRemainingFuel(){return this -> RemainingFuel;};
    int getDestinationDistance(){return this -> DestinationDistance;};
};

#endif
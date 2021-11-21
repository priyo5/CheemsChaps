#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include "ContainerItems.h"
#include "ArrivalObserver.h"

using namespace std;

class ContainerItems;
class Spacecraft
{
public:
	Spacecraft(int, int, ContainerItems*, ArrivalObserver*);

    //Getters
    int getNumPeople();
    ContainerItems* getCargo();
    ArrivalObserver* getObserver();
    void setCargo(ContainerItems*);
    void setObserver(ArrivalObserver*);

private:
    int numPeople;
    int Capacity;
    ContainerItems* cargo;
    ArrivalObserver* cargo_monitor;
};

#endif

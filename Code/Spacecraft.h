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
    int getNumSats();
    ContainerItems* getCargo();
    ArrivalObserver* getObserver();

    //Setters
    void setCargo(ContainerItems*);
    void setObserver(ArrivalObserver*);
    void setNumSats(int num);
    void setNumPeople(int num);

private:
    int numPeople;
    int Capacity;
    int numSatellites;
    ContainerItems* cargo;
    ArrivalObserver* cargo_monitor;
};

#endif

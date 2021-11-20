#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H

#include "Spacecraft.h"
#include "ContainerItems.h"
#include "ArrivalObserver.h"
#include "Cargo.h"

class DragonSpacecraft : public Spacecraft
{
public:
	DragonSpacecraft();
	void setCargo(int weight, string sat_type);
	ContainerItems* getCargo();
    ArrivalObserver* getObserver();
private:
	ContainerItems* cargo;
    ArrivalObserver* cargo_monitor;
};

#endif
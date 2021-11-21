#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H

// Check this file - whole heirarchy is included
#include "Spacecraft.h"
#include "../Cargo/ContainerItems.h"
#include "../Cargo/Satellite.h"
#include "../Cargo/Starlink.h"
#include "../Cargo/Cargo.h"
#include "../Cargo/ArrivalObserver.h"

class DragonSpacecraft : public Spacecraft
{
public:
	DragonSpacecraft(int);
	void setCargo(int weight, string sat_type);
	ContainerItems* getCargo();
    ArrivalObserver* getObserver();
private:
	ContainerItems* cargo;
    ArrivalObserver* cargo_monitor;
};

#endif
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
	DragonSpacecraft(string);
	void setCargo(string sat_type);
};

#endif
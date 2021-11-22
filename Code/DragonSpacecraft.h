#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H

// Check this file - whole heirarchy is included
#include "Spacecraft.h"
#include "ContainerItems.h"
#include "Satellite.h"
#include "Starlink.h"
#include "Cargo.h"
#include "ArrivalObserver.h"

class DragonSpacecraft : public Spacecraft
{
public:
	DragonSpacecraft(string);
	void setCargo(string sat_type);
};

#endif
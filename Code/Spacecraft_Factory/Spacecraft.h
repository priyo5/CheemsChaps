#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include "../Cargo/ContainerItems.h"

using namespace std;

class ContainerItems;
class Spacecraft
{
public:
	Spacecraft();
    virtual ContainerItems* getCargo() = 0;
};

#endif

#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include "ContainerItems.h"

using namespace std;

class Spacecraft {
public:
	Spacecraft();
	void setWeight(int);
    virtual ContainerItems* getCargo() = 0;
protected:
	int weight; // The weight of the payload in tonnes
};

#endif

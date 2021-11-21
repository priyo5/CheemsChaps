#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include "../Cargo/ContainerItems.h"

using namespace std;

class ContainerItems;
class Spacecraft
{
public:
	Spacecraft(int);
	void setWeight(int);
    virtual ContainerItems* getCargo() = 0;
protected:
	int weight; // The weight of the payload in tonnes
};

#endif

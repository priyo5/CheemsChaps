#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H
#include "Spacecraft.h"
#include "Cargo.h"
#include <string>
#include <iostream>

using namespace std;
class Cargo;

class DragonSpacecraft : public Spacecraft
{
private:
	Cargo* cargo;
};

#endif

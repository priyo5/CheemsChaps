/**THE DECORATOR**/

#ifndef CONTAINERITEMS_H
#define CONTAINERITEMS_H
#include "Cargo.h"
#include "Container.h"
#include <iostream>

using namespace std;

class ContainerItems : Cargo
{
private:
    Cargo* container;

public:
	void CreateSatelite();
	void CreateStarlink();

    //Getters
    Cargo* getCargo();
};

#endif

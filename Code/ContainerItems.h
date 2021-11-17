/**THE DECORATOR**/

#ifndef CONTAINERITEMS_H
#define CONTAINERITEMS_H
#include "Cargo.h"
#include "Container.h"
#include <iostream>

using namespace std;

class ContainerItems : Cargo
{
public:
    ContainerItems();
    ~ContainerItems();
    void add(Cargo* items);
    void print();

    //Getters
    Cargo* getCargo();

private:
    Cargo* container;
};

#endif

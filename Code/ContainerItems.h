/**THE DECORATOR**/
/**THE SUBJECT (OBSERVER PATTERN)**/


#ifndef CONTAINERITEMS_H
#define CONTAINERITEMS_H
#include "Cargo.h"
#include "Container.h"
#include "Observer.h"
#include <iostream>
#include <vector>

using namespace std;

class ContainerItems : public Cargo
{
public:
    ContainerItems();
    ~ContainerItems();

    //DECORATOR DESIGN PATTERN
    void add(Cargo* items);
    void print();

    //Getters
    Cargo* getCargo();
    //OBSERVER PATTERN FUNCTIONS
    bool hasArrived();      //GetState
    void setArrived(bool);  //SetState

private:
    Cargo* container;

    //OBSERVER PATTERN
    bool arrived;           //SubjectState
};

#endif


/**Concrete Observer**/

#ifndef ARRIVALOBSERVER_H
#define ARRIVALOBSERVER_H
#include "Observer.h"
#include "ContainerItems.h"
#include "Satellite.h"  //The concrete subject we are adding an observer to

class ArrivalObserver : public Observer
{
public:
    //A container containing satellites or starlinks can arrive (or not yet)
    ArrivalObserver(ContainerItems* cont);
    void update();
    void print();

private:
    ContainerItems* cont;
    bool arrived;
};

#endif
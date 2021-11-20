#include <iostream>
#include "Cargo.h"
#include "Container.h"
#include "ContainerItems.h"
#include "Starlink.h"
#include "Satellite.h"
#include "Observer.h"
#include "ArrivalObserver.h"

int main()
{
    //Daniel - Testing filling tempContainer with container items
    //This code will go in Reece's spacecraft class when "loading" cargo
    cout << "------------Creating a single satellite---------------" << endl;
    ContainerItems* tempContainer;
    tempContainer = new ContainerItems();
    tempContainer->add(new Satellite()); // Decorating
    tempContainer->print();

    cout << "\n------------Adding an observer to the container---------------\n" << endl;
    ArrivalObserver* sat_1_Observer = new ArrivalObserver(tempContainer);
    tempContainer->attach(sat_1_Observer);
    sat_1_Observer->print();

    cout << "\n---------------Satellite when it arrives----------------" << endl;
    tempContainer->setArrived(true);
    tempContainer->notify();
    sat_1_Observer->print();

    cout << "\n------------Creating a Starlink Fleet of satellites---------------\n" << endl;
    Cargo* container2;
    container2 = new ContainerItems();
    container2->add(new Starlink());
    container2->print();

    return 0;
}
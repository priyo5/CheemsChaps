#include <iostream>
#include "Rocket.h"
#include "Launch.h"
#include "StaticFire.h"
#include "ControlBoard.h"
#include "RocketCaretaker.h"
#include "RocketMemento.h"
#include "RocketState.h"

using namespace std;

int main()
{
    Rocket* rocket = new Rocket();

    // int type = 0;
    // cout << "What purpose would you like your Rocket to have?\n0-Transport people\n1-Transport a single Satellite\n2-Transport a Starlink fleet" << endl;
    // cin >> type;
    
    rocket->BuildRocket(0);

    // Launch *launch = new Launch(rocket);
    // StaticFire *staticFire = new StaticFire(rocket);

    // ControlBoard *aoo = new ControlBoard(launch, staticFire);

    // aoo -> PressL();
    // aoo -> PressS();

    RocketCaretaker* RStore = new RocketCaretaker();

    RStore -> setMemento(rocket -> makeMemento());

    // cout << "Rocket's current fuel before use: " << rocket -> getFuel() << endl;

    // rocket -> setFuel(5);

    // cout << "Rocket's current fuel after use: " << rocket -> getFuel() << endl;
    
    // rocket -> restore(RStore -> getMemento());

    // cout << "Rocket's current fuel after restore: " << rocket -> getFuel() << endl;



    // cout<<rocket->getSpacecraft()->getCargo()->getNumSat()<<endl;
    
//    rocket->BuildRocket(2);
//    cout<<rocket->getSpacecraft()->getCargo()->getNumSat()<<endl;
    // rocket->getSpacecraft()->getObserver()->print();
    //notify observers
    //Daniel - Testing filling tempContainer with container items
    //This code will go in Reece's spacecraft class when "loading" cargo
//    cout << "------------Creating a single satellite---------------" << endl;
//    ContainerItems* tempContainer;
//    tempContainer = new ContainerItems();
//    tempContainer->add(new Satellite()); // Decorating
//    tempContainer->print();
//
//    cout << "\n------------Adding an observer to the container---------------\n" << endl;
//    ArrivalObserver* sat_1_Observer = new ArrivalObserver(tempContainer);
//    tempContainer->attach(sat_1_Observer);
//    sat_1_Observer->print();
//
//    cout << "\n---------------Satellite when it arrives----------------" << endl;
//    tempContainer->setArrived(true);
//    tempContainer->notify();
//    sat_1_Observer->print();
//
//    cout << "\n------------Creating a Starlink Fleet of satellites---------------\n" << endl;
//    Cargo* container2;
//    container2 = new ContainerItems();
//    container2->add(new Starlink());
//    container2->print();

    return 0;
}
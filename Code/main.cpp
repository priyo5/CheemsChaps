#define underline "\033[4m"
#define sunderline "\033[0m"
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
     int type = 0;
     int destination = 0;

     /** ASKING THE USER WHAT ROCKET HE WANTS TO BUILD**/
     cout <<underline<<"\nCHOOSE YOUR ROCKET!\n" <<sunderline;

    cout << "Which planet is your destination?\n\n0-Mars (37856000000Km) \n1-Jupiter (74817000000Km)\n2-The Moon (384400Km)" << endl;
    cin >> destination;

     cout << "What purpose would you like your Rocket to have?\n0-Transport people\n1-Transport a single Satellite\n2-Transport a Starlink fleet\n" << endl;
     cin >> type;

     rocket->BuildRocket(type);

     rocket->setDestination(destination);
     cout << "\n";

     rocket->printRocket();

//     rocket->hasArrive();   //Checking if the cargo has arrived (which it shouldn't)
//     rocket->arrive();      //Making the cargo arrive
//     rocket->hasArrive();   //Checking if the cargo has arrived (which it shouldn't)
    /*************************************************/


    /*************Actual Launch Sequence**************/
     Launch *launch = new Launch(rocket);
     StaticFire *staticFire = new StaticFire(rocket);

     ControlBoard *aoo = new ControlBoard(launch, staticFire);

    int launch_type = 1;
    while(launch_type !=2) //Loop doing static tests and modifications until actual launch commences
    {
        cout << "Would you like to run a static fire test launch, or an Actual launch?\n1-Static Fire Test\n2-Actual Launch\n3-Modify rocket" << endl;
        cin >> launch_type;
        if(launch_type == 1)   //Static Fire Test
            aoo -> PressS();
        if(launch_type == 3)   //Modify
            rocket->modify();  //Then set the state to LaunchState
    }
    //RUBEN - Check the state and make sure its ready for launch before actually launching the rocket
    aoo -> PressL();

    /*************************************************/




    //RocketCaretaker* RStore = new RocketCaretaker();

    //RStore -> setMemento(rocket -> makeMemento());

    // cout << "Rocket's current fuel before use: " << rocket -> getFuel() << endl;

    // rocket -> setFuel(5);

    // cout << "Rocket's current fuel after use: " << rocket -> getFuel() << endl;
    
    // rocket -> restore(RStore -> getMemento());

    // cout << "Rocket's current fuel after restore: " << rocket -> getFuel() << endl;


    
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
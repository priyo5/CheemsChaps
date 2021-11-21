#include <iostream>
#include "./Rocket_Builder/Rocket.h"
#include "./Rocket_Builder/RocketBuilder.h"
#include "./Cargo/Cargo.h"
#include "./Cargo/Container.h"
#include "./Cargo/ContainerItems.h"
#include "./Cargo/Starlink.h"
#include "./Cargo/Satellite.h"
#include "./Cargo/Observer.h"
#include "./Cargo/ArrivalObserver.h"

int main()
{
    // Rocket* rocket = new Rocket();

    //Rocket variables

    //Spacecraft variables
    int sc = 0; //Crew or Dragon
    int numPeople = 0; //For crew only
    int sat_type = 0; //For Dragon only
    int weight = 0;

    //Engine variables


    cout << "What spacecraft? \n0-crew\n1-dragon\n" << endl;
    cin >> sc;
    cout << "What weight?"<< endl;
    cin >> weight;

    if(sc == 0) //Crew
    {
        cout << "num people?" << endl;
        cin >> numPeople;
        // rocket->BuildSpaceCraft("crew", weight, numPeople);
    }
    else //Dragon
    {
        cout << "Satellite type?\n0-starlink\n1-satellite\n" << endl;
        cin >> sat_type;
        if(sat_type == 0) //Starlink
        {
            // rocket->BuildSpaceCraft("dragon", weight, "starlink");
        }
        else //Single satellite
        {
            // rocket->BuildSpaceCraft("dragon", weight, "satellite");
        }
    }





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
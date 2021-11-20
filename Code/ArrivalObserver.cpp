/**Concrete Observer**/

#include "ArrivalObserver.h"
#include "ContainerItems.h"
#include "Satellite.h"
#include <iostream>

using namespace std;

ArrivalObserver::ArrivalObserver(ContainerItems *inCont)
{
    this->cont = inCont;
    this->arrived = false;
}

void ArrivalObserver::update()
{
    if(this->cont->hasArrived()) //Satellite has arrived
    {
        this->arrived = true;
    }
    else //Hasn't arrived
    {
        this->arrived = false;
    }
}

void ArrivalObserver::print()
{
    if(this->arrived) //The satellite has arrived
    {
        cout << "The Satellite has arrived to its desired orbit." << endl;
    }
    else //The satellite hasn't arrived yet
    {
        cout << "The satellite hasn't arrived at it's desired orbit yet." << endl;
    }
}